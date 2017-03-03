class Solution 
{ 
public: 
int firstUniqChar(string s) 
{ 
if(s.size()==0) 
return -1;

    vector<char> zimu;
    for(int i=0;i<26;i++)
    {
        zimu.push_back(i+'a');
    }
    int finds=0;
    vector<int > temp(26,-1);
    vector<int > temp1(26,-1);
    for(int i=0;i<26;i++)
    {
        finds=s.find_first_of(zimu[i]);
        if(finds==-1) continue;
        if(finds!=s.find_last_of(zimu[i])) continue;
        if(finds==s.find_last_of(zimu[i]))
        temp.push_back(finds);

    }


    if(temp==temp1)
        return -1;
    int k=100000000000000000;
    for(int i=0;i<temp.size();i++)
        {
            //cout<<"*******************"<<endl;
            //cout<<temp[i]<<"   "<<endl;
            if(temp[i]==-1) continue;
            if(temp[i]<k)
                k=temp[i];
                //cout<<"k= "<<k <<"   "<<endl;

        }
        if(k<0)
            return -1;
        return k;
}
};
