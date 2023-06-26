#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    unordered_map<int, int> freq;
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        int complement = k - a[i];
        cout << complement << endl;
        cnt += freq[complement];
        cout << cnt << " " << freq[complement] << endl;
        freq[a[i]]++;
    }
    
    cout << cnt << endl;
    return 0;
}
