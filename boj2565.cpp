////
////  boj2565.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/07.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int p[501];
//int n;
//
//bool visited[501];
//
//int cache[501][101];
//
//int go(int index,int num){
//    if (index==n){
//        for (int i = 0 ; i<501;i++){
//            if (visited[i]==false)continue;
//            int end=p[i];
//            for (int j=i+1;j<=end;j++){
//                int end2=p[j];
//                if (end2>=end){
//                    return 0;
//                }
//            }
//        }
//        return num;
//    }
//    int& ret=cache[index][num];
//    if (ret!=-1)return ret;
//    ret=0;
//    for (int i = 0 ; i < 501;i++){
//        if (p[i]==0)continue;
//        if (visited[i]==false)continue;
//        ret=max(ret,go(index+1,num));
//        visited[i]=false;
//        ret=max(ret,go(index+1,num+1));
//        visited[i]=true;
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i <n;i++){
//        int a,b;
//        cin>>a>>b;
//        p[a]=b;
//        visited[a]=true;
//    }
//    for (int i = 0 ; i < 501;i++){
//        fill(cache[i],cache[i]+101,-1);
//    }
//    cout<<go(0,0)<<'\n';
//    
//}
