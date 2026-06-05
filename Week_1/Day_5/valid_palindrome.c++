#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(remove_if(s.begin(), s.end(),
                  [](char c){ return !isalnum(c); }),
        s.end());
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
           
            else if(left<right){
                left++;
                right--;
            }
        }
        return true;
    }
};