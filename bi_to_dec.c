/*Binary to decimal*/
#include<stdio.h>
#include<math.h>
void main()
{
	long long int n;
	printf("Enter the binary number:");
	scanf("%lld",&n);
	printf("%d is the decimal number.\n",bi_to_deci(n));
}
bi_to_deci(long long n)
{
	int sum=0,rem=0,i=0;
	while(n!=0)
	{
		rem=n%10;
		sum+=rem*pow(2,i);
		n=n/10;
		i++;
	}
	return sum;
	
}
