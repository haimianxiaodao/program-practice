/***************
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it. 
***************/

class Solution { 
public: 
int addDigits(int num) { 
  int temp; 
  for(;;) { 
    temp=num; 
    num=0; 
    for(;temp>0;temp=temp/10) 
      num=num+temp%10; 
    if(num<10) 
    break; 
  } 
  return num; 
} 
};
