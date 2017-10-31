#include<stdio.h>

int N, B, H, W, P, A, Ret;

int main(void)
{
	int l1, l2;

	while(1)
	{
		if(scanf("%d %d %d %d", &N, &B, &H, &W) != 4) break;
		Ret = B+1;
		for(l1 = 0; l1 < H; l1++)
		{
			scanf("%d", &P);
			for(l2 = 0; l2 < W; l2++)
			{
				scanf("%d", &A);
				if(N <= A && P*N < Ret) Ret = P*N;
			}
		}
		if(Ret > B) printf("stay home\n");
		else printf("%d\n", Ret);
	}
	return 0;
}
