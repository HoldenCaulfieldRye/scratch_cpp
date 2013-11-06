#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main() {

  char* c = "hello";
  const char* a = "see you";
  string b = "goodbye";

  char *d = new char; 
  for(int i=0; i<6;  i++) {
    d[i] = 'a';
  }
  d[6]=NULL;          //notice we can assign NULL as well as \0 - that's because \0 means NULL
  d[7] = 'Z';

  cout << c << endl;
  cout << b << endl;
  cout << a << endl;
  cout << d << endl;

  /*all of these work, but c works only because assigning it like that automatically converted it to 
    a const char (the compiler will tell you so as a warning
    c[2] = 'f'; would convert c back into a char*, and cout << c; would lead to segfault*/

  /*however, if you give a sentinel value somewhere in d, you can also get cout << d; to work.
    but any values after NULL will not print*/

  cout << c[5] << endl;

  // c[6] = 'q';
  // cout << c << endl;   this leads to segfault; strange, shouldn't it behave like d?

  c = &b[0];          //roundabout way of assigning string to char*
  cout << c << endl;

  return 0;

}
