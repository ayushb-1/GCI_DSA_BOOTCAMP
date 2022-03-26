#include <iostream>
#include <string.h>
 
 using namespace std;

void checkPalindrome(char c[], int index )
{
    int len = strlen(c) - (index + 1);
    if (c[index] == c[len])
    {
        cout<<" The entered word is a palindrome";
            return;
        checkPalindrome(c, index + 1);
    }
    else
    {
        cout<<" The entered word is not a palindrome";
    }
}
 
int main()
{
    char string[25];
    
 
    cout<<" Input  a word to check for palindrome : ";
    cin>>string;
    checkPalindrome(string, 0);
 
    return 0;
}