////
////  programmerstriangle.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/29.
////
//
//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//int arr[1001][1001];
//int dx[3]={1,0,-1};
//int dy[3]={0,1,-1};
//vector<int> solution(int n) {
//    vector<int> answer;
//    int dir=0;
//    int num=0;
//    int x=-1;
//    int y=0;
//    int m=n+1;
//    while (m--){
//        if (m==0)break;
//        dir%=3;
//        int tmp=m;
//        while(tmp--){
//            num++;
//            x=x+dx[dir];
//            y=y+dy[dir];
//            arr[x][y]=num;
//        }
//        dir++;
//    }
//    for (int i = 0 ; i < n;i++){
//        int tmp=i;
//        for (int j = 0;j<=i;j++){
//            answer.push_back(arr[i][j]);
//        }
//    }
//    return answer;
//}
//
//int main(){
//    int n=5;
//    vector<int> a=solution(n);
//    for (auto i : a){
//        cout<<i<<' ';
//    }
//}
