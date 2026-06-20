#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define nn "\n"
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> vec(n), tw(n, 0), thr(n, 0);
        for (ll i = 0; i < n; i++)
            cin >> vec[i];
        vector<ll> ans;
        map<ll, ll> vis;
        for (ll i = 0; i < n; i++)
        {
            if (vec[i] % 6 == 0)
                ans.push_back(vec[i]), vis[i] = 1;
        }

        for (ll i = 0; i < n; i++)
        {
            if (vec[i] % 2 == 0)
                if (!vis[i])
                    ans.push_back(vec[i]), vis[i] = 1;
        }
        for (ll i = 0; i < n; i++)
        {
            if (!vis[i] && vec[i] % 3 != 0)
                ans.push_back(vec[i]),vis[i]=1;
        }
        for (ll i = 0; i < n; i++)
        {
            if (vec[i] % 3 == 0)
                if (!vis[i])
                    ans.push_back(vec[i]), vis[i] = 1;
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << nn;
    }
}