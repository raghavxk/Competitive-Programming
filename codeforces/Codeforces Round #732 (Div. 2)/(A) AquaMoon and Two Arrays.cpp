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
    int n, sumA = 0, sumB = 0, toIncrease = 0, toDecrease = 0, inp, calc;
    vector<int> a, b;
    vector<int> I, D;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> inp;
        a.push_back(inp);
        sumA += inp;
    }
    for (int i = 0; i < n; ++i) {
        cin >> inp;
        b.push_back(inp);
        sumB += inp;
        if (a[i] < inp) {
            toIncrease += a[i];
        }
        if (a[i] > inp) {
            toDecrease += a[i];
        }
    }
    if (sumA != sumB) {
        cout << -1 << nline;
    } else {
        for (int i = 0; i < n; ++i) {
            if (a[i] == b[i]) {
                continue;
            } else if (a[i] < b[i]) {
                calc = b[i] - a[i];
                while (calc--) {
                    I.push_back(i);
                }
            } else if (a[i] > b[i]) {
                calc = a[i] - b[i];
                while (calc--) {
                    D.push_back(i);
                }
            }
        }
        if (D.size() == 0 && I.size() == 0) {
            cout << 0 << nline;
        } else {
            cout << I.size() << nline;
            for (int i = 0; i < I.size(); ++i) {
                cout << D[i] + 1 << " " << I[i] + 1 << nline;
            }
        }
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
