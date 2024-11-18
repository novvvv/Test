#include <stdio.h>
int N, K, cnt = 0;
int main(void)
{	
	scanf("%d %d",&N ,&K);
	int arr[N];
	
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&arr[i]);
	}
	 
	for (int i = N-1; i>=0; i--)
	{
		cnt += K / arr[i];
		K = K % arr[i];
	}
	
	printf("%d",cnt);
	
	return 0;
}
