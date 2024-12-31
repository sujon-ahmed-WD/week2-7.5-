#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val = val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void at_tail(Node *&head, Node *&tail, int val)
{

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int size(Node *head)
{
    int sz = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        at_tail(head, tail, val);
    }

    int len = size(head);

    // cout << len << endl;

    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        at_tail(head1, tail, x);
    }
    int len1 = size(head1);
    // cout << len1 << endl;

    if(len==len1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}