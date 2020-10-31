#include<iostream>
using namespace std;

int main(){
    int n=20;
    int * ptr=&n; // address of operator


    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    //address of operator does not work for chars

    //exAMPLE
     char p='a';
     char *pptr=&p;

     cout<<(int *)pptr<<endl;
     cout<<*pptr<<endl;

}