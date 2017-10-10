#include<stdio.h>

int T, A, B;

int main(void)
{
	for(scanf("%d", &T); T >= 1; T--)
	{
		scanf("%d %d", &A, &B);
		printf("%s\n", (A == B) ? "=" : ((A > B) ? ">" : "<"));
	}

	return 0;
}
