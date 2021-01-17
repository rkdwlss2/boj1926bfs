////
////  boj5639-2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/31.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> preorder;
//
//void printPostOrder(int left,int right)
//{
//    int mid=left+1;
//    while (mid<=right&&preorder[mid]<preorder[left]){
//        ++mid;
//    }
//    int node=left+1;
//    if (node<=mid-1){
//        printPostOrder(node, mid-1);
//    }
//    if (mid<=right){
//        printPostOrder(mid,right);
//    }
//    cout<<preorder[left]<<'\n';
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tmp;
//    while(cin>>tmp){
//        preorder.push_back(tmp);
//    }
//    printPostOrder(0, preorder.size()-1);
//}
