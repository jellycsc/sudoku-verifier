#include <stdio.h>

int check_regular_sudoku(int **puzzle);

int main() {
    // Invalid block
    int row1[9] = {2, 3, 4, 9, 5, 6, 8, 1 ,7};
    int row2[9] = {9, 5, 7, 8, 1 ,4, 2, 6, 3};
    int row3[9] = {1, 8 ,6, 3, 7, 2, 4, 5, 9};
    int row4[9] = {5, 4, 1, 6, 8, 10, 7, 3, 2};
    int row5[9] = {6, 1, 8, 7 ,2, 3, 5, 9, 4};
    int row6[9] = {7 ,2, 3, 4, 9, 5, 6, 8, 1};
    int row7[9] = {3, 9, 2, 5, 6, 7 ,1, 4, 8};
    int row8[9] = {4, 7, 5 ,1, 3, 8, 9, 2, 6};
    int row9[9] = {8, 6, 10, 2, 4, 9, 3, 7, 5};

    int *puzzle[9] = {row1, row2, row3, row4, row5, row6, row7, row8, row9};
    if (check_regular_sudoku(puzzle)) {
        printf("Invalid Sudoku\n");
    } else {
        printf("Valid Sudoku\n");
    }

    return 0;
}
