/*************************************************************************
	> File Name: 1001.cc
	> Author: 
	> Mail: 
	> Created Time: 2014年11月19日 星期三 11时27分35秒
 ************************************************************************/

#include <cstdio>
#include <climits>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int a[110], sum[110];
int dp[110][2010];
int n;

void solve() {
    memset(sum, 0, sizeof(sum));
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        sum[i] = sum[i - 1] + a[i];
    }
    for (int i = 0; i <= 100; i++)
        for (int j = 0; j <= 2000; j++) dp[i][j] = INT_MIN;
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = sum[i]; j >= 0; j--) {
            if (a[i] >= j) dp[i][j] = max(dp[i - 1][j], max(dp[i - 1][a[i] - j] + j, dp[i - 1][j + a[i]]));
            else dp[i][j] = max(dp[i - 1][j], max(dp[i - 1][j - a[i]] + a[i], dp[i - 1][j + a[i]]));
        }
    int ans = -1;
    for (int i = 1; i <= n; i++) ans = max(ans, dp[i][0]);
    if (ans > 0) printf("%d\n", ans);
    else puts("Impossible");
}

int main() {
    while (scanf("%d", &n) == 1) solve();
    return 0;
}
