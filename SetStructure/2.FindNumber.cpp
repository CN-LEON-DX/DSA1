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
// Cho dãy số A[] gồm có N phần tử, bạn hãy trả lời các truy vấn để xác định xem phần tử X nào đó có nằm trong mảng hay không? Bạn hãy thử giải bài này bằng 3 cách : Set, Map, Binary Search.

// Input Format

// Dòng đầu tiên là số nguyên N.

// Dòng thứ 2 gồm N số nguyên A[i]

// Dòng thứ 3 là số lượng truy vấn Q.

// Q dòng tiếp theo mỗi dòng là một số nguyên X.

// Constraints

// 1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9; 1≤ Q ≤ 1000;

// Output Format

// Đối với mỗi truy vấn in ra YES nếu phần tử X xuất hiện trong mảng, ngược lại in ra NO.

// Sample Input 0

// 5
// 1 2 1 3 4
// 2
// 1
// 6
// Sample Output 0

// YES
// NO