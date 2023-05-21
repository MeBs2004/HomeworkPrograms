#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,s=0,n;
    cout<<"Enter a number";
    cin>>n;
while(n>0){
    a=n%10;
    s=(s*10)+a;
    n=n/10;
}
cout<<s;
}