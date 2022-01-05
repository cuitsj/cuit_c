#include <stdio.h>
#include <stdlib.h>

/* User Code Begin(考生可在本行后添加代码，行数不限) */
typedef struct
{
	int num, math, english, computer;
	char name[19];
	float average;
} STUDENT;

void paixu(STUDENT *p, int n);
/* User Code End(考生添加代码结束) */

int main(void)
{
	STUDENT myclass[5], *pStu = myclass;
	int i;
	const int N = 5;

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	printf("Please input info of students:No Name Math English Computer\n");
	for (i=0; i<N; i++)
	{
		printf("%d:", i + 1);
		scanf("%d %s %d %d %d", &(pStu+i)->num, (pStu+i)->name, &(pStu+i)->math, &(pStu+i)->english, &(pStu+i)->computer);
		pStu[i].average = (pStu[i].math + pStu[i].english + pStu[i].computer) / 3.0f;
	}
	paixu(myclass, N);
	/* User Code End(考生添加代码结束) */
	
	printf("\nResult of sort:\n");
	printf("Num   Name                 Math     English  Computer Average\n");
	for (i=0; i<N; i++)
	{
		printf("%-5d %-20s %-8d %-8d %-8d %-.2f\n", (pStu+i)->num, (pStu+i)->name,
			(pStu+i)->math, (pStu+i)->english, (pStu+i)->computer, (pStu+i)->average);
	}

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
void paixu(STUDENT *p, int n)
{
	int i, j;
	STUDENT tmp;

	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (p[i].average < p[j].average)
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}






