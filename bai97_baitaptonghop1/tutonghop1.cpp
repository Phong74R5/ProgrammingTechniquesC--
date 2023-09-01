#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
#define bomb -1
int bomb_field[50][50];
int defuse_bombs[50][50];
int M;
int N;
void bombs_number_initialization(int n_bombs)
{
    int i, j, count = 0;
    do
    {
        i = rand() % M;
        j = rand() % N;
        if (bomb_field[i][j] == 0)
        {
            bomb_field[i][j] = bomb;
            count++;
        }
    } while (count != n_bombs);
}
void bomb_field_initialization()
{
    int i, j;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            bomb_field[i][j] = 0;
            cout << "# ";
            defuse_bombs[i][j] = 0;
        }
        cout << endl;
    }
}
void count_bombs()
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (bomb_field[i][j] != bomb)
            {
                int count = 0;
                if (j > 0 && bomb_field[i][j - 1] == bomb) // trái
                {
                    count++;
                }
                if (j < N - 1 && bomb_field[i][j + 1] == bomb) // phải
                {
                    count++;
                }
                if (j > 0 && i > 0 && bomb_field[i - 1][j - 1] == bomb) // trái trên
                {
                    count++;
                }
                if (i > 0 && j < N - 1 && bomb_field[i - 1][j + 1] == bomb) // phải trên
                {
                    count++;
                }
                if (j > 0 && i < M - 1 && bomb_field[i + 1][j - 1] == bomb) // trái dưới
                {
                    count++;
                }
                if (i < M - 1 && j < N - 1 && bomb_field[i + 1][j + 1] == bomb) // phải dưới
                {
                    count++;
                }
                if (i > 0 && bomb_field[i - 1][j] == bomb) // trên
                {
                    count++;
                }
                if (i < M - 1 && bomb_field[i + 1][j] == bomb) // dưới
                {
                    count++;
                }
                bomb_field[i][j] = count;
            }
        }
    }
}
void update_bomb_field()
{
    int i, j;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (bomb_field[i][j] == bomb)
            {
                cout << "x ";
            }
            else if (bomb_field[i][j] == 0)
            {
                cout << ". ";
            }
            else
            {
                cout << bomb_field[i][j] << " ";
            }
        }
        cout << endl;
    }
}
void draw_bomb_field(int x, int y)
{
    int i, j;
    defuse_bombs[x][y] = 1;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (defuse_bombs[i][j] == 1)
            {
                if (bomb_field[i][j] == 0)
                {
                    cout << ". ";
                }
                else
                {
                    cout << bomb_field[i][j] << " ";
                }
            }
            else
            {
                cout << "# ";
            }
        }
        cout << endl;
    }
}
int main()
{
    srand(time(NULL));
    int col, row, n_bombs, size;
    cout << "enter bomb field size: ";
    cin >> size;
    M = N = size;
    bomb_field_initialization();
    cout << "Enter the number of bombs: ";
    do
    {
        cin >> n_bombs;
        if (n_bombs >= M * N)
        {
            cout << "The number of bombs is too large. Please re-enter: ";
        }
    } while (n_bombs >= M * N);
    bombs_number_initialization(n_bombs);
    count_bombs();
    while (1)
    {
        cout << "\nenter location(x y): ";
        cin >> row >> col;
        if (bomb_field[row][col] == bomb)
        {
            update_bomb_field();
            break;
        }
        draw_bomb_field(row, col);
    }
}