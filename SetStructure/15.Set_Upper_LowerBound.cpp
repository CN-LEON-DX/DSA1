#include <bits/stdc++.h>
using namespace std;
void act1(multiset<int> &se, int k){
    se.insert(k);
}
void act2(multiset<int> &se, int k){
    auto it = se.find(k);
    if (it != se.end()){
        se.erase(it);
    }
}
int act3(multiset<int> se, int k){
    auto it = se.lower_bound(k);
    if (it != se.end()){
        return *it;
    }
    return -1;
}
int act4(multiset<int> se, int k){
    auto it = se.upper_bound(k);
    if (it != se.begin()){
        it--;
        return *it;
    }
    return -1;
}
int main(){
    int n; cin >> n;
    multiset<int> se;
    while (n--){
        int k; cin >> k;
        se.insert(k);
    }
    int p; cin >> p;
    while (p--){
        int a, b; cin >> a >> b;
        if (a==1) act1(se, b);
        else if (a==2) act2(se, b);
        else if (a==3) cout << act3(se, b) << endl;
        else  cout << act4(se, b) << endl;
    }
    return 0;
}
// Given an array A[] consisting of N integers, 28tech gives you the following operations:

// 1 x : Add element x to array A[]

// 2 x : Remove element x from array A[] if x exists in array, and if x occurs more than once you remove only 1 element.

// 3 x : Indicates the first value of element >= x in A[] when array A[] is sorted in ascending order, if not exists in output -1

// 4 x : Print the value of the largest word <= x in the array A[], if this element does not exist, print -1.

// Input format

// Line 1 is FEMALE

// Line 2 is N section A[i]

// Line 3 is the number of operations T

// T line next to the description operation.

// Limit

// 1<=N<=1000

// 1<=A[i],X<=1000;

// 1 <= T <= 1000

// Output Format

// Compare with operations 3 and 4, print the corresponding result

// Sample input 0

// 9
// 6 4 9 3 8 6 8 1 6
// 9
// 4 3
// forty six
// 3 6
// 3 4
// 1 6
// 2 6
// 2 7
// 4 4
// 1 4
// Sample output 0

// 3
// 6
// 6
// 4
// 4