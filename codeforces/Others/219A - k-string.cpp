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
    int k;
    string str, ptr;
    vector<int> vect(26, 0);

    cin >> k >> str;
    int len = str.size();
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++) {
        char ch = *it;
        vect[ch - 'a']++;
    }
    bool flag = false;
    for (int i = 0; i < 26; i++) {
        int count = vect.at(i);
        if (count % k == 0) {
            for (int j = 0; j < (count / k); ++j) {
                ptr.push_back(char(i + 'a'));
            }
        } else if (count != 0) {
            cout << "-1" << nline;
            return 0;
        }
    }
    while (k--) {
        cout << ptr;
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

//    int t = 1;
//    cin >> t;
//    while (t--)
    solve();

#ifndef ONLINE_JUDGE
    auto stop1 = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop1 - start1);
    cerr << "Time : " << duration.count() / 1000000 << "seconds" << endl;
#endif

    return 0;
}
