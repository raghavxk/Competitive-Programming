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
    int n , c1 , c2 ;
    cin >> n;
    if (n % 3 == 0) {
        cout << (n / 3)  << " " << n / 3 << nline;
    } else if (n % 3 == 1) {
        cout << (n / 3) + 1 << " " << n / 3 << nline;
    } else {
        cout << (n / 3) << " " << (n / 3) + 1 << nline;

    }
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
