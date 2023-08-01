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
        pairs += count[num - x];
        count[num]++;
    }
    
    cout << pairs << endl;
    
    return 0;
}
