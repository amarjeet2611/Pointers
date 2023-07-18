#include<iostream>
using namespace std;
int main(){
int arr[10]={3,2,2,3,4};
cout<<"Address of 1st memory block is : "<<arr<<endl;
cout<<"adress of 1st memory location by pointer: "<<&arr[0]<<endl;


cout<<"4th: "<<*arr<<endl;
cout<<"5th: "<<*arr+1<<endl;
cout<<"6th: "<<*(arr+1)<<endl;
cout<<"7th: "<<*(arr)+1<<endl;
cout<<"8th: "<<arr[2]<<endl;

int i=3;
cout<<i[arr]<<endl;


return 0;



}
