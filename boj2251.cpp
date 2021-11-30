//
//  boj2251.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2021/11/30.
//

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int A,B,C;
vector<int> answer;
bool visited[201][201][201];
struct Info{
    int a,b,c;
};

void bfs(){
    queue<Info> q;
    q.push({0,0,C});
    while(!q.empty()){
        int a=q.front().a;
        int b=q.front().b;
        int c=q.front().c;
        q.pop();
        if (visited[a][b][c])continue;
        visited[a][b][c]=true;
        if (a==0)answer.push_back(c);
        
        if (a+b>B)q.push({a+b-B,B,c});
        else q.push({0,a+b,c});
        
        if (a+c>C)q.push({a+c-C,b,C});
        else q.push({0,b,c+a});
        
        if (b+c>C)q.push({a,b+c-C,C});
        else q.push({a,0,b+c});
        
        if (b+a>A)q.push({A,b+a-A,c});
        else q.push({a+b,0,c});
        
        if (c+a>A)q.push({A,b,a+c-A});
        else q.push({a+c,b,0});
        
        if (c+b>B)q.push({a,B,c+b-B});
        else q.push({a,b+c,0});
        
        
    }
}

int main(){
    cin>>A>>B>>C;
    bfs();
    sort(answer.begin(),answer.end());
    for (auto i : answer){
        cout<<i<<' ';
    }
}
