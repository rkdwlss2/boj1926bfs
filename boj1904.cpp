////
////  boj1904.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/05.
////
//
//#include <iostream>
//using namespace std;
//int n;
//int cache[1000001];
//
//int go(int n){
//    if(n==1)return 1;
//    if (n==2)return 2;
//    int& ret=cache[n];
//    if (ret!=-1)return ret;
//    ret=0;
//    return ret=(go(n-1)%15746+go(n-2)%15746)%15746;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    fill(cache,cache+1000001,-1);
//    cin>>n;
//    cout<<go(n)<<'\n';
//}
