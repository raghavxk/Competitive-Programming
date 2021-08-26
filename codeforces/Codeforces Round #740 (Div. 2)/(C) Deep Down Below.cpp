#include <bits/stdc++.h>

#define deb(x) cout << (#x) << " is " << (x) << endl
#define nline "\n"
#define SaveTime() ios_base::sync_with_stdio(false);std::cin.tie(NULL)
#define setDecimalPrecision(Precision) fixed<<showpoint<<setprecision(Precision)
typedef long long ll;

const int MOD = 1000000007;
const float PI = 3.14159265;

using namespace std;

void solveC() {
    int n, k;
    cin >> n;
    vector<vector<int>> v(n);
    vector<int> mx(n, 0);
    set<pair<int, int>> s;
    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            int u;
            cin >> u;
            v[i].push_back(u - j);
            mx[i] = max(mx[i], u - j);
        }
        s.insert({mx[i], i});
    }
    int ans = 0, net = 0;
    while (s.size()) {
        int id = (*s.begin()).second;
        s.erase(s.begin());
        ans = max(ans, mx[id] + 1 - net);
        net += v[id].size();
    }
    cout << ans << '\n';
}
int solve()
{
    solveC();
    return 0;
}

int main() {
    SaveTime();
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
