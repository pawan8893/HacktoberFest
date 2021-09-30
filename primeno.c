#include <stdio.h>
#include<stdlib.h>
int main()
{
  int a,b=0,i;
  printf("\n enter the no.: ");
  scanf("%d",&a);
  for(i=1; i<=a; i++)
  {
    if(a%i==0)
      b=b+1;
  }
  if(b==2)
    printf("the no. is prime");
  else
    printf("the no. is not prime");
}
