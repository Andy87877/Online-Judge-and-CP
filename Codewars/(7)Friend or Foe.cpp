// https://www.codewars.com/kata/55b42574ff091733d900002f/train/cpp
#include <string>
#include <vector>
using namespace std;


vector<string> friendOrFoe(const vector<string>& input) {
  vector<string> answer;
  
  for (string tmp_str: input){
    if (tmp_str.size() == 4){
      answer.push_back(tmp_str);
    }
  }
  
  return answer;
}
