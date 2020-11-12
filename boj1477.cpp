////
////  boj1477.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/09.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n,m,l;
//int a[105];
//bool check(int k){
//    int cnt=0;
//    for (int i = 1;i<n;i++){
//        if (a[i]-a[i-1]<=k)continue;
//        cnt+=(a[i]-a[i-1]-1)/k;
//    }
//    return cnt<=m;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m>>l;
//    for (int i = 1 ; i<=n;i++){
//        cin>>a[i];
//    }
//    a[0]=0;
//    a[n+1]=l;
//    n+=2;
//    sort(a,a+n);
//    int start=1;
//    int end=1001;
//    while(start<end){
//        int mid=(start+end)/2;
//        if (check(mid)){
//            end=mid;
//        }else{
//            start=mid+1;
//        }
//    }
//    cout<<start<<'\n';
//}
