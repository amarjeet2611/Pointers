#include<iostream>
using namespace std;
int main(){
int num=5;
int *ptr=&num;
//value of num without pointers
cout<<num<<endl;

//address of operator -&

cout<<"Address of num is: "<<&num<<endl;

//value of num using pointers
cout<<"Value of num using pointers is: "<<*ptr<<endl;

//address of num using pointers
cout<<"Address of num using pointers is: "<<ptr<<endl;
}