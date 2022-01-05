#include <stdio.h> 

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */
struct stu
{
	int num;
	char name[19];
	float score1, score2, score3, aver;
};

int fhigh(struct stu num[5]);
/* User Code End(考生添加代码结束) */

int main(void)
{
	int high;  /* high记录平均分最高的学生的序号，具体使用参考后面的代码 */

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	int i;
	struct stu myClass[5];

	printf("Please input students  info:Num Name score1 score2 score3\n");
	for (i=0 ; i < 5 ; i++)
	{
		printf("%d:", i + 1);
		scanf("%d %s %f %f %f", &myClass[i].num, myClass[i].name, &myClass[i].score1, &myClass[i].score2, &myClass[i].score3);
	}
	high = fhigh(myClass);
	/* User Code End(考生添加代码结束) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
int fhigh(struct stu num[5])
{
	int i, high = 0;

	num[0].aver = (num[0].score1 + num[0].score2 + num[0].score3) / 3;
	for (i=0 ; i < 5 ; i++)
	{
		if (num[0].aver < (num[i].score1 + num[i].score2 + num[i].score3) / 3)
		{
			num[i].aver = (num[i].score1 + num[i].score2 + num[i].score3) / 3;
			num[0].aver = (num[i].score1 + num[i].score2 + num[i].score3) / 3;
			high = i;
		}
	}
	return high;
}



