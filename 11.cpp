#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cout<<"Select a operation"<<endl;
    cout<<"1. for Addition"<<endl;
    cout<<"2. for Substraction"<<endl;
    cout<<"3. for Multiplication"<<endl;
    cout<<"4. for Division"<<endl;

    cin>>n;

    switch(n){
        case 1: cout<<"Enter Two Numbers";
                cin>>a>>b;
                cout<<a+b;
                break;
        
        case 2: cout<<"Enter Two Numbers";
                cin>>a>>b;
                cout<<a-b;
                break;

        case 3: cout<<"Enter Two Numbers";
                cin>>a>>b;
                cout<<a*b;
                break;

        case 4: cout<<"Enter Two Numbers";
                cin>>a>>b;
                cout<<a/b;
                break;

        case 5: cout<<"choose a valid operation";           

    }
}
