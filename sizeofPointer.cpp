#include<iostream>
using namespace std;
int main(){
int num=5;
int *ptr=&num;
cout<<"size of integer is : "<<sizeof(num)<<endl;
cout<<"size of  pointer is: "<<sizeof(ptr)<<endl;
}