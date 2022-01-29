#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll>> a(n);

        for(ll i = 0; i < n; i++)
            cin >> a[i].first;

        for(ll i = 0; i < n; i++)
            cin >> a[i].second;

        sort(a.begin(), a.end());

        for(ll i = 0; i < n; i++)
            if(a[i].first <= k)
                k += a[i].second;

        cout << k << "\n";
    }

    cout << "\n";

    return 0;
}    