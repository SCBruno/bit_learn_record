#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\15508\\Desktop\\test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	
//	//int ch = fgetc(pf);
//	//printf("%c ", ch);
//	//ch = fgetc(pf);
//	//printf("%c ", ch);
//	//ch = fgetc(pf);
//	//printf("%c ", ch);
//	//printf("\n");
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	printf("\n");
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "a");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	fputs("hello world", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	char arr[20] = { 0 };
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen::");
//		return 1;
//	}
//	struct Stu s = { "zhangsan", 14, 98.5 };
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen::");
//		return 1;
//	}
//
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}





//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen::");
//		return 1;
//	}
//	struct Stu s = { "zhangsan", 14, 98.5 };
//	fprintf(stdout, "%s %d %f", s.name, s.age, s.score);
//	printf("\n");
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");//�Զ�������ʽд
//	if (pf == NULL)
//	{
//		perror("fopen::");
//		return 1;
//	}
//	struct Stu s = { "zhangsan", 14, 98.5 };
//	fwrite(&s, sizeof(struct Stu), 1, pf);
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "rb");//�Զ�������ʽд
//	if (pf == NULL)
//	{
//		perror("fopen::");
//		return 1;
//	}
//	struct Stu s = { 0 };
//
//	fread(&s, sizeof(struct Stu), 1, pf);
//	printf("%s %d %f", s.name, s.age, s.score);
//	printf("\n");
//
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct Stu s = { "zhangsan",20,55.5f };
	char buf[100] = { 0 };
	//��s�еĸ�ʽ������ת��Ϊ�ַ����ŵ�buf��
	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
	
	struct Stu tmp = { 0 };
	//���ַ���buf�л�ȡһ����ʽ�����ݵ�tmp��
	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
	printf("\n");
	return 0;
}  