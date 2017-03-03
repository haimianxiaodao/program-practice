/**************************
Given an array of integers, every element appears twice except for one. Find that single one.

Note: 
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? 

**************************/

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
            if(coun.count(nums[j])==1)
            break;
        }
        return nums[j];

    }
};
//测试程序
int main()
{
    int array[]={1,2,3,4,5,4,3,2,1};
    Solution c;
    vector<int > ve(array,array+9);
    int resu;
    resu=c.singleNumber(ve);
    cout<<resu<<endl;
    return 0;
}
