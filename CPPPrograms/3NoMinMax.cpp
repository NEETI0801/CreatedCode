/*if-else
8. Write a program to accept three numbers and compute minimum and maximum from them.
*/
#include<iostream>
using namespace std;

int main26()
{
	int num1,num2,num3,min,max;
	cout<<"Enter three number:"<<endl;
	cin>>num1>>num2>>num3;

	if(num1>num2 && num1>num3)
	cout<<num1<<" is greater than "<<num2<<" and "<<num3<<endl;
	
	if(num2>num1 && num2>num3)
	cout<<num2<<" is greater than "<<num1<<" and "<<num3<<endl;
	
	if(num3>num1 && num3>num2)
	cout<<num3<<" is greater than "<<num1<<" and "<<num2<<endl;
   
    if( num2<num3 && num2<num1)
	cout<<num2<<" is minimum number"<<endl;
	else if(num1<num2 && num1<num3)
	    cout<<num1<<" is minimum. "<<endl;
	    else
	    cout<<num3<<"is minimum. "<<endl;
	
	
	return 0;
}



