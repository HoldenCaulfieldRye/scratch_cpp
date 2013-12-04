#include<iostream>
#include<fstream>

using namespace std;

int main() {
  int i; 
  ifstream a;
  a.open("    ab cde    fg  hijk   lmn   op  ");
  char array[20], arra[20];

  for (i=0, a >> ws, a >> array[i];
       !a.eof();
       i++, a >> ws, a >> array[i]);
  array[i]='\0';

  a.close();
  a.open("    ab cde    fg  hijk   lmn   op  ");

  for (i=0, a >> ws;
       !a.eof();
       i++, a >> ws) {
    a >> arra[i] ;
  }
  arra[i]='\0';
  cout << array[0] << endl << arra[0] << endl;

  return 0;
}
