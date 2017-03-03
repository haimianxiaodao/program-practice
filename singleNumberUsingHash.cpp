/*************************
Given an array of integers, every element appears three times except for one. Find that single one.

Note: 
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*************************/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
           multimap<int,int> coun;
        for(int i=0;i<nums.size();i++)
        {
            coun.insert({nums[i],i});
        }
        int j=0;
        for(;j<nums.size();j++)
        {
            if(coun.count(nums[j])!=3)
            break;
        }
        return nums[j];
    }

}
