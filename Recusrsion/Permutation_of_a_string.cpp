#include <iostream>
using namespace std;
class Solution {
    void permutation(vector<int> nums, int i, vector<vector<int>>& ans){
        //base case
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            permutation(nums,i+1,ans);

            //backtrack because we need to go back to the same string so we again swap
            swap(nums[i],nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        permutation(nums,i,ans);
        return ans;
    }
};

//Leet code solution of permutations