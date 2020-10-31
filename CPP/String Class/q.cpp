#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s1,s2="";
	cin>>s1;
	int i=0;
	int j=1;
    int len=s1.length()-1;
	while(len){
		int diff=((int)s1[j]) - ((int)s1[i]);
        // cout<<diff;
        s2+=s1[i];
        s2+=to_string(diff);
        i++;
        j++;
        len--;
	}
    s2+=s1[i];	
	cout<<s2<<endl;

	return 0;
}