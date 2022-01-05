#include<stdio.h>

int main(void)
{
	int sco[40], i, j, max = 0, min = 100, sum = 0;
	double ave, heg = 0;
	
	printf("请输入40位同学的成绩：");
	for (i=0 ; i<=39 ; i++)
	{
		scanf("%d", &sco[i]);
	}
	for (i=0 ; i<=39 ; i++)
	{
		for (j=0 ; j<=39 ; j++)
		{
			max = max > sco[j] ? max : sco[j];
			min = min < sco[j] ? min : sco[j];
		}
		if (sco[i] >= 60)
		{
			heg++;
		}
		sum = sum + sco[i];
	}
	ave = sum / 40.0;
	printf("\n最高分：%d\n最低分：%d\n平均分：%.1lf\n及格率：%.0lf%%\n", max, min, ave, heg/0.4);
	return 0 ;
}



