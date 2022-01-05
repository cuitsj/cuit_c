#include <stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */
struct stu
{
	char name[20];
	int num;
	float score1, score2, score3, score4, aver;
};

void input(struct stu *p, int n);
int findhigh(struct stu *p, int n);
/* User Code End(考生添加代码结束) */

int main(void)
{
	int high;  /* high记录平均分最高的学生的序号，具体使用参考后面的代码 */

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	struct stu myClass[5];

	input(myClass, 5);
	high = findhigh(myClass, 5);
	/* User Code End(考生添加代码结束) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  score4=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].score4, myClass[high].aver);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
void input(struct stu *pi, int n)
{
	int i;

	printf("Please input students  info:Num Name score1 score2 score3 score4\n");
	for (i=0; i<n; i++)
	{
		printf("%d:", i + 1);
		scanf("%d %s %f %f %f %f", &pi[i].num, pi[i].name, &pi[i].score1, &pi[i].score2, &pi[i].score3, &pi[i].score4);
		pi[i].aver = (pi[i].score1 + pi[i].score2 + pi[i].score3 + pi[i].score4) / (float)4;
	}
}

int findhigh(struct stu *pi, int n)
{
	int i, high = 0;
	float max = pi[0].aver;

	for (i=0; i<n; i++)
	{
		if (max < pi[i].aver)
		{
			max = pi[i].aver;
			high = i;
		}
	}
	return high;
}


