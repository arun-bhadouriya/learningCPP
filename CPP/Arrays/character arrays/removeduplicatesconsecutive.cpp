#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicates(char a[]){
    int len =strlen(a)-1;
    int i=0; int j=i+1;
    while(j<=len){
        // int j=i+1;
        if(a[i]==a[j]) j++;
        else if(a[i]!=a[j]){
            i++;
            a[i]=a[j];
            j++;
        }
    }
    a[i+1]='\0';
    cout<<a<<endl;
}

int main(){
    char a[1000];
    cin.getline(a,1000);

    removeDuplicates(a);
}