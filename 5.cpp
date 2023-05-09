#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

    a=b;
    b=c;
    c=a;

    cout<<"The value of a after swapping is::"<<a<<endl;
    cout<<"The value of b after swapping is::"<<b<<endl;

    return 0;
}