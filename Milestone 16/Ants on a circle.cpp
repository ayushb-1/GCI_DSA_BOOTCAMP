#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    int temp;
    for(int i=0; i<n;i++)// For number of pass
    {
        for(int j=0;j<n-1-i;j++) //For comparison in each pass
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
}
int main() {
	
	int N,x;
	int M,T,y;
	int i;
	cin>>N>>M>>T;
	int arr[M];
	int temp=M;
	while(temp--)
	{
		cin>>x,y;
		x=(N+x+(T*y%N))%N;
		if(x==0){
		x=N;
		}
		arr[i]=x;
		i++;
	}
	bubblesort(arr,M);
	for(i=0;i<M;i++)
	{
		cout<<arr[i]<<" ";
	}
}