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

    //write a binary search
    int start=0;
    int end=n-1;
    while(start<=end){

        int mid=(start+end)/2;

        if(a[mid]==key){
            cout<<"Found at index : "<<mid<<endl;
            break;
        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }


}