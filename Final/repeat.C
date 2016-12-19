#include <iostream>
#include <cstdlib>
#include <cstdio>
 
void repeat(int num, char *str) {
  for (int ii=0; ii<num; ii++)
    printf(str);
}
 
int main(int argc, char *argv[]) {
  int num1 = atoi(argv[1]);
  repeat(num1,argv[2]);
}
