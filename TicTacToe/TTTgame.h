#ifndef __TTTGAME_H
#define __TTTGAME_H

#include <stdbool.h>
#define ROW 3   /* 行数 */
#define COL 3   /* 列数 */
enum Piece{White=1,Black=-1,Space=0};

void ClearBoard(void);
bool Move(int row,int col,int player);
void AMove(int player);
void PrintBoard(void);
int Judge(void);
#endif 