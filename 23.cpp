#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100],size,i,max,min,n;
    cout<<"Enter size of array";
    cin>>size;
    cout<<"Enter elments of array :";
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Select a operation "<<endl<<"1. For Maximum value"<<endl<<"2. For Minimum value"<<endl;
    cin>>n;
    switch(n){
             case 1: max=a[0];
                     for(i=0;i<size;i++){
                     if(a[i]>max){
                     max=a[i];
                     }
                     }
                     cout<<"The maximum number is :"<<max;
                     break;

            case 2:  min=a[0];
                     for(i=0;i<size;i++){
                     if(a[i]<min){
                     min=a[i];
                     }
                     }
                     cout<<"The minimum number is :"<<min;
                
    }
}