// Given a positive integer N, count how many primes are in the range from 0 to N. Instruct :

// Step 1: Sieve primes

// Step 2: Let F[i] be the number of primes from 0 to i, build the array F[i] after sieving

// Input Format

// Line 1 is the number of test sets T

// The next T lines are each a non-negative integer N .

// Constraints

// 1<=T<=10000

// 0<=N<=10^6

// Output Format

// Output the result of each test on 1 line

// Sample Input 0

// 5
// 39
// 68
// 26
// 87
// 6
// Sample Output 0

// 12
// 19
// 9
// 23
// 3
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
    for (int i=0;i<=1000000;i++){
        if (F[i]) t++;
        cnt[i] = t;
    }
    int n; cin >> n;
    while (n--){
        int k; cin >> k;
        cout << cnt[k] << endl;
    }
    return 0;
}