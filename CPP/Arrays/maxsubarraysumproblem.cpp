#include<iostream>
using namespace std;

//Q. >> solving maximum sum subarray using kadane's Sum algorithm

void maxSumOfSubarray(int *a,int n){
    int cs=0;
    int ms=0;
    for(int i=0;i<n;i++){
        //adding elements to cs
        cs=cs+a[i];
        //if at any point cs is negative then assign cs =0;
        if(cs<0) cs=0;
        //if cs is greter than ms then update the maximum sum ,ms.
        if(cs>ms) ms=cs;
    }

    cout<<"max sum is : "<<ms<<endl;
}

int main(){
    int n;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //generating subarrays
    maxSumOfSubarray(a,n);
}