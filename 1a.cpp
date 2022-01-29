#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    unsigned ll n, m, a;
    cin >> n >> m >> a;
    unsigned ll v = ceil((double)m/a)*ceil((double)n/a);
    cout << v << "\n";

    return 0;
}    