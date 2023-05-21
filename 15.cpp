#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=1,nextterm=a+b;
    cout<<"Enter a number";
    cin>>n;

    for(int i=0;i<=n;i++){
        nextterm=a+b;
        cout<<nextterm<<" ";
        a=b;
        b=nextterm;
    }

}