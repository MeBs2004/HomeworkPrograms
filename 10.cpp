#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cout<<"Enter marks of maths";
    cin>>a;

    cout<<"Enter marks in physics";
    cin>>b;

    cout<<"Enter marks in pps";
    cin>>c;

    cout<<"Enter marks in chemistry";
    cin>>d;

    cout<<"Enter marks in english";
    cin>>e;

    f=(a+b+c+d+e)/5;
    cout<<"the total percentage of five subjects is "<<f<<endl;

    if(f>=90 && f<=100){
        cout<<"A Grade";
    }
    else if(f>=80 && f<=90){
        cout<<"B Grade";
    }
    else if(f>=60 && f<=80){
        cout<<"C Grade";
    }
    else{
        cout<<"D Grade";
    }

} 