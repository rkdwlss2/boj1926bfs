////
////  boj1931-2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/01.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    vector<pair<int,int>> meetings;
//    for (int i=0;i<n;i++){
//        int startTime,endTime;
//        cin>>startTime>>endTime;
//        meetings.push_back({endTime,startTime});
//    }
//    sort(meetings.begin(),meetings.end());
//    int count=1;
//    int sT=meetings[0].second,eT=meetings[0].first;
//    for (int i=1;i<n;i++){
//        int nowStart=meetings[i].second,nowEnd=meetings[i].first;
//        if (eT<=nowStart){
//            count++;
//            sT=nowStart;
//            eT=nowEnd;
//        }
//    }
//    cout<<count<<'\n';
//}
