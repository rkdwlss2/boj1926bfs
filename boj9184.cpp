////
////  boj9184.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/01.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int cache[103][103][103];
//
//int w(int a, int b ,int c){
//    int& ret=cache[a+51][b+51][c+51];
//    if (ret!=-1)return ret;
//    if (a<=0||b<=0||c<=0)return ret=1;
//    else if (a>20||b>20||c>20)return ret=w(20,20,20);
//    else if (a<b&&b<c)return ret=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
//    else return ret=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    memset(cache,-1,sizeof(cache));
//    while(true){
//        int a,b,c;
//        cin>>a>>b>>c;
//        if (a==-1&&b==-1&&c==-1)break;
//        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<'\n';
//    }
//}
