////
////  boj14501.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/18.
////
//
//#include <iostream>
//
//using namespace std;
//
//int day[16];
//int pay[16];
//int n;
//int d[16][1001];
//int dp(int index){
//    if (index>=n)return 0;
//    if (d[index][day[index]]>0)return d[index][day[index]];
//    int m1=0;
//    if (n>=index+day[index]){
//        m1=dp(index+day[index])+pay[index];
//    }
//    int m2=dp(index+1);
//    return d[index][day[index]] = max(m1,m2);
//}
//
//int main(){
//    cin >> n;
//    for (int i =0 ; i <n;i++){
//        cin>>day[i]>>pay[i];
//    }
//    cout<<dp(0);
//}
