#include<iostream>

using namespace std;

int main() {
  int *a = new int;
  a[0] = 1;
  a[1] = 2;
  a[2] = '\0';

  char *b = new char;
  b[0] = 'a';
  b[1] = 'b';
  b[2] = '\0';

  cout << b << endl;

  cout << a << " " << &a[0] << endl; //both are same!

  for(int i=0; a[i]!='\0'; i++)
    cout << a[i];
  cout << endl;  //will go into segfault, because '\0' has same binary value as zero
}
