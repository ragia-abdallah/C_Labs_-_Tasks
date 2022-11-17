#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
void gotoxy(int x,int y);
void delay(int number_of_seconds);

int main()
{
    unsigned int row=0, col=0, size=0, entry=1, max=0;
    printf("Choose box size: ");
    scanf("%d",&size);

    if (size%2==0)
    {
        printf("Oops.. No MAGIC in this box.. :(");

    }





    else
    {
        row = 2;
        col = (size/2)+1;
        max = size * size;

        do
        {
            gotoxy(col, row);
            printf("  %d  ",entry);

            delay(1);

            if (entry%size!=0)
            {
                if (row == 2)
                {
                    row = (size+1);
                }
                else
                {
                    row--;
                }
                if (col == 0)
                {
                    col = size+1;
                }
                else
                {
                    col--;
                }
            }
            else
            {

                if (row == (size+1))
                {
                    row = 2;
                }
                else
                {
                    row++;
                }


            }

            entry++;
        }
        while (entry <= max);

    }




    return 0;
}


void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
