#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//
//void Print(char* ch)
//{
//    char* start = ch;
//    int i = 0;
//    char* tail = ch;
//    while (*tail != '\0')
//    {
//        tail++;
//    }
//
//
//    while (*start != '\0')
//    {
//        printf("%c", ch[i]);
//        i++;
//        start++;
//        if ((tail - start) % 3 == 0 && *(start) != '\0')
//        {
//            printf(",");
//        }
//    }
//
//}
//
////572 052 \0
//
//int main()
//{
//    char ch[15];
//    scanf("%s", ch);
//    Print(ch);
//
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    char ch[n];
//    scanf("%s", ch);
//    int i = 0;
//    int l = 0;
//    int r = 0;
//    char c1;
//    char c2;
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d %d %c %c", &l, &r, &c1, &c2);
//        int j = 0;
//        for (j = l - 1; j <= r - 1; j++)
//        {
//            if (ch[j] == c1)
//            {
//                ch[j] = c2;
//            }
//        }
//    }
//    printf("%s", ch);
//
//    return 0;
//}



#include<stdio.h>

void Func(char* ch)
{
    char* start = ch;
    int i = 0;
    while (*start != '\0')
    {
        if (*start >= 'A' && *start <= 'Z')
        {
            printf("%c", ch[i]);
        }
        else
        {
            printf("%c", ch[i] - 32);
        }
        while (*start != ' ' && *start != '\0')
        {
            start++;
            i++;
        }
        if (*start != '\0')
        {
            start++;
            i++;
        }
    }

}

int main()
{
    char ch[101];
    gets(ch);
    Func(ch);

    return 0;
}