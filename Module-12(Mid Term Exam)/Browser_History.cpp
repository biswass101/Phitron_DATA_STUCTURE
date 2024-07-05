#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    string s;
    Node *prev;
    Node *next;
    Node(string s)
    {
        this->s = s;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertAtTail(Node *&head, Node *&tail, string s)
{
    Node *newNode = new Node(s);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    string s;
    while(true)
    {
        cin >> s;
        if(s == "end")  break;
        insertAtTail(head, tail, s);
    }
    Node *tmp = head;
    int q; cin >> q;
    getchar();
    while(q--)
    {
        string st; getline(cin, st);
        stringstream ss(st);
        string word;
        int cnt = 0;
        string lastString;
        while (ss >> word)
        {
            cnt++;
            lastString = word;
        }
        if(cnt == 2)
        {
            Node *tmp1 = tmp;
            while(tmp1->next != NULL)
            {
                if(tmp1->s == lastString)
                {
                    tmp = tmp1;
                    break;
                }
                tmp1 = tmp1->next;
            }

            if(tmp1->s == lastString)
            {
                tmp = tmp1;
                cout << tmp->s << endl;
            }
            else
            {
                Node *tmp3 = tmp;
                while(tmp3->prev != NULL)
                {
                    if(tmp3->s == lastString)
                    {
                        tmp = tmp3;
                        break;
                    }
                    tmp3 = tmp3->prev;
                }

                if(tmp3->s == lastString)
                {
                    tmp = tmp3;
                    cout << tmp->s << endl;
                }
                else cout << "Not Available" << endl;
            }
        }
        else if(lastString == "prev")
        {
            if(tmp->prev == NULL) cout << "Not Available" << endl;
            else
            {
                cout << tmp->prev->s << endl;
                tmp = tmp->prev;
            }
        }
        else if(lastString == "next")
        {
            if(tmp->next == NULL) cout << "Not Available" << endl;
            else
            {
                cout << tmp->next->s << endl;
                tmp = tmp->next;
            }
        }
    }

    return 0;
}