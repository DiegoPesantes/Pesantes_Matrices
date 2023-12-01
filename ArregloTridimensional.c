#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z;

    // Pedir datos al usuario
    printf("Ingrese el numero de matrices: ");
    scanf("%d", &x);

    printf("La cantidad de filas: ");
    scanf("%d", &y);

    printf("Ingrese la cantidad de columnas: ");
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
     // Hace que la última matriz sean unos
    for (int j = 0; j < y; j++) {
        for (int k = 0; k < z; k++) {
            matriz[x - 1][j][k] = 1;
        }
    }
    // Imprimir el arreglo tridimensional
    printf("Arreglo tridimensional:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("%d ", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
