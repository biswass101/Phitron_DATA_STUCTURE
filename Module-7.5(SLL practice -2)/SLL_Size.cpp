#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
void insertAtTail(Node*& head, Node*& tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int getSizeSLL(Node* head){
    int sz = 0;
    while(head != NULL){
        sz++;
        
        head = head->next;
    }
    return sz;
}
int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int val;
    while(1){
        cin >> val;
        if(val == -1) break;
        insertAtTail(head1, tail1, val);
    }
    while(1){
        cin >> val;
        if(val == -1) break;
        insertAtTail(head2, tail2, val);
    }
    
    getSizeSLL(head1) == getSizeSLL(head2) ? cout << "YES" : cout << "NO";
    return 0;
}