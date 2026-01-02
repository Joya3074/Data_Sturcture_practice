#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head= nullptr;

//Insert at beginning
void insert_at_beginning(int value)
{
    Node* n=new Node();
    n->data=value;
    n->next=head;
    head=n;
}

//Insert at end
void insert_at_end(int value)
{
    Node* n=new Node();
    n->data=value;
    n->next=nullptr;

    if(head==nullptr)
    {
        head=n;
        return;
    }

    Node* temp=head;
    while(temp->next != nullptr)
    {
        temp=temp->next;
    }
    temp->next=n;
}

//Insert at specific position
void insert_at_position(int value,int pos)
{
    if(pos<=1)
    {
        insert_at_beginning(value);
        return;
    }
    Node* n=new Node();
    n->data=value;
    Node* temp=head;
    int c=1;

    while(c<pos-1 && temp!=nullptr)
    {
        temp=temp->next;
        c++;
    }
    if(temp==nullptr)
    {
        cout<<"Invalid position"<<endl;
    }
    n->next=temp->next;
    temp->next=n;
}

//Display
void display()
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    insert_at_beginning(10);
    insert_at_beginning(5);
    insert_at_end(15);
    insert_at_position(25,3);
    display();
    return 0;
}
