#include<stdio.h>
#include<algorithm>

using namespace std;

int T, A, B, C, Ret;

int main(void)
{
	int l0;

	scanf("%d", &T);
	for(l0 = 1; l0 <= T; l0++)
	{
		scanf("%d %d %d", &A, &B, &C);
		Ret = A + B + C;
		Ret -= min(min(A, B), C);
		Ret -= max(max(A, B), C);
		printf("Case %d: %d\n", l0, Ret);
	}
	return 0;
}
