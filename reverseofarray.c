#include <stdio.h>

int main()
{
    int a[8];
    int i,j=0;
    int b[8];
    printf("enter the values of array:");
    for(i=0;i<=7;i++)
    scanf("%d",&a[i]);
    for(i=7;i>=0;i--)
    {
      b[j++]=a[i];  
    }
    for(j=0;j<=7;j++)
    {
    printf("%d\t",b[j]);
} 
}
