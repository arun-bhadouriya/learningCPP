#include<iostream>
using namespace std;

bool cmp(int a,int b){
    return a<b;
}


// See how we can pass a function as a parameter to a function 
void bubbleSort(int *a,int n,bool (&cmp)(int a,int b)){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(cmp(a[i],a[j])){
                swap(a[i],a[j]);
            }
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

    bubbleSort(a,n,cmp);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}