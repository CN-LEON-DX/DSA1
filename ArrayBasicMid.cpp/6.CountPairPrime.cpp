#include <bits/stdc++.h>
using namespace std;
int check(int a, int b){
    if (b==0) return a;
    if (a%b==0) return b;
    return check(b, a%b);
}
int main(){
    int n; cin >> n;
    int a[n];
    int count = 0;
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n-1;i++){
        for (int j = i+1;j<n;j++){
            if (check(a[i], a[j]) == 1) count++;
        }
    }
    cout << count << endl;
    return 0;
}
// Given a sequence of positive integers with n elements. Count the pairs of primes together in the array.

// Input Format

// The first line is the number of elements in the array n. The second line is the ai elements in the array

// Constraints

// 1≤n≤1000; 1≤ai≤10^9

// Output Format

// Print out the number of pairs of primes together in the array.

// Sample Input 0

// 5
// 2 4 8 3 6
// Sample Output 0

// 3
// Explanation 0

// Pairs of co-prime numbers are: (2, 3), (3, 4), (3, 8)