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

void printSLL(Node* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    Node* head = NULL;
    Node * tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1) break;
        insertAtTail(head, tail, val);//O(1)
    }  
    printSLL(head); 
    return 0;
}