/*loop
 Accept two numbers and calculate gcd of them.
The greatest common divisor (GCD) of two or more numbers is the greatest common factor number that divides them, exactly. It is also called the highest common factor (HCF). 
*/
#include<iostream>
using namespace std;

int main()
{
int num1,num2,in,gcd;
cout<<"Enter two numbers: "<<endl;
cin>>num1>>num2;
for(in=1;in<=num1 && in<=num2;in++)
{
	if(num1%i==0 && num2%i==0)
	gcd=in;
}
cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd;
return 0;

	
}
