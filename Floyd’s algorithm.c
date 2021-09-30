#include<stdio.h>
int i, j, k,n,a[10][10];
void floydsWarshell ()
{
 for (k = 0; k < n; k++)
  for (i = 0; i < n; i++)
   for (j = 0; j < n; j++)
    if (a[i][k] + a[k][j] < a[i][j])
     a[i][j] = a[i][k] + a[k][j];
}
int main()
{
  int i,j;
  printf("Enter no of vertices :");
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   {
    printf("a[%d][%d]:",i,j);
    scanf("%d",&a[i][j]);
   }
 floydsWarshell();
 printf (" \n\n Shortest distances between all the pairs of vertices \n");
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
   printf ("%d\t", a[i][j]);
  printf("\n");
 }
 return 0;
}
