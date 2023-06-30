#include <bits/stdc++.h>
using namespace std;
int mod = 10000001;
int a[100001];

int main(){
    for (int i=1;i<=)
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int mod = 1000000007;
ll F[1000001];

int main(){
    F[0] = 0;
    F[1] = 0;
    F[2] = 1;
    for(int i = 3; i <= 1000000; i++){
        F[i] = F[i - 1] + F[i - 2] + F[i - 3];
        F[i] %= mod;
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}