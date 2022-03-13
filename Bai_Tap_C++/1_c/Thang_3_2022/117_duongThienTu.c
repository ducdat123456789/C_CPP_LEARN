#include<stdio.h>

int _strlen(char *s)
{
    char *p = s;
    while(*p) ++p;

    return p-s;
}

char *return_left(char *s, int n)
{
    char *p=NULL;
    for(int i=0; i<n; i++)
        *p++ = s[i];
    return p;
}

char *return_right(char *s, int n)
{

}

int main()
{

}