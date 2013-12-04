/*this program is to figure out, given that stdin and stdout have been redirected to files via command line arguments, how to get sterr to send to console */

#include<iostream>

using namespace std;

int main() {

  //command line argument: ./cerr > cerr_cpp_stdout.txt

  cout << "standard out" <<endl;

  cerr << "standard error" << endl;

  return 0;
}
