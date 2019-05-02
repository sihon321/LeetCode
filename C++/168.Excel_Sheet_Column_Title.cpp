#include <iostream>
#include <string>

using namespace std;

string convertToTitle(int n) {
  string ret;
  string revRet;
  
  while (n > 0) {
    n -= 1;
    char alphabet = (n % 26) + 65;
    n /= 26;
    ret = alphabet + ret;
  }

  return ret;
}

int main(int argc, const char * argv[]) {
  // insert code here...
  
  cout << convertToTitle("ZY") << endl;

  return 0;
}
