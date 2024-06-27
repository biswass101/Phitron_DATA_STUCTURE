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
int getIdx(Node* head, int val){
    int idx = -1;
    int curr = 0;
    while(head != NULL){
        
        if(head->val == val) {
            idx = curr;
            return idx;
        }
        head = head->next;
        curr++;
        
    }

    return idx;
}
int main()
{
    int t; cin >> t;
    while(t--){
        Node* head1 = NULL;
        Node* tail1 = NULL;
        int val;
        while(1){
            cin >> val;
            if(val == -1) break;
            insertAtTail(head1, tail1, val);
        }
        int x; cin >> x;
        cout << getIdx(head1, x) << endl;
    }
    return 0;
}