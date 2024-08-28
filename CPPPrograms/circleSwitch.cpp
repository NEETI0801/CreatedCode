/*switch case
 Accept radius from user and write a program having menu with the following options:
    1.Area of circle.
    2.Circumference of circle.
    3.Volume of sphere.
*/
#include<iostream>
using namespace std;
#define pi 3.14

int main()
{
	int radius,choice;
	float area,circumference,volume;
	cout<<"1.Area of Circle  2. Circumference of circle  3. volume of sphere"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		cout<<"Enter the radius of the circle:"<<endl;
		cin>>radius;
		area=pi*radius*radius;
		cout<<"The area of circle is:"<<area<<endl;
		break;
		
		case 2:
		cout<<"Enter the radius of the circle: "<<endl;
		cin>>radius;
		circumference=2*pi*radius;
		cout<<"circumference of circle is: "<<circumference<<endl;
		break;
		
		case 3:
			cout<<"Enter the radius of sphere: "<<endl;
			cin>>radius;
			volume=4/3*pi*radius*radius*radius;
			cout<<"The volume of sphere is:"<<volume<<endl;
			break;
			
		default:
		cout<<"Invalid Input"<<endl;
		 break;	
		
	}
	return 0;
}
