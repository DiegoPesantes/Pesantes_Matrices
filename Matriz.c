//Incluimos las librerias para generar numeros aleatorios//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
//Definimos variables//
    int f, c;
    srand(time(NULL));
//Pedimos los datos al usuario//
    printf("Ingrese el numero de filas");
    scanf("%d", &f);
    printf("Ingrese el numero de columnas");
    scanf("%d", &c);
//Creacion sentencia for para la matriz original//
    int matriz[f][c];
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; i < c;j++)
        {
//Damos valores aleatorios a la matriz//
        matriz[i][j]= rand()%101;
        }
        
    }
//Imprimimos la matriz original//
    printf("Matriz original");
        for (int i = 0; i < f; i++)
    {
        for (int j = 0; i < c;j++)
        {
            printf("%d", matriz[i][j]);
    }
        printf("\n");
    }

//Calculamos la matriz transpuesta//

        int Transpuesta[c][f];

        for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            Transpuesta[j][i] = matriz[i][j];
        }
    }

//Imprimimos la matriz transpuesta//

        printf("Matriz transpuesta\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < f; j++) {
            printf("%d ", Transpuesta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
