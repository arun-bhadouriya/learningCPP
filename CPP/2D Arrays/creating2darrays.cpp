#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int a[m][n];

    //taking input from the user
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    //outputting the 2d array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}