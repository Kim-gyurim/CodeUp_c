#include <stdio.h>

int memo[201]={0,1,1,2,3,5,8,13};

int f(int a)
{
	if(memo[a]) return memo[a];
    return memo[a] = (f(a-1) + f(a-2))%10009;
}

int main()
{

	int a;
	scanf("%d", &a);
	int b = f(a);
	printf("%d\n", b);

	return 0;
}
