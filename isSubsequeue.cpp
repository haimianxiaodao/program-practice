/*******************
If there are lots of incoming S, say S1, S2, … , Sk where k >= 1B, 
and you want to check one by one to see if T has its subsequence. 
In this scenario, how would you change your code?

*********************/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int coun=s.size();
        int posi=-1;
        int i=0;
        char* str = new char[2];
        str[1] = '\0';
        while(i<coun)
        {
            str[0] = s[i];
            size_t pos=t.find_first_of(str,posi+1,1);
            if(pos==string::npos)
            {
                return false;
            }
            posi=pos;
            i++;
        }
        return true;
    }
};

/**********************************
这个是在对上一道题好好消化之后自己完成的哦，而且一次提交AC（accept），开心三秒钟。 
下面开始划重点： 
1、string上的find操作有很多，这道题目用到的三个参数的意思是（假定三个参数从左到
右分别是a，b，c）从字符串t的第b个位置以c为单位逐个匹配*字符串**a，所以第一个参
数是字符串类型哦，开始时想破头皮不知道怎么把s[i]当做字符串传进去，在请教了大神之
后，char str = new char[2]横空出世（虽然我到现在这个地方还是有点点不太清楚，不
过很好的帮我解决了问题）。 
2、动态规划的思想上一篇已经总结过了，那这道题上的最优子结构该怎么描述呢？（我试一
下）在t串中寻找s串中的第i个字母，找到之后，从找到的位置后面接着寻找s串中的第（i+1）
个字母，如果没有找到的话，就证明t串后面的字母中都不存在你要找的s[i]了，终止返回
false即可。所以这个地方我认为用到了动态规划的地方就是posi=pos;，起到了记录中间结
果的作用，使得查找不必每次都从头开始，而且不会乱啊，是吧！ 好开心，好紧张。开心我
又做出来了一道题（而且是传说中的模式匹配）~
**********************************/
