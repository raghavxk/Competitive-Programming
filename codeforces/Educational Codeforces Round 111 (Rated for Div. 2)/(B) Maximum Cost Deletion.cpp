#include <bits/stdc++.h>
#include <chrono>
#include <ctime>

#define deb(x) cout << (#x) << " is " << (x) << endl
#define nline "\n"
#define read(x) int x; cin>>x
#define SaveTime() ios_base::sync_with_stdio(false);std::cin.tie(NULL)
typedef long long int ll;

const int MOD = 1000000007;

using namespace std;

int solve() {
    int n, a, b, ans = 0;
    cin >> n >> a >> b;
    string str;
    cin >> str;
    int calc = 0; char p = str[0];
    char q = str[0];
    if (b < 0) {
        for (int i = 0; i < n; ++i) {
            if (str[i] != p && str[i] != q) {
                calc++;
            }
            p = str[i];
        }
        calc += 1;
        ans = (n * a) + (calc * b);
    } else {
        ans = (n * a) + (n * b);
    }
    cout << ans << nline;
    return 0;
}

int main() {
    SaveTime();
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    auto start1 = std::chrono::high_resolution_clock::now();
#endif

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
