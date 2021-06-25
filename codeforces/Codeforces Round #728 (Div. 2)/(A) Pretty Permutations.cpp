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
    int n;
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " " << i - 1 << " ";
        }
        cout<<nline;
    } else {
        if (n > 3) {
            for (int i = 2; i <= n - 3; i += 2) {
                cout << i << " " << i - 1 << " ";
            }
        }
        cout << n << " " << n - 2 << " "<< n - 1;
        cout<<nline;
    }
    return 0;
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
