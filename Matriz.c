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

    int matriz[f][c];
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; i < c;j++)
        {
            /* code */
        }
        
    }
    
    
    return 0;
}
