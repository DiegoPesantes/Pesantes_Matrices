#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z;

    // Pedir datos al usuario
    printf("Ingrese la dimensión x: ");
    scanf("%d", &x);

    printf("Ingrese la dimensión y: ");
    scanf("%d", &y);

    printf("Ingrese la dimensión z: ");
    scanf("%d", &z);

    int matriz[x][y][z];

    // Poner las matrices en ceros
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                matriz[i][j][k] = 0;
            }
        }
    }
    return 0;
}
