#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int i=nums.size()-1;
        vector<int> ans(nums.size());
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[i]=nums[left]*nums[left];
                left++;
                i--;
            }
            else{
                ans[i]=nums[right]*nums[right];
                right--;
                i--;
            }
        }
        return ans;
    }
};