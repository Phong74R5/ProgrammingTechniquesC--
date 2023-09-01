#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;

typedef struct
{
    char Ma[10];
    char HoTen[40];
    int luong;
    int thuong;
    int lt;
} SinhVien;
int main()
{
    FILE *f;
    SinhVien sv;
    f = fopen("hoso", "rb");
    printf(" MSSV | Ho va ten\n");
    fread(&sv, sizeof(sv), 1, f);
    while (!feof(f))
    {
        printf(" %s | %s| %d| %d| %d\n", sv.Ma, sv.HoTen, sv.luong, sv.thuong, sv.lt);
        fread(&sv, sizeof(sv), 1, f);
    }
    fclose(f);
    printf("Bam phim bat ky de tiep tuc!!!");
}