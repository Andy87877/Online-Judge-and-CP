// https://www.codewars.com/kata/53dc23c68a0c93699800041d/train/cpp
#include <vector>
#include <string>
using namespace std;

string smash(const vector<string>& words){
  if (words.size() == 0) return "";
  string answer = "";
  
  for (auto Add_str: words){
    answer += (Add_str + " ");
  }
  
  answer.pop_back();
  
  return answer;
}