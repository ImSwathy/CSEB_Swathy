#include<stdio.h>
void main()
{
    int a[10], n, s=0, f=0;
    printf("enter the limit\n");
    scanf("%d", &n);
    printf("enter the array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(int i=0; i<n ; i++)
    {
        s+=a[i];
    }
    printf("Sum of elements: %d\n",s);

for(int i=2; i<= s/2; i++)
{
    if(s%i==0)
        f=1;
    else
        continue;
}
if(f== 0)
{
    printf("sum is prime\n");
}
else
    printf("not prime");
}
