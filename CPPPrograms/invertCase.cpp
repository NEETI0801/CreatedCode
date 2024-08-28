/*if-else
 Write a program to accept a character and invert the case of it.
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
char ch;
cout<<"Enter the character value: "<<endl;
cin>>ch;
if(islower(ch))	
   cout<<"the Uppercase is: "<<toupper(ch)<<endl;
   
else
 cout<<"The lowercase is: "<<tolower(ch)<<endl;
 
 return 0;
}
