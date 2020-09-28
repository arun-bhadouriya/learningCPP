#include<iostream>
using namespace std;

void spiralprintfunc(int a[][1000],int rows,int cols){
    int RS=0,CS=0,RE=rows-1,CE=cols-1;

    while(RS<=RE and CS<=CE){
        for(int i=CS;i<=CE;i++){
            cout<<a[RS][i]<<" ";
        }
        RS++;
        for(int i=RS;i<=RE;i++){
            cout<<a[i][CE]<<" ";
        }
        CE--;

        if(RE>RS){
            for(int i=CE;i>=CS;i--){
                cout<<a[RE][i]<<" ";
            }
        }
        RE--;

        if(CS<CE){
            for(int i=RE;i>=RS;i--){
                cout<<a[i][CS]<<" ";
            }
        }
        CS++;
    }
    cout<<endl;
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

    spiralprintfunc(a,m,n);
}