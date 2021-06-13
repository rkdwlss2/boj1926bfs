////
////  boj11866.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/12.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    queue<int> q;
//    int n,m;
//    cin>>n>>m;
//    vector<int> answer;
//    for (int i = 1 ; i <=n;i++ ){
//        q.push(i);
//    }
//    int tmp=m;
//    while(!q.empty()){
//        auto now=q.front();
//        q.pop();
//        tmp--;
//        if (tmp==0){
//            answer.push_back(now);
//            tmp=m;
//        }else{
//            q.push(now);
//        }
//    }
//    cout<<"<";
//    for (int i = 0 ; i < answer.size()-1;i++){
//        cout<<answer[i]<<", ";
//    }
//    cout<<answer[answer.size()-1]<<">";
//}
