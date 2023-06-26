#include <iostream> 
#include <set>

using namespace std;
int main(){
    int n; cin >> n;
    set<pair<int, int>> se;
    while (n--){
        int x, y; cin>> x >> y;
        se.insert(make_pair(x, y));
    }
    cout << se.size() <<  endl;
    return 0;
}
// Cho N điểm trong hệ tọa độ Oxy, bạn hãy xác định có bao nhiêu điểm riêng biệt trong các điểm đã cho. Gợi ý : Dùng set hoặc map lưu pair

// Input Format

// Dòng 1 là N : số lượng điểm đã cho

// N dòng tiếp theo mỗi dòng gồm hoành độ và tung độ của 1 điểm

// Constraints

// 1<=N<=10^6

// -10^6<=x,y<=10^6

// Output Format

// In ra số lượng điểm khác nhau

// Sample Input 0

// 20
// 2 2
// 0 1
// 1 2
// 2 1
// 2 0
// 2 1
// 2 2
// 0 0
// 2 0
// 0 2
// 0 1
// 1 1
// 0 2
// 0 2
// 1 1
// 0 2
// 1 2
// 0 1
// 1 1
// 1 1
// Sample Output 0

// 8