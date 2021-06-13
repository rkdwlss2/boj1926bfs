////
////  boj9019.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/01.
////
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//const int inf=987654321;
//const int man=10000;
//int cache[10000][5];
//
//int answer;
//
//int dp(int num,int index,int type){
//    if (index==10000)return inf;
//    if (answer==num)return index;
//    int& ret=cache[index][type];
//    if (ret!=-1)return ret;
//    ret=inf;
//    ret=min(ret,dp((num*2)%man,index+1,0));
//    if (num==0){
//        ret=min(ret,dp(9999,index+1,1));
//    }else{
//        ret=min(ret,dp(num-1,index+1,1));
//    }
//    ret=min(ret,dp(num/10+(num%10)*1000,index+1,3));
//    ret=min(ret,dp(num%1000+(num/1000)*1000,index+1,2));
//    return ret;
//}
//
//void restore(int num,int index,int type){
//    int tanswer=inf;
//    for (int i = 0 ; i<4;i++){
//        if (cache[index-1][i])
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        string str,ans;
//        cin>>str>>ans;
//        answer=atoi(ans.c_str());
//
//    }
//}
