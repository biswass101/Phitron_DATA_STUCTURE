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
bool hasDuplicate(Node* head){
    for(Node* tmp = head; tmp->next != NULL; tmp = tmp->next)
    {
        for(Node* tmp2 = tmp->next; tmp2 != NULL; tmp2 = tmp2->next)
        {
            if(tmp->val == tmp2->val){
                return true;
                break;
            }
        }
    }

    return false;
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
    hasDuplicate(head) ? cout << "YES" : cout << "NO";
    return 0;
}