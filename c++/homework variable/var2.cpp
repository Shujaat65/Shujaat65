//swapping of two numbers::::
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
      cin>>num1>>num2;
      cout<<"\nnum1 is:"<<num1;
      cout<<"\nnum2 is :"<<num2;
      num3=num2;
      num2=num1;
      num1=num3;
      cout<<"\nnow num1 is:"<<num1;
      cout<<"\nnow num2 is:"<<num2;
      return 0;

}