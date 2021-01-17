////
////  boj1725.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/06.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> h;
//
//int solve(int left,int right){
//    if (left==right)return h[left];
//    int mid=(left+right)/2;
//    int ret=max(solve(left,mid),solve(mid+1,right));
//    
//    int lo=mid,hi=mid+1;
//    int height=min(h[lo],h[hi]);
//    
//    ret=max(ret,height*2);
//    while (left<lo||hi<right){
//        if (hi<right&&(lo==left||h[lo-1]<h[hi+1])){
//            ++hi;
//            height=min(height,h[hi]);
//        }
//        else{
//            --lo;
//            height=min(height,h[lo]);
//        }
//        ret=max(ret,height*(hi-lo+1));
//    }
//    
//    
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i = 0 ;i<n;i++){
//        int tmp;
//        cin>>tmp;
//        h.push_back(tmp);
//    }
//    cout<<solve(0,n-1)<<'\n';
//}
