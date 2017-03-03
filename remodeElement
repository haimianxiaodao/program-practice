/*********************
Given an array and a value, remove all instances of that value in place and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

The order of elements can be changed. It doesn’t matter what you leave beyond the new length.

Example: 
Given input array nums = [3,2,2,3], val = 3

Your function should return length = 2, with the first two elements of nums being 2. 
*********************/
class Solution
{
public:
    int removeElement(vector& nums, int val)
    {
        int counts=0;
        if(nums.empty())
            return 0;
        for(vector::iterator intel=(–nums.end()); intel>=nums.begin(); intel–)
        {
            if(*intel==val )
            {
                nums.erase(intel);
            }
            else
            {
                counts++;
            }
        }
        return counts;
    }
};
