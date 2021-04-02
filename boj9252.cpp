////
////  boj9252.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/21.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> slice(const vector<int>& v,int a,int b){
//    return vector<int>(v.begin()+a, v.begin()+b);
//}
//void printPostOrder(const vector<int>& preorder, const vector<int>& inorder){
//    const int N =preorder.size();
//    if (preorder.empty())return;
//    const int root = preorder[0];
//    
//    const int L = find(inorder.begin(),inorder.end(),root)-inorder.begin();
//    const int R = N-1-L;
//    printPostOrder(slice(preorder, 1, L+1), slice(inorder, 0, L));
//    printPostOrder(slice(preorder, L+1, N), slice(inorder, L+1, N));
//    cout<<root<<' ';
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    vector<int>
//}
