#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i;j<n;j++){
           if(a[min_idx]>a[j]) min_idx=j;
        }
        swap(a[i],a[min_idx]);
    }

    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ,";
    }
    cout<<endl;
}