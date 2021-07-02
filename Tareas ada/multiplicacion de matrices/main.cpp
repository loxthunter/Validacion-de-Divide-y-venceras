#include<iostream> /*esta biblioteca es igul a stdio.h*/

main()
{
int i,j,k,l,m,n ;
float a[100][100];
float det;
printf("\t\tIntroducir el ORDEN DE LA MATRIZ : N = ");
scanf("%d",&n);
printf("\n");
m=n-1;
/* Vamos a introducir la matriz por teclado*/

printf("\t\tIntroducir los elementos por FILAS \n");
printf("\t\t---------------------------------- \n");
for(i=1;i<=n;i++)
{ for(j=1;j<=n;j++)
{ printf("A(%d,%d) =",i,j);
scanf("%f",&a[i][j]); } }

/* SI QUEREMOS LEER LOS ELEMENTOS DE LA MATRIZ LISTADOS */
for(i=1;i<=n;i++)
{ for(j=1;j<=n;j++)
printf("\t\t\tA(%d,%d) =%8.4f\n",i,j,a[i][j] ); }




/*****Calculo del DETERMINANTE*****/
det=a[1][1];
for(k=1;k<=m;k++)
{ l=k+1;
for(i=l;i<=n;i++)
{ for(j=l;j<=n;j++)
a[i][j] = ( a[k][k]*a[i][j]-a[k][j]*a[i][k] )/a[k][k]; }
det=det*a[k+1][k+1];
}
printf("\n\n");
printf("\t\t\tDETERMINANTE = %f\n", det);
printf("\t\t\t-------------------------\n");
system("pause");
return 0;
}
