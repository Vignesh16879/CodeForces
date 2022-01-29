#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll n,q;
    vector<pair<ll, ll>> a(n), b(n);
    pair<ll, ll> t = {0, 0};
    cin >> n;

    for(ll i = 0; i < n; i++)
        cin >> a.first >> a.second >> b.first >> b.second;
        
    cin >> q;
    vector<pair<ll, ll>> s(q);

    for(ll i = 0; i < q; i++)
    {   
        // cin >> s[i].first >> s[i].second;
        ll x, y;
        cin >> x >> y;

        if()
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    cout << "\n";

    return 0;
}    