#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> v;
    long long n;
    cin>>n;
    v.push_back(n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }else{
            n=n*3 + 1;
        }
        v.push_back(n);
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}