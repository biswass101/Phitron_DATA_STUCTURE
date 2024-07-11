#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int val;
  Node *next;
  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};
class Queue {
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;

public:
  Queue() {
    // Implement the Constructor
  }

  /*----------------- Public Functions of Queue -----------------*/

  bool isEmpty() { return sz == 0; }

  void enqueue(int data) {
    Node *newNode = new Node(data);
    if (tail == NULL) {
      head = newNode;
      tail = newNode;
      sz++;
      return;
    }

    tail->next = newNode;
    tail = tail->next;
    sz++;
  }

  int dequeue() {
    if (head == NULL)
      return -1;
    sz--;
    int val = head->val;
    Node *del = head;
    head = head->next;
    if (head == NULL)
      tail = NULL;
    delete del;
    return val;
  }

  int front() {
    if (head == NULL)
      return -1;
    else
      return head->val;
  }
};
int main(){
    //Problem LinK: https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTabValue=PROBLEM
    return 0;
}
