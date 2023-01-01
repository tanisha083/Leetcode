// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

long long findmaxsum(vector<long long> arr_n,vector<long long> arr_m,long long n,long long m) {
        long long sum=0;
        sort(arr_n.begin(),arr_n.end());
        sort(arr_m.rbegin(),arr_m.rend());
        // for(int l=0 ; l<m; l++){
        //     arr_n[l]=arr_m[l];
        // }
        for(long long p=0;p<n;p++){
            if (p<m){
                sum+=arr_m[p];
            }
            else{
                sum+=arr_n[p];}
        }
        return sum;
}
int main(){
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
        long long n,m;
        cin>>n>>m;
        vector<long long> arr_n, arr_m;
        for(long long j=0;j<n;j++){
            long long a;
            cin>>a;
            arr_n.push_back(a);
        }
        for(long long k=0;k<m;k++){
            long long b;
            cin>>b;
            arr_m.push_back(b);
        }
        cout<<findmaxsum(arr_n,arr_m,n,m)<<endl;
    }
    return 0;
}