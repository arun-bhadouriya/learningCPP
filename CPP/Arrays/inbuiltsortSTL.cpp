#include<iostream>
#include<algorithm>
using namespace std;

int cmp(int a,int b){
        return a<b;
}
int main(){
    int n;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //inbuilt sort in STL 
    //we can also pass third argument here as comparator to get the list sorted in ascending/descending order

    sort(a,a+n,cmp);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}