#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

int RMax(struct Node *p)
{
    int x=0;

    if(p==0)
    {
        return INT32_MIN;
    }
    x=RMax(p->next);
    if(x>p->data)
    {
        return x;
    }
    else return p->data;
}

Node* search(Node *p, int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
        {
            return p;
        }
        p=p->next;
    }
    return NULL;
}

int main(){
    int A[]={3,4,6,8,10,12,41,2};

    Node* head = new Node;

    Node* temp;
    Node* last;

    head->data=A[0];
    head->next=nullptr;
    last=head;

    //Create a linked list
    for(int i=0; i<sizeof(A)/sizeof(A[0]); i++)
    {
        //create a temporary node 
        temp=new Node;
        //populate temporary node
        temp->data=A[i];
        temp->next=nullptr;
        //last's next pointing to temp
        last->next=temp;
        last=temp;
    }

    //displaying the linked list
    Node *p=head;
    while(p!=nullptr)
    {
        cout<<p->data<<"->"<<flush;
        p=p->next;
    }
    cout<<"NULL"<<endl;
    
    //max
    cout<<"Max is "<<RMax(head);

    return 0;
}
