#include<stdio.h>
int main(){
int a[5]={1,2,3,4,5},i,max=a[0];
for(i=1;i<5;i++)
{
if(max<a[i])
max=a[i];  
}
   printf("%d",max); 
    
}