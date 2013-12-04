#include<iostream>
using namespace std;

int main() {
  int array[26] = {0, 9, 3, 10, 18, 8, 17, 20, 23, 1, 11, 7, 22, 19, 12, 2, 16, 6, 25, 13, 15, 24, 5, 21, 14, 4};

  for (int i=0; i<26; i++)
    cout << "rotpos " << i << ", scramble(25) = " << (array[(25 + i) % 26] + 26 - i) % 26 << endl;

  for (int i=0; i<26; i++)
    cout << "rotpos 19, scramble("<<i<<") = " << (array[(i + 19) % 26] + 26 - 19) % 26 << endl;  


  return 0;
}
