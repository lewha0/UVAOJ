#include<stdio.h>

char A[202];
long long D[202];
int N, T;

int main(void)
{
	int l1, l2;
	long long range = 1;

	for(l1 = 0; l1 < 31; l1++) range = range + range;
	range--;

	for(scanf("%d", &T); T >= 1; T--)
	{
		scanf("%s", A+1);
		A[0] = '0';
		for(N = 0; A[N]; N++);

		for(l1 = 1; l1 < N; l1++)
		{
			long long ten = 1;
			long long curr = 0;
			D[l1] = D[l1-1] + (A[l1] - '0');
			for(l2 = l1; l2 >= 0; l2--)
			{
				curr += ten * (A[l2] - '0');
				ten *= 10;

				if(A[l2] == '0') continue;
				if(curr > range) break;

				if(D[l1] < D[l2-1] + curr) D[l1] = D[l2-1] + curr;
			}
		}

		printf("%lld\n", D[N-1]);
	}

	return 0;
}
