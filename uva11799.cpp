#include<stdio.h>

int T, N, C, Ret;

int main(void)
{
	int l0;

	scanf("%d", &T);
	for(l0 = 1; l0 <= T; l0++)
	{
		Ret = 0;
		for(scanf("%d", &N); N >= 1; N--)
		{
			scanf("%d", &C);
			if(Ret < C) Ret = C;
		}
		printf("Case %d: %d\n", l0, Ret);
	}

	return 0;
}
