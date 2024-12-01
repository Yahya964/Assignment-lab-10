#include<stdio.h>
void bubblesort(int arr[], int n)
{
	int temp;
	if(n<=1)
	{ 
	   return;
	}
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			temp=arr[i];
		    arr[i]=arr[i+1];
		    arr[i+1]=temp;
	    }
	    
	}
	bubblesort(arr,n-1);
	printf("%d ",arr[n-1]);
	
	
}
int main()
{
	int arr[]={8,6,4,5,9,7,1};
	int a=(sizeof(arr)/sizeof(arr[0]));
	bubblesort(arr,a);
	
}