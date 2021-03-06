/******************
Given an array of integers and an integer k, 
find out whether there are two distinct indices i and j 
in the array such that nums[i] = nums[j] and the difference 
between i and j is at most k. 
*******************/ 
class Solution { 
public: 
bool containsNearbyDuplicate(vector& nums, int k) {

     unordered_map <int,int> coun;
    for(int i=0; i<nums.size(); i++)
    {
        if (coun[nums[i]])
        {
            if( i + 1 - coun[nums[i]] <= k) return true;
            else coun[nums[i]] = i + 1;
        }
        else coun[nums[i]] = i + 1;
    }
    return false;

}
};
