#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt for card number
    long cardnumber = get_long("Credit Card Number: ");

    //calculate number of digits
    int counter = 0;
    long sample = cardnumber;

    while (sample != 0)
    {
        counter++;
        sample /= 10;
    }


    //sum of digits x 2
    long i;
    int sum1 = 0;
    int digitx2;

    for (i = 100; i < (cardnumber * 10); i = i * 100)
    {
        digitx2 = (((cardnumber % i) / (i / 10)) * 2);
        //take individual digits if number is greater than 9r
        if (digitx2 > 9)
        {
            digitx2 = 1 + (digitx2 % 10);
        }

        sum1 = sum1 + digitx2;
    }

    //sum of the rest of the digits
    long j;
    int sum2 = 0;

    for (j = 10; j < (cardnumber * 10); j = j * 100)
    {
        sum2 = (sum2 + ((cardnumber % j) / (j / 10)));
    }


    //culculate checksum
    int checksum = ((sum1 + sum2) % 10);

    if (checksum != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    //determine type of card or invalid

    if (counter == 13 && (cardnumber / (1000000000000)) == 4)
    {
        printf("VISA\n");
    }
    else if (counter == 15 && ((cardnumber / (100000000000000)) == 34 || ((cardnumber / (10000000000000)) == 37)))
    {
        printf("AMEX\n");
    }
    else if (counter == 16 && ((cardnumber / 100000000000000) == 51 || (cardnumber / 100000000000000) == 52
                               || (cardnumber / 100000000000000) == 53 || (cardnumber / 100000000000000) == 54
                               || (cardnumber / 100000000000000) == 55))

    {
        printf("MASTERCARD\n");
    }
    else if (counter == 16 && ((cardnumber / (1000000000000000)) == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

}





