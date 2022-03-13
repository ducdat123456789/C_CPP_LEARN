#include<stdio.h>

#define MAX 100

void xuLy(char *arr)
{
    int i=0;
    int head, maxhead, maxlen;

    head = maxhead = maxlen=0;
    
    while(arr[i]!='\0')
    {
        int len = 0;
        for(i=head; arr[i]!='\0'&&arr[i]=='0'; i++)
            len++;
        
        if(len>maxlen)
        {
            maxlen = len;
            maxhead = head;
        }

        head =i+1;
    }

    printf("chuoi 0 co do dai lon nhat bang: %d\nBat dau tai s[%d]", maxlen, maxhead);

}

int main()
{
    char ch[MAX];

    printf("vao chuoi nhi phan: ");
    fflush(stdin);
    scanf("%s", ch);

    printf("%s", ch);

    xuLy(ch);

    return 0;
}