#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
 
char *hash(char *input) {
  const long N = 189011;
  char *result = new char[11];
  int ii;
  for (ii=0; ii<strlen(input); ii++) {
    result[ii] = ((input[ii]-27)%N)%26 + 65;
  }
  result[ii]=0;
  return result;
}
 
 
int main() {
  bool result = false;
  char user[11], pass[11];
  cout << "TWikiName: "; cin >> user;
  cout << "Password: "; cin >> pass;
  if (strcmp(hash(pass),"WLM")==0) result = true;
 
  if (result) {
    printf("Answer A: [15 points] first output line of:\n");
    printf("http://algorithmics.bu.edu\nGET /lab/%s HTTP/1.0\n\n",
                hash(user));
  }
  else
    cout << "Wrong password; hash was " << hash(pass) << endl;
}
