#include <stdio.h>
#include <errno.h>
#include <chrono>
#include <thread>
#include <stdlib.h>

#define NB_Rows 6
#define NB_Columns 7

struct coo {
  int x;
  int y;
};

bool check(int *tab, int x, int y, int r, int c);
int sub_check(int *tab, int x, int y, int player, int r, int c);
bool colomn_is_full(int *tab, int c);

struct coo update_grid(int *tab, int player, int column, struct coo *moove_piece);
void drop_piece(int *tab, int column, int player);

int *get_raw(int *tab, int shift);
int *get_col(int *tab, int shift);
int *get_diag1(int *tab, int r, int c);
int *get_diag2(int *tab, int r, int c);

int* copy_board(int *tab);

void print_grid(int *tab);