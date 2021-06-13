//#include <cstdio>
//#include <cstring>
//
//int n, dp[12345][23];
//int min(int a, int b) { return a < b ? a : b; }
//
//int go(int now, int cnt) {
//    if (now == 0 || cnt > 20) return 1e9;
//    if (now == n) return 0;
//    if (dp[now][cnt] != -1) return dp[now][cnt];
//
//    int ret = go(now - 1, cnt + 1) + 1;
//    for (int i = 2; i * now < 12345; i++) {
//        ret = min(ret, go(i * now, cnt) + i);
//    }
//
//    return dp[now][cnt] = ret;
//}
//
//int main() {
//    scanf("%d", &n);
//    memset(dp, -1, sizeof(dp));
//    printf("%d\n", go(1, 0));
//    return 0;
//}
