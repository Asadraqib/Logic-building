#include <stdio.h>

int main(){
    printf("********ATM SYSTEM********\n\n");

    int pin, userpin, key = 0;

    printf("*You are a first time user*\n");
    printf("Enter your 4 digit PIN: ");
    scanf("%d", &pin);

    while (pin > 9999 || pin < 1000){
        printf("Enter a Valid PIN: ");
        scanf("%d", &pin);
    }

    printf("*****PIN has been added*****\n\n");

    while (key == 0){
        printf("Enter your PIN to access ATM: ");
        scanf("%d", &userpin);
        if (userpin == pin){
            printf("*****Access Granted*****\n");
            key = 1;
        } else {
            printf("Access Denied\n");
        }
    }

    int choice, balance = 0, deposit, withdraw;
    int history[5] = {0};
    int hist_index = 0, i;

    do{
        printf("\n----- ATM MENU -----\n");
        printf("1. Balance Enquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Transaction History\n");
        printf("5. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Your Balance is %d\n", balance);
                break;

            case 2:
                printf("Enter Deposit Amount: ");
                scanf("%d", &deposit);

                balance += deposit;

                if (hist_index < 5){
                    history[hist_index] = deposit; // Credit
                    hist_index++;
                }

                printf("*****Deposit Successful*****\n");
                break;

            case 3:
                printf("Enter Withdraw Amount: ");
                scanf("%d", &withdraw);

                if (withdraw <= balance){
                    balance -= withdraw;

                    if (hist_index < 5){
                        history[hist_index] = -withdraw; // Debit
                        hist_index++;
                    }

                    printf("*****Withdrawal Successful*****\n");
                } else {
                    printf("*****Insufficient Balance*****\n");
                }
                break;

            case 4:
                printf("\n--- Transaction History ---\n");
                for (i = 0; i < hist_index; i++){
                    if (history[i] > 0){
                        printf("Credit  +%d\n", history[i]);
                    } else {
                        printf("Debit   %d\n", history[i]);
                    }
                }
                break;

            case 5:
                printf("*****Thank You for using ATM*****\n");
                break;

            default:
                printf("*****Enter Valid Choice*****\n");
        }

    } while (choice != 5);

    return 0;
}
