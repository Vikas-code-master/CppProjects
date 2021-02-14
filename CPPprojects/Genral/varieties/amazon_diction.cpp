#include<bits/stdc++.h>
using namespace std ;

bool can_segment_string(string s, unordered_set <string> & dictonary) {
  for (int i = 1; i <= s.length(); i++) {
    string first = s.substr(0, i);
    if (dictonary.find(first) != dictonary.end()) {
      string second = s.substr(i);
      cout<<i<<" "<<second <<"\n";
      if (second.empty() || dictonary.find(second) != dictonary.end() 
      || can_segment_string(second, dictonary)) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  string s = "hellonow";
  unordered_set <string> dictonary = { "hello", "hell", "onn", "now" };
  if (can_segment_string(s, dictonary))
    cout << "String Can be Segmented" << endl;
  else
    cout << endl << "String Can NOT be Segmented" << endl;
  return 0;
}