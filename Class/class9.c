#include <stdio.h>
int main()
{   
    int *p,i,a[10];
    p=a;
    for(i=0;i<10;i++)
    scanf("%d",p++); 
    printf("\n");
    p=a; /*或者p=&a[0]*/
    for(i=0;i<10;i++,p++)
    printf("%d",*p);
    printf("\n");
}