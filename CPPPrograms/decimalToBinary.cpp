/*1-D Array
Write a program to accept a decimal number and convert it to binary.
*/
#include <iostream>  
using namespace std;   
int main()  
{  
int arr[10], no, in;    
cout<<"Enter the number to convert: ";    
cin>>no;    
for(in=0; no>0; in++)    
  {    
arr[in]=no%2;    
no= no/2;  
  }    
cout<<"Binary of the given number : ";    
for(in=in-1 ;in>=0 ;in--)    
  {    
cout<<arr[in];    
  }    
}  
