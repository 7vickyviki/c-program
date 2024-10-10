#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,*p;
    printf("Enter the elements\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    p=realloc(p,8);
    if(p==NULL)
    {
        printf("memory is not created");
    }else{
        printf("memory is created");
        for(i=0;i<n;i++)
        {
            p[i]=i+1;
        }
        printf("the elements are");
        for(i=0;i<n;i++)
        {
            printf("\n%d",p[i]);
        }
    }
    return 0;
}