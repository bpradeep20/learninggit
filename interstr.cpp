/* Question : Given three strings A, B, C
 * Check whether C is interleaving of A and B.
 * Solution: First check length of A + length of B should be equal to C
 * Take three indices i,j,k and start scanning s3 s2 and s1 from back 
 * if s3[i]=s1[j] then increase j and i
 * else if s3[i]=s2[k] then increase k and i
 * else print not interleaving.
*/

#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;
//O(n)
int main(int argc, char *argv[]) {
	string s1,s2,s3;
	s1="";
	s2="";
	s3="";
	
	cout<<"Enter String 1: ";
	cin>>s1;
	cout<<"Enter string 2: ";
	cin>>s2;
	cout<<"Enter string for checking: ";
	cin>>s3;
	
	int l1,l2,l3;
	l1=s1.length();
	l2=s2.length();
	l3=s3.length();

	int i,j,k;
	
	if(l1+l2!=l3)
	{
		cout<<"Not Inteleaving\n";
		return -1;
	}
	j=l1-1;
	k=l2-1;
	for(i=l3-1;i>=0;i--)
	{
		if(j>=0){
			if(s3[i]==s1[j])
			{
				j--;
			}
			else {
				if(k>=0){
					if(s3[i]==s2[k]) {
						k--;
					}
					else
					{
						cout<<"Not Inteleaving\n";
						return -1;
					}
					
				}
				else
			{
				cout<<"Not Inteleaving\n";
				return -1;
			}
			}
			
		}
		else
		{
			if(k>=0){

					if(s3[i]==s2[k]) {
						k--;
					}
					else
					{
						cout<<"Not Inteleaving\n";
						return -1;
					}
				
			}
			else
			{
				cout<<"Not Inteleaving\n";
				return -1;
			}
		}
		
	}
	cout<<"Interleaving.\n";
	

	
	return 0;
}
