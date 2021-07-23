////
////  boj11003.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/07/23.
////
//
//#include <iostream>
//#include <algorithm>
//#define LARGE 1000000001
//#define lli long long int
//using namespace std;
//
//lli a[5000001];
//lli tree[4*5000001];
//
//lli init(lli start,lli end,lli node){
//    if (start==end)return tree[node]=a[start];
//    lli mid=(start+end)/2;
//    return tree[node]=min(init(start,mid,node*2),init(mid+1,end,node*2+1));
//}
//
//lli getMin(lli start,lli end,lli node,lli left,lli right){
//    if (left>end||start>right)return LARGE;
//    if (left<=start&&end<=right)return tree[node];
//    lli mid=(start+end)/2;
//    return min(getMin(start,mid,node*2,left,right),getMin(mid+1,end,node*2+1,left,right));
//}
//
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli l,n;
//    cin>>n>>l;
//    for (lli i = 0 ;i <n;i++){
//        cin>>a[i];
//    }
//    init(0,n-1,1);
//    for (lli i = 0 ; i<n;i++){
//        lli left=i-l+1;
//        if (i-l+1<0){
//            cout<<getMin(0,n-1,1,0,i)<<' ';
//        }else{
//            cout<<getMin(0,n-1,1,left,i)<<' ';
//        }
//    }
//    
//}
