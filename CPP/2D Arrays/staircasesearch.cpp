#include<iostream>
using namespace std;

void staircaseSearch(int a[][1000],int n,int key){
    int i=0;
    int j=n-1;

    while(i<n and j>=0){
        if(a[i][j]==key){
            cout<<"Found at index ("<<i<<","<<j<<")"<<endl;
            return;
        }
        else if(a[i][j]<key){
            i++;
        }
        else if(a[i][j]>key){
            j--;
        }
    }

    cout<<"element not found"<<endl;
    return;
}

int main(){
    int n,key;
    cin>>n;

    cout<<"enter the element u want to search?"<<endl;
    cin>>key;

    int a[1000][1000];
    int val=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            val=val+1;
            a[i][j]=val;
        }
    }

    staircaseSearch(a,n,key);

    return 0;
}