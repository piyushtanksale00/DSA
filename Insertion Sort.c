#include<stdio.h>
#include<conio.h>
#define size 5
void main()
{

    int k[size],i,p,temp;
    printf("\nENTER NO\n");
    for(i=1;i<=size;i++)
    {
        scanf("%d",&k[i]);
    }
    for(i=2;i<=size;i++)
    {
        p = i;
        for(;(k[p]<k[p-1]) && p>1;p--)
        {
            temp = k[p];
            k[p] = k[p-1];
            k[p-1] = temp;
        }
        printf("\npass %d : ",i);
        for(p=1;p<=size;p++)
        {
            printf("%d\t",k[p]);
        }
    }
    printf("\n\nSORTED ARRAY.\n");
    for(p=1;p<=size;p++)
    {
        printf("%d\t",k[p]);
    }

getch();
}
