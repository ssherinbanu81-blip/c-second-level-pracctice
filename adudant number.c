#include <stdio.h>

int main() {
  int n,sum=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
      if(n%i==0)
      {
        sum=sum+i;
      }
  }
      printf("\n%d ",sum);
     if(n<sum) 
     {
         printf("adudant number ");
     }
     else
     {
         printf(" not adudant number");
     }
  

    return 0;
}
