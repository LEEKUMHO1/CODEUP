#include <stdio.h>
// 이 부분에 들어가야 될 코드를 작성하여 제출
int myabs(int a)
{
    return a>=0?a:-a; 
}
main()
{
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
}