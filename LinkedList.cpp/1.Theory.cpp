#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
}
node* makeNote(int x){
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

// brow list 
void brNode(node* head){
    while (head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
}
// return size 
int sizeList(node* head){
    int cnt = 0;
    while (head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}
// push NODE front of head pointer 
// Why node preference is pointer level 2
void push_front(node **head, int x){
    node *newNode = makeNode(x);
    newNode->next = *head;
    *head = newNode;
}
int main(){
    node *head = NULL;
    
    return 0;
}