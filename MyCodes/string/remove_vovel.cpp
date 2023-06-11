// Write a c++ program to remove vowels from a given string.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	// initializing variable
	string str;
  string str1="";

	// accepting input
	cout << "Enter a string : "; 
  getline(cin,str);
	
	int len = str.length();

	// iterating the string
	for(int i=0; i<len; i++)
	{   
	    // checking vowels.
		if(!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
		||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
		{

		    // deleting vowels by shifting left all upcoming characters left 
			/*for(int j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		i--;
		len--;
		} */

      // new method
     str1.push_back(str[i]);
      }
	}
	// can directly print str
	// as '\0' also shifted left as many times as vowels were found
	cout << "After removing Vowels: " << str1;

    return 0;	
}