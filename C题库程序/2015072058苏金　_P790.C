#include <stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如结构体的定义、函数原型声明等，行数不限) */
struct stu
{
	char name[10], num[10];
	int score;
};

void input(struct stu *p, int n);
void output(struct stu *p, int n);
/* User Code End(考生添加代码结束) */

int main(void)
{  
	struct stu stud[5];	 
	
	input(stud, 5);   
	printf("\nfailed the exam: ");  
	output(stud, 5);
	
	return 0; 
}

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */
void input(struct stu *p, int n)
{
	int i;

	printf("input name number score:\n");
	for (i=0; i<n; i++)
	{
		printf("student %d: ", i + 1);
		scanf("%s %s %d", (p + i)->name, (p + i)->num, &(p + i)->score);
		if ((p + i)->score > 100 || (p + i)->score < 0)
		{
			printf("           error score! input again!\n");
			i--;
		}
	}
}

void output(struct stu *p, int n)
{
	int i;

	for (i=0; i<n; i++)
	{
		if ((p + i)->score < 60)
		{
			printf("%s/%s,%d   ", (p + i)->num, (p + i)->name, (p + i)->score);
		}
	}
}
