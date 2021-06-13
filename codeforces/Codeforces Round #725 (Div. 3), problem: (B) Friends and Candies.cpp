#include <bits/stdc++.h>
#include <chrono>
#include <ctime>

#define deb(x) cout << (#x) << " is " << (x) << endl
#define nline "\n"
#define read(x) int x; cin>>x
#define fastio() ios_base::sync_with_stdio(false);std::cin.tie(NULL)
typedef long long int ll;

using namespace std;

int solve() {
    int n, sum = 0, inp;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> inp;
        v.push_back(inp);
        sum += inp;
    }
//    for (int i = 0; i < n; ++i) {
//        cout << v.at(i);
//    }
    if (sum % n != 0) {
        cout << -1 << nline;
    } else {
        sum = sum / n;
        int out = 0;
        for (int i = 0; i < n; ++i) {
            if (v.at(i) > sum)
                out++;
        }
        cout << out << nline;
    }
}

int main() {
    fastio();
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
