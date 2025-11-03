#include "main.h"
void print_chessboard(char (*a)[8])
{
	int i;
	int ii;
    for (i = 0; i < 8; i++) {
        for (ii = 0; ii < 8; ii++) {
            _putchar(a[i][ii]);
        }
        _putchar('\n');
    }
}