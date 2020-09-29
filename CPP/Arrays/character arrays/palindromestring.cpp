#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char *a){

    int len=strlen(a)-1;
    for(int i=0;i<len;i++){
        if(a[i]!=a[len-i]){
            return false;
        }
    }
    return true;
}

int main(){

    char a[1000];
    cin.getline(a,1000);

    int ans=isPalindrome(a);
    if(ans){
        cout<<"Palindromic String"<<endl;
    }
    else{
        cout<<"Not Palindromic String"<<endl;
    }

    return 0;

}