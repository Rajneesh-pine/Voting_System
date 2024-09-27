#include <stdio.h>
#include <string.h>

int v[3];  // Voting counts for 3 parties

void members()
{
    printf("Here is the list of the participants: \n");
    printf("1. BJP\n");
    printf("2. BSP\n");
    printf("3. Congress\n");
}

void vote()
{
    int d;
    members();
    printf("Now choose any one: ");
    scanf("%d", &d);
    switch (d)
    {
        case 1:
            v[0]++;
            printf("You have successfully given your vote to BJP.\n");
            break;
        case 2:
            v[1]++;
            printf("You have successfully given your vote to BSP.\n");
            break;
        case 3:
            v[2]++;
            printf("You have successfully given your vote to Congress.\n");
            break;
        default:
            printf("Please enter a valid option.\n");
            break;
    }
}

void voters()
{
    int h;
    char n[50], c[12];

    printf("You have entered the voter mode.\n");

    // Using goto to handle continuous voting
    voter_start:  // Label for the goto statement

    printf("Enter your name: ");
    scanf("%s", n);  // %s is for string

    printf("Enter your Aadhar card number: ");
    scanf("%s", c);

    if (((strcmp(n, "rajneesh") == 0) && (strcmp(c, "rajneesh123") == 0)) ||
        ((strcmp(n, "harshit") == 0) && (strcmp(c, "harshit1234") == 0)) ||
        ((strcmp(n, "dipanshu") == 0) && (strcmp(c, "dipanshu123") == 0)) ||
        ((strcmp(n, "mudit") == 0) && (strcmp(c, "mudit123456") == 0)))
    {
        printf("You are eligible to give a vote.\n");
        vote();
    }
    else
    {
        printf("You are not eligible for voting.\n");
    }

    printf("Press 1 to vote again or 0 to exit: ");
    scanf("%d", &h);
    if (h == 1)
    {
        goto voter_start;  // Reusing the label to allow continuous voting
    }
}

void result()
{
    int max = v[0], m = 0;

    // Determine the party with the maximum votes
    for (int i = 1; i < 3; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            m = i;
        }
    }

    // Display the results
    printf("The name of the party \t  \t no of votes gained\n");
    printf("\t 1. BJP \t  = \t %d \n", v[0]);
    printf("\t 2. BSP \t  = \t %d \n", v[1]);
    printf("\t 3. Congress \t  = \t %d \n", v[2]);

    // Display the winner
    switch (m)
    {
        case 0:
            printf("\nWinner is BJP with the maximum number of votes!\n");
            break;
        case 1:
            printf("\nWinner is BSP with the maximum number of votes!\n");
            break;
        case 2:
            printf("\nWinner is Congress with the maximum number of votes!\n");
            break;
        default:
            printf("No valid winner.\n");
            break;
    }
}

void main()
{
    int b = 0;
    int exit_program = 0;

    printf("Welcome to the Voting System!\n");

    while (!exit_program)
    {
        printf("\n1. Enter voter mode\n");
        printf("2. View results\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &b);

        switch (b)
        {
            case 1:
                voters();
                break;
            case 2:
                result();
                break;
            case 3:
                printf("\nThank you for visiting our site.\n");
                exit_program = 1;
                break;
            default:
                printf("Please enter a valid option.\n");
                break;
        }
    }
}
