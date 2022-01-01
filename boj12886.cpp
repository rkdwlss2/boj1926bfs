////
////  boj12886.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/12/18.
////
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int Sum=-1;
//int firstA,firstB;
//int cache[1501][1501];
//
//int go(int a,int b){
//    int c=Sum-a-b;
//    if ((a+b+c)%3!=0)return 0;
//    if (a==b&&b==c)return 1;
//    int& ret=cache[a][b];
//    if (ret!=-1&&a==firstA&&b==firstB)return 0;
//    if (ret!=-1)return ret;
//    ret=0;
//    if (a<b){
//        if (go(2*a,b-a)==1)ret=1;
//    }
//    if (a>b){
//        if (go(a-b,2*b)==1)ret=1;
//    }
//    if (c>a){
//        if (go(2*a,b)==1)ret=1;
//    }
//    if (c<a){
//        if (go(a-c,b)==1)ret=1;
//    }
//    if (c>b){
//        if (go(a,2*b)==1)ret=1;
//    }
//    if (c<b){
//        if (go(a,b-c)==1)ret=1;
//    }
//    return ret;
//}
//
//int main(){
//    int a,b,c;
//    cin>>a>>b>>c;
//    Sum=a+b+c;
//    firstA=a;
//    firstB=b;
//    memset(cache,-1,sizeof(cache));
//    cout<<go(a,b)<<'\n';
//}
