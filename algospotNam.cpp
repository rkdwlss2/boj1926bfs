////
////  algospotNam.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/12.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cmath>
//using namespace std;
//#define lli long long int
//vector<pair<double,double>> home;
//vector<pair<double,double>> home2;
//vector<vector<double>> graph(101);
//vector<vector<double>> graph2(101);
//lli n;
//bool visited[101];
//double distance(double fx,double fy,double lx,double ly){
//    return sqrt((fx-lx)*(fx-lx)+(fy-ly)*(fy-ly));
//}
//
//bool bfs(double d){
//    queue<lli> q;
//    q.push(0);
//    visited[0]=true;
//    while(!q.empty()){
//        auto now = q.front();q.pop();
//        for (lli next=0;next<n;next++){
//            if (visited[next]==true)continue;
//            if (graph[now][next]>d)continue;
//            visited[next]=true;
//            q.push(next);
//        }
//    }
//    for (lli i=0;i<n;i++){
//        if (visited[i]==false){
//            return false;
//        }
//    }
//    return true;
//}
//
//double shortest(){
//    double start=0;
//    double end=1416.00;
//    for (int it=0;it<100;++it){
//        double mid=(start+end)/2;
//        fill(visited,visited+101,0);
//        if (bfs(mid)==true){
//            end=mid;
//        }else{
//            start=mid;
//        }
//    }
//    return end;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        cin>>n;
//        home.clear();
//        graph=graph2;
//        
//        for (int i=0;i<n;i++){
//            string a,b;
//            cin>>a>>b;
//            double a1,b1;
//            a1=atof(a.c_str());
//            b1=atof(b.c_str());
//            home.push_back({a1,b1});
//        }
//        
//        for (int i=0;i<n;i++){
//            for (int j=0;j<n;j++){
//                double tmp=0;
//                if (i==j){
//                    tmp=-1;
//                }else{
//                    tmp=distance(home[i].first,home[i].second,home[j].first,home[j].second);
//                }
//                graph[i].push_back(tmp);
//            }
//        }
//
//
//        printf("%.2f\n", shortest());
//
//    }
//    
//    
//}
