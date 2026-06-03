#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
       int left=0;
       int maxwater=0;
       
       int right=height.size()-1;
       while(left<right){
        int water=min(height[left],height[right])*(right-left);
        
        if(height[left]<height[right]){
            
            left++;    
        }
        else{
            right--;
        }
        maxwater=max(water,maxwater);
        
       }
       return maxwater;
    }
};