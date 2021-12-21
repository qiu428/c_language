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
    puts("  1��������Ϸ");
    puts("  2��˫����Ϸ");
    puts("  q���˳���Ϸ");
    puts("-----------------");
    while ((choice = getchar()) != EOF)
    {
        while (getchar() != '\n')
            ;
        choice = tolower(choice);
        if (strchr("12q", choice) == NULL)
        {
            puts("�������Ӧ��ѡ��");
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
                puts("O��ѡ��(�� ��):\n");
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
                    puts("x��ѡ��(�� ��):\n");
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
    printf("\n��Ϸ����!");
    if (winer == 1)
    {
        printf("oʤ��!\n");
    }
    else if (winer == -1)
    {
        printf("xʤ��!\n");
    }
    else
    {
        printf("ƽ��!\n");
    }
    puts("��������Լ�������");
    while ((getchar()) != '\n')
        ;
}