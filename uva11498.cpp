#include<stdio.h>

int K, N, M, X, Y;

int main(void)
{
	int l1;

	while(1)
	{
		scanf("%d", &K);
		if(K == 0) break;
		scanf("%d %d", &N, &M);
		for(l1 = 0; l1 < K; l1++)
		{
			scanf("%d %d", &X, &Y);
			if(N == X || M == Y) { printf("divisa\n"); }
			else if(N < X && M < Y) { printf("NE\n"); }
			else if(N > X && M < Y) { printf("NO\n"); }
			else if(N < X && M > Y) { printf("SE\n"); }
			else if(N > X && M > Y) { printf("SO\n"); }
		}
	}
	return 0;
}
