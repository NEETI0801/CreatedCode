/* loop
Write a program to calculate factors of given program
*/
#include<iostream>
using namespace std;

int main()
{
int num,in;
cout<<"Enter a number:"<<endl;
cin>>num;
for(in=1;in<=num;in++)
{
	if(num%in==0)
        cout<<in<<endl;	
}
return 0;
}
