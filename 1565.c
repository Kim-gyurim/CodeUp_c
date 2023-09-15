#include<stdio.h>

int gcd(int p, int q){if(p==0) return q; return gcd(q%p, p);}


long long int lcm(int a, int b) {
	long long int N = a;
	long long int M = b;
	if(N > M) {
		N = b;
		M = a;
	}
	return N / gcd(M, N) * M;
}

int main()
{
    int a, b;
    scanf("%d%d",&a, &b);
    printf("%lld\n", lcm(a, b));
}
