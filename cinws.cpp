/*this program tries to figure out why enigma program takes a 2nd letter from input_1.txt which only contains 'A', spaces, new line.*/

#include<iostream>
#include<fstream>

using namespace std;

  bool get_letter_from_input_file()
  {
    cerr << "getting input" << endl;
    int ascii;
    char input;

    /*check that input is a capital letter, new line, carriage return, tab or space*/
    cin >> ws;
    while (!cin.fail()) {
      cin >> input;
      ascii = (int) input;

      if (ascii == 3)
	return false;

      if (ascii>91 || ascii<64) {
	if (ascii!=10 && ascii!=13 && ascii!=9 && ascii!=32) {
	  cout << "error(-13)" << endl;
	  return false;
	}
	//else letter is new line, carriage return, tab or space, so do nothing
      }                         
      else {
	cerr << "letterIndex: " << ascii - 65 << endl;
	return true;
      }
    }
    return false;        //reach here iif file has no more valid letters to give
  }

int main() {

  char input;

  for (cin >> ws, cin >> input; !cin.eof(); cin >> ws, cin >> input) {
    cout << input;
  }
  cout << endl;

  // int i=0;
  // while (!cin.eof()) {
  //   cin >> input; i++;
  //   cin >> ws;
  //   cout << input;
  // }
  // cout << i << endl;


  // i=0;
  // while (!cin.fail()) {  //difference is here
  //   cin >> input; i++;
  //   cin >> ws;
  //   cout << input;
  // }
  // cout << i << endl;


  // i=0;
  // while (!cin.eof()) {
  //   cin >> input; i++;
  //   cout << input;      //difference is here
  // }
  // cout << i << endl;

  // char input;
  // for (cin.get(input); (int) input != 0; cin.get(input)) {
  //   cin >> ws;
  //   cout << input << ", ";
  // }

  // for (cin >> input; (int) input != '.'; cin >> input) {
  //   cout << input << ", ";
  // }

  // while (get_letter_from_input_file());

  return 0;
}
