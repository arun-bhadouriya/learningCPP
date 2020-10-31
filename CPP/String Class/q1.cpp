#include<iostream>
#include<cstring>
using namespace std;

void printANS(string s1,string s2){
    int len=s1.length();
    string ans="";
    int i=0;int j=1;
    while(len){
        if(s1[i]=='0' && s2[i]=='0'){
            ans+='0';
            len--;
            i++;
        }
        else if(s1[i]=='1' && s2[i]=='1'){
            ans+='0';
            len--;
            i++;
        }
        else{
            ans+='1';
            len--;
            i++;
        }
    }
    cout<<ans<<endl;
}

// int stringToint(string s){
//     int ans=0;
//     int p=1;
//     for(int i=0;i<s.length()-1;i++){
//         int lstdigit=s/10;
//         ans=ans+lstdigit*p;
//         p*=10;
//     }
//     return ans;
// }


int main() {
	int t;
	cin>>t;

	string s1,s2;
	for(int i=0;i<t;i++){
		cin>>s1>>s2;
		printANS(s1,s2);
	}

	return 0;
}