#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            int temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
            if(left==right){
                s[left]=s[right];
            }
        }
    }
};