#include<stdio.h>
void main()
    {
       int ar[10][10],c,r,i,j;
       printf("Enter the row size");
       scanf("%d",&r);
       printf("\nEnter the col size");
       scanf("%d",&c);
       /*printf("\nEnter the elements");
       for(i=0;i<r;i++)
       {
        for(j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
       }*/
        for(i=0;i<r;i++)
       {
        for(j=0;j<c;j++)
        {
            if(i >= j ){ 
                printf("*\t");
        }    
           
        }
        printf("\n");
       }
    }
