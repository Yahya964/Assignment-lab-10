#include<stdio.h>
void parray(int arr[], int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
		parray(arr,n-1);
	    printf("%d",arr[n-1]);
	    
	}
	
}
int main()
{
	int array[]={1,2,4,5,6,4,8,9};
	int a=(sizeof(array)/4);
	parray(array,a);
}