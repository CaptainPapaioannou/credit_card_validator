# credit_card_validator
Program that takes a credit card number as input and reports back if it is a valid card number and if yes, if it is a VISA, MASTERCARD or AMEX (cs50 problem)

## Overview

This is a simple C program that prompts the user for a credit card number and determines whether it is a valid American Express, MasterCard, Visa, or an invalid card number. The program follows the format definitions for each type of card as described below:

- **American Express**: Numbers start with 34 or 37 and have 15 digits.
- **MasterCard**: Numbers start with 51, 52, 53, 54, or 55 and have 16 digits.
- **Visa**: Numbers start with 4 and have either 13 or 16 digits.

The program also performs a basic checksum to detect potential typos in the card number.

## How to Use

1. **Compile the Program**: To compile the program, you can use a C compiler like GCC. Open your terminal and navigate to the directory containing the source code (`credit_card_validator.c`) and use the following command:

   ```
     make credit
   ```
2. **Run the Program**: To run execute in the bash terminal:
   ```
     ./credit
   ```
3. **Provide the Card Number**: You are then going to be prompted with INVALID if the card number is invalid, or AMEX/ MASTERCARD/ VISA, depending on the type of credit card

## NOTES
Some cards might not be recognized. This program is based on Hans Peter Luhn's algorithm of IBM, which goes like this:
   1. Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
   2. Add the sum to the sum of the digits that weren’t multiplied by 2.
   3. If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

This is a possible solution to cs50 problem set 1


