#include<iostream>
#include<cstring>
using namespace std;

bool ispalindrome(int a[],int n){
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-1-i]) return false;
	}
	return true;
}

int main() {
	int n;
	cin>>n;

	int arr[100]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	ispalindrome(arr,n)?cout<<"true":cout<<"false" ;
	
	return 0;
}