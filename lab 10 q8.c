#include <stdio.h>


int Search(int arr[],int value,int size,int index)
 {
    if (index >= size)
 {
        return -1;   
    }

    if (arr[index] == value)
 {
        return index+1;  
    }

       return Search(arr,value,size, index + 1);
}

int main() 
{
	int n,value,index=0;
	printf("enter array size: ");
	scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
    	printf("enter element %d: ",i+1);
    	scanf("%d",&arr[i]);
	}
    printf("Enter value to search: ");
    scanf("%d", &value);
    int flag = Search(arr,value,n,index);

    if (flag != -1) 
    {
        printf("Element %d found at index %d.\n", value,flag);
    } else 
    {
        printf("Element %d not found in the array.\n",value);
    }

    return 0;
}
