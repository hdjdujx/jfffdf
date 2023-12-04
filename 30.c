#include <stdio.h>
#include <stdlib.h>

int main ()
{
	double  num;

	int status;

	status=scanf("%Lf",&num);
	  while (status!=1)
	{
		printf("输入的不是数字，请输入一个整数");
		while (getchar()!='\n');
			status=scanf("%d",&num);

	}

		if (num==(int)num)
		printf("%d",(int)num);
		else printf("输入的是小数，请输入一个整数");


	return 0;
}
