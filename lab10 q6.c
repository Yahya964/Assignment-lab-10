#include<stdio.h>
struct travelpackages{
	char package_name[20];
	char destination[20];
	int duration;
	float cost;
	int no_ofseats;
};

// function to display packages
void display_packages(struct travelpackages packages[])
    	{
    		int i;
			for(i=0;i<5;i++)
			{
				printf("\n%d:\n",i+1);
				printf("%s\n",packages[i].package_name);
				printf("%s\n",packages[i].destination);
				printf("%d days\n",packages[i].duration);
				printf("Rs.%.2f\n",packages[i].cost);
				printf("%d seat(s) available\n",packages[i].no_ofseats);
			}
     	}
     	
//function to book a package   	
void book_a_package(struct travelpackages packages[])
{
	int ch,n;
	printf("Enter packages you want to book: ");
	scanf("%d",&ch);
	if(ch<1 || ch>5)
	{
		printf("invalid choice");
		return;
	}
	printf("Enter seats you want to book: ");
	scanf("%d",&n);
	if(packages[ch-1].no_ofseats<n)
	{
		printf("Not enough seats, only %d seats available for this package",packages[ch-1].no_ofseats);
	}
	else
	{
		packages[ch-1].no_ofseats-=n;
		printf("booking successful! %d seats booked for %s",n,packages[ch-1].package_name);
	}
}

int main()
{
	int choice;
	struct travelpackages tpackage[5]={
        {"Beach Getaway", "Maldives", 7, 1500.0, 10},
        {"Cultural Adventure", "Japan", 10, 2500.0, 5},
        {"Wildlife Safari", "Kenya", 5, 1200.0, 8},
        {"City Explorer", "New York", 4, 800.0, 12},
        {"Mountain Retreat", "Switzerland", 6, 2000.0, 6}
    };
    
	printf("enter 1 to see all packages\nenter 2 to book a package: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			display_packages(tpackage);
			break;
		case 2:
			book_a_package(tpackage);
			break;
			
			
	}
}