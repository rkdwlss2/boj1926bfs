////
////  boj1562.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/02/02.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//typedef long long int lli;
//lli n;
//lli cache[101][11][1<<11];
//bool ten[11];
//
//lli go(lli index,lli prev,lli status){
//    if (prev<0||prev>9)return 0;
//    if (index==1){
//        if((status|(1<<prev))==((1<<10)-1))
//            return  1;
//        else
//            return 0;
//    }
//
//    lli& ret=cache[index][prev][status];
//    if (ret!=-1)return ret;
//
//    status|=(1<<prev);
//    return ret=(go(index-1,prev+1,status)+go(index-1,prev-1,status))%1000000000;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//
//    lli ans=0;
//    memset(cache,-1,sizeof(cache));
//    for (lli i = 1;i<10;i++){
//
//        ans+=go(n,i,0)%1000000000;
//    }
//    cout<<ans%1000000000<<'\n';
//}
