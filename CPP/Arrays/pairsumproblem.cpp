#include<iostream>
using namespace std;

//question is to fin the pairs in a sorted array whose sum gives us the required sum as we want .

void findPair(int *a,int n,int key){
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int sum=a[start]+a[end];
        if(sum==key){
            cout<<a[start]<<" and "<<a[end]<<endl;
            start++;
            end--;
        }
        else if(sum>key){
            end--;
        }
        else{
            start++;
        }
    }
}

int main(){
    int n;
    cin>>n;
 
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key;
    cout<<"enter sum u want : ";
    cin>>key;
    findPair(a,n,key);
}