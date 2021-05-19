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
    int n = 0, posMax = -1, posMin = -1, elemMax = INT_MIN, elemMin = INT_MAX, inp, last;
    bool sorted = true;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> inp;
        if (last > inp && i != 0) {
            sorted = false;
        }
        if (inp >= elemMax) {
            elemMax = inp;
            posMax = i;
        }
        if (inp < elemMin) {
            elemMin = inp;
            posMin = i;
        }
        last = inp;
    }
    if (sorted == true) {
        cout << "0" << nline;
    } else {
        if (posMin == n - 1 && posMax == 0) {
            cout << "3" << nline;
        } else if (posMin == 0 && posMax != n - 1) {
            cout << "1" << nline;
        } else if (posMin != 0 && posMax == n - 1) {
            cout << "1" << nline;
        } else if (posMin == 0 && posMax == n - 1) {
            cout << "1" << nline;
        } else {
            cout << "2" << nline;
        }
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
