/*1-D array
Write a program to accept an array of n elements and a number say key.check whether the key is present in array or not.
*/
#include<iostream>
using namespace std;
int main()
{
int key,arr[20],in,num,counter=0;
cout<<"Enter array size: "<<endl;
cin>>num ;
cout<<"Enter the elemnts of array :"<<endl;

for(in=0;in<num;in++)
{
cin>>arr[in];
}

cout<<"Enter the value of key: "<<endl;
cin>>key;
for(in=0;in<num;in++)
{
if (arr[in]==key)
    counter=1;
    break;
}
    if(counter=1)
  
    cout<<key<<" is present in the array."<<endl;	
    else
    cout<<key<<" is not present in the array."<<endl;

return 0;
}
