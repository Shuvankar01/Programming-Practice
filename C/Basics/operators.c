#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two elements ");
    scanf("%d%d",&a,&b);
    printf("Basic operations are\n ");
    c=a+b;
    printf("addition is %d\n",c);
    c=a-b;
    printf("subtraction is %d\n",c);
    c=a*b;
    printf("multiple is %d\n",c);
    c=a/b;
    printf("divison is %d\n",c);
    c=a%b;
    printf("module is %d\n",c);
    return 0;
}