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

//Delete at beginning
void delete_at_beginning()
{
    if(head==nullptr)
    {
        cout<<"List is empty!"<<endl;
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}

//Delete at end
void delete_at_end()
{
    if(head==nullptr)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    //if one node
    if(head->next==nullptr)
    {
        delete head;
        head=nullptr;
        return;
    }
    Node* temp=head;
    while(temp->next->next != nullptr)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}

//Delete at specific position
void delete_at_position(int pos)
{
    if(head==nullptr)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    if(pos<=1)
    {
        delete_at_beginning();
        return;
    }
    Node* temp=head;
    int c=1;
    while(c<pos-1 && temp->next!=nullptr)
    {
        temp=temp->next;
        c++;
    }
    if(temp->next==nullptr)
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    Node* n=temp->next;
    temp->next=temp->next->next;
    delete n;
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
    delete_at_beginning();
    display();
    delete_at_end();
    display();
    delete_at_position(2);
    display();
    return 0;
}

