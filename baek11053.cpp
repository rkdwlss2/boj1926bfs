////
////  baek11053.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/07.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[1005];
//int d[1005];
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i =0 ;i<n;i++){
//        cin>>a[i];//들어온 값 저장
//    }
//    d[0]=1;//초기값 세팅
//    for (int i = 1 ; i<n;i++){
//        d[i]=1;//i번째 초기값 세팅
//        for (int j =0;j<i;j++){// i번째 전에 연속되는 값이 있으면 기존값과 비교해서 update
//            if (a[j]<a[i])d[i]=max(d[i],d[j]+1);
//        }
//    }
//    cout << *max_element(d, d+n);//0부터 n전까지 가장 큰값 출력
//}
//
