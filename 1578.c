#include <stdio.h>
// 이 부분에 들어가야 될 코드를 작성하여 제출
int mymax(int a,int b)
{
    return a>=b?a:b;
}
int mymin(int a,int b)
{
    return a<=b?a:b;
}

float circle(int r)
{
    return r*r*3.14;
}

main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}