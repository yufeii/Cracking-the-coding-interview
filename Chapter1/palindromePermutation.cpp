/*
Problem Statement :
Given a string, write a function to check if it is a permutation of a palindrome. A palindrome is a word or
phrase that is the same forwards and backwards. A permutation is a rearrangement of letters.The palindrome does
not need to be limited to just dictionary words.
Example :
	"tact coa"->true(permutations : "tacocat", "atcocta", etc.)
*/

#include<bitset>
using namespace std;

bool isPermutationOfPallindrome1( string str )
{
     bitset<128> alpha;
     int count = 0;
     for(char c : str)
     {
	 if(0<=c&&c<128&&c!=' ')
	 {
	 	count++;
	 	alpha.flip(c);
	 }
     }
     if(count%2==0&&alpha.count()==0) return true;
     else if (count%2!=0&&alpha.count()==1)
     	return true;
     else
     	return false; 
}
