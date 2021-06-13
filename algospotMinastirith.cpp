////
////  algospotMinastirith.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/02.
////
//
//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <cmath>
//using namespace std;
//const int INF=987654321;
//const double pi=2.0*acos(0);
//int n;
//double x[101],y[101],r[101];
//pair<double,double> ranges[101];
//
//void convertToRange(){
//    for (int i=0;i<n;++i){
//        double loc = fmod(2*pi+atan2(y[i],x[i]),2*pi);
//        double range=2.0*asin(r[i]/2.0/8.0);
//        ranges[i]=make_pair(loc-range,loc+range);
//    }
//    sort(ranges,ranges+n);
//}
//
//int solveLinear(double begin,double end){
//    int used=0, idx=0;
//    while (begin<end){
//        double maxCover=-1;
//        while (idx<n&&ranges[idx].first<=begin){
//            maxCover=max(maxCover,ranges[idx].second);
//            ++idx;
//        }
//        if (maxCover<=begin)return INF;
//        begin=maxCover;
//        ++used;
//    }
//    return used;
//}
//
//int solveCircular(){
//    int ret=INF;
//    sort(ranges,ranges+n);
//    for (int i=0;i<n;++i){
//        if (ranges[i].first<=0||ranges[i].second>=2*pi){
//            double begin=fmod(ranges[i].second,2*pi);
//            double end=fmod(ranges[i].first+2*pi,2*pi);
//            ret=min(ret,1+solveLinear(begin,end));
//        }
//    }
//    return ret;
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        cin>>n;
//        for (int i=0;i<n;i++){
//            cin>>y[i]>>x[i]>>r[i];
//        }
//        convertToRange();
//        int answer=solveCircular();
//        if (answer==INF){
//            cout<<"IMPOSSIBLE"<<'\n';
//        }else{
//            cout<<answer<<'\n';
//        }
//    }
//}
