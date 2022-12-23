// write a program that reads 2 students information abt maths exam
#include<iostream>
using namespace std;
int main()
{
 string name1;
 cout<<"what is the student 1 name:";
cin>>name1;
    double grade1;
cout<<"his math exam grade:";
 cin>>grade1;
    string id1;
    cout<<"his id:";
    cin>>id1;
    string name2;
    cout<<"wht is studnt 2 name:";
    cin>>name2;
    string id2;
    cout<<"his id";
    cin>>id2;
double grade2;
cout<<"his maths grade:";
cin>>grade2;
cout<<"\n students grDES IN MAths:::::::\n\n\n\n";
cout<<name1<<"(with id"<<id1<<")got grade:"<<grade1<<"\n";
cout<<name2<<"(with id"<<id2<<")got grade:"<<grade2<<"\n";
cout<<"average grade is "<<(grade1+grade2)/2.0<<"\n;";
return 0;
}

