////
////  programmersimp.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/09.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
//#define ll long long
//ll m,c;
//bool possible(int dist,vector<int> times){
//    int cnt =0;
//    for (int i =0;i<m;i++){
//        cnt+=dist/times[i];
//    }
//    if (cnt>=c)
//        return true;
//    return false;
//    
//}
//
//long long solution(int n, vector<int> times) {
//    long long answer = 1000000000000000001;
//    c=n;
//    m=times.size();
//    sort(times.begin(),times.end());
//    ll low=0;
//    ll high=times[m-1]*c;
//    while (low<=high){
//            ll mid=(low+high)/2;
//            if (possible(mid,times)){
//                answer=min(answer,mid);
//                high=mid-1;
//            }else{
//                low=mid+1;
//            }
//        }
//    return answer;
//}
//int main(void){
//    vector<int> times={7,10};
//    ll answer =solution(6,times);
//    cout<<answer;
//}
