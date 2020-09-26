#include<iostream>
using namespace std;

int main(){
    int n,key;
    cin>>n;

    int a[1000]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //asking user what to search
    cout<<"Enter a number you want to search ?"<<endl;
    cin>>key;

    //write a linear search
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<"Found at index : "<<i<<endl;
            break;
        }
    }

}