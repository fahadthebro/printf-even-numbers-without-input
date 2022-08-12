#include<stdio.h>
int main()
{
int N,i;
while(1){
    scanf("%d",&N);
    if(N==1)
    {
        printf("%d is not a prime number",N);
        break;
    }
    if(N==2){
    printf("%d is a prime number",N);
    break;

    }
        {
        for(i=2;i<N;i++){
            if(N%i==0){
                printf("%d is not a prime number",N);
                return 0;
            }
            else
            {
                printf("%d is a prime number",N);
                return 0;
            }
        }
    }
}
}
