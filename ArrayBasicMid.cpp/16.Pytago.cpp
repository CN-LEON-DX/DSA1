// According to the Pythagorean theorem, we know that a set of 3 numbers (a, b, c) satisfying a^2 + b^2 = c^2 is the three sides of a right triangle. Given a sequence A[] consisting of N elements. Your task is to check if there exists a set of three numbers that satisfy the three sides of a right triangle.

// Input Format

// The first line is an integer N The next line contains N integers A[i]

// Constraints

// 1≤ N ≤ 5000; 1 A[i]<= 10^9

// Output Format

// Print YES if there are 3 pairs in the array satisfying the Pythagorean triple, otherwise print NO.

// Sample Input 0

// 3
// 3 4 5
// Sample Output 0

// YES
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(vector<ll> a, ll n){
    if (n<3) return false;
    for (int i=0;i<n-2;i++){
        if (a[i] == a[i+1]) i++;
        ll k =  a[i] * a[i];
        int left = i+1;
        int right = n-1;
        // cout << a[i] << " " << a[left] << " " << a[right] << endl;
        while (left < right){
            // cout << a[i] << " " << a[left] << " " << a[right] << endl;
            // cout << endl;
            ll c =  a[left] * a[left];
            ll d =  a[right] * a[right];
            if (k + c == d) return true;
            else if (k+c<d){
                right--;
            }else{
                left++;
            }
        }
        int left1 = i+1;
        int right1 = n-1;
        while (left1 < right1){
            // cout << a[i] << " " << a[left] << " " << a[right] << endl;
            // cout << endl;
            ll c =  a[left1] * a[left1];
            ll d =  a[right1] * a[right1];
            if (k + c == d) return true;
            else if (k+c<d){
                left1++;
            }else{
                right1--;
            }
        }
    }
    return false;
}
int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (check(a, n)) cout << "YES";
    else cout << "NO";
    return 0;
}