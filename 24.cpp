#include<bits/stdc++.h>
using namespace std;
int main(){
        int a[5]={10,20,30,40,50},i=0,element;
        cout<<"Input Searching Element"<<endl;
        cin>>element;

        while(i<5)
        {
            if(a[i]==element)
            {cout<<"Item Found At Location"<<endl<<i;
            break;
        }
        i++;
        }
        if(i>=5)
        cout<<"Item Not Found"; 
}