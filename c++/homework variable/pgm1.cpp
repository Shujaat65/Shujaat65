// swapping of three numbers
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,temp;
    cin>>num1>>num2>>num3;
    cout<<"\nnum1 is :"<<num1<<"\nnum2 is:"<<num2<<"\nnum3 is:"<<num3;
    temp=num1;
    num1=num2;
    num2=num3;
    num3=temp;
    cout<<"\nnum1 now is:"<<num1<<"\num2 now is:"<<num2<<"\num3 now is:"<<num3;
    return 0;
    
}