#include<stdio.h>
void main()
{ 
    int x, c=0;
    printf("Numbers from 1 to 100 not divisble by 2,3 &5\n\n");
    for(x=0;x<=100;x++)
    {
        if(x%2!=0&&x%3!=0&&x%5!=0)
        {
            printf("%d\t",x);
            c++;
        }
    }
    printf("\nTotal Numbers:%d",c);
    
}