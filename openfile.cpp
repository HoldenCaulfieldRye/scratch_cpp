#include<iostream>
#include<fstream>

using namespace std;

int main() {

  ifstream file;

  file.open("thing");

  if (file.fail()) {
    cout << "yep well spotted" << endl;
  }

  else cout << "you suck" << endl;

  file.close();

  return 0;
}
