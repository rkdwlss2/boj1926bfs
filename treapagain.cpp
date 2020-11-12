////
////  treapagain.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/06.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//typedef int KeyType;
//struct Node{
//    KeyType key;
//    int priority,size;
//    Node* left,*right;
//    Node(const KeyType& _key):key(_key),priority(rand()),size(1),left(NULL),right(NULL){}
//    void setLeft(Node* newLeft){left=newLeft;calSize();}
//    void setRight(Node* newRight){right=newRight;calSize();}
//    void calSize(){
//        size=1;
//        if (left)size+=left->size;
//        if(right)size+=right->size;
//    }
//};
//typedef pair<Node*,Node*> NodePair;
//NodePair split(Node* root,KeyType key){
//    if (root==NULL)return NodePair(NULL,NULL);
//    if (root->key<key){
//        NodePair rs=split(root->right,key);
//        root->setRight(rs.first);
//        return NodePair(root,rs.second);
//    }
//    NodePair ls=split(root->left, key);
//    root->setLeft(ls.second);
//    return NodePair(ls.first,root);
//}
//Node* insert(Node* root,Node* node){
//    if (root==NULL)return node;
//    if (root->priority<node->priority){
//        NodePair splitted=split(root,node->key);
//        node->setLeft(splitted.first);
//        node->setRight(splitted.second);
//        return node;
//    }
//    else if(root->key>node->key){
//        root->setLeft(insert(root->left, node));
//    }
//    else{
//        root->setRight(insert(root->right,node));
//    }
//    return root;
//}
//
//Node* merge(Node* a,Node* b){
//    if (a==NULL)return b;
//    if (b==NULL)return a;
//    if(a->priority<b->priority){
//        b->setLeft(merge(a,b->left));
//        return b;
//    }
//    a->setRight(merge(a->right,b));
//    return a;
//}
//Node* erase(Node* root,KeyType key){
//    if(root==NULL)return root;
//    if(root->key==key){
//        Node* ret=merge(root->left,root->right);
//        delete root;
//        return ret;
//    }
//    if (root->key>key){
//        root->setLeft(erase(root->left, key));
//    }else{
//        root->setRight(erase(root->right,key));
//    }
//    return root;
//}
//Node* kth(Node* root,int k){
//    int leftSize=0;
//    if (root->left!=NULL)leftSize=root->left->size;
//    if(k<=leftSize)return kth(root->left,k);
//    if(k==leftSize+1)return root;
//    return kth(root->right,k-leftSize-1);
//}
//int countLessThan(Node* root,KeyType key){
//    if (root==NULL)return 0;
//    if (root->key>=key){
//        return countLessThan(root->left, key);
//    }
//    int ls=(root->left?root->left->size:0);
//    return ls+1+countLessThan(root->right, key);
//}
//void deleteTree(Node* node){
//    if(node==NULL)return;
//    deleteTree(node->left);
//    deleteTree(node->right);
//    delete node;
//}
//long long countMoves2(const vector<int>& A){
//    Node* root=NULL;
//    long long ret=0;
//    for (int i=0;i<A.size();i++){
//        ret+=i-countLessThan(root, A[i]+1);
//        root=insert(root,new Node(A[i]));
//    }
//    deleteTree(root);
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        int n;
//        cin>>n;
//        vector<int> A;
//        for (int i=0;i<n;i++){
//            int tmp;
//            cin>>tmp;
//            A.push_back(tmp);
//        }
//        cout<<countMoves2(A)<<'\n';
//    }
//}
