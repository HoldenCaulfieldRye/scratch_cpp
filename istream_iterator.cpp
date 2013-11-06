#include<iostream>
#include<string>
#include<sstream>
#include<iterator>

using namespace std;

int main() {
  string str = "1 2 34 423 a b c d e f * & ^ % $";
  int temp=0, a[500];
  istringstream iss(str);                 //creating an istream object of str
  istream_iterator<int> begin(iss), end;  //creating begin, an istream iterator linked to iss i.e. str
                                          //also creating end, not associated to any istream
  for (; begin != end && temp<30; ++begin, temp++) {
    a[temp] = *begin;
  }

  for (int i =0; i<15; i++)
    cout << a[i] << endl;
}
