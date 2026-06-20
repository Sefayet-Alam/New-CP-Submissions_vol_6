#include<bits/stdc++.h>

#define ll long long
#define nn "\n"
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a%2 && b%2)cout<<"NO"<<nn;
        else cout<<"YES"<<nn;
    }
}