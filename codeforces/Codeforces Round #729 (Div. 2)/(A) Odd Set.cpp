#include <bits/stdc++.h>
#include <chrono>
#include <ctime>

#define deb(x) cout << (#x) << " is " << (x) << endl
#define nline "\n"
#define read(x) int x; cin>>x
#define SaveTime() ios_base::sync_with_stdio(false);std::cin.tie(NULL)
typedef long long int ll;

using namespace std;

int solve() {
    int inp,n,countOdd=0,countEven=0;
    cin>>n;
    vector<int> vect;
    for(int i=0;i<2*n;++i){
        cin>>inp;
        if(inp%2==0)
            countEven++;
        else 
            countOdd++;
    }
    if(countEven==countOdd)
        cout<<"YES"<<nline;
    else
        cout<<"NO"<<nline;
    return 0;
}

int main() {
    SaveTime();
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
