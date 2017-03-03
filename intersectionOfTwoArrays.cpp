/***************************
Given two arrays, write a function to compute their intersection.

Example: 
Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].

Note: 
Each element in the result must be unique. 
The result can be in any order. 
***************************/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int ,int > couns1;
        map<int ,int > couns2;
        for(int i=0;i<nums1.size();i++)
        {
            couns1.insert({nums1[i],i});
        }
        vector<int> resu;
        for(int i=0;i<nums2.size();i++)
        {
            if(couns1.find(nums2[i])==couns1.end()) continue;
                else
                {
                    if(resu.end()==find(resu.begin(),resu.end(),nums2[i]))
                        resu.push_back(nums2[i]);
                    else continue;
                }
        }
        return resu;
    }
};

//附测试代码
int main()
{
    int array1[]={1,2,3,4,5,4,3,2,1};
    int array2[]={1,2,3,4,5,4,3,2,1};
    Solution c;
    vector<int > ve1(array1,array1+9);
    vector<int > ve2(array2,array2+9);
    vector<int > resu;
    resu=c.intersection(ve1,ve2);
    for(int i=0;i<resu.size();i++)
        cout<<resu[i]<<endl;
    return 0;
}
