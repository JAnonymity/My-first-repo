#include <stdio.h>

int main (void)
{
    int a,b;
    int max;
    printf("print:a&b");
    scanf("%d%d",&a,&b);
        if(a>b)
            max=a;
        else
            max=b;
    printf("a=%d,b=%d,max=%d\n",a,b,max);
    return 0;
}


