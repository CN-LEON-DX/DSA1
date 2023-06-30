// Given two integers L and R, count how many primes there are in the segment from L to R.

// Suggest :

// Step 1: Sieve primes

// Step 2: Let F[i] be the number of primes from 0 to i, then the number of primes from L to R is F[R] - F[L - 1]

// Input Format

// Line 1 is the number of test sets T

// The next T lines each are 2 non-negative integers L, R

// Constraints

// 1<=T<=10000

// 0<=L<=R<=10^6

// Output Format

// Output the result of each test on 1 line

// Sample Input 0

// 5
// 3 19
// 4 65
// 4 44
// 1 17
// 1 7
// Sample Output 0

// 7
// 16
// twelfth
// 7
// 4
#include <bits/stdc++.h>
using namespace std;

// Using Dynamic Programing and filte prime
vector<int> F(1000001, 1);
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
int cnt[1000001];
int main(){
    prime();
    int t = 0;
    cnt[2] = 2;
    for (int i=0;i<=1000000;i++){
        if (F[i])  s*=i;
        cnt[i] = t;
    }
    int n; cin >> n;
    while (n--){
        int x, y; cin >> x >> y;
        else cout << cnt[y] - cnt[x-1] << endl;
    }
    return 0;
}
