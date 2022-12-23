#include<iostream>
using namespace std;
int main(){
    int a,b,c,temp;
    cin>>a>>b>>c;
    if(b<a){
        temp=a;
        a=b;
        b=temp;
    }
    if(c<b){
        temp=b;
        b=c;
        c=temp;
    
     if(b<a){
        temp=a;
        a=b;
        b=temp;
    }
    }
    cout<<a<<""<<b<<""<<c<<"\n";
    return 0;
}