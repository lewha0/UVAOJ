#include<stdio.h>

int H, U, D, F, Curr;

int main(void)
{
	int day, minus;

	while(scanf("%d %d %d %d", &H, &U, &D, &F))
	{
		if(H == 0) break;

		Curr = 0;
		H *= 100;
		U *= 100;
		D *= 100;
		minus = U * F / 100;
		for(day = 1; ; day++)
		{
			Curr += U;
			if(Curr > H)
			{
				printf("success on day %d\n", day);
				break;
			}
			U -= minus;
			if(U < 0) U = 0;
			Curr -= D;
			if(Curr < 0)
			{
				printf("failure on day %d\n", day);
				break;
			}
		}
	}

	return 0;
}
