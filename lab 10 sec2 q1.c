#include <stdio.h>


struct Flight{
    int flightNo;
    char departureCity[30];
    char destinationCity[30];
    char date[20];
    int availableSeats;
};

void displayDetails(struct Flight f1) {
    printf("Flight Details:\n");
    printf("Flight Number: %d\n", f1.flightNo);
    printf("Departure City: %s\n", f1.departureCity);
    printf("Destination City: %s\n", f1.destinationCity);
    printf("Date: %s\n", f1.date);
    printf("Available Seats: %d\n", f1.availableSeats);
}

void bookSeat(struct Flight *f1) {
    if (f1->availableSeats > 0) {
        f1->availableSeats--;
        printf("Seat booked successfully! Remaining seats: %d\n", f1->availableSeats);
    } else {
        printf("Sorry, no seats available on this flight.\n");
    }
}

int main() {
    
    struct Flight f1 = {23, "kuwait", "Abu dhabi", "20-1-2006",50};

    int choice;

    do {
        printf("Flight Management System\n");
        printf("1. DisplayFlight Details\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayDetails(f1);
                break;
            case 2:
                bookSeat(&f1);
                break;
            case 3:
                printf("Exit\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    } while (choice != 3);

    return 0;
}

