#include <iostream>

using namespace std;
void EvenAndOdd(int stVal, int n)
{
    if(stVal > n)
        return;
    printf("%d  ", stVal);
    EvenAndOdd(stVal+2, n);
}

int main()
{
    int n;
     
    cout<<" Input the range to print starting from 1 : ";
    cin>>n;
    cout<<endl;
     
    cout<<" All even numbers from 1 to "<<n<<" are : ";
    EvenAndOdd(2, n);
    cout<<" All odd numbers from 1 to "<<n<<" are : ";
    cout<<endl;
    EvenAndOdd(1, n);
     
    return 0;
}
