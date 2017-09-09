#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{
    int codigo[TAM]={0};
    char descrip[TAM][50];
    int stock[TAM];
    float precio[TAM];
    int opcion;
    int i;

    do
    {
        printf("\n1-Ingrese alta\n");
        printf("2-Mostrar numero\n");
        printf("3-Salir\n\n");
        printf("Eliga una opcion: ");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                for(i=0;i<TAM;i++)
                {
                    if(codigo[i]==0)//significa que si los codigos estan en 0 se puede escribir ahi, itera 1 vez y guarda, luego itera otra vez y recorre desde el primero otra vez y si alguno ya esta escrito va al segundo indice y escribe ahi porque esta en 0 osea se puede escribir ahi
                    {
                    printf("\nIngrese codigo: ");
                    scanf("%d",&codigo[i]);
                    printf("Ingrese descripcion: ");
                    fflush(stdin);
                    gets(descrip[i]);
                    printf("Ingrese precio: ");
                    scanf("%f",&precio[i]);
                    printf("Ingrese stock: ");
                    scanf("%d",&stock[i]);
                    break;
                    }

                }
                break;
            case 2:
                for(i=0;i<TAM;i++)
                {
                    if(codigo[i]!=0)
                    {
                    printf("\nCodigos: %d\nDescripcion: %s\nPrecio: %f\nStock: %d\n\n",codigo[i],descrip[i],precio[i],stock[i]);
                    }
                }
        }
    }while(opcion!=3);
    return 0;
}

