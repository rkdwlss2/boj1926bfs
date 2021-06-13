////
////  abc-185-b.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/13.
////
// 
//#include <iostream>
//#include <queue>
//using namespace std;
//queue<pair<int,int>> cafe;
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m,t;
//    cin>>n>>m>>t;
//    for (int i=0;i<m;i++){
//        int a,b;
//        cin>>a>>b;
//        cafe.push({a,b});
//    }
//    int cafeBegin=cafe.front().first;
//    int cafeEnd=cafe.front().second;
//    cafe.pop();
//    int c=n;
//    for (int i = 0 ; i <t;i++){
//        if (cafeBegin<=i&&i<cafeEnd){
//            c++;
//            if (c>=n){
//                c=n;
//            }
//            if (i==cafeEnd-1){
//                if (!cafe.empty()){
//                    cafeBegin=cafe.front().first;
//                    cafeEnd=cafe.front().second;
//                    cafe.pop();
//                }
//            }
//        }else{
//            c--;
//            if (c==0){
//                cout<<"No"<<'\n';
//                return 0;
//            }
//        }
//    }
//    cout<<"Yes"<<'\n';
//}
