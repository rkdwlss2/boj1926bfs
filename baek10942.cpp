//
//  baek10942.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2020/10/20.
//

#include <iostream>

using namespace std;
int arr[2001];
bool dp[2001][2001];
bool go(int x,int y){
    if (x==y)return true;
    if (y-x==1){
        if (arr[x]==arr[y])return true;
        else return false;
    }
    if (dp[x][y]>0)return dp[x][y];
    if (arr[x]==arr[y])return dp[x][y]=go(x+1,y-1);
    else return dp[x][y]=false;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1 ; i <= n;i++){
        cin>>arr[i];
    }
    int m;
    cin >>m;
    while (m--){
        int s,e;
        cin >> s>>e;
        if (go(s,e)){
            cout<<1<<'\n';
        }
        else{
            cout<<0<<'\n';
        }
    }
}
