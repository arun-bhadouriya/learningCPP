#include<iostream>
#include<cstring>
using namespace std;

string compression(string s){
	int len=s.length();
	
	string s2="";
	int i=0;
	while(i<len){
		char curr=s[i];
        int freq=0;
        int j=i;
		while(s[j]==curr){
			if(s[j]==curr){
				freq++;
			}
            j=j+1;
		}
		s2+=curr;
		s2+=to_string(freq);
		i=j;
	}
	return s2;
}

int main() {
	string s;
	cin>>s;

	cout<<compression(s);
	return 0;
}