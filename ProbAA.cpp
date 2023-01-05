// https://codeforces.com/contest/1768/problem/A
#include<bits/stdc++.h>
using namespace std;
 
// void print(long long int arr[],long long int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
// }
// int factorial(int x){
//     int fact=1;
//     for(int i=x;i>0;i--){
//         fact*=i;
//     }
//     return fact;
// }

int findx(int n){
    // // cout<<factorial(n);
    // for(int i=n-1;i>0;i--){
    //     int exp=(factorial(i)+factorial(i-1));
    //     // cout<<exp<<" ";
    //     if ((exp%n)==0){
    //         return i;
    //     }
    // }
    if (n==1) return -1;
    return n-1;
} 
 
int main(){
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
        long long n;
        cin>>n;
        cout<<findx(n)<<endl;
    }
    return 0;
}
