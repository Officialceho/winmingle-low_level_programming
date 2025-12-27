#include "main.h"

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description:  convert_day - converts month/day to day of year
 */
int convert_day(int month, int day)
{
    int days_per_month[] = { 31, 28, 31, 30, 31, 30,
                             31, 31, 30, 31, 30, 31 };
    int i, total_days = 0;

    for (i = 0; i < month - 1; i++)
        total_days += days_per_month[i];

    total_days += day;

    return (total_days);
}

