////
////  MaxSum.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/16.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int MIN = numeric_limits<int>::min();
//
//int inefficientMaxSum(const vector<int> &A){
//    int N=A.size();int ret=MIN;
//    for (int i=0;i<N;i++){
//        for (int j=i;j<N;j++){
//            int sum=0;
//            for (int k=i;k<=j;k++){
//                sum+=A[k];
//            }
//            if (ret<sum)ret=sum;
//        }
//    }
//    return ret;
//}
//int betterMaxSum(const vector<int>& A){
//    int N=A.size();int ret=MIN;
//    for (int i=0;i<N;i++){
//        int sum=0;
//        for (int j =i;j<N;j++){
//            sum+=A[j];
//            if (sum>ret)ret=sum;
//        }
//    }
//    return ret;
//}
//
//int fastMaxSum(const vector<int>& A,int lo,int hi){
//    if (lo==hi)return A[lo];
//    int mid=(lo+hi)/2;
//    int left=MIN,right=MIN,sum=0;
//    for (int i=mid;i>=lo;i--){
//        sum+=A[i];
//        left=max(left,sum);
//    }
//    sum=0;
//    for (int i=mid+1;i<=hi;i++){
//        sum+=A[i];
//        right=max(right,sum);
//    }
//    int single=max(fastMaxSum(A, lo, mid),fastMaxSum(A, mid+1, hi));
//    return max(left+right,single);
//}
//
//int fastestMaxSum(const vector<int>& A){//동적 계획법을 통한 최대합 구하기
//    int N=A.size(),ret=MIN,psum=0;
//    for (int i=0;i<N;++i){
//        psum=max(psum,0)+A[i];//i-1까지의 최대 합
//        ret=max(psum,ret);//계속 비교해서 저장
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    vector<int> A={1,2,-2,3,4,-1,5,6};
//    cout<<"inefficientMaxSum"<<'\n';
//    cout<<inefficientMaxSum(A)<<'\n';
//    cout<<"betterMaxSum"<<'\n';
//    cout<<betterMaxSum(A)<<'\n';
//    cout<<"fastMaxSum"<<'\n';
//    cout<<fastMaxSum(A, 0, A.size()-1)<<'\n';
//    cout<<"fastestMaxSum"<<'\n';
//    cout<<fastestMaxSum(A)<<'\n';
//}
