#include<iostream>
#include<climits>
using namespace std;

int main(){

    //inputting an array from user
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //finding largest and smallest number
    int min=INT_MAX;
    int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
        else if(max<a[i]){
            max=a[i];
        }
    }

    cout<<"Max is : "<<max<<endl;
    cout<<"Min is : "<<min<<endl; 

}