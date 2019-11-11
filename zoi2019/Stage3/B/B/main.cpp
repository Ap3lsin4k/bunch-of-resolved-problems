#include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
#include <iostream>
using namespace std;
 const int maxn = 50005;
 int w[maxn], v[maxn],dp[maxn];//w[i]  每种硬币质量   v[i]每种硬币的价值
 #define min(a,b) ((a)<(b)?(a):(b))
 int main()
 {
 	int t, E, F,n;//E 空罐的质量  F  满罐的质量   1<=E<=F<=10000g  n几种硬币  1<=n<=500
 	scanf("%d", &t);
	getchar();
 	while (t--)
 	{
 		scanf("%d%d", &E, &F);
 		scanf("%d", &n);
 		memset(dp, 0x3f, sizeof(dp));
 		dp[0] = 0;
 		for (int i = 1; i <= n; i++)
 		{
 			scanf("%d%d", v + i,w + i);
 		}

 		for (int i = 1; i <= n; i++)
 		{
 			for (int j = w[i]; j <= F-E; j++)
			{
 				dp[j] = min(dp[j], dp[j - w[i]] + v[i]);
 			}
 		}

 		if (dp[F - E] != dp[50001])
 		{
 			cout<<dp[F - E];
 		}
 		else
 		{
 			cout<<-1;
 		}
 	}

 	return 0;
}
