#include<bits/stdc++.h>
using namespace std;
int main(){

    float p,r,t,n,si,ci;

    cout<<"Enter Principal amount:"<<endl;
    cin>>p;
    cout<<"Enter rate :"<<endl;
    cin>>r;
    cout<<"Enter time period:"<<endl;
    cin>>t;
    cout<<"Enter no. of times interest applied:"<<endl;
    cin>>n;

    si=(p*r*t)/100;
    ci=p*(1+(r/n))*n*t;
    
    cout<<"The simple interest is ::"<<si<<endl<<"The compound interest is ::"<<endl<<ci;

}