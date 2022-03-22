// Write a program in C to reverse a string using recursion
#include<iostream>
#include<string.h>
using namespace std;
void findrev(char string[],int i, int n)
{
    char ch;
    if(i>=n)
    return;
    ch=string[i];
    string[i]=string[n];
    string[n]=ch;
    findrev(string,++i,n-1);

}
int main(){
char str[100];
cout<<"Enter the string: ";
cin>>str;
cout<<endl;
findrev(str,0,strlen(str)-1);
cout<<"reverse string: "<<str;
return 0;
}