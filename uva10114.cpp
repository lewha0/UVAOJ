#include<stdio.h>

int N, M;
double Down, Pay;
int Month[111];
double Rate[111];
double Loan, Value;

int main(void)
{
	int l1, l2;

	while(1)
	{
		scanf("%d %lf %lf %d", &N, &Down, &Loan, &M);
		if(N < 0) break;
		for(l1 = 0; l1 < M; l1++) scanf("%d %lf", &Month[l1], &Rate[l1]);
		Month[M] = N+1;

		Pay = Loan / N;
		Value = Down + Loan;
		l2 = 0;
		for(l1 = 0; l1 <= N; l1++)
		{
			if(l1 >= Month[l2+1]) l2++;
			Value *= (1 - Rate[l2]);
			if(Loan < Value - 1e-8)
			{
				if(l1 == 1) printf("%d month\n", l1);
				else printf("%d months\n", l1);
				break;
			}
			Loan -= Pay;
		}
	}

	return 0;
}
