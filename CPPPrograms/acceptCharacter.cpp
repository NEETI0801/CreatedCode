/*  loop
 Write a program to accept a character ,an integer n and display the next n character.
*/
#include<iostream>
using namespace std;

int main()
{
char character;
int number,i;
cout<<"Enter a character:"<<endl;
cin>>character;
cout<<"Enter an integer value :"<<endl;
cin>>number;
for(i=1;i<=number;i++)
{
	character=character+1;
	if(character=='z'||character=='Z')
	cout<<"reached at last"<<endl;
	else
	cout<<character<<"\n";
}
return 0;
	
}
