  #include<stdio.h> 
   int mult(int x);
    int main()    
    {    
     int n,y;    
     printf("Enter a number: ");    
      scanf("%d",&n); 
     y=mult(n);
     printf("%d",y);
     return 0;
    }
    int mult(int x)
    {
        int fact=1;
        for(int i=1;i<=x;i++){
            fact=fact*i;
            
        }
        
        return fact;
        
    }