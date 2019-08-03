//著名的爱因斯坦阶梯问题：有一条长长的阶梯。
//如果你每步2阶，最后剩1阶；每步3阶，剩2阶…
//只有每步7阶才能走完，问阶梯至少多少阶？

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	for (i = 100; i < 1000; i++)
	{
		if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}
