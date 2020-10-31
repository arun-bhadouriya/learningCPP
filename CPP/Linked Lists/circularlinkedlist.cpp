#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node*next;

    //constructor
    Node(int d){
        data=d;
        next=NULL;
    }  
};

void insert(Node*&head,int data){
    Node*n=new Node(data);
    Node*temp=head;
    n->next=head;
    if(temp!=NULL){
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=n;
    }
    else
    {
        n->next=n;
    }
    head=n;
}

void print(Node*head){
    Node*temp=head;
    while(temp->next!=head){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

Node* getNode(Node*head,int data){
    Node* temp=head;
    while(temp->next!=head){
        if(temp->data== data){
            return temp;
        }
        temp=temp->next;
    }
    if(temp->data==data) return temp;
    return NULL;
}

void deleteNode(Node*&head,int data){
    Node*delNode=getNode(head,data);
    if(delNode==NULL){
        return;
    }
    if(head==delNode) {
        head=head->next;
    }
    Node*temp=head;
    while(temp->next!=delNode){
        temp=temp->next;
    }
    temp->next=delNode->next;
    delete delNode;
}

int main(){
    Node*list=NULL;
    insert(list,1);
    insert(list,2);
    insert(list,3);
    insert(list,4);
    insert(list,5);
    insert(list,6);
    print(list);
    deleteNode(list,4);
    print(list);
    deleteNode(list,6);
    print(list);
    deleteNode(list,1);
    print(list);
}