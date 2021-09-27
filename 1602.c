#include <stdio.h>

float myabls(float a)
{   if(a==0) return 0;
    return a>0?a:-a;
}
int main(){

    float a;

    scanf("%g", &a);

    if(a>999999)
    printf("%.10g",myabls(a));
    else if(a<-999999)
    printf("%.10g",myabls(a));
    else
        printf("%g",myabls(a));


        return 0;
}