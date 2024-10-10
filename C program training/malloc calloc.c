#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,*p,*q;
    printf("Enter the elements\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    q=(int*)calloc(n,sizeof(int));
    p=realloc(p,8);
    if(p==NULL||q==NULL)
    {
        printf("memory is not created");
    }else{
        printf("memory is created");
        for(i=0;i<n;i++)
        {
            p[i]=i+1;
           
        }
        for(i=0;i<n;i++)
        {
            q[i]=i+1;
           
        }
        printf("the elements are");
        for(i=0;i<n;i++)
        {
            printf("\n%d",p[i]);
           
        }
         for(i=0;i<n;i++)
        {
            printf("\n%d",q[i]);
           
        }
    }
    return 0;
}