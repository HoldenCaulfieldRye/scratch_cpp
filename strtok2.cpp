/* strtok example */
#include <iostream>
#include <cstring>

using namespace std;

void pnt(char *str) {
  for (int i=0; str[i]!='\0'; i++) {
    cout << str[i];
  }
}

int main ()
{
  char str[] ="- This, a sample string.";
  char **ppch;
  int i=0;

  cout << "Splitting '";
  pnt(str); 
  cout << "' into tokens:\n";

  ppch = new char*;
  ppch[0] = strtok(str," ,.-");

  while (ppch[i] != NULL) {
    pnt(ppch[i]);
    i++;
    ppch[i] = strtok(NULL, " ,.-");
  }

  cout << endl;

  return 0;
}
