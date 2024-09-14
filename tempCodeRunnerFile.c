#include <stdio.h>

// 自定义 strcmp 函数
int my_strcmp(const char *str1, const char *str2) 
{
    while (*str1 && (*str1 == *str2)) 
    {
        str1++;
        str2++;
    }
    // 当找到不同的字符或者到达字符串末尾时，比较这两个字符的ASCII值
    return (unsigned char)*str1 - (unsigned char)*str2;
}

int main() 
{
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    const char *str3 = "World";

    printf("strcmp(str1, str2) = %d\n", my_strcmp(str1, str2)); // 应该输出 0
    printf("strcmp(str1, str3) = %d\n", my_strcmp(str1, str3)); // 应该输出正数，因为 'H' < 'W'

    return 0;
}