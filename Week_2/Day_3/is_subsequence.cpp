#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
       int i=0;
       int j=0;
       while(j<t.length()){
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
       }
        return(i==s.length());
    }
};