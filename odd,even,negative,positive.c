#include<stdio.h>
int main()
{
    int i,x,a=0,b=0,c=0,d=0;
    for(i=0;i<5;i++){
        scanf("%d",&x);
    if(x%2==0){
        a++;
    }
    else{
        b++;
    }
    if(x>0){
        c++;
    }
    else if(x<0)
        {
        d++;
    }
    }
    printf("%d valor(es) par(es)\n",a);
    printf("%d valor(es) impar(es)\n",b);
    printf("%d valor(es) positivo(s\n",c);
    printf("%d valor(es) negativo(s)\n",d);
}
