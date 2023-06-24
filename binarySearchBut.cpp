// Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) :

// Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1.

// Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1.

// Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.

// Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.

// Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

// Input Format

// Dòng đầu tiên là số nguyên dương N và X Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^6; 0<=A[i],X<=10^6;

// Output Format

// In ra 5 dòng tương ứng với 5 kết quả của 5 hàm đề bài yêu cầu.

// Sample Input 0

// 10 1160
// 19 1600 2172 2921 3409 4185 4639 6098 6744 9192 
// Sample Output 0

// -1
// -1
// 1
// 1
// 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find1(int a[], int n, int x){
    int res = -1;
    int left = 0, right = n-1;
    while(left<=right){
        int mid = (left+right)/2;
        if (a[mid]==x) {
            res = mid;
            right = mid - 1;
        }
        else if (a[mid]<x){
            left = mid+1;
        }
        else if (a[mid]>x){
            right = mid -1;
        }
    }
    return res;
}

int find2(int a[], int n, int x){
    int left = 0, right = n-1;
    int res = -1;
    while(left<=right){
        int mid = (left+right)/2;
        if (a[mid]==x) {
            res = mid;
            left = mid + 1;
        }
        else if (a[mid]<x){
            left = mid+1;
        }
        else if (a[mid]>x){
            right = mid -1;
        }
    }
    return res;
}

int find3(int a[], int n, int x){
    int left = 0, right = n-1;
    int res = -1;
    while(left<=right){
        int mid = (left+right)/2;
        if (a[mid]>=x ){
            res = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return res;
}

int find4(int a[], int n, int x){
    int left = 0, right = n-1;
    int res = -1;
    while(left<=right){
        int mid = (left+right)/2;
        if (a[mid]>x){
            res = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
        
    }
    return res;
}

int find5(int a[], int n, int x){
    int first = find1(a, n, x);
    int last = find2(a, n, x);
    if (first == -1){
        return 0;
    }
    return last - first +1;
}
int main() {
    int n, x; cin >> n >> x;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    cout << find1(a, n, x) << endl;
    cout << find2(a, n, x) << endl;
    cout << find3(a, n, x) << endl;
    cout << find4(a, n, x) << endl;
    cout << find5(a, n, x) << endl;
    return 0;
}
