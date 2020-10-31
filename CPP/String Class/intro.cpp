#include<iostream>
#include<cstring>
using namespace std;

int main(){
    //string init
    string s0;
    string s("Hello");
    string sa = "Hello World";
    string s3(sa);
    string s4 =s3;

    char a[]={'a','b','c','\0'};
    string s5(a);
    // int len=strlen(sa.c_str()); 
    int len= sa.length(); 
    cout<<len;
    cout<<s0<<endl;
    cout<<s<<endl;
    cout<<sa<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;



    //methods ,append
    s0.append("i love you");
    cout<<s0<<endl;
    s0+="and cpp";
    cout<<s0<<endl;

    //remove
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    //compare two strings
    s0="Apple";
    s="Mango";
    cout<<s.compare(s0)<<endl;


    return 0;

}