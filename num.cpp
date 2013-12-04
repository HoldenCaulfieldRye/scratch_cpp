#include<iostream>

using namespace std;

int main() {
  int num = 5;
  while (num!=22 && !cin.fail()) {
    cout << "enter a value (22 to stop): ";
    cin >> num;
    cout << "\tnum = " << num << endl;
    if (cin.fail())
      cout << "but non numeric input!" << endl;
  }
  return 0;
}
