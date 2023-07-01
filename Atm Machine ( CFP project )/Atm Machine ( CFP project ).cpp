#include<stdio.h> 
#include<stdlib.h>
int curr_bal = 200000, rem_balance, count_w = 0, count_d = 0;
void balance()
{
    int ent;
    printf("\nThe crrent balance is RS.%d/", curr_bal);

}
void withdraw()
{
    int i = 1, ent, wamount;
    printf("\nThe current balance is %d", curr_bal);
    printf("\nPlease enter the Amount to be withdraw :");
    scanf("%d", &wamount);
    if (wamount % 500 != 0)
    {
        printf("\nInvalid input\nThese must be multiples of 500 ");

    }
    if (wamount > 25000 || wamount < 500)
    {
        printf("\nInvalid input \n these must be less then 25000 and greater then 500");
    }
    printf("\nYou have withdrawn amount RS. %d \nPlease take your amount", wamount);
    curr_bal = curr_bal - wamount;
    printf("\nYouy remaning balance is RS. %d \n", curr_bal);
}
void deposit()
{
    int damount;
    printf("\nThe current balance is %d", curr_bal);
    printf("\nPlease enter the Amount to be deposit :");
    scanf("%d", &damount);
    if (damount % 500 != 0)
    {
        printf("\nInvalid input\nThese must be multiples of 500 ");
    }
    if (damount > 25000 || damount < 500)
    {
        printf("\nInvalid input \n these must be less then 2500 and greater then 500");
    }
    printf("\nYouy have deposit amount RS. %d \nPlease take your amount", damount);
    curr_bal = curr_bal + damount;
    printf("\nYouy remaning balance is RS. %d \n", curr_bal);
}
void pinchange()
{
    int ent, i = 1, npin, rpin, newpin;
    printf("\nEnter a 4 digit new pin ;");
    scanf("%d", &npin);
    printf("\nEnter again :");
    scanf("%d", &rpin);
    if (npin == rpin)
    {
        printf("\nYou have succesfully changed pin\n");
        newpin = npin;
        printf("\nNew pin is %d", newpin);
    }
    while (npin != rpin)
    {
        printf("\nENTER THE SAME PIN");
        i++;
        if (i == 3)
        {
            printf("\nYou have inputed 3 times");
            if (ent == 0)
                break;
        }

    }
    if (ent == 200)
        exit(0);
}
int main()
{
    int d, option, i = 2, initial_pin = 6897, pin, ent;
    printf("\nEnter a 4 digit pin:");
    scanf("%d", &pin);
    while (pin != initial_pin)
    {

        printf("\nINVALID PIN\nEnter Again");

        printf("\nEnter pin for %d time :", i);
        scanf("%d", &pin);

        if (i == 3)
        {
            printf("\nYou have entered invalid pin for %d time", i);
            exit(0);
        }
        i++;
    }
    printf("\n You have Entered the correct PIN !!!");
    while (1)
    {
        printf("\nThe main menu is as follows : \n1 Balance Enquiry\n2 Amount Withdraw \n3 Amount Deposit\n4 Change the PIN\n5 Exit\n");
        printf("\nPlease Enter one of the following options:");
        scanf("%d", &option);
        switch (option)
        {
        case 1: printf("\nYou have entered option 1");
            balance();
            printf("\nEnter 0 to etrun to main menu and 200 to exit\n");
            scanf("%d", &ent);
            while (ent == 0)
                break;
            if (ent == 200)
                exit(0);
            break;
        case 2: printf("\nYou have entered option 2");
            while (count_w != 3)
            {
                count_w++;
                withdraw();
                printf("\nEnter 0 for returning to main menu & 100 for another transaction :");
                scanf("%d", &ent);
                if (ent == 0)
                    break;
                if (ent == 200)
                    exit(0);
                if (ent == 100)
                    printf("\nDo another transaction:");
            }
            if (ent == 0)
                break;
            printf("\nYou have withdrawn amount for 3 times Which is Limit for a Day\nThanks\nYour current Balance is %d ", curr_bal);
            exit(0);
            break;
        case 3: printf("\nYou have entered option 3");
            while (1)
            {
                count_d++;
                deposit();
                printf("\nEnter 0 for returning to main menu & 100 for another transaction :");
                scanf("%d", &ent);
                if (ent == 0)
                    break;
                if (ent == 200)
                    exit(0);
            }
            break;
        case 4: printf("\nYou have enered option 4");
            pinchange();
            break;
        case 5: printf("\nYou have enered option 5");
            exit(0);
        }
    }
    getchar();
    return 0;
}
