#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "cs50.c"
#include <cs50.h>
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int change;
    do
    {
       //printf("Change owed: ");
        // scanf("%d", &change);
        change = get_int("Change owed: ");
        // n=isdigit(change);
    }
    while (change < 0);
    return change;
}

int calculate_quarters(int cents)
{
    int count = 0;
    if (cents >= 25)
        //proceed only if the value is greater than 25(1 cent = 25)
    {
        do
        {
            // will increase the count atleast once
            count++;
            cents = cents - 25;
        }
        while (cents >= 25);
    }
    return count;
}

int calculate_dimes(int cents)
{
    int count = 0;
    if (cents >= 10)
        //proceed only if the value is greater than 10
    {
        do
        {
            //will increment atleast once
            count++;
            cents = cents - 10;
        }
        while (cents >= 10);
    }
    return count;
}

int calculate_nickels(int cents)
{
    int count = 0;
    if (cents >= 5)
        //proceed only if the value is greater than 5
    {
        do
        {
            //wil increment atleast once
            count++;
            cents = cents - 5;
        }
        while (cents >= 5);
    }
    return count;
}

int calculate_pennies(int cents)
{
    int count = 0;
    if (cents >= 1)
    {
        do
        {
            count++;
            cents = cents - 1;
        }
        while (cents >= 1);
    }
    return count;
}


/*
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <cs50.h>
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int change;
    do
    {
        printf("Change owed: ");
        // scanf("%d", &change);
        change = get_int("Change owed: ");
        // n=isdigit(change);
    }
    while (change < 0);
    return change;
}

int calculate_quarters(int cents)
{
    int count = 0;
    if (cents >= 25)
        //proceed only if the value is greater than 25(1 cent = 25)
    {
        do
        {
            // will increase the count atleast once
            count++;
            cents = cents - 25;
        }
        while (cents >= 25);
    }
    return count;
}

int calculate_dimes(int cents)
{
    int count = 0;
    if (cents >= 10)
        //proceed only if the value is greater than 10
    {
        do
        {
            //will increment atleast once
            count++;
            cents = cents - 10;
        }
        while (cents >= 10);
    }
    return count;
}

int calculate_nickels(int cents)
{
    int count = 0;
    if (cents >= 5)
        //proceed only if the value is greater than 5
    {
        do
        {
            //wil increment atleast once
            count++;
            cents = cents - 5;
        }
        while (cents >= 5);
    }
    return count;
}

int calculate_pennies(int cents)
{
    int count = 0;
    if (cents >= 1)
    {
        do
        {
            count++;
            cents = cents - 1;
        }
        while (cents >= 1);
    }
    return count;
}

*/