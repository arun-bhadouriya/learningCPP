#include<iostream>
#include<cstring>
using namespace std;

char *mystrtok(char *str,char delim){
    //string and single char acts as a deliminator
    static char*input= NULL;
    if(str!=NULL){
        //we are making the frst call
        input = str;
    }

    //base case
    if(input==NULL){
        return NULL;
    }

    //start extracting tokens and store them in a diff dynamic array
    char *output= new char[strlen(input)+1];
    int i=0;
    for(;input[i]!='\0';i++){
        output[i]=input[i];
        if(input[i]==delim){
            output[i]='\0';
            input=input + i + 1;
            return output;
        }
    }

    //corner case 
    output[i]='\0';
    input =NULL;
    return output;
}

int main(){
    char s[1000]="Today is a rainy day";

    char *ptr = mystrtok(s , ' ');
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr=mystrtok(NULL,' ');
        cout<<ptr<<endl;
    }


    return 0;
}