#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number";
    cin>>n;

    for(int i=0;i<=n;i++){
        if(n%2==0){
            sum=sum+i;
        }
        else{
            cout<<"The number is odd"<<endl;
        }
    }
    cout<<sum;
}