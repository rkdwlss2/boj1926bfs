////
////  boj10844.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/24.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//#define lli long long int
//lli n;
//lli cache[101][11];
//
//lli dp(lli index,lli prev){
//    if (index==n)return 1;
//    lli& ret=cache[index][prev];
//    if (ret!=-1)return ret;
//    ret=0;
//    for (lli next = 0 ; next < 10;next++){
//        if (prev-1==next||prev+1==next){
//            ret+=dp(index+1,next)%1000000000;
//        }
//    }
//    return ret%1000000000;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    memset(cache, -1, sizeof(cache));
//    lli answer=0;
//    for (lli i =1;i<10;i++){
//        answer+=dp(1,i)%1000000000;
//    }
//    cout<<answer%1000000000<<'\n';
//}
