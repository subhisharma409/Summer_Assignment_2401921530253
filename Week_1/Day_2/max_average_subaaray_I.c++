#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxSum=0;
        for(int i=0;i<k;i++){
            maxSum+=nums[i];
        }
        int maxAvg=maxSum;
        
        
        for(int i=k;i<nums.size();i++){
            maxSum+=nums[i];
            maxSum-=nums[i-k];
            maxAvg=max(maxAvg,maxSum);
        }
        return (double)maxAvg/k;
       
    }
};