#include<iostream>
using namespace std;

void waveprintfunc(int a[][1000],int rows,int cols){
    for(int i=0;i<cols;i++){
        if(i%2==0){
            for(int j=0;j<rows;j++){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=rows-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
    }
}

int main(){
    int m,n;
    cin>>m>>n;

    int a[1000][1000];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    waveprintfunc(a,m,n);
}