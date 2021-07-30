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

int max_digit(ll n){
    int max_dig= -1,d;
    while(n>0){
        d  = n%10;
        n =n/10;
        max_dig= max(d,max_dig);
    }
    return max_dig;
}

int min_digit(ll n){
    int min_dig= 10,d;
    while(n>0){
        d  = n%10;
        n =n/10;
        min_dig= min(d,min_dig);
    }
    return min_dig;
}

int solve() {
    ll a , K,ans = 0;
    cin >> a >> K;
    ans = a;
    for (int i = 0; i < K-1 ; ++i) {
        if(min_digit(a)==0){
            break;
        }
        a+= min_digit(a)*max_digit(a);
    }
    cout<<a<<nline;
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
