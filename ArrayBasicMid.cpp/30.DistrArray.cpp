
// Given an array A[] consisting of N non-negative integers and K numbers. Your task is to divide the array A[] into two subarrays of sizes K and N-K so that the difference between the sum of the two subarrays is maximum. For example, with array A[] = {8, 4, 5, 2, 10}, K=2 we get 17 because array A[] is divided into two arrays {4, 2} and { 8, 5, 10} has the greatest difference of two subarrays 23-6=17.

// Input Format

// The first line is 2 numbers N and K. The second line is the N numbers in the array A

// Constraints

// 1≤ K < N ≤ 10^5; 0 A[i] 10^7

// Output Format

// Print the largest signal possible.

// Sample Input 0

// 8 3
// 1 1 1 1 1 1 1 1
// Sample Output 0

// 2
// Sample Input 1

// 5 2
// 8 4 5 2 10
// Sample Output 1

// 17
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a+n);
    k = min(k, n-k);
    ll s1 = 0;
    ll s2 = 0;
    for (int i=0;i<k;i++){
        s1 += a[i];
    }
    for (int i=k;i<n;i++){
        s2 += a[i];
    }
    cout << s2 - s1 << endl;
    return 0;
}