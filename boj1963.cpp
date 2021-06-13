////
////  boj1963.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/03.
////
//
//#include <iostream>
//#include <cmath>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//const int man=10000;
//
//bool er[10001];
//int start,ans;
//bool visited[10001];
//void eran(){
//    int N=sqrt(man);
//    for (int i=2;i<=N;i++){
//        for (int j=2*i;j<=man;j+=i){
//            er[j]=true;
//        }
//    }
//}
//int ten(int index){
//    int answer=1;
//    while(index--){
//        answer*=10;
//    }
//    return answer;
//}
//int bfs(){
//    queue<pair<int,int>> q;
//    while(!q.empty())q.pop();
//    q.push({start,0});
//    visited[start]=true;
//    while (!q.empty()){
//        int now=q.front().first;
//        int count=q.front().second;
//        q.pop();
//        if (now<1000)continue;
//        if (now==ans){
//            return count;
//        }
//        for (int index=0;index<4;index++){
//            int num=(now/ten(index))%10;
//            for (int i=0;i<10;i++){
//                if (i!=num){
//                    int tmp=now;
//                    tmp+=(i-num)*ten(index);
//                    if (er[tmp]==false&&visited[tmp]==false){
//                        visited[tmp]=true;
//                        q.push({tmp,count+1});
//                    }
//                }
//            }
//        }
//    }
//    return -1;
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    eran();
//    int tc;
//    cin>>tc;
//    while(tc--){
//        cin>>start>>ans;
//        memset(visited,false,sizeof(visited));
//        int answer=bfs();
//        if (answer==-1){
//            cout<<"Impossible"<<'\n';
//        }else{
//            cout<<answer<<'\n';
//        }
//    }
//}
