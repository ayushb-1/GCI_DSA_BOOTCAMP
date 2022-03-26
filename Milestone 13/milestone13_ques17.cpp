// Write a program in C to calculate the power of any number using recursion
#include <iostream>

using namespace std;
 
long int CalcPow(int x,int y)
{
    long int result=1;
    if(y == 0) 
    return result;
    result=x*(CalcPow(x,y-1));  
}

int main()
{
    int Num,pwr;
    long int result;
    cout<<" Input the base  value : ";
    cin>>Num;
    cout<<endl;
     
    cout<<" Input the value of power : ";
    cin>>pwr;
     
    result=CalcPow(Num,pwr);
     
    cout<<" The value of "<<num<<" to the power of "<<pwr<<" is : "<<result;
     
    return 0;
}
