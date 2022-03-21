#include<iostream>
using namespace std;
void display(int arr[], int st,int l){
    if(st>=l){
        return ;
    }
    cout<<arr[st]<<endl;
    display(arr,st+1,l);

}
int main(){
int n;
cout<<"Enter the number of elements to be entered: ";
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cout<<"element i: ";
    cin>>array[i];
}
cout<<"elements are:" <<endl; 
display(array,0,n);

return 0;
}