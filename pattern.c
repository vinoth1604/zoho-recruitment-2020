#include<stdio.h>
void main()
{
  int i=0,j=0,n;
  printf("Enter input:");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    for(j=n;j>=1;j--)
    {
      if(i>=j)
      printf("%d ",i);
      else 
      printf("%d ",j);
    }
    printf("\n");
    
  }
  
}
