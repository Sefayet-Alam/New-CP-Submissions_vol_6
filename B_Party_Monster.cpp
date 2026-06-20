#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define nn "\n"

int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll a=0,b=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='(') a++;
            else b++;
        }
        if(a==b) cout<<"YES"<<nn;
        else cout<<"NO"<<nn;
    }
    
}