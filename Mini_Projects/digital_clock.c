#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int hour, minute, second;

    hour = minute = second = 0;

    while (1)
    {
        system("cls");

        printf("%02d:%02d:%02d", hour, minute, second);

        fflush(stdout);

        Sleep(1000);

        second++;

        if (second == 60)
        {
            second = 0;
            minute++;
        }

        if (minute == 60)
        {
            minute = 0;
            hour++;
        }

        if (hour == 24)
        {
            hour = 0;
        }
    }

    return 0;
}