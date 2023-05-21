#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5],sum=0;
    cout<<"Enter array elements";

    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"Sum Of Array Elements";
     for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    cout<<sum;
}