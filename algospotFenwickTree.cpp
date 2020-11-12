////
////  algospotFenwickTree.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/06.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct FenwickTree{
//    vector<int> tree;
//    FenwickTree(int n):tree(n+1){}
//    int sum(int pos){
//        ++pos;
//        int ret=0;
//        while(pos>0){
//            ret+=tree[pos];
//            pos&=(pos-1);
//        }
//        return ret;
//    }
//    void add(int pos,int val){
//        ++pos;
//        while(pos<tree.size()){
//            tree[pos]+=val;
//            pos+=(pos&-pos);
//        }
//    }
//};
//long long countMoves(const vector<int>& A){
//    FenwickTree tree(1000000);
//    long long ret =0;
//    for (int i =0;i<A.size();++i){
//        ret+=tree.sum(999999)-tree.sum(A[i]);
//        tree.add(A[i],1);
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        vector<int> a;
//        int n;
//        cin>>n;
//        for (int i=0;i<n;i++){
//            int x;
//            cin>>x;
//            a.push_back(x);
//        }
//        cout<<countMoves(a)<<'\n';
//    }
//}
