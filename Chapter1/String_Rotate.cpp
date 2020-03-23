/*
Problem Statement:
Assume you have a method isSubstring() which checks if one word is a substring of
another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using
only one call to isSubstring().
Example:
stringRotation("waterbottle", "erbottlewat")
*/

bool stringRotation(string &s1, string& s2) {
   string s3 = s1+s1;
   return s3.find(s2) != string::npos;
}
