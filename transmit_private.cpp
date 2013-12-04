/*this program considers the situtation in which we want to transfer a piece of information from an instance of a class to an instance of another class, and this piece of information is stored in a field. Can both fields be private? Can a class method (transmitting the data) access private fields of another class?*/

/*CONCLUSION: if both are private, need both a public "show field" method in sending class and a public "set field" method in receiving class*/

#include<iostream>

using namespace std;

// class One {
// private:
//   int field;   // we get error: ‘int One::field’ is private
// };

// class One {
// protected:
//   int field;   // we get error: ‘int One::field’ is protected
// };

class One {
public:
  int field;
};

class Two {
private:
  int carry;

public:
  Two(int value) {
    carry = value;
  }

  void transfer_to(One &object) { //CALL BY REF REALLY IMPORTANT!
    object.field = carry;
  }

  void print() {
    cout << carry << endl;
  }
};

int main() {

  One object;
  Two item(0);
  item.transfer_to(object);

  item.print();
  cout << object.field << endl;

  return 0;
}

