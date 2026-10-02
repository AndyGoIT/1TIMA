#include <stdio.h>

int calculateFee(int type, int hours) {
    int fee;
    switch (type) {
        case 1:
            fee = 2000 * hours;
            break;
        case 2:
            fee = 5000 * hours;
            break;
        default:
            return -1;
    }

    // Maximum charge Rp50.000
    if (fee > 50000) {
        fee = 50000;
    }
    return fee;
}

int main() {
    int type, hours;
    int fee;
    int choice;

    do {
        printf("\n=== PARKING FEE SYSTEM ===\n");
        printf("\nVehicle Type\n");
        printf("1. Motorcycle\n");
        printf("2. Car\n");
        printf("\nChoose: ");
        scanf("%d", &type);
        if (type < 1 || type > 2) {
            printf("Invalid Vehicle Type!\n");
        }
        else {
            printf("Parking Duration (hours): ");
            scanf("%d", &hours);
            if (hours <= 0) {
                printf("Invalid Parking Duration!\n");
            }
            else {
                fee = calculateFee(type, hours);
                printf("Parking Fee: Rp%d\n", fee);
            }
        }
        printf("\nCalculate again?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("Choose: ");
        scanf("%d", &choice);
    } while (choice == 1);
    printf("\nProgram exited.\n");
    return 0;
}