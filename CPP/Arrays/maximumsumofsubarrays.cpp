#include<iostream>
using namespace std;

//generate subarrays function
void maxSumOfSubarray(int *a,int n){
    int max=0,sum;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
              sum+=a[k];   
            }
            if(max<sum) max=sum;
        }
    }
    cout<<"Max sum is : "<<max<<endl;
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