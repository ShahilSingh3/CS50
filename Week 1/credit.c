#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <cs50.h>
int main(void)
{
    long long card_no, temp;
    int current, even_sum = 0, odd_sum = 0, final_sum = 0;
    bool is_even = false;
    int count = 0;
    do
    {
        // get the card no
        card_no = get_long_long("Number: ");
        temp = card_no;
        // It has to be greater than 0
    } while (card_no < 0);
    // Run until the card no becomes 0
    while (card_no != 0)
    {
        // the current last digit
        current = card_no % 10;
        count++;
        // check if its at even places
        if (is_even)
        {
            current *= 2;
            // run until current perishes
            while (current != 0)
            {
                // add last digit of current
                even_sum += (current % 10);
                current /= 10;
            }

            // Now this must be false for the program to move to the else block next time
            is_even = false;
        }
        else
        {
            odd_sum += current;
            is_even = true;
        }
        card_no /= 10;
    }
    final_sum = even_sum + odd_sum;
    int n = final_sum % 10;
    int ffdigits = 0;
    if (n != 0)
    {
        printf("INVALID\n");
    }

    if (n == 0)
    {
        if (count == 13 || count == 15 || count == 16)
        {
            if (count == 13)
            {
                ffdigits = temp / 1000000000000;
                if (ffdigits == 4)
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            if (count == 16)
            {
                ffdigits = temp / 1000000000000000;
                if (ffdigits == 4)
                {
                    printf("VISA\n");
                }
                else
                {
                    ffdigits = temp / 100000000000000;
                    if (ffdigits > 50 && ffdigits < 56)
                    {
                        printf("MASTERCARD\n");
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
            }
            if (count == 15)
            {
                ffdigits = temp / 10000000000000;

                if (ffdigits == 34 || ffdigits == 37)
                {
                    printf("AMEX\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
}