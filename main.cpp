/*
A lottery ticket buyer purchases ten tickets a week, always
playing the same ten 5-digit "lucky" combinations. Write a
program that initializes an array or a vector with these
lucky numbers, then lets the player enter this week's winning
5-digit number. The program should perform a linear search through
the list of the player's numbers and report whether or not
one of the tickets is a winner this week.

13579  26791  26792  33445  55555
62483  77777 79422  85647  93121

Then, modify the program to use a binary search instead of a linear search.

*/
#include <iostream>
#include "prototype.h"
using namespace std;

int main()
{
const int SIZE = 10;
int luckyNumbers[SIZE] = {13579, 26791, 26792, 33445, 55555,
                           62483, 77777, 79422, 85647, 93121};
int ticketNumber;
int result;

cout << "Enter your ticket number: ";
cin >> ticketNumber;

//result = linearSearch(luckyNumbers, SIZE, ticketNumber);
result = binarySearch(luckyNumbers, SIZE, ticketNumber);

if (result == -1)
    cout << "You lost.";
    else
        cout << "You won!";

}
