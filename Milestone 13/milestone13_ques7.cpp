#include<iostream>
using namespace std;

int GCD(int a, int b){
    while(a!=b){
        if(a<b)
        
            return GCD(a,b-a);
            else
            return GCD(a-b,b);
        
    }
    return a;
}
int main(){
int num1,num2,gcd;
cout<<"Enter the numbers: ";
cin>>num1>>num2;
cout<<endl;
gcd=GCD(num1,num2);
cout<<"The GCD of the two numbers is: "<<gcd;
return 0;
}