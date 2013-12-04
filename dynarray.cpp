#include<iostream>
#include<cassert>
using namespace std;

int main() {
  int *p = new int;
  string **s = new string*;
  string *strp = new string;

  *p = 4;
  assert(p[0] == 4);
  p[12] = 5;
  cout << "p[12] = " << p[12] << endl; //don't need to new up to p[12]!

  strp[0] = "caca";
  strp = new string[2];
  strp[1] = "pipi";
  cout << endl << strp[1] << endl;

  s[0] = new string;
  //s[0] = "hello";
  s[1] = new string;
  //s[1]  = "yes";
  s[2] = new string;
  //s[2] = "bye";
}
