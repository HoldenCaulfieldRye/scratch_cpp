#include<iostream>
#include<sys/stat.h>

using namespace std;

int main(int argc, char **argv) {
  int opened_successfully;
  struct stat info;

  opened_successfully = stat(argv[1], &info);

  if (opened_successfully != 0) {
    cout << "pathname does not exist" << endl;
    return 1;
  }

  if (S_ISREG (info.st_mode)) {
    cout << "yep, this is a good file" << endl;
  }

  if (!S_ISREG(info.st_mode)) {
    cout << "pathname does not point to a regular file" << endl;
  }

  if (S_ISDIR (info.st_mode)) {
    cout << "careful, you've specified a directory" << endl;
  }

  return 0;
}
