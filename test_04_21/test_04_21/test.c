#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//void Swap(int* x, int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//执行a，b交换
//	//交换前:
//	printf("交换前a=%d,b=%d\n", a, b);
//	//执行交换
//	Swap(&a, &b);
//	//交换后:
//	printf("交换后a=%d,b=%d\n", a, b);
//
//	return 0;
//}


//
//int main()
//{
//	//strcmp的使用
//	char arr1[] = "abcdef";
//	char arr2[] = "abcfde";
//	if (strcmp(arr1, arr2) == 0)
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	memset的使用
//	char arr1[] = "hello world!!!";
//    memset(arr1+6, '#', 8);
//
//	printf("%s\n", arr1);
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);//变量
//	Add(10, 20);//常量
//	Add(a + 10, b);//表达式
//	Add(Add(a, b), 10);//函数
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	
//
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int z = x;
//	x = y;
//	y = z;
//}

//void Swap2(int* px, int* py)
//{
//	int z = *px;//*px =a;
//	*px = *py;//a = b;
//	*py = z;// b = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a=%d,b=%d\n", a, b);
//	//Swap1(a, b);//值传递
//	Swap2(&a, &b);//址传递
//	printf("交换后:a=%d,b=%d\n", a, b);
//
//	return 0;
//}

/*oid Print()
{
	void Test()
	{
		printf("hehe\n");
	}
	printf("haha\n");
}



int main()
{
	Test();
	return 0;
}*/


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//strlen作为printf函数的参数
//	return 0;
//}

//int main()
//{
//	//printf("%d", printf("%d", printf("%d",43)));
//	int a = printf("%d", 43);
//	int b = printf("%d", a);
//	int c = printf("%d", b);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//       if (ch == '\n')
//        {
//            continue;
//        }
//        if (ch >= 97)
//        {
//            ch -= 32;
//        }
//        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//        {
//            printf("Vowel\n");
//        }
//        else
//            printf("Consonant\n");
//    }
//
//
//    return 0;
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a = 0.0f;
//    float b = 0.0f;
//    float c = 0.0f;
//    scanf("%f %f %f", &a, &b, &c);
//    float detail = b * b - 4 * a * c;
//    float x1 = 0.0f, x2 = 0.0f;
//
//    if (a == 0)
//    {
//        printf("Not quadratic equation\n");
//    }
//    if (detail == 0)
//    {
//        x1 = (-b + sqrt(detail)) / (2 * a);
//        x2 = x1;
//        printf("x1=x2=%.2f\n", x1);
//    }
//    else if (detail > 0)
//    {
//        x1 = (-b - sqrt(detail)) / (2 * a);
//        x2 = (-b + sqrt(detail)) / (2 * a);
//        printf("x1=%.2f;x2=%.2f\n", x1, x2);
//    }
//    else
//    {
//        float x_true = -b / (2 * a);
//        float x_false = sqrt(-detail) / (2 * a);
//        printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", x_true, x_false, x_true, x_false);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char arr[13] = { 0 };
//    scanf("%s", arr);
//    int i = 0;
//    int sum = 0;
//    int j = 0;
//    for (i = 0; i < 12; i++)
//    {
//        if (arr[i] != '-')
//        {
//            j++;
//            sum = sum + (arr[i] - 48) * j;//字符转数字：数字0和字符'0'相差48
//        }
//    }
//    int ISBN = sum % 11;
//    if (ISBN == 10)
//    {
//        if (arr[12] == 'X')
//        {
//            printf("Right\n");
//        }
//        else
//        {
//            arr[12] = 'X';
//            printf("%s\n", arr);
//        }
//    }
//    else
//    {
//        if (arr[12] - 48 != ISBN)
//        {
//            arr[12] = ISBN + 48;
//            printf("%s\n", arr);
//        }
//        else
//        {
//            printf("Right\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char arr[14];//开
//    int i, j;
//    scanf("%s", arr);
//    int s = 0;
//    for (i = 0, j = 1; i < 11; i++)
//    {
//        if (arr[i] != '-')
//        {
//            s += (arr[i] - '0') * j;
//            j++;
//        }
//    }
//    int m = s % 11;
//    if (m == arr[12] - '0' || (m == 10 && arr[12] == 'X'))
//    {
//        printf("Right\n");
//    }
//    else
//    {
//        if (m == 10)
//        {
//            for (i = 0; i < 12; i++)
//            {
//                printf("%c", arr[i]);
//            }
//            printf("X");
//        }
//        else {
//            for (i = 0; i < 12; i++)
//            {
//                printf("%c", arr[i]);
//            }
//            printf("%d", m);
//        }
//    }
//}

//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int i = 0;
//    int j = 0;
//    float z = 0;
//    for (i = 1; i <= N; i++)
//    {
//        int ret = 0;
//        int sum = 0;
//        int sub = 0;
//        for (j = 1; j <= i; j++)
//        {
//            if (j % 2 != 0)
//            {
//                sum += 2 * j - 1;
//            }
//            else
//            {
//                sub += 2 * j - 1;
//            }
//        }
//        ret = sum - sub;
//        z += 1.0 / ret;
//    }
//    printf("%.3f", z);
//    return 0;
//}


#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int math = 0;
    int chinese = 0;
    int eg = 0;
    int count = 0;
    while (n)
    {
        scanf("%d %d %d", &chinese, &math, &eg);
        n--;
        if ((chinese + math + eg) / 3.0 < 60)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}