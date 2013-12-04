#include<iostream>

using namespace std;

/*setup1: pointers instead of objects in both classes*/
class A;

class B {
private:
  A* fieldOfB;
public:
  B(A* _fieldOfB) {
    fieldOfB = _fieldOfB;
  }
};

class A {
private: 
  B* fieldOfA;
public:
  A(B* _fieldOfA) {
    fieldOfA = _fieldOfA;
  }
};
/*end of setup1*/

/*setup2: pointers in both classes, using 'this' && an empty constructor*/
class AA;

class BB {
private:
  AA* fieldOfBB;
public:
  BB(AA* _fieldOfBB) {
    fieldOfBB = _fieldOfBB;
  }
};

class AA {
private: 
  BB fieldOfAA;
public:
  AA() : fieldOfAA(this) {
  }
};
/*end of setup2*/

// /*setup3: using 'this', pointer in defined-in-one-go class only*/
// class AAA;

// class BBB {
// private:
//   AAA* fieldOfBBB;
// public:
//   BBB(AAA* _fieldOfBBB) {
//     fieldOfBBB = _fieldOfBBB;
//   }
// };

// class AAA {
// private: 
//   BBB fieldOfAAA(this);
// public:
//   AAA() {
//     fieldOfAAA(this);
//   }
// };
// /*end of setup3*/



int main() {

  return 0;
}
