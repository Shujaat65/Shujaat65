// here assume  a year is 12 months but each month is 30 days only so a year has 360days,,,
//print three numbers total years ,total months, remaining days????
#include<iostream>
using namespace std;
int main()
{
    int days;
    cin>>days;
    int years =days/360;
    days = days%360;
    int months =days/30;
    days = days%30;
    cout<<years <<""<<months<<".."<<days<<"...\n";
    return 0;
}
