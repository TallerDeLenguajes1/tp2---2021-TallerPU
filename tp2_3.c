#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int count=15;
    int *vmat[15];
    int columnas;
    srand(time(NULL));
    for (int i = 0; i < count; i++)
    {
        columnas=5+rand()%10;
        vmat[i]=(int *) malloc((columnas+1)*sizeof(int));
        *vmat[i]=columnas;
        for (int j = 1; j <= columnas; j++)
        {
            *((vmat[i])+j)=100+rand()%100;
        }
    }
    
      for (int i = 0; i < count; i++)
    {
        columnas=*(vmat[i]);
        for (int j = 1; j <= columnas; j++)
        {
              printf(" %d ",*(vmat[i,j]));
        }
        printf("\n");
        //aqui estoy probando esta tarea
       
    }

    //direcciones de memoria asignadas
      for (int i = 0; i < count; i++)
    {
        columnas=*(vmat[i]);
          printf("%u %u ",&vmat[i],vmat[i]);
        for (int j = 1; j <= columnas; j++)
        {
              printf(" %u ",(vmat[i]+j));
        }
        printf("\n");
        
       
    }


    getchar();
return 0;
}