////
////  boj1717.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/09.
////
//
//#include <iostream>
//using namespace std;
//
//int parent[1000001];
//int find(int x){
//    if (x==parent[x])return x;
//    return parent[x]=find(parent[x]);
//}
//void union1(int a, int b){
//
//    if (find(a)==find(b)){
//        return;
//    }
//    else {
//        if (a>b){
//            parent[find(a)]=find(b);
//        }else{
//            parent[find(b)]=find(a);
//        }
//    }
//    return;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin>>n>>m;
//    for (int i=0;i<=n;i++){
//        parent[i]=i;
//    }
//    for (int i=0;i<m;i++){
//        int a,b,c;
//        cin>>a>>b>>c;
//        if (a==0){
//            union1(b,c);
//        }else{
//            if (find(b)==find(c)){
//                cout<<"YES"<<'\n';
//            }else{
//                cout<<"NO"<<'\n';
//            }
//        }
//    }
//}
