#include <stdio.h>
#define max_temp 80

void check_temperature(int temp) 
{
    static int count = 0; 
    if (temp > max_temp) 
    {
        count++;  
        printf("Warning: Temperature %d°C exceeds the maximum limit!\n", temp);
        printf("%d time(s) limit exceeded.\n", count);
    } else {
        printf("Temperature %d°C is inside limit\n", temp);
    }
    
}

int main() {
    int temp;
    char check;
    printf("Enter temperature: ");
    scanf("%d",&temp);
    check_temperature(temp);
    printf("enter 'e' to exit the program or enter any key to continue");
    getchar();
    scanf("%c", &check);
    if(check=='E' || check=='e')
    {
    	return 0;
	}
	else
	{
	    while(check != 'e' && check != 'E'){
	    	printf("enter temperature");
            scanf("%d",&temp);
            check_temperature(temp);
            printf("enter 'e' to exit the program or enter any key to continue");
            getchar();
            scanf("%c", &check);
	    }

    return 0;
   }
}
