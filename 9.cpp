#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter a year";
    cin>>a;

    if(a%400==0 || a%100!=0 && a%4==0){
        cout<<"The leap yeap";
    }
    else{
        cout<<"The year is not a leap year";
    }

}