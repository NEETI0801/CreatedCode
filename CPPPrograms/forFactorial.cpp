/*loop
Write a program to calculate factorial of a number.
*/
#include<iostream>
using namespace std;

int main()
{
	int num,fact=1,in;
	cout<<"Enter a number to calculate factorial:"<<endl;
	cin>>num;
	for(in=1;in<=num;in++)
	{
		fact=fact*in;
	}
	cout<<"factorial of "<<num<<" is :"<<fact<<endl;
	return 0;
}
