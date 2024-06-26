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
    Node* head = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insertAtTail(head, val);
    }
    cout << getSizeSLL(head) << endl;
    return 0;
}