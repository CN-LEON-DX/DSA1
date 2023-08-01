// Cho một DSLK, mỗi node trong DSLK là một số tự nhiên. Thực hiện xóa toàn bộ node có giá trị X trong DLKS.
//  Ví dụ DSLK = {1, 2, 2, 3, 3, 2, 4} và X = 2 thì sau khi xóa DSLK sẽ là {1, 3, 3, 4}. 
//  Bài này các bạn phải cài đặt bằng DSLK.

// Input Format

// Dòng đầu tiên là N : số lượng node của DSLK và X là giá trị cần xóa. Dòng thứ 2 gồm N số lần lượt là các node trong DSLK.

// Constraints

// 1<=N<=1000; Các node và X là số tự nhiên không quá 1000;

// Output Format

// In ra DSLK sau khi xóa hết các node có giá trị X. Nếu DSLK rỗng thì in ra EMPTY

// Sample Input 0

// 8 7
// 6 7 1 9 4 5 4 7 
// Sample Output 0

// 6 1 9 4 5 4 
#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

node* makeNode(int x) {
    node* newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void insertNode_lastElement(node*& head, int x, node*& tail) {
    node* newNode = makeNode(x);
    if (tail == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int countNode(node* head) {
    int cnt = 0;
    while (head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void remove_Node(node*& head, int k, node*& tail) {
    if (head == NULL) {
        return;
    }

    node* current = head;
    node* prev = NULL;

    while (current != NULL) {
        if (current->data == k) {
            if (current == head) {
                head = head->next;
                delete current;
                current = head;
            } else {
                prev->next = current->next;
                if (current == tail) {
                    tail = prev;
                }
                delete current;
                current = prev->next;
            }
        } else {
            prev = current;
            current = current->next;
        }
    }
}

void browElementList(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    node* head = NULL;
    node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        insertNode_lastElement(head, d, tail);
    }

    remove_Node(head, k, tail);
    if (head == NULL) {
        cout << "EMPTY" << endl;
    } else {
        browElementList(head);
    }

    return 0;
}
