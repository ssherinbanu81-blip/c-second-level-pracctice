#include <stdio.h>

int main() {
    int f,s,sum=0;
    scanf("%d %d",&f,&s);
    int c=f;
    for(int i=1;i<=s;i++)
    {
        printf("%d",f);
        if(i != s)
        {
            printf("+");
        }
        sum=sum+f;
        f=f*10+c;

printf("\n%d",sum);
    return 0;
}
