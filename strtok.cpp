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
  char *smallStr;

  cout << "Splitting '";
  pnt(str); 
  cout << "' into tokens:\n";

  smallStr = strtok(str," ,.-");

  while (smallStr != NULL) {
    pnt(smallStr);
    smallStr = strtok(NULL, " ,.-");
  }

  cout << endl;

  return 0;
}

/*that's nice, but WHY does strtok take
str, and later NULL as argument? */
