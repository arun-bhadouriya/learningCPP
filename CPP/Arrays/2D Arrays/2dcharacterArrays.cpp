#include<iostream>
using namespace std;

int main(){
    char a[][1000]={{'a','b','c','\0'},{'a','r','u','n','\0'}};
    char b[][100]={"arun","bhadouriya"};

    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<b[0]<<endl;
    cout<<b[1]<<endl;

    //updating a character;
    a[1][1]='t';
    a[1][3]='l';
    cout<<a[1]<<endl;
    return 0;
}