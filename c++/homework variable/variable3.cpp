//find the sum of even postioned digits and odd positioned digit separately;
//inputs are 11 2 7 9 12 -8 3 -1
//outputs :2 33
// lets check
#include<iostream>
using namespace std;
int main()
{
    int even1,even2,even3,even4;
    int odd1,odd2,odd3,odd4;
    cin>>odd1>>even1>>odd2>>even2>>odd3>>even3>>odd4>>even4;
    int even_sum = even1+even2+even3+even4;
    int odd_sum = odd1+odd2+odd3+odd4;
    cout<< even_sum<<"\n"<<odd_sum<<"\n";
    return 0;
}
