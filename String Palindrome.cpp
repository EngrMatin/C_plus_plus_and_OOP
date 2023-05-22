#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n];
    scanf("%s", s);

    int x=0;
    int y = strlen(s)-1;

    while(y>1)
    {
        if(s[x++] != s[y--])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}
