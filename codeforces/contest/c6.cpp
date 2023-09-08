#include <bits/stdc++.h>
using namespace std;
#define MAX 999
#define mod 998244353

#define ll long long

vector<ll> dfs(ll i, unordered_map<ll, vector<pair<ll, ll>>> &map, ll n, long long &oneso, long long &res, vector<vector<ll>> &dp)
{
    // iterate each edge of vertex i that is directed away from it
    if (dp[i][0] != -1)
        return dp[i];
    ll cntz = 0;
    ll cnto = 0;
    ll res2 = 0;
    for (auto lis : map[i])
    {
        int v2 = lis.first;
        int enu = lis.second;
        if (enu == 0)
        {
            res = (res + oneso) % mod;
            cntz = (cntz + 1) % mod;
        }
        if (enu == 1)
        {
            oneso = (oneso + 1) % mod;
            cnto = (cnto + 1) % mod;
        }
        if (dp[v2][0] == -1)
        {
            auto p = dfs(v2, map, n, oneso, res, dp);
            cntz = (cntz + p[1]) % mod;
            cnto = (cnto + p[2]) % mod;
            res2 = (res2 + p[0]) % mod;
            if (enu == 1)
                res2 = (res2 + dp[v2][1]) % mod;
        }
        else
        {
            res = (res + dp[v2][0] + (dp[v2][1] * oneso) % mod) % mod;
            oneso = (oneso + dp[v2][3]) % mod;
            res2 = (res2 + dp[v2][0]) % mod;

            if (enu == 1)
                res2 = (res2 + dp[v2][1]) % mod;
        }
    }
    // cout<<i+1<<"----"<<res2<<"---"<<cntz<<"---"<<cnto<<endl;
    return dp[i] = {(res2) % mod, cntz % mod, cnto % mod};
}

int main()
{
    // vector<int>arr;
    ll n;
    cin >> n;
    // vector<vector<int>>G (n ,vector<int>(n, MAX) ) ;

    unordered_map<ll, vector<pair<ll, ll>>> map;

    ll onesofar = 0;
    ll res = 0;

    for (int i = 0; i < n; i++)
    {
        ll nev;
        cin >> nev;

        for (int j = 0; j < nev; j++)
        {
            ll v2, enu;
            cin >> v2 >> enu;
            map[i].push_back(make_pair(v2 - 1, enu));
        }
    }
    vector<vector<ll>> dp(n, {-1, -1, -1});
    vector<ll>p = dfs(0, map, n, onesofar, res, dp);
    cout << res << endl;
    return 0;
}