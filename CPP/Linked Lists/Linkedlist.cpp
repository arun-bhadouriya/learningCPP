#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    //constructor
    node(int d){
        data= d;
        next=NULL;
    }
};

//returns the length of the linked list.
int length(node*head){
     int len=0;
     while (head!=NULL)
     {
        len++;
        head=head->next;
     }
     return len;
}
//insertAthead of the linkedlist.
void insertAthead(node *& head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node *n =new node(d);
    n->next=head;
    head= n;
}

//insertAtTail of the likedlist.
void insertAtTail(node *&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }

    node *tail=head;
    while((tail->next)!=NULL){
        tail=tail->next;
    }
    tail->next=new node(d);
}

//insertAtMiddle of the linked list.
void insertAtMiddle(node*&head,int d,int p){
    if(head==NULL or p==0){
        insertAthead(head,d);
    }
    else if(p>length(head)){
        insertAtTail(head,d);
    }
    else{
        int jump=1;
        node *temp=head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }
        node*n=new node(d);
        n->next=temp->next;
        temp->next=n;
    }
}


//prints the entire linked list.
void print (node * head)
{
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}


//delete operaions

//deleate at head
void deletehead(node*&head){
    if(head==NULL) return;
    node*temp=head->next;
    delete head;
    head=temp;
}

//delete in middle
void deleteInMiddle(node*&head,int p){
    node*temp=head;
    int jump=1;
    while(jump<=p-2){
        temp=temp->next;
       jump++;
    }
    node *n=temp->next;
    temp->next=n->next;
    delete n;
}


//delete at tail
void deleteTail(node*&head){
    node*temp=head;
    int len=length(head)-1;
    
    while(len-1!=0){
        temp=temp->next;
        len--;
    }
    node *n = temp->next;
    delete n;
    temp->next=NULL;

}

void search(node * head,int key){
    while(head!=NULL){
        if(head->data==key){
            cout<<"Found"<<endl;
            return;
        }
        head=head->next;
    }
    cout<<"NOT FOUND"<<endl;
    return;
}

void searchRecursive(node * head,int key){
    if(head==NULL){
        cout<<"NOT FOUND"<<endl;
        return;
    }

    if(head->data==key) {
        cout<<"FOUND"<<endl;
        return;

    }
    else{
        searchRecursive(head->next,key);
        return;
    }
}

//function to take input
node*take_input(){
    int d;
    cin>>d;
    node*head=NULL;
    while(d!=-1){
        insertAthead(head,d);
        cin>>d;
    }
    return head;
}

node * take_input_file(){
    int d;
    node * head= NULL;
    while(cin>>d){
        insertAthead(head,d);
    }
    return head;
}

//operator overloading for operator<< to print(head);
ostream& operator<<(ostream &os, node * head){
    print(head);
    return os;
}

//and for operator>> to take input from input buffer cin;
istream& operator>>(istream &is,node*&head){
    head=take_input();
    return is;
}

//recerse fuction of linked list
node* reverse(node*&head){
    node*previousnode=NULL;
    node*cnode=head;
    node*nnode=head;

    while(cnode!=NULL){
        nnode=cnode->next;
        cnode->next=previousnode;
        previousnode=cnode;
        cnode=nnode;
    }
    head=previousnode;
    return head;
}

//main function goes here
int main(){
    // node*head=NULL;
    node*head;
    node*head2;
    cin>>head;
    cout<<head;
    // cout<<head2;

    reverse(head);
    cout<<head;

   /* insertAthead(head,3);
    insertAthead(head,2);
    insertAthead(head,1);
    insertAthead(head,0);
    
    print(head);

    insertAtTail(head,25);
    
    insertAtMiddle(head,20,2);
    print(head);
    insertAtTail(head,25);
    print(head);

    deletehead(head);
    print(head);
    deleteInMiddle(head,3);
    print(head);
    deleteTail(head);
    print(head);
    cout<<length(head)<<endl;

    search(head,25);
    int n;
    cin>>n;
    */
    // searchRecursive(head,n);
    return 0;
}