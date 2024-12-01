#include <stdio.h>
#define conversionConst 0.001

float convert_m_to_km(float value)
{
    static int Count = 0;  
    Count++;  
    printf("convert_m_to_km has been called %d times.\n", Count);
    return value * conversionConst;
}

int main() 
{
    float m,km;
    char check;
    printf("Enter distance in meters: ");
    scanf("%f", &m);
    if(m<0)
    {
        printf("Invalid distance entered please reenter: ");
        scanf("%f", &m);
    }
    km = convert_m_to_km(m);
    printf("%.2f meters is equal to %.4f kilometers.\n", m, km);
    printf("enter 'e' to exit the program or enter any key to continue");
    getchar();
    scanf("%c", &check);
    if(check=='E' || check=='e'){
    	return 0;
	}
	else{
	    while(check != 'e' && check != 'E'){
	       printf("\nEnter another distance in meters: ");
           scanf("%f", &m);
           if(m<0)
                {
                    printf("Invalid distance entered please reenter: ");
                    scanf("%f", &m);
                }
           km= convert_m_to_km(m);
           printf("%.2f meters is equal to %.4f kilometers.\n", m, km);
           printf("enter 'e' to exit the program or enter any key to continue");
           getchar();
           scanf("%c", &check);
       }
   return 0;
   }
}
