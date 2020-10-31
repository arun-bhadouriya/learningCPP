#include <iostream>
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
int length(Node*head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

void insertAtHead(Node*&head,int d){
    if(head==NULL){
        head=new Node(d);
        return;
    }
    Node*n=new Node(d);
    n->next=head;
    head=n;
    return;
}

void insertAtTail(Node*&head,int d){
    if(head==NULL){
        insertAtHead(head,d);
        return;
    }
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node*n=new Node(d);
    tail->next=n;
}

void insertInMiddle(Node*&head,int d,int p){
    if(head==NULL or p==0){
        insertAtHead(head,d);
        return;
    }
    else if(p>length(head)){
        insertAtTail(head,d);
        return;
    }
    else{
        int jump=1;
        Node*temp=head;
        while(jump<=p-1){
            jump++;
            temp=temp->next;
        }
        Node*n=new Node(d);
        n->next=temp->next;
        temp->next=n;
        return;
    }
}

void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

void deleteHead(Node*&head){
    if(head==NULL) return;
    Node*temp=head->next;
    delete head;
    head=temp;
}
void deleteTail(Node*&head){
    if(head==NULL){
        return;
    }
    Node*tail=head;
    while(tail->next->next!=NULL){
        tail=tail->next;
    }
    Node*prev=tail;
    tail=tail->next;
    delete tail;
    prev->next=NULL;
}

void deleteInMiddle(Node*&head,int p){
    if(head==NULL) return;
    int jump=1;
    Node*temp=head;
    while(jump++<=p-2){
        temp=temp->next;
    }

    Node*n= temp->next;
    temp->next=n->next;
    delete n;
}

//reversing a linked list
void reverse(Node*&head){
    Node*c=head;
    Node*n=head;
    Node*p=NULL;

    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}

Node* ReverseRec(Node*head){
    if(head->next==NULL or head==NULL){
        return head;
    }

    Node *shead = ReverseRec(head->next);
    // Node*temp=shead;
    // while(temp->next!=NULL){
    //     temp=temp->next;
    // }
    // head->next=NULL;
    // temp->next=head;
    head->next->next=head;
    head->next=NULL;
    return shead;
}

Node* takeInput(){
    int d;
    cin>>d;

    Node*head=NULL;
    while(d!=-1){
        insertAtHead(head,d);
        cin>>d;
    }
    return head;
}

ostream& operator<<(ostream &os,Node*head){
    print(head);
    return os;
}

istream& operator>>(istream &is,Node*&head){
    head=takeInput();
    return is;
}
//MIDDLE POINT OF A LINKED LIST

Node*mid(Node*head){
    if(head==NULL or head->next==NULL) return head;
    Node*fast=head->next;
    Node*slow=head;

    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

//Merging two sorted linked list
Node*Merge(Node*a,Node*b){
    if(a==NULL) return b;
    if(b==NULL) return a;

    Node*c;
    if(a->data < b->data){
        c=a;
        c->next=Merge(a->next,b);
    }
    else{
        c=b;
        c->next=Merge(a,b->next);
    }
    return c;
}

Node*KnodeFromEnd(Node*head,int K){
    Node*fast=head;
    Node*slow=head;
    while(K-1){
        fast=fast->next;
        K--;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}

int main() {
    // Node*head=NULL;
    Node*head;
    Node*head2;
    cin>>head>>head2;
    cout<<head<<head2;
    reverse(head);
    reverse(head2);
    cout<<head<<head2;
    Node*merged=Merge(head,head2);
    cout<<merged;
    cout<<head<<head2;
    /*
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtTail(head,6);
    insertInMiddle(head,0,4);
    deleteTail(head);
    deleteInMiddle(head,3);
    */
    // print(head);
    // reverse(head);
    // head=ReverseRec(head);
    // cout<<head;

    // cout<<length(head)<<endl;

    // Node*x=KnodeFromEnd(head,4);
    // cout<<x->data<<endl;
    // cout<<mid(head)->data;
    
}
