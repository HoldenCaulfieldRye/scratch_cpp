#include<iostream>

using namespace std;

class Thing {
public:
  Thing(int a, int b, int c) {
    cout << a << b << c << endl;
  }
};

class Int {
public:
  int field;
  Int(int a) {
    field = a;
  }
};


/*objective: create dynamic array of objects with constructor that has non empty parameter list*/
int main() {

  int array_length = 5;

  //Thing *array = new Thing; //can't do this because implies exists Thing()

  Thing *array = new Thing(1,2,7); //compiler needs call to a constructor that exists, but it doesn't
                                   //run it! indeed, nothing is cout-ed

  array[0];  //this is valid! but you get warnings, and still nothing is cout-ed

  //array[0] = (5,6,3); //error: no match for 'operator=' in '* array = (0, 3)'


  /*this solution comes from http://stackoverflow.com/questions/8462895/how-to-dynamically-declare-an-array-of-objects-with-a-constructor-in-c*/

  Int **arr;
  arr = new Int *[array_length];
  for (int i=0; i< array_length; i++) {
    arr[0] = new Int(i);
    cout << arr[0]->field;
  }

  cout << endl << arr[0]->field << endl;

  /* but this might suck because I can't seem to reach the other values */

  return 0;
}
