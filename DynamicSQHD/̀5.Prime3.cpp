#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> F(1000001, 1);
const int mod = 1000000007;
void prime(){
    F[0] = 0;
    F[1] = 0;
    for (int  i=2;i*i<=1000000;i++){
        if (F[i]){
            for (int j=i*i;j<=1000000;j+=i){
                F[j] = 0;
            }
        }
    }
}
ll cnt[1000001];
int main(){
    prime();
    cnt[2] = 2;
    ll s = 2;
    for (ll i=3;i<=1000000;i++){
        if (F[i])  s = ((s%mod)*(i%mod))%mod;
        cnt[i] = s;
    }
    int n; cin >> n;
    while (n--){
        int k; cin >> k;
        cout << cnt[k] << endl;
    }
    return 0;
}
// Cho số nguyên dương N, hãy tính tích các số nguyên tố trong đoạn từ 0 đến N.

// Input Format

// Dòng 1 là số bộ test T

// T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

// Constraints

// 1<=T<=10000

// 0<=N<=10^6

// Output Format

// Đưa ra kết quả của mỗi test trên 1 dòng, vì kết quả quá lớn nên hãy chia dư cho 10^9 + 7.

// Sample Input 0

// 5
// 20
// 16
// 10
// 22
// 29
// Sample Output 0

// 9699690
// 30030
// 210
// 9699690
// 469693188