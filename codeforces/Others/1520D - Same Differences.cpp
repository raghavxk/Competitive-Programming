#include <bits/stdc++.h>

#define deb(x) cout << (#x) << " is " << (x) << endl
#define endl "\n"
#define SaveTime()                    \
    ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL)
#define setDecimalPrecision(Precision) fixed << showpoint << setprecision(Precision)
typedef long long int ll;

const int MOD = 1000000007;
const float PI = 3.14159265;

using namespace std;

// Code starts here !

void solve()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll size;
        cin >> size;
        map<ll, ll> mp;
        ll inp;
        for (ll i = 1; i < size+1; ++i)
        {
            cin >> inp;
            inp = inp - i;
            mp[inp]++;
        }
        ll res = 0;
        map<ll,ll>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();++itr)
        {
            // cout<<itr->first<<" "<<itr->second<<endl;
            res += (itr->second * (itr->second-1))/2; 
        }
        cout<<res<<endl;
    }
}

signed main()
{
    SaveTime();
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    solve();

    return 0;
}
