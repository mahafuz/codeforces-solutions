#include <stdio.h>
#include <string.h>
 
int main()
{
 
    int n;
    char s[6000];
 
    scanf("%d", &n);
 
    while(n--) {
        scanf("%s", &s);
        int l = strlen(s);
 
        if(l>10) {
            printf("%c%d%c\n", s[0], l-2, s[l-1]);
        }else {
            printf("%s\n", s);
        }
    }
 
 
    return 0;
}
