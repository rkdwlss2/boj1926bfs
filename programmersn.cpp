////
////  programmersn.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/15.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//int answer =9;
//int n;
//void dfs(int N,int count,int currentNumber){
//    if (count>=9)return;
//    if (currentNumber==n){
//        answer=min(answer,count);
//        return;
//    }
//    int tempNumber=0;
//    for (int i =0;i+count<9;i++){
//        tempNumber=tempNumber*10+N;
//        dfs(N,count+1+i,currentNumber+tempNumber);
//        dfs(N,count+1+i,currentNumber-tempNumber);
//        dfs(N,count+1+i,currentNumber*tempNumber);
//        dfs(N,count+1+i,currentNumber/tempNumber);
//    }
//}
//int solution(int N, int number) {
//    n=number;
//    dfs(N,0,0);
//    if(answer==9)return -1;
//    return answer;
//}
//
//int main(void){
//    int n = 5;
//    int number =3600;
//    cout<<solution(n,number)<<'\n';
//}
