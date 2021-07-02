#include<stdio.h>
#define MAX 10000


int *ingresar(int *A, int N)
{
 A = new int [MAX];

 int i = 0 , j = 0;

 for (i = N - 1; i >= 0; --i)
     {
      printf("\n\t\t\t\t - A [%d] : ",j);
      scanf("%d",&A[j]);
      j++;
     }
 return A;
}

int kadane(int *A, int N, int maximo)
{
 maximo = 0;
 int max_temp = 0;

 for (int i = 0; i < N; i++)
     {
      max_temp = A[i] + max_temp;

      if( max_temp < 0 )
          max_temp = 0;

      if( maximo < max_temp )
          maximo = max_temp;
     }

 return maximo;
}

int main()
{


 int *A = NULL;
 int N ;
 int maximo;

 printf("\n\n\t Ingresar Longitud del Arreglo : ");
 scanf("%d",&N);

 A = ingresar( A , N );

 maximo = kadane( A , N , maximo);

 printf("\n\n\t\t\t\tMaximo = %d",maximo);

 return 0;
}
