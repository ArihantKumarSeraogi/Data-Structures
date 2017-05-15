#include<conio.h>
#include<stdio.h>
void main()
{
    int a[10];
    int temp;
    printf("enter the elements");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n");
    int min_index;
    for(int i=0;i<10;i++)
    {
        min_index=i;
        for(int j=i+1;j<10;j++)
        {
            if(a[j]<a[min_index])
                  min_index=j;
        }
        temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;

    }
    for(int i=0;i<10;i++)
        printf("%d",a[i]);
}
