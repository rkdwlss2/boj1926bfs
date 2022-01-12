////
////  boj1911.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2022/01/01.
////
//
//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int Len;
//int main(){
//    int n,sum=0;
//    cin>>n>>Len;
//    priority_queue<pair<int,int>> pq;
//    for (int i =0 ; i<n;i++){
//        int a,b;
//        cin>>a>>b;
//        pq.push({-a,-b});
//    }
//    int Last=-1;
//    while(!pq.empty()){
//        auto now=pq.top();
//        int f=-now.first;
//        int l=-now.second;
//        pq.pop();
//        if (Last<f){
//            int divided=(l-f)/Len;
//            if ((l-f)%Len!=0){
//                divided++;
//            }
//            sum+=divided;
//            Last=f+(divided*Len)-1;
//        }else if(Last>=f&&Last<l){
//            int tmpLength=(l-(Last+1));
//            int divided=tmpLength/Len;
//            if (tmpLength%Len!=0){
//                divided++;
//            }
//            sum+=divided;
//            Last=Last+(divided*Len)-1;
//        }
//    }
//    cout<<sum<<'\n';
//}
