#include <bits/stdc++.h>

#define deb(x) cout << (#x) << " is " << (x) << endl
#define nline "\n"
#define SaveTime()                    \
    ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL)
#define setDecimalPrecision(Precision) fixed << showpoint << setprecision(Precision)
typedef long long ll;

const int MOD = 1000000007;
const float PI = 3.14159265;

using namespace std;

void PrintVect(vector<int> vi)
{
    ll size = vi.size();
    for (ll i = 0; i < size; ++i)
    {
        cout << vi[i] << " ";
    }
    cout << nline;
    return;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j, count = 0;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int ans=0;
    while(1){
        if(is_sorted(a.begin()+1,a.end())){
            break;
        }
        ans++;
        if(ans%2){
            for(int i=1;i<=n-2;i+=2){
                if(a[i]>a[i+1]){
                    swap(a[i],a[i+1]);
                }
            }
        }
        else{
            for(int i=2;i<=n-1;i+=2){
                if(a[i]>a[i+1]){
                    swap(a[i],a[i+1]);
                }
            }
        }
    }
    cout << ans << nline;
}

int main()
{
    SaveTime();
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
