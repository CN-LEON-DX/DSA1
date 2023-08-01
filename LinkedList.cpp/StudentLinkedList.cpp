#include <bits/stdc++.h>
using namespace std;

struct sinhVien {
    char msv[20];
    char name[50];
    double gpa;
    void nhap() {
        cin.ignore();
        cin.getline(msv, sizeof(msv));
        cin.getline(name, sizeof(name));
        cin >> gpa;
    }
    void in() {
        cout << msv << " " << name << " " << fixed << setprecision(2) << gpa << endl;
    }
};

struct node {
    sinhVien data;
    node* next;
};

node* makeNode(sinhVien sv) {
    node* newNode = new node;
    newNode->data = sv;
    newNode->next = NULL;
    return newNode;
}

void duyetNode(node* head) {
    while (head != NULL) {
        head->data.in();
        head = head->next;
    }
}

int demNode(node* head) {
    int cnt = 0;
    while (head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void chenDau(node*& head, sinhVien sv) {
    node* newNode = makeNode(sv);
    newNode->next = head;
    head = newNode;
}

void chenCuoi(node*& head, sinhVien sv) {
    node* temp = head;
    node* newNode = makeNode(sv);
    if (temp == NULL) {
        head = newNode;
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void chenGiua(node*& head, sinhVien sv, int vt) {
    int soNode = demNode(head);
    node* newNode = makeNode(sv);
    node* temp = head;
    if (vt < 1 || vt > soNode) {
        return;
    }
    if (vt == 1) {
        chenDau(head, sv);
        return;
    }
    if (vt == soNode) {
        chenCuoi(head, sv);
        return;
    }
    for (int i = 1; i <= vt - 2; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    int n;
    cin >> n;
    node* head = new node;
    int k, vitri;
    for (int i = 1; i <= n; i++) {
        cin >> k;
        sinhVien sv;
        sv.nhap();
        if (k == 1) {
            chenDau(head, sv);
        } else if (k == 2) {
            chenCuoi(head, sv);
        } else if (k==3){
            cin >> vitri;
            chenGiua(head, sv, vitri);
        }
    }
    duyetNode(head);
    return 0;
}
// Cho danh sách liên kết đơn mỗi node trong DSLK lưu thông tin của 1 sinh viên gồm có :
// Mã sinh viên (chuỗi có không quá 20 kí tự), Họ tên (chuỗi không quá 50 kí tự) và điểm gpa. 
// Có 3 thao tác sau : 
// 1. Thêm 1 sinh viên vào đầu danh sách, 
// 2. Thêm 1 sinh viên vào cuối danh sách,
// 3. Thêm 1 sinh viên vào vị trí K trong danh sách. 
// Bạn hãy thực hiện in ra danh sách liên kết sau khi thực hiện 1 loạt thao tác ở trên.

// Input Format

// Dòng đầu tiên là N : số lượng thao tác cần thực hiện. Các dòng tiếp theo mô tả thao tác, mỗi thao tác gồm 4 dòng. Dòng 1 là loại thao tác(1, 2, 3), nếu thao tác là 3 thì số tiếp theo sau là vị trí chèn K, dòng 2 là mã sinh viên, dòng 3 là họ tên, dòng 4 là điểm gpa của sinh viên cần thêm vào DSLK. Đối với thao tác loại 3 khi kích thước của DSLK là N và chèn vào vị trí N + 1 tức là bạn thêm node đó vào cuối.

// Constraints

// 1<=N<=1000; 0<=X<=1000; 1<=K<=Size(DSLK) + 1

// Output Format

// In ra DSLK sau khi thực hiện N thao tác chèn, mỗi sinh viên in ra trên 1 dòng, các thông tin viết cách nhau một dấu cách và gpa lấy 2 số sau dấu phẩy.

// Sample Input 0

// 7
// 1
// CNTT1
// Le Van Long
// 2.40
// 1
// CNTT2
// Le Van Long
// 1.20
// 1
// CNTT3
// Vuong Hoang Manh
// 1.20
// 1
// CNTT4
// Le Hoang Nam
// 2.80
// 2
// CNTT5
// Vuong Van Phuoc
// 2.60
// 1
// CNTT6
// Pham Xuan Manh
// 3.10
// 3 2
// CNTT7
// Le Xuan Phuoc
// 2.40
// Sample Output 0

// CNTT6 Pham Xuan Manh 3.10
// CNTT7 Le Xuan Phuoc 2.40
// CNTT4 Le Hoang Nam 2.80
// CNTT3 Vuong Hoang Manh 1.20
// CNTT2 Le Van Long 1.20
// CNTT1 Le Van Long 2.40
// CNTT5 Vuong Van Phuoc 2.60