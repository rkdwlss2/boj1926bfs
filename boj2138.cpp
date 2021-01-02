////
////  boj2138.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/01.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n;
//int board[100001];
//int board1[100001];
//int answer[100001];
//const int inf=987654321;
//void flip(int x){
//    for (int i=x-1;i<=x+1;i++){
//        if (i>=0&&i<=n-1){
//            board[i]=1-board[i];
//        }
//    }
//}
//bool check(){
//    for (int i=0;i<n;i++){
//        if (board[i]!=answer[i])return false;
//    }
//    return true;
//}
//int solve(int first){
//    int count=0;
//    if (first==1){
//        flip(0);
//        count++;
//    }
//    for (int i=1;i<n;i++){
//        if (board[i-1]!=answer[i-1]){
//            flip(i);
//            count++;
//        }
//    }
//    if (check()==true){
//        return count;
//    }else{
//        return inf;
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i=0;i<n;i++){
//        char tmp;
//        cin>>tmp;
//        board1[i]=tmp-'0';
//        board[i]=tmp-'0';
//    }
//    for (int i=0;i<n;i++){
//        char tmp;
//        cin>>tmp;
//        answer[i]=tmp-'0';
//    }
//    int a1=solve(0);
//    for (int i=0;i<100001;i++){
//        board[i]=board1[i];
//    }
//    int a2=solve(1);
//    a1=min(a1,a2);
//    if (a1==inf)cout<<-1<<'\n';
//    else{
//        cout<<a1<<'\n';
//    }
//
//}
