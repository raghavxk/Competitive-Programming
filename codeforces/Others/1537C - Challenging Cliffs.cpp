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

void printVect(vector<int> vi, int size) {
    for (ll i = 0; i < size; ++i) {
        cout << vi[i] << " ";
    }
    cout << nline;
}


int solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (n == 2) {
        cout << v[0] << " " << v[1] << nline;
        return 0 ;
    }
    int pos = -1, mn = INT_MAX;
    for (int i = 1; i < n; ++i) {
        if (mn > abs(v[i] - v[i - 1])) {
            pos = i;
            mn = abs(v[i] - v[i - 1]);
        }
    }
    for (int i = pos ; i < n; ++i) {
        cout << v[i] << " ";
    }
    for (int i = 0; i < pos; ++i) {
        cout << v[i] << " ";
    }
    cout << nline;
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
