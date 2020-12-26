////
////  boj11726.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/24.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//int n;
//int cache[1001];
//
//int solve(int index){
//    if (index==0)return 1;
//    if (index<0)return 0;
//    int& ret=cache[index];
//    if (ret!=-1)return ret;
//    ret = 0;
//    return ret=(solve(index-1)%10007+solve(index-2)%10007)%10007;
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    memset(cache,-1,sizeof(cache));
//    cout<<solve(n)<<'\n';
//}
