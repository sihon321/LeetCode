#include <iostream>
#include <string>

using namespace std;

int titleToNumber(string s) {
  int n = 0;
  int len = s.length();
  
  for (int i = 0; i < len; ++i) {
    n *= 26;
    n += s[i] - 64;
  }
  
  return n;
}

int main(int argc, const char * argv[]) {
  // insert code here...
  
  cout << titleToNumber("ZY") << endl;
  
  return 0;
}

