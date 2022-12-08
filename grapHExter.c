#include <stdio.h>
#include <windows.h>
#include <math.h>
#include<conio.h>
int main()
{
    system("color 03");

    system("cls");
    printf("\t\t\t\t---------------------------\n\t\t\t\t     --- graphEXTER ---\n\t\t\t\t---------------------------\n\n\n");

    const int n = 73;  // 84
    int m = 2 * n + 1; // x-axis
    char plot[n][m];
    // int x = -m / 2, y;
    float x = -2.0;             //-m/20;  //-2.0
    for (int i = 0; i < n; i++) // drawing axis
    {
        for (int j = 0; j < m; j++)
        {
            if (i == n / 2 && j == n)
                plot[i][j] = '0';
            else if (i == n / 2)
                plot[i][j] = '-';

            else if (j == n)
                plot[i][j] = '|';

            else
                plot[i][j] = ' ';
        }
    }

    /// values for x;
    int X, Y;
    int Y1;
    for (double i = x; i <= -x; i += 0.1)
    {
        X = i * 10;
        
        // Y = (i*i)*10;
        // Y1 = (int)(cos(i) * 10);
        // printf("%lf,%d   ", i, Y1);
        if(X > n || (X<0 && X*(-1)>n))
        continue;
        Y= (int)((cbrt(i*i)+sqrt(4-i*i))*10);

        if (Y > (n / 2) || (Y<0 && (Y*(-1)> n/2)))
            continue;
        //    Y1= (int)tan(i)*10;
            // Y1= sqrt(i*i-1)*10;

        if(X>0)
        plot[n/2-Y][m/2-2*X]='X';
        else if(X<0)
        plot[n/2-Y][m/2-2*X]='X';
        else
        plot[n / 2 - Y][m / 2 - X] = 'X';
        // plot[n / 2 - Y1][m / 2 - X] = 'X';

        Y1= (int)((cbrt(i*i)-sqrt(4-i*i))*10);
        
        
        // Y1= -(i * i) * 10;
        if(X>0)
        plot[n/2-Y1][m/2-2*X]='X';
        else if(X<0)
        plot[n/2-Y1][m/2-2*X]='X';
        else
        // plot[n / 2 - Y][m / 2 - X] = 'X';
        plot[n / 2 - Y1][m / 2 - X] = 'X';

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%c", plot[i][j]);
        printf("\n");
    }
    _getch();
    return 0;

}
