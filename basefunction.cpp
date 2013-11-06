#include<iostream>
using namespace std;

class Thing {
public:
  void print() {
    cout << "thing" << endl;
  }
};


class Something : public Thing {
public:
  void print() {
    cout << "something" << endl;
  }
};


int main() {

  Something two;

two.print(); //error: request for member ‘print’ in ‘two’, which is of non-class type ‘Something()’

two.Thing::print(); //error: request for member ‘Thing::print’ in ‘two’, which is of non-class type ‘Something()’

  return 0;
}
