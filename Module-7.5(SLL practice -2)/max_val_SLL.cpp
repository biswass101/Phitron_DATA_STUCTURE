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
int getMaxEle(Node* head){
    int mx = head->val;
    while(head != NULL){
        mx = max(head->val, mx);
        head = head->next;
    }

    return mx;
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

    cout << getMaxEle(head1);
    
    return 0;
}