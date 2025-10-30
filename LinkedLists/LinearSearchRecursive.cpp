#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *RSearch(struct Node *p, int key)
{
    if (p == NULL)
    {
        return NULL; // means the key is not found
    }
    if (key == p->data)
    {
        return  p;
    }
    return RSearch(p->next, key);
}
int main()
{
    int A[] = {3, 4, 6, 8, 10, 12, 41, 2};

    Node *head = new Node;

    Node *temp;
    Node *last;

    head->data = A[0];
    head->next = nullptr;
    last = head;

    // Create a linked list
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++)
    {
        // create a temporary node
        temp = new Node;
        // populate temporary node
        temp->data = A[i];
        temp->next = nullptr;
        // last's next pointing to temp
        last->next = temp;
        last = temp;
    }

    // displaying the linked list
    Node *p = head;
    while (p != nullptr)
    {
        cout << p->data << "->" << flush;
        p = p->next;
    }
    cout << "NULL" << endl;

    // search
    struct Node *tempp;
    tempp = RSearch(head, 41);
    if (tempp)
    {
        cout << "Key is found " << tempp->data << endl;
    }
    else
    {
        cout << "Key is not found" << endl;
    }
    return 0;
}
