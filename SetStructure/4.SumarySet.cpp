#include <iostream>
#include <unordered_set>
using namespace std;

void act1(unordered_multiset<int>& mp, int p) {
    mp.insert(p);
}

void act2(unordered_multiset<int>& mp, int k) {
    auto it = mp.find(k);
    if (it != mp.end()) {
        mp.erase(it);
    }
}

bool act3(unordered_multiset<int>& mp, int k) {
    return mp.find(k) != mp.end();
}

int main() {
    int n;
    cin >> n;

    unordered_multiset<int> mp;
    while (n--) {
        int k;
        cin >> k;
        mp.insert(k);
    }

    int pl;
    cin >> pl;
    while (pl--) {
        int a, b;
        cin >> a >> b;
        if (a == 1) {
            act1(mp, b);
        } else if (a == 2) {
            act2(mp, b);
        } else if (a == 3) {
            if (act3(mp, b)) {
                cout << "YES" << std::endl;
            } else {
                cout << "NO" << std::endl;
            }
        }
    }

    return 0;
}

// Cho dãy số A[] gồm có N phần tử, có 3 thao tác như sau :

// Thao tác 1 : Thêm 1 phần tử X vào mảng.

// Thao tác 2 : Xóa 1 phần tử X khỏi mảng. Trong trường hợp phần tử X không xuất hiện trong mảng, sẽ không thực hiện xóa, nếu trong mảng có nhiều phần tử X thì chỉ xóa đi 1 phần tử X trong mảng.

// Thao tác 3 : Truy vấn xem phần tử X có xuất hiện trong mảng hay không?

// Ban đầu mảng A có N phần tử, với các truy vấn phần tử X trong mảng, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.

// Input Format

// Dòng đầu tiên là số nguyên N.

// Dòng thứ 2 gồm N số nguyên A[i].

// Dòng thứ 3 là số lượng thao tác Q.

// Q dòng tiếp theo mỗi dòng là thông tin của một thao tác, gồm 2 số, số đầu tiên là loại thao tác, số tiếp theo là phần tử X trong thao tác.

// Constraints

// 1≤ N ≤ 10^4; 0 ≤ A[i], X ≤ 10^9; 1≤ Q ≤ 1000; 0 ≤ X ≤ 10^9;

// Output Format

// Đối với mỗi thao tác loại 3, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.

// Sample Input 0

// 6
// 1 2 3 4 5 6
// 4
// 1 1
// 2 6
// 3 1
// 3 6
// Sample Output 0

// YES
// NO
// Explanation 0

// Ban đầu mảng có 6 phần tử 1, 2, 3, 4, 5, 6. Sau thao tác đầu tiên mảng có thêm 1 phần tử 1 và trở thành mảng (1, 1, 2, 3, 4, 5, 6). 
// Sau thao tác thứ 2, mảng xóa đi 1 phần tử 6 và trở thành mảng (1, 1, 2, 3, 4, 5). Thao tác thứ 3 truy vấn phần tử 1, câu trả lời là YES vì 1 xuất hiện trong mảng.
//  Thao tác thứ 4 truy vấn phần tử 6, câu trả lời là NO vì 6 không xuất hiện trong mảng
