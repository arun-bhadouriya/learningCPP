#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int d){
        data=d;
        next=NULL;
    }
 
};
// void insertAtHead(node*&head,int data){
//         if(head==NULL){
//             head=new node(data);
//             return;
//         }

//         node*newnode=new node(data);
//         newnode->next=head;
//         head=newnode;
//     }

    void insertAtTail(node*&head,int data){
        if(head==NULL){
            head=new node(data);
            return;
        }
        node*tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=new node(data);
        // tail->next=newnode;
    }

    void deletefromhead(node*&head){
        if(head==NULL) return;
        node*n=head->next;
        delete head;
        head=n;
    }
    // void print(node*head){
    //     while(head!=NULL){
    //         cout<<head->data<<"->";
    //         head=head->next;
    //     }
    // }
class Queue{
    int cs;
    node*head=NULL;
    
    public:
        Queue(){
            cs=0;
        }
        bool isEmpty(){
            return cs==0;
        }
        void push(int data){
            insertAtTail(head,data);
            cs++;
        }
        void pop(){
            if(!isEmpty()){
                deletefromhead(head);
                cs--;
            }
        }
        int front(){
            return head->data;
        }
};
    
int main() {

    Queue q;
    for(int i=1;i<=10;i++){
        q.push(i);
    }
    // q.push(1);
    // q.push(2);
    // q.push(3);
    q.pop();
    q.push(8);
    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
