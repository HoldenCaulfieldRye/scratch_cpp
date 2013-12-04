#include<iostream>
#include<string>

using namespace std;


/*NOTE: these function contain elegant one-liners. use the one-liners in your code*/

/*concat a char and a char into a string*/
string charchar(char ch1, char ch2) {
  string st;
  st = ch1;
  st += ch2;
  cout << "concat a char and a char into a string: " << st << endl;
  return st;
}

/*concat a char then a string into a string*/
string charstring(char ch, string stri) {
  string st;
  st = ch + stri;
  cout << "concat a char then a string into a string: " << st << endl;
  return st;
}

/*concat a string then a char into a string*/
string stringchar(string stri, char ch) {
  stri += ch;
  cout << "concat a string then a char into a string: " << stri << endl;
  return stri;
}

/*concat a string and a string into a string*/
string stringstring(string stri1, string stri2) {
  string st;
  st = stri1 + stri2;
  cout << "concat a string and a string into a string: " << st << endl;
  return st;
}

/*still need to figure out with const...*/



int main() {
  string st;
  char ch;

  /*PART ONE: test functions*/
  st = charchar('a', 'b');
  st = charstring('c', "ello");
  st = stringchar("goodby", 'e');
  st = stringstring("see you ", "next time");


  /*PART TWO: charithmetic*/
  ch = 'a' + 'd';
  cout << 'a' << " + " << 'd' << " = " << 'a' + 'd' << endl;
  cout << ch << endl;

  if (ch <= 'g' && ch >= 'a') 
    cout << "yes, can use <= and >= with chars" << endl;

  if ('a' + 2 == 'c')
  cout << "yes, you can add an int to a char to move up/down the alphabet" << endl;

  st = ch + string(" yes that's good"); //string() only works on const char*, so wouldn't work if "yes thats good" were replaced with eg st[1]
  cout << st << endl;

  char p, q;
  p = q = 'c';

  cout << p << " " << q << endl;

  return 0;
}
