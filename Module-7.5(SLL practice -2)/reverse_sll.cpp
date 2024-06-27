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
void revSLL(Node* head){
    if(head->next == NULL){
        cout << head->val << " ";
        return;
    }
    revSLL(head->next);
    cout << head->val << " ";
}
int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while(1){
        cin >> val;
        if(val == -1) break;
        insertAtTail(head1, tail1, val);
    }

    revSLL(head1);
    
    return 0;
}