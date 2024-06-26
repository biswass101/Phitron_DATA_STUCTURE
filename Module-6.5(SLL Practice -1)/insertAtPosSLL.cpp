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
void printSLL(Node* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void insertAtTail(Node*& head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }

    tmp->next = newNode;
}
void insertHead(Node*& head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head == newNode;
        printSLL(head);
        return;
    }
    newNode->next = head;
    head = newNode;
    printSLL(head);
}
void insertAtPos(Node*& head, int idx, int val){
    Node* newNode = new Node(val);
    if(idx == 0){
        insertHead(head, val);
        return;
    }

    Node* tmp = head;
    for(int i = 1; i <= idx - 1; i++){
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode; 
    printSLL(head);
    // cout << "Head val: " << head->val << endl;
}
int main()
{
    Node* head = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insertAtTail(head, val);
    }
    int q; cin >> q;
    while(q--){
        int idx, val; cin >> idx >> val;
        insertAtPos(head, idx, val);
    }
    return 0;
}