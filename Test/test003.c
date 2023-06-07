#include <stdio.h>
int main()
{
    void swap(short *p1, short *p2);
    short a,b;
    short *pointer_1,*pointer_2; 
    scanf("%hd,%hd", &a,&b);
    pointer_1=&a; 
    pointer_2=&b;
    if(a<b)swap(pointer_1,pointer_2);
    printf("\n%d,%d\n",a,b);
}
void swap(short *p1, short *p2)
{
    short temp = *p1; 
    *p1=*p2;
    *p2=temp;
}
