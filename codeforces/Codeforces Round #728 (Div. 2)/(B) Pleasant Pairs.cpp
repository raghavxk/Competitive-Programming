#include <bits/stdc++.h>
#include <chrono>
#include <ctime>

#define deb(x) cout << (#x) << " is " << (x) << endl
#define nline "\n"
#define read(x) int x; cin>>x
#define SaveTime() ios_base::sync_with_stdio(false);std::cin.tie(NULL)
typedef long long int ll;

using namespace std;

int solve() {
    ll n, inp;
    cin >> n;
    vector<pair<int, int>> v;
    for (ll i = 0; i < n; ++i) {
        cin >> inp;
        v.push_back( make_pair(inp, i + 1) );
    }
    ll count=0;
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; ++i) {
        ll x = v[i].first;
        ll y = v[i].second;
        for (ll j = i + 1; j < n; ++j) {
            ll x1 = v[j].first;
            ll y1 = v[j].second;
            if ((x * x1) > (2 * n))
                break;
            if ((x * x1) == (y + y1))
                count++;
        }
    }
    cout << count << nline;
    return 0;
}

int main() {
    SaveTime();
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    auto start1 = std::chrono::high_resolution_clock::now();
#endif

    int t = 1;
    cin >> t;
    while (t--)
        solve();

#ifndef ONLINE_JUDGE
    auto stop1 = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop1 - start1);
    cerr << "Time : " << duration.count() / 1000000 << "seconds" << endl;
#endif

    return 0;
}
