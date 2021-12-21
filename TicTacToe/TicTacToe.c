#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "TTTgame.h"

int menu(void);
void TTTgame(int);

int main(void)
{
    int choice;
    while ((choice = menu()) != 'q')
    {
        switch (choice)
        {
        case '1':
            TTTgame(1);
            break;
        case '2':
            TTTgame(2);
            break;
        default:
            puts("ERROR");
        }
    }
    return 0;
}

int menu()
{
    int choice;
    system("cls");
    puts("-----------------");
    puts("  1、单人游戏");
    puts("  2、双人游戏");
    puts("  q、退出游戏");
    puts("-----------------");
    while ((choice = getchar()) != EOF)
    {
        while (getchar() != '\n')
            ;
        choice = tolower(choice);
        if (strchr("12q", choice) == NULL)
        {
            puts("请输入对应的选项");
        }
        else
            break;
    }
    if (choice == EOF)
        choice = 'q';
    return choice;
}

void TTTgame(int players)
{
    int winer = 0;
    int player = 1;
    int x, y;
    system("cls");

    ClearBoard();
    PrintBoard();
    do
    {
        if (player == 1)
        {
            do
            {
                puts("O棋选择(行 列):\n");
                scanf("%d %d", &x, &y);
                while ((getchar()) != '\n')
                    ;
            } while (!(x >= 1 && x <= 3 && y >= 1 && y <= 3));
            Move(x - 1, y - 1, White);
        }
        else
        {
            if (players == 1)
            {
                AMove(Black);
            }
            else
            {
                do
                {
                    puts("x棋选择(行 列):\n");
                    scanf("%d %d", &x, &y);
                    while ((getchar()) != '\n')
                        ;
                } while (!(x >= 1 && x <= 3 && y >= 1 && y <= 3));
                Move(x - 1, y - 1, Black);
            }
        }
        system("cls");
        PrintBoard();
        player=!player;
    } while (!(winer = Judge()));
    printf("\n游戏结束!");
    if (winer == 1)
    {
        printf("o胜利!\n");
    }
    else if (winer == -1)
    {
        printf("x胜利!\n");
    }
    else
    {
        printf("平局!\n");
    }
    puts("按任意键以继续……");
    while ((getchar()) != '\n')
        ;
}