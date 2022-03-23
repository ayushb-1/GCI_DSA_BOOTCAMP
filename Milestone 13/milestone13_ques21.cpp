// Write a program in C for binary search using recursion.
#include<iostream>

using namespace std; 

int binSearch(int array[],int n,int ele,int low,int up)
{
    int mid,c=0;
    if(low<=up)
    {
        mid=(low+up)/2;
        if(ele=array[mid])
        {
            c=1;
        }
        else if(ele<array[mid])
        {
            return binSearch(array,n,ele,low,mid-1);
        }
        else
        {
            return binSearch(array,n,ele,mid+1,up);
        }
    }
    else return c;
}
int main(){
int n,arr[10];
int c,up,low,ele;
cout<<"Enter the number of elements of array: ";
cin>>n;
cout<<endl;
cout<<"Enter elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter the element to be searched : ";
cin>>ele;
cout<<endl;
low=0;
up=n-1;
c=binSearch(arr,n,ele,low,up);
if(c==0)

    cout<<"element is not in the array";
else
    cout<<"Element Found!";

return 0;
}