#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
char ch[6]="abcde";


cout<<arr<<endl;
//attention here plz
cout<<ch<<endl;

//prints entire string
char *c=&ch[0];
cout<<c<<endl;

char temp='b';
char *p=&temp;
cout<<p<<endl;

return 0;
}