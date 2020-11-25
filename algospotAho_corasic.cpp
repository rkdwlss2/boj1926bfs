////
////  algospotAho_corasic.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/19.
////
//
//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//#define ALPHABETS 26
//
//int charToNum(char charator){return charator-'A';}
//struct LinkedListNode{
//    int elem;
//    LinkedListNode* next;
//
//    LinkedListNode(int _elem,LinkedListNode* _next): elem(_elem),next(_next){
//    };
//};
//struct TrieNode{
//    TrieNode* children[ALPHABETS];
//    int terminate;
//    TrieNode* fail;
//    LinkedListNode* output;
//    TrieNode():terminate(-1),output(NULL){
//        memset(children, 0, sizeof(children));
//    }
//    ~TrieNode(){
//        for (int i=0;i<ALPHABETS;i++){
//            if(children[i]!=0){
//                delete children[i];
//            }
//        }
//    }
//    void insert(const char* key,int id){
//        if (*key==0){
//            terminate=id;
//        }else{
//            int next=charToNum(*key);
//            if (children[next]==NULL){
//                children[next]=new TrieNode();
//            }
//            children[next]->insert(key+1, id);
//        }
//    }
//    TrieNode* find(const char* key){
//        if (*key==0)return this;
//        int next=charToNum(*key);
//        if(children[next]==NULL){
//            return NULL;
//        }
//        return children[next]->find(key+1);
//    }
//};
//void calcFailureFunction(TrieNode* root){
//    queue<TrieNode*> q;
//    root->fail=root;
//    q.push(root);
//    while(!q.empty()){
//        TrieNode* here =q.front();q.pop();
//        for (int edge=0;edge<ALPHABETS;++edge){
//            if (!here->children[edge])
//                continue;
//            TrieNode* child=here->children[edge];
//            if (here==root)
//                child->fail=root;
//            else{
//                TrieNode* t=here->fail;
//                while(t!=root&&t->children[edge]==NULL)
//                    t=t->fail;
//                if (t->children[edge])t=t->children[edge];
//                child->fail=t;
//            }
//            if(child->terminate!=-1)
//                child->output=new LinkedListNode(child->terminate,child->fail->output);
//            else {child->output=child->fail->output;}
//            q.push(child);
//        }
//    }
//}
//template<class CALLBACK>
//void ahoCorasick(const string& s,TrieNode* trie,CALLBACK callback){
//    TrieNode* state=trie;
//    for (int i = 0 ; i<s.size();i++){
//        int chr=charToNum(s[i]);
//        while(state!=trie&&state->children[chr]==NULL)
//            state=state->fail;
//        if(state->children[chr])state=state->children[chr];
//        for (LinkedListNode* t=state->output;t;t=t->next)
//            callback(i,t->elem);
//    }
//}
//int main(){
//    ios::sync_with_stdio(0);
//
//}
