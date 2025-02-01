// https://www.codewars.com/kata/56676e8fabd2d1ff3000000c/train/cpp
#include <vector>
#include <string>
using namespace std;

string findNeedle(const vector<string>& haystack){
  for (int i = 0; i < haystack.size(); i++){
    if (haystack[i] == "needle"){
      return "found the needle at position " + to_string(i);
    }
  }
}