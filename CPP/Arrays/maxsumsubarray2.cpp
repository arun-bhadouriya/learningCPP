#include<iostream>
using namespace std;

//Q. >> max sum of the subarray using cumulative sum .....

//generate subarrays function
void maxSumOfSubarray(int *a,int n){
    int max=0,sum;
    int cumsum[1000];
    
    // building the cumsum array 
    for(int i=0;i<n;i++){
        cumsum[i]=a[i]+cumsum[i-1];
    }

    //this is the cumulativesum array 
    cout<<"cumsum array is : ";
    for(int i=0;i<n;i++){
        cout<<cumsum[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){    
        for(int j=i;j<n;j++){
            //current sum of the subarray incoming here
            sum=cumsum[j]-cumsum[i-1];

            // updating if the sum is greater then maxsum
            if(sum>max) max=sum;
        }
        
    }
 
    cout<<"max sum is: " <<max<<endl;
}

//main function goes here
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