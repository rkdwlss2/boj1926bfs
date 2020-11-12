//
//  boj5557.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2020/11/12.
//

#include <iostream>
using namespace std;
long long n,m;
long long dp[101][21];
long long a[101];

long long d(long long index,long long sum){
    if (index == n-1){
        if (sum==m){
            return 1;
        }
        else return 0;
    }
    if (0>sum||sum>20)return 0;
    long long& ret = dp[index][sum];
    if (ret!=-1)return ret;
    return ret=d(index+1,sum+a[index])+d(index+1,sum-a[index]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for (int i = 0 ; i<n-1;i++){
        cin>>a[i];
    }
    cin>>m;
    for (int i=0;i<101;i++){
        fill(dp[i],dp[i]+21,-1);
    }
    cout<<d(1,a[0])<<'\n';
}
