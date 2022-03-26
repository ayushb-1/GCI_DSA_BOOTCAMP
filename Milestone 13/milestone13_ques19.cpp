#include <iostream>
#include<string>

using namespace std;
 
void copy(char str1[], char str2[], int index){
    str2[index] = str1[index];
    if (str1[index] == '\0')
        return;
    copy(str1, str2, index + 1);
}
int main()
{
    char str1[20], str2[20];
    cout<<" Enter the string : ";
    cin>>str1;
    copy(str1, str2, 0);
    cout<<" The string successfully copied"<<endl;
    cout<<" The first string is :"<<str1<<endl;
    cout<<" The copied string is :"<<str2;
    return 0;
}