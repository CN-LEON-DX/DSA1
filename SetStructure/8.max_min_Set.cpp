// Given array A[] consisting of n elements, there are 4 types of operations

// Action 1: Add element X to the array

// Action 2: Remove all X values ​​from the array if X exists in the array

// Action 3: Find the smallest element in the array

// Action 4: Find the largest element in the array

// For operations 3 and 4, print the largest and smallest element in the array A[]

// Input Format

// Line 1 contains N : The initial number of elements in the array A[]

// The second line contains the initial N elements of the array A[]

// Line 3 contains the number of operations Q

// The next Q lines each describe an operation, in which if it is operations 1 and 2, there is an additional element X.

// Constraints

// 1<=N<=10^5

// 1<=Q<=10000

// 0<=A[i], X<=10^6

// Output Format

// Print the results with operations 3 and 4

// Sample Input 0

// ten
// 24 31 49 65 57 77 7 81 77 79
// ten
// 2 60
// 2 7
// 3
// 3
// 2 45
// 1 16
// 4
// 3
// 1 6
// 1 8
// Sample Output 0

// 24
// 24
// 81
// 16
#include <bits/stdc++.h>
using namespace std;
void act1(set<int> &se, int k){
    se.insert(k);
}
void act2(set<int> &se, int k){
    auto it = se.find(k);
    if (it!= se.end()){
        se.erase(k);// Remove all element equals k
    }
}

void act3(set<int> se){
    // find element smallest in set ?
    auto it = se.begin();
    cout << *it << endl;
}

void act4(set<int> se){
    auto it = se.rbegin();
    cout << *it << endl;
}
int main(){
    int n; cin >> n;
    set<int> se;
    while (n--){
        int k; cin >> k;
        se.insert(k);
    }
    int p; cin >> p;
    while (p--){
        int a; cin >> a;
        if (a==1){
            int t; cin >> t;
            act1(se, t);
        }
        else if (a==2){
            int r; cin >> r;
            act2(se, r);
        }
        else if (a==3){
            act3(se);
        }
        else if (a==4){
            act4(se);
        }
    }
    return 0;
}