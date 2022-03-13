#include <stdio.h>
#include <stdlib.h> //cap phat dong

#define MAX 100

int strlen_funs(char arr[])
{
    int len = 0;

    while (arr[len] != '\0')
        len++;

    return len;
}

void clear_enter(char *arr)
{
    int length = strlen_funs(arr);

    if (arr[length - 1] == '\n')
        arr[length - 1] = '\0';
}

char *input()
{
    char *arr = NULL;
    arr = (char *)malloc(MAX * sizeof(char));

    printf("vao chuoi: ");
    fgets(arr, MAX, stdin);

    clear_enter(arr);

    return arr;
}

void output(char *arr)
{
    printf("\n%s", arr);
}

char *strcpy_funs(char *arr1, char *arr2)
{
    int len = strlen_funs(arr2);

    arr1 = (char *)malloc((len + 1) * sizeof(char));

    int i = 0;
    while (arr2[i] != '\0')
    {
        arr1[i] = arr2[i];
        i++;
    }

    arr1[i] = '\0';

    return arr1;
}

size_t _strlen(char *str)
{
    const char *pstr = str;

    while (*pstr != '\0')
        ++pstr;

    return (pstr - str) + 1;
}

char *_strcpy(char *str1, const char *str2)
{
    char *pstr = str1;

    while (*pstr++ = *str2++) {}

    return str1;
}

char *_strcat(char *str1, char *str2)
{
    char *pstr = str1;

    while (*pstr != '\0')
        ++pstr;
    while (*pstr++ = *str2++) {}
    return str1;
}


int _strcmp(const char *s1, const char *s2)
{
    for(; *s1 == *s2; ++s1, ++s2)
        if(*s1 == '\0') return 0;
    return *s1-*s2;
}

char *_strchr(char *s, int c)
{
    for(; *s !='\0'; s++)
        if(*s == c) return s;
    return NULL;
}

char *_strrchr(char *s, int c)
{
    char *p=NULL;
    for(; *s != '\0'; ++s)
        if(*s==c) p=s;
    return p;
}


int main()
{
    char s1[] = "nguyen duc dat";
    char s2[] = "truong minh tam";
    char *buffer = NULL;

    char *test[] = {"hello", "word", "win10", "project", "y8.com"};

    int n = sizeof test/sizeof *test;

    printf("%d", n);

    // size_t size;

    // size = sizeof(s1) - 1 + sizeof(s2) - 1 + 1;
    // if (!(buffer = (char *)malloc(100*sizeof(char))))
    // {
    //     printf("loi cap phat!");
    //     return 1;
    // }

    // printf("chuoi 1: [%s] (%lu)\n", s1, (unsigned long)_strlen(s1));
    // printf("chuoi 2: [%s] (%lu)\n", s2, (unsigned long)_strlen(s2));

    // printf("strcpy(buffer, s1) roi strcat(buffer, s2):\n");
    // _strcat(_strcpy(buffer, s1), s2);
    // printf("[%s] (%lu)\n", buffer, (unsigned long)_strlen(buffer));

    // int len = _strcmp(s2, s1);
    // printf("%d", len);

    // buffer = _strchr(s1, 'd');
    // printf("%s", buffer);

    for(int i=0; i<n; i++)
        printf("%s \n", test[i]);

    return 0;
}
