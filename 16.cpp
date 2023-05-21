#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int flag=0;
    cout<<"Enter a number";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=1;
            break;
        }
        }
        if(flag==0){
            cout<<"The number is prime";
        }
        else{
            cout<<"The number is not prime";
        }
}

// one more wayof doing this question
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int i;
//     cout<<"Enter a number";
//     cin>>n;
//     for(i=2;i<=n-1;i++){
//         if(n%i==0){
//             break;
//         }
//         }
//         if(i==n){
//             cout<<"The number is prime";
//         }
//         else{
//             cout<<"The number is not prime";
//         }
// }