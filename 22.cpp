#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements for arrays";
    cin>>n;
    int a[n],b[n],c[n],sum=0,i;
    cout<<"Enter elements of first array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter elements of second array";
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<"Sum Of Corresponding Elements of these arrays";
     for(i=0;i<n;i++){
        c[i]=a[i]+b[i];
        cout<<c[i]<<endl;
    }
}