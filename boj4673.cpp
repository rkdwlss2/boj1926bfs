////
////  boj4673.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/18.
////
//
//#include <iostream>
//using namespace std;
//bool arr[10010];
//void makeSelf(int n){
//    if (n>10000)return;
//    int m=n;
//    int answer=n;
//    while (m>0){
//        answer+=(m%10);
//        m/=10;
//    }
//    if (answer<=10000&&1<=answer){
//        arr[answer]=true;
//    }
//    makeSelf(answer);
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    for (int i = 1 ; i <=10000;i++){
//        makeSelf(i);
//    }
//    for (int i = 1;i<=10000;i++){
//        if (arr[i]==false){
//            cout<<i<<'\n';
//        }
//    }
//}
