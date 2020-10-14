//
//  progtriangle.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2020/10/14.
//

#include <string>
#include <vector>
#include <iostream>

using namespace std;
int n;
int dp[501][501];
vector<vector<int>> tri;
int go(int x,int y){
    if (x==n)return 0;
    if (dp[x][y]>0)return dp[x][y];
    return dp[x][y]=max(go(x+1,y),go(x+1,y+1))+tri[x][y];
}
int solution(vector<vector<int>> triangle) {
    int answer = 0;
    n=triangle.size();
    tri=triangle;
    answer =go(0,0);
    cout<<answer<<'\n';
    return answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> triangle={{7},{3,8},{8,1,0},{2,7,4,4},{4,5,2,6,5}};
    solution(triangle);
}
