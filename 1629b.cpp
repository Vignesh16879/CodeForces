#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        if(l == 1 && r == 1)
            cout << "No" << "\n";
        else if(l == r)
            cout << "YES" << "\n";
        else
        {
            ll m = (r-l+1)/2;

            if(r%2 == 1 && l%2 == 1)
                m++;

            cout << (m <= k ? "YES" : "NO") << "\n";  
        }
    }

    cout << "\n";

    return 0;
}    