////
////  boj2104.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/31.
////
//
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//typedef long long int lli;
//
//lli n;
//vector<lli> h;
//lli sumArray[100002];
//
//lli solve(lli left,lli right){
//    if (left==right)return h[left]*h[left];
//    lli mid=(left+right)/2;
//    lli ret=max(solve(left,mid),solve(mid+1,right));
//    lli lo=mid,hi=mid+1;
//    lli height=min(h[lo],h[hi]);
//    ret=max(ret,(sumArray[hi+1]-sumArray[lo])*height);
//    
//    while (left<lo||hi<right){
//        if (hi<right&&(lo==left||h[lo-1]<h[hi+1])){
//            ++hi;
//            height=min(height,h[hi]);
//        }else{
//            --lo;
//            height=min(height,h[lo]);
//        }
//        ret=max(ret,(sumArray[hi+1]-sumArray[lo])*height);
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i=0;i<n;i++){
//        lli tmp;
//        cin>>tmp;
//        h.push_back(tmp);
//    }
//    lli sum=0;
//    sumArray[0]=0;
//    for (int i=1;i<=n;i++){
//        sum=sum+h[i-1];
//        sumArray[i]=sum;
//    }
//    cout<<solve(0,n-1)<<'\n';
//}
//
