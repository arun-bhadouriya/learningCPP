#include<iostream>
using namespace std;

//generate subarrays function
void generateSubarrays(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
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

    //generating subarrays
    generateSubarrays(a,n);
}