#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
int i, j, k;
void letterH(int i)
{
    for (j = 1; j <= 5; j++)
    {
        if (j == 1 || i == 5 || j == 5)
            printf("* ");

        else
            printf("  ");
    }
}

void letterE(int i)
{
    for (j = 1; j <= 5; j++)
    {
        if (i == 1 || j == 1 || i == 9 || i == 5)
            printf("* ");

        else
            printf("  ");
    }
}

void letterL(int i)
{
    for (j = 1; j <= 5; j++)
    {
        if (j == 1 || i == 9)
            printf("* ");

        else
            printf("  ");
    }
}
void letterO(int i)
{
    for (j = 1; j <= 5; j++)
    {
        if (i == 1 & j == 1 || i == 9 && j == 1 || i == 1 && j == 5 || i == 9 && j == 5)
            printf("  ");
        else if (i == 1 || j == 1 || i == 9 || j == 5)
            printf("* ");

        else
            printf("  ");
    }
}

void gotoxy_he(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);

    int i, j, k;
    for (i = 1; i < 10; i++)
    {
        letterH(i);
        printf("  ");
        Sleep(100);
        letterE(i);
        printf("\n");
    }
}

void gotoxy_hel(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);

    int i, j, k;
    for (i = 1; i < 10; i++)
    {
        letterH(i);
        printf("  ");
        // Sleep(100);
        letterE(i);
        printf("  ");
        Sleep(100);
        letterL(i);
        printf("\n");
    }
}

void gotoxy_hell(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);

    int i, j, k;
    for (i = 1; i < 10; i++)
    {
        letterH(i);
        printf("  ");
        // Sleep(100);
        letterE(i);
        printf("  ");
        // Sleep(100);
        letterL(i);
        printf("  ");
        Sleep(100);
        letterL(i);
        printf("\n");
    }
}
void gotoxy_hello(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);

    int i, j, k;
    for (i = 1; i < 10; i++)
    {
        letterH(i);
        printf("  ");
        // Sleep(100);
        letterE(i);
        printf("  ");
        // Sleep(100);
        letterL(i);
        printf("  ");
        // Sleep(100);
        letterL(i);
        printf("  ");
        Sleep(100);
        letterO(i);
        printf("\n");
    }
}
void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
int main()
{
    hidecursor();
    system("color 0b");
    char ch[] = "printing hello";
    Beep(440,150);
    Beep(550,200);
    
    for (int i = 0; i < strlen(ch); i++)
    {   Beep(440,100);
        printf("%c", ch[i]);
        Sleep(100);
    }
    Beep(400,800);
    Sleep(300);
    
    printf("\n\n");
    int i, j, k;
    for (i = 1; i < 10; i++)
    {
        letterH(i);
        Sleep(100);
        printf("\n");
    }
    // Beep(440,150);
    Beep(1000,200);
    Sleep(1000);
    gotoxy_he(0, 2);
    // Beep(440,150);
    Beep(1000,200);
    Sleep(1000);
    gotoxy_hel(0, 2);
    // Beep(440,150);
    Beep(1000,200);
    Sleep(1000);
    gotoxy_hell(0, 2);
    // Beep(440,150);
    Beep(1000,200);
    Sleep(1000);
    gotoxy_hello(0, 2);
  Beep(500,900);
  Beep(3000,150);
    Sleep(1000);
    
}