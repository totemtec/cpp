#include <stdio.h>

// main 标准写法2：接收参数

int main(int argc, char *argv[])
{
    printf("argc=%d\n", argc);

    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    
    return 0;
}