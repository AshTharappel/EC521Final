#include <iostream>
#include <cstring>
 
using namespace std;
 
int main(int argc, char **argv) {
  char str[10];
  strcpy(str,argv[1]);
  cout << str << endl;
  return 0;
}
