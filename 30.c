#include <stdio.h>
#include <stdlib.h>

int main ()
{
	double  num;

	int status;

	status=scanf("%Lf",&num);
	  while (status!=1)
	{
		printf("����Ĳ������֣�������һ������");
		while (getchar()!='\n');
			status=scanf("%d",&num);

	}

		if (num==(int)num)
		printf("%d",(int)num);
		else printf("�������С����������һ������");


	return 0;
}
