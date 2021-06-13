////
////  boj11758.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/08.
////
//
//#include <iostream>
//
//using namespace std;
//
//int ccw(int x1,int y1,int x2,int y2,int x3,int y3){
//    int tmp=x1*y2+x2*y3+x3*y1;
//    tmp-=y1*x2+y2*x3+y3*x1;
//    if (tmp>0)return 1;
//    else if (tmp<0)return -1;
//    return 0;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int x1,y1,x2,y2,x3,y3;
//    cin>>x1>>y1;
//    cin>>x2>>y2;
//    cin>>x3>>y3;
//    cout<<ccw(x1,y1,x2,y2,x3,y3)<<'\n';
//}
