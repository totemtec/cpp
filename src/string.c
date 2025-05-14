#include <stdio.h>
#include <string.h>

/**
 * 字符串处理
 */

int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);

        int length = strlen(argv[i]);
        printf("argv[%d] length is %d\n", i, length);
    }
    
    return 0;
}