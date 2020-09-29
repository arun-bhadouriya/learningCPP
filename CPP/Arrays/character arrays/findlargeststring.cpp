//Question is to find out the largest string from given n string and also print out the length of that string

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[1000];
    char b[1000];
    cin.get();
    int maxlen=0;
    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        int len=strlen(a);
        if(len>maxlen){
            maxlen=len;
            strcpy(b,a);
        }
    }

    cout<<b<<endl<<maxlen<<endl;
    return 0;
}
