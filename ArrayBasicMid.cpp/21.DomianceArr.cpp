// Given the sequence A[] consists of only positive integers but the number of elements in the sequence is unknown. 
//The sequence A[] is called a dominant sequence if one of the following two conditions is satisfied:
// The sequence is said to be even dominant if the number of elements in the sequence is even and
// the number of even numbers in the sequence is more than the number of odd numbers. A sequence is said to be oddly dominant 
//if the number of elements in the sequence is odd and the number of odd numbers in the sequence is greater than the number of even numbers.

// Input Format

// 1 line of integers, the numbers are separated by exactly one space, after the last digit there can be a space.

// Constraints

// The number of elements in the sequence must not exceed 10^5 1 ≤ A[i] 10^9

// Output Format

// Print YES if the sequence is dominant, otherwise print NO.

// Sample Input 0

// 2 2 3 5 8 10 20 88
// Sample Output 0

// YES
// Explanation 0

// The sequence has 8 numbers, the number of even numbers in the sequence is greater than the number of odd numbers in the sequence, so the sequence is the dominant sequence.
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll k;
    ll n = 0;
    ll even = 0, odd = 0;

    while (cin >> k){
        if (k%2==0) {
            even ++;
        }else{
            odd++;
        }
        n++;
    }
    if ((even > odd && n%2==0) || (odd > even && n%2==1)){
        cout << "YES";
    }else cout << "NO";
    return 0;
}