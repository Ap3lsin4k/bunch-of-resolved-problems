#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int E, F;
int dp[10086];

struct coin{
	int p, w;
};

coin coins[520];

bool compare(const coin &c1, const coin &c2){
	return c1.w < c2.w;
}

int main() {
    scanf("%d%d", &E, &F);//cin>>E>>F;
    F -= E;
    int cn;  // coin number
    scanf("%d", &cn);
    for(int i = 0; i < cn; i++){
        scanf("%d%d", &coins[i].p, &coins[i].w);
    }
    sort(coins, coins+cn, compare);
    dp[0] = 0;
    for(int i = 1; i <= F; i++) dp[i] = 2147483647;
    for(int i = 1; i <= F; i++){
        int minCost = 2147483647;
        for(int j = 0; j < cn; j++){// for each type of coin
            if(coins[j].w>i) break;
            if(dp[i-coins[j].w]==2147483647) continue;
            int tempCost = coins[j].p + dp[i-coins[j].w];
            if(tempCost < minCost) minCost = tempCost;
        }
        dp[i] = minCost;
    }
    if(dp[F] == 2147483647) printf("-1");
    else printf("%d", dp[F]);
	return 0;
}
