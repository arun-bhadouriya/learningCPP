#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

string extractStringAtKey(string str,int key){
    char *s=strtok((char*)str.c_str()," ");

    while(key>1){
        s=strtok(NULL," ");
        key--;
    }

    return (string) s;
}

int main(){
    int n;
    cin>>n;

    string s[100];
    cin.get();
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }

    int key;
    string reverse,comparision;

    cin>>key>>reverse>>comparision;

    // cout<<*s<<endl;
    

}