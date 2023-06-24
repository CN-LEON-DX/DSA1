// Cho mảng số nguyên A[] có N phần tử, hãy tìm số xuất hiện nhiều nhất trong mảng.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^5; -10^9<=A[i]<=10^9

// Output Format

// In ra số có số lần xuất hiện nhiều nhất và tần suất tương ứng, nếu có nhiều số có cùng số lần xuất hiện thì in ra số nhỏ nhất.

// Sample Input 0

// 5
// 1 2 2 1 3
// Sample Output 0

// 1 2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int maxFreq = 1, currFreq = 1;
    int num = a[0], maxNum = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            currFreq++;
            if (currFreq > maxFreq || (currFreq == maxFreq && a[i] < maxNum)) {
                maxFreq = currFreq;
                maxNum = a[i];
            }
        } else {
            currFreq = 1;
        }
    }

    cout << maxNum << " " << maxFreq << endl;

    return 0;
}
