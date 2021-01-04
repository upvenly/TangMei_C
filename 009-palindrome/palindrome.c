#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {true, false} bool;



bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    // printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
bool palindrome( char *s )
{
    // printf("%c\n",s[0]);
    int i ;
    bool ret = true;
    int lenS = strlen(s);
    for (i=0;i<lenS/2;i++){
        //printf("%c %c\n",s[i],s[lenS-1-i]);
        if(s[i]==s[lenS-1-i])
            {
                continue;
            }
        else
            {
                ret = false;
                break;
            }
    
    }
    return ret;
}

