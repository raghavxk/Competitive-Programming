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
    string str;
    int ans = 0;
    cin >> str;
    int length = str.length();
    // cout<<length<<nline;
    vector<int> count(26, 0);
    for (int i = 0; i < length; ++i)
        count[int(str[i] - 'a')]++;
    // for(int i = 0;i<26;++i)
    //     cout<<count[i]<<" "<<nline;
    for (int i = 0; i < 26; ++i) {
        if (count[i]>=2)
            ans+=2;
        else if(count[i]==1)
            ans++;
        else if(count[i]==0)
            continue;
    }
    cout<<ans/2<<nline;
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
