/*
Problem Statement:
There are three types of edits that can be performed on strings:
insert a character, remove a character, or replace a character.
Given two strings, write a function to check if they are one edit (or zero edits) away.
Example:
pale, ple -> true
pales, pale -> true
pale, bale -> true
pale, bae -> false
*/

#include<iostream>
#include<string>

bool isOneAway(string s1, string s2)
{
  int len_dif = abs(s1.size() - s2.size());
  int i = 0, j = 0;
  if(len_dif>1)  
    return false;
  bool found_dif = false;
  while (i<s1.size()&&j<s2.size())
  {
    if(s1[i]!=s2[j])
    {
      if(found_dif) return false;
      found_dif = true;
      if(s1.size() > s2.size())
        i++;
       else if(s1.size() < s2.size())
        j++;
      else 
            {
                i++;j++;
            }
    }
    else
    {
                i++;j++;
    }  
  }
  if(len_dif == 0 && found_dif == false) return false;
  return true;
}
