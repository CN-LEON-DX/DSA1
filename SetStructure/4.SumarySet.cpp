#include <iostream>
#include <unordered_set>
using namespace std;

void act1(unordered_multiset<int>& mp, int p) {
    mp.insert(p);
}

void act2(unordered_multiset<int>& mp, int k) {
    auto it = mp.find(k);
    if (it != mp.end()) {
        mp.erase(it);
    }
}

bool act3(unordered_multiset<int>& mp, int k) {
    return mp.find(k) != mp.end();
}

int main() {
    int n;
    cin >> n;

    unordered_multiset<int> mp;
    while (n--) {
        int k;
        cin >> k;
        mp.insert(k);
    }

    int pl;
    cin >> pl;
    while (pl--) {
        int a, b;
        cin >> a >> b;
        if (a == 1) {
            act1(mp, b);
        } else if (a == 2) {
            act2(mp, b);
        } else if (a == 3) {
            if (act3(mp, b)) {
                cout << "YES" << std::endl;
            } else {
                cout << "NO" << std::endl;
            }
        }
    }

    return 0;
}

// Given the sequence A[] consisting of N elements, there are 3 operations as follows:

// Action 1: Add an element X to the array.

// Action 2: Remove an element X from the array. In case X element does not appear in the array, no deletion will be performed, if there are many X elements in the array, only 1 X element in the array will be removed.

// Action 3: Query whether element X appears in the array or not?

// Initially array A has N elements, with X element queries in the array, print YES if X occurs in the array, otherwise print NO.

// Input Format

// The first line is an integer N.

// The second line contains N integers A[i].

// The 3rd line is the number of operations Q.

// The next Q lines each line is the information of an operation, including 2 numbers, the first number is the type of operation, the next number is the X element in the operation.

// Constraints

// 1≤ N ≤ 10^4; 0 ≤ A[i], X ≤ 10^9; 1≤ Q ≤ 1000; 0 ≤ X ≤ 10^9;

// Output Format

// For each operation of type 3, print YES if X occurs in the array, otherwise print NO.

// Sample Input 0

// 6
// 1 2 3 4 5 6
// 4
// 1 1
// 2 6
// thirty first
// 3 6
// Sample Output 0

// YES
// NO
// Explanation 0

// Initially the array has 6 elements 1, 2, 3, 4, 5, 6. After the first operation the array has 1 more element 1 and becomes array (1, 1, 2, 3, 4, 5, 6).
// After the 2nd operation, the array deletes 1 element 6 and becomes array (1, 1, 2, 3, 4, 5). The 3rd operation queries element 1, the answer is YES because 1 appears in the array.
// The 4th operation queries element 6, the answer is NO because 6 does not appear in the array
