////
////  boj14002.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/17.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n,cache[1001];
//int s[1001];
//int choice[1001];
//vector<int> seq;
//int dp(int index){
//    int &ret=cache[index+1];
//    if (ret!=-1)return ret;
//    ret=1;
//    int bestNext=-1;
//    for (int next=index+1;next<n;next++){
//        if (index==-1||s[index]<s[next]){
//            int cand=dp(next)+1;
//            if (cand>ret){
//                ret=cand;
//                bestNext=next;
//            }
//        }
//    }
//    choice[index+1]=bestNext;
//    return ret;
//}
//void reconstruct(int start){
//    if (start!=-1)seq.push_back(s[start]);
//    int next=choice[start+1];
//    if (next!=-1)reconstruct(next);
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n;i++){
//        cin>>s[i];
//    }
//    fill(cache,cache+1001,-1);
//    fill(choice,choice+1001,-1);
//    cout<<dp(-1)-1<<'\n';
//    reconstruct(-1);
//    for (auto i : seq){
//        cout<<i<<' ';
//    }
//    cout<<'\n';
//}
