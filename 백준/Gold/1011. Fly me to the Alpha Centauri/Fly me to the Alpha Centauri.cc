#include <stdio.h>
#include <math.h>

int main() {
	int tc;
	for (scanf("%d", &tc); tc; tc--) {
		int s, e;
		scanf("%d %d", &s, &e);

		long long i = 1, d = e - s;
		while (i*i <= d) i++; i--;
		d = ceil((double)(d-i*i)/i);

		printf("%lld\n", i+i-1+d);
	}
	return 0;
}