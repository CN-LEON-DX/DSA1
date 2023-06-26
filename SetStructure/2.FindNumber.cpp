#include <bits/stdc++.h>
using namespace std;
// Danh gia thi o day thay pham vi a[i]<=10^9 nen ta khong the dung mang danh dau duoc!
// Mang danh dau : O(N);
// BinarySearch thi : O(LogN);
// QuickSort thi : O(Nlog(N));
// Con SET VA MAP:
// Set: O(LogN)
// MAP: O(LogN)
bool setWay(set<int> se, int target)
{
    if (se.find(target) != se.end())
        return true;
    return false;
}
// bool way2(map<int, int> ma, int target){
//     if (ma.find(target)!=ma.end()) return true;
//     else return false;
// }
bool way3()
int main()
{
    int n;
    cin >> n;
    set<int> se;
    map<int, int> ma;
    while (n--)
    {
        int k;
        cin >> k;
        se.insert(k);
    }
    int p;
    cin >> p;
    while (p--)
    {
        int target;
        cin >> target;
        if (setWay(se, target))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
// Given the sequence A[] consisting of N elements, answer the query to determine if a certain element X is in the array or not? Try to solve this problem in 3 ways: Set, Map, Binary Search.

// Input Format

// The first line is an integer N.

// Second line contains N integers A[i]

// The 3rd line is the number of queries Q.

// The next Q lines each are an integer X.

// Constraints

// 1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9; 1≤ Q ≤ 1000;

// Output Format

// For each query, print YES if element X appears in the array, otherwise print NO.

// Sample Input 0

// 5
// 1 2 1 3 4
// 2
// first
// 6
// Sample Output 0

// YES
// NO