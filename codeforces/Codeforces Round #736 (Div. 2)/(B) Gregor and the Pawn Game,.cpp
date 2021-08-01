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
    ll n;
    cin >> n;
    string str[2];
    cin >> str[0] >> str[1];
    ll count=0;
    str[0]='|'+str[0];
    str[1]='|'+str[1];
    for(int i=1;i<=n;i++){
        if(str[1][i]=='1'){
            count++;
        }
    }
    if(str[1][1]=='1'){
        if(str[0][1]!='0' && (str[0][2]!='1')){
            count--;
        }
        else{
            if(str[0][1]=='0'){
                str[0][1]='|';
            }
            else{
                str[0][2]='|';
            }
        }
    }

     if(str[1][n]=='1'){
        if(str[0][n]!='0' && str[0][n-1]!='1'){
            count--;
        }
        else{
           
            if(str[0][n]=='0'){
                str[0][n]='|';
             
            }
            else{
                str[0][n-1]='|';
               
            }
        }
    }
    
    for(int i=2;i<=n-1;i++){
        if(str[1][i]=='1'){
            if(str[0][i]!='0' && (str[0][i-1]!='1' && str[0][i+1]!='1')){
                count--;
            }
            else{
                if(str[0][i]=='0'){
                    str[0][i]='|';
                }
                else{
                    if(str[0][i-1]=='1'){
                        str[0][i-1]='|';
                    }
                    else{
                        str[0][i+1]='|';
                    }
                }
            }
        }
    }
    cout << count << nline;
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
