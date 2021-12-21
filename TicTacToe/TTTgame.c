#include "TTTgame.h"
#include <stdio.h>
#include <stdlib.h>

static int chessboard[ROW][COL] = {0};
static int step = 0;

void ClearBoard()
{
    step = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            chessboard[i][j] = Space;
        }
    }
}

bool Move(int row,int col,int player)
{
    if (chessboard[row][col] == 0)
    {
        chessboard[row][col] = player;
        step++;
        return true;
    }
    else
        return false;
}



void AMove(int player)
{
    int row, col;
    do
    {
        row = rand() % 3;
        col = rand() % 3;
    } while (!Move(row,col,player));
}

void PrintBoard()
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            putchar('|');
            if (chessboard[i][j] > 0)
                putchar('o');
            else if (chessboard[i][j] < 0)
                putchar('x');
            else
                putchar(' ');
        }
        printf("|\n");
        if (i < 2)
            printf("-------\n");
    }
}

/**
 * @brief 判断游戏结果
 *
 * @return int 游戏结果 1为o赢，-1为x赢，2为平局，0为继续
 */
int Judge()
{
    for (int i = 0; i < ROW; i++) /* 行连 */
    {
        if (chessboard[i][0] == chessboard[i][1] && chessboard[i][0] == chessboard[i][2] && chessboard[i][0] != 0)
            return chessboard[i][0];
    }
    for (int i = 0; i < COL; i++) /* 列连 */
    {
        if (chessboard[0][i] == chessboard[1][i] && chessboard[0][i] == chessboard[2][i] && chessboard[0][i] != 0)
            return chessboard[0][i];
    }
    if (chessboard[1][1] == chessboard[0][0] && chessboard[1][1] == chessboard[2][2] && chessboard[1][1] != 0)
        return chessboard[1][1];
    if (chessboard[1][1] == chessboard[0][2] && chessboard[1][1] == chessboard[2][0] && chessboard[1][1] != 0)
        return chessboard[1][1];
    if (step == 9)
        return 2;
    else
        return 0;
}