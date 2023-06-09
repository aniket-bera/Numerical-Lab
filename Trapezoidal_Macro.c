#include<stdio.h>
#include<math.h>
#define f(x) 1 / (1 + x * x)

int main(void){
	int n, i;
	float a, b, h, sum = 0.0, x, p;
	
	printf("Enter lower bound: ");
	scanf("%f", &a);
	
	printf("\nEnter upper bound: ");
	scanf("%f", &b);
	
	printf("\nEnter the no.of intervals: ");
	scanf("%d", &n);
	
	h = fabs(b - a) / n;
	
	for(i = 1; i <= n - 1; i++){
	    x = a + i * h;
		sum = sum + f(x);	
	}
	
	p = (h / 2) * (f(a) + f(b) + 2 * sum);
	printf("\nThe value of the integral is %.4f", p);
	
	return 0;
}