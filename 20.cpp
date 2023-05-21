#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n,r,d=0,base=1;
    cout<<"Select a operation : 1. To convert binary to decimal ;  2. To convert decimal to binary"<<endl;
    cin>>x;
    switch(x){
    case 1: cout<<"Enter a binary number";
            cin>>n;
            while(n>0){
            r=n%10;
            d=d+r*base;
            n=n/10;
            base=base*2;

            }
             cout<<"This is the Decimal : "<<endl<<d;
             break;

    case 2: cout<<"Enter a Decimal number";
            cin>>n;
            while(n>0){
            r=n%2;
            d=d+r*base;
            n=n/2;
            base=base*10;

            }
            cout<<"This is the binary : "<<endl<<d;
            }
}


/*Another method for these conversions:
int rem,a[10],i=0;
while(n){
    rem=n%2;
    a[i]=rem;
    i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<a[j];

    //we can do same for binary to decimal
    }*/
    