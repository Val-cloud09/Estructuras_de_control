#include <stdio.h>
#include <stdlib.h>
/*int main()
{
    int nm, m=1, c, sc=0;
    float pr;
    printf("\ncuantas materias vamos a calificar? ");
    scanf("%d", &nm);

    while(m <= nm){
        printf("dame la calificacion de la materia %d:", m);
        printf("\n");
        scanf("%d", &c);
        sc = sc + c;
        m++;
    }
    do{
        printf("dame la calificacion de la materia %d:", m);
        printf("\n");
        scanf("%d", &c);
        sc = sc + c;
        m++;
    }while(m <= nm);


    pr = (float)sc / nm;
    printf("la calificacion es %.2f", pr);
    return 0;
}*/

int main()
{
    int nm, m, c, sc;
    float pr;
    int opcion;

    do {
        printf("\n1. Calificar materias");
        printf("\n2. Salir");
        printf("\nElige una opcion: ");
        scanf("%d", &opcion);

        if(opcion == 1){
            m=1;
            sc=0;
            printf("\nCuantas materias vamos a calificar? ");
            scanf("%d", &nm);
            while(m <= nm){
                do {
                    printf("Dame la calificacion de la materia %d (0-100): ", m);
                    scanf("%d", &c);
                    if(c < 0 || c > 100)
                        printf("la calificacion es incorrecta\n");
                } while(c < 0 || c > 100);
                sc = sc + c;
                m++;
            }
            pr = (float)sc / nm;
            printf("\nLa calificacion promedio es: %.2f\n", pr);
        }
        if(opcion == 2){
            printf("\nSaliendo...\n");
        }
        if(opcion != 1 && opcion != 2){
            printf("\nOpcion no valida, intenta de nuevo\n");
        }

    } while(opcion != 2);

    return 0;
}
