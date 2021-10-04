////
////  MORDOR_rkdwlss2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/09/09.
////
//
//#include <iostream>
//#include <algorithm>
//#define lli long long int
//using namespace std;
//
//lli arr[100001];
//
//lli tree[4*100001];
//lli maxTree[4*100001];
//
//lli init(lli node,lli left,lli right){
//    if (left==right)return tree[node]=arr[left];
//    return tree[node]=min(init(2*node,left,(left+right)/2),init(2*node+1,(left+right)/2+1,right));
//}
//lli getMin(lli node,lli left,lli right,lli L,lli R){
//    if (right<L||R<left)return 1000000009;
//    if (L<=left&&right<=R)return tree[node];
//    return min(getMin(2*node,left,(left+right)/2,L,R),getMin(2*node+1,(left+right)/2+1,right,L,R));
//}
//
//lli init2(lli node,lli left,lli right){
//    if (left==right)return maxTree[node]=arr[left];
//    return maxTree[node]=max(init2(2*node,left,(left+right)/2),init2(2*node+1,(left+right)/2+1,right));
//}
//lli getMax(lli node,lli left,lli right,lli L,lli R){
//    if (right<L||R<left)return 0;
//    if (L<=left&&right<=R)return maxTree[node];
//    return max(getMax(2*node,left,(left+right)/2,L,R),getMax(2*node+1,(left+right)/2+1,right,L,R));
//}
//
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        int n,q;
//        cin>>n>>q;
//        for (int i = 1;i<=n;i++){
//            cin>>arr[i];
//        }
//        init(1,1,n);
//        init2(1,1,n);
//        for (int i = 0;i<q;i++){
//            int a,b;
//            cin>>a>>b;
//            cout<<getMax(1,1,n,a+1,b+1)-getMin(1,1,n,a+1,b+1)<<'\n';
//        }
//    }
//}
