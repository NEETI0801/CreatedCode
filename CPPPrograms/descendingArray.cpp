/*1-D Array
Write a program to accept n numbers from the user and store them in an array.then sort the array in descending order and display it.
*/
#include<iostream>
using namespace std;

int main()
{
int no,in,arr[20],max,temp,j; 
cout<<"Enter the size of array: "<<endl;
cin>>no;
cout<<"Enter the elements of array:"<<endl;
for(in=0;in<no;in++)
cin>>arr[in];



for(int in1=0;in1<no;in1++)
 {
 	for(j=in1+1;j<no;j++)
 	{
 		if(arr[in]>arr[j])
 		{
 			temp=arr[in1];
 			arr[in1]=arr[j];
 			arr[j]=temp;
 			
		 }
	 }
 }
 cout<<"The Sorted array is :"<<endl;
 for(in=0;in<n;in++)
 cout<<arr[in]<<endl;
 return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	

