#include <iostream>
using namespace std;

int linearSearch(int luckyNumbers[], const int SIZE, int ticketNumber)
{
    int position = -1;
    bool found = false;
    int index = 0;

    while (!found && index < SIZE)
    {
        if (luckyNumbers[index]== ticketNumber)
        {
            position = index;
            found = true;
        }
        index ++;
    }
    return position;

}

int binarySearch(int luckyNumbers[], const int SIZE, int ticketNumber)
{
    int position = -1;
    int middle;
    int first = 0;
    int last = (SIZE-1);
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last)/2;

        if (luckyNumbers[middle] == ticketNumber)
        {
            position = middle;
            found = true;
        }
        else if(luckyNumbers[middle] > ticketNumber)
            last = middle - 1;
            else
                first = middle + 1;
    }
    return position;
}
