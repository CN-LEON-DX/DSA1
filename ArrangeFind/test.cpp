#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    map<int, int> count;
    int num;
    long long pairs = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        
        // Kiểm tra nếu tồn tại A[i]-X trong map, tăng số cặp lên
        pairs += count[num - x];
        
        // Tăng số lần xuất hiện của phần tử num trong map
        count[num]++;
    }
    
    cout << pairs << endl;
    
    return 0;
}
