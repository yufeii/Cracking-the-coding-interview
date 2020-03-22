/*
6 Implement a method to perform basic string compression.
  Example string aabcccccaaa should be compressed to a2b1c5a3,
  however if compressed string is bigger than original string, return original string
*/

#include<iostream>
#include<string>
using namespace std;

string compress(string str)
{
    int len = str.size();
    string res;
    if(len<2) return str;
    int i = 0, j = 1;
    int count = 1;
    while(i<len&&j<len)
    {
      while(str[i] == str[j] && j<len)
      {
        count++;
        j++;
      }
      res += str[i];
      res += to_string(count);
      i = j;
      j = i+1;
      count = 1;
      if(res.size()>len) return str;
    }
     res += str[len-1];
     res += to_string(count);
     if(res.size()>len) return str;
  return res;
}
