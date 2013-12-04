#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
  string *array, st1 = "hello ", st2 = "little ", st3 = "lady";
  array = new string;
  array[0] = st1;
  array = new string[2];
  array[1] = st2;
  // array[5] = st3;

  cout << array[0] << " " << array[1] << /*" " << array[2] <<*/ endl;


  //////////////////////////


  vector<string> vec;
  vector<string>::iterator it;

  vec.insert(vec.begin(), st1);
  vec.insert(vec.end(), st2);
  vec.insert(vec.end(), st3);
  
  for(it=vec.begin(); it!=vec.end(); it++)
    cout << *it;
  cout << endl;

  return 0;
}
