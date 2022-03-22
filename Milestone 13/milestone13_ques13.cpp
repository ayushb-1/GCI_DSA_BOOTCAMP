//Write a program in C to find the LCM of two numbers using recursion 
#include<iostream>
 
 using namespace std;

int LCM(int num1,int num2){
    static int m=0;
    m+=num2;
    if((m%num1==0) && (m%num2==0))
    {
        return m;
    }
    else 
    {
        LCM(num1,num2);
    }

}
int main(){
int a,b,result;
cout<<"Enter the two numbers: ";
cin>>a>>b;
if(a<b)
    result=LCM(a,b);
else
    result=LCM(b,a);
cout<<"The LCM of "<<a<<"and "<<b<<"is :"<<result;
return 0;
}