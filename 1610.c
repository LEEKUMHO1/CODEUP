#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mysubstr(char *str, int start, int count)
{

    // 함수 처리부
    char* ans = (char*)malloc(count);
    int cnt = 0;
    memset(ans,0,count);
    for(int i = start; i<start+count;i++){
        ans[cnt]=str[i];
        cnt ++;
    }
    return ans;
}

int main() {
    char str[100]={};
    int start;
    int count;

    scanf("%s",str);
    scanf("%d %d",&start, &count);
    printf("%s",mysubstr(str,start,count));
    free(mysubstr(str,start,count));

    return 0;
}