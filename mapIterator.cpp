#include<map>
#include<string>
#include<iostream>

using namespace std;

class A {
private:
  int field;
public:
  A() {
    field = 0;
  }
  virtual void sayHello() = 0;
};

class B : public A {
public:
  B() : A() {}
  void sayHello() {
    cout << "Hello" << endl;
  }
};

typedef map<int, char>::iterator It1;
typedef map<string, A*>::iterator It2;

int main() {
  map<int, char> map1;
  map1[0] = 'a';

  map<string, A*> map2;
  map2["key1"] = new B;

  It1 it1 = map1.find(0);
  It2 it2 = map2.find("key1");

  It1 it11 = map1.find(1);
  It2 it22 = map2.find("something");

  return 0;
}
