////
////  boj9250.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/19.
////
//
//#include <iostream>
//#include <queue>
//#include <string>
//#include <vector>
//using namespace std;
//
//#define ALPHABETS 26;
//
//int charToNum(char charactor){return charactor-'a';}
//
//struct LinkedListNode{
//    int elem;
//    LinkedListNode* next;
//    LinkedListNode(int _elem,LinkedListNode* _next):elem(_elem),next(_next){
//        
//    };
//};
//
//struct TrieNode{
//    TrieNode* children[ALPHABETS];
//    int terminated;
//    TrieNode* fail;
//    LinkedListNode* output;
//    TrieNode():terminated(-1),output(NULL){
//        
//    }
//    ~TrieNode(){
//        for(int i=0;i<ALPHABETS;i++){
//            if(children[ALPHABETS]!=0){
//                delete children[ALPHABETS];
//            }
//        }
//    }
//    void insert(char* key,int id){
//        if (*key==0){
//            terminated=id;
//        }
//        else{
//            int next=charToNum(*key);
//            if(children[next]==NULL){
//                children[next]=new TrieNode();
//            }
//            return children[next]->insert(key+1);
//        }
//    }
//    TrieNode* find(char* key){
//        if (*key==0)return this;
//        int next=charToNum(*key);
//        if(children[next]==NULL){
//            return NULL;
//        }
//        return children[next]->find(key+1);
//    }
//};
//void calFailureFunction(TrieNode* root){
//    queue<TrieNode> q;
//    root->fail=root;
//    q.push(root);
//    while(!q.empty()){
//        TrieNode* here=q.front();q.pop();
//        for (int edge=0;edge<ALPHABETS;edge++){
//            if (!here->children[edge]){
//                continue;
//            }
//            TrieNode* child=here->children[edge];
//            if(here==root){
//                child->fail=root;
//            }else{
//                TrieNode* t=here->fail;
//                while(t!=root&&t->children[edge]==NULL){
//                    t=t->fail;
//                }
//                if (t->children[edge]){
//                    here->fail=t;
//                }
//            }
//            if (child->termiated!=-1){
//                child->output=new LinkedList(child->terminated,child->fail->output);
//            }else{
//                child->output=child->fail->output;
//            }
//            q.push(child);
//        }
//    }
//}
//template<class CALLBACK>
//void ahoCorasick(const string& s,TrieNode* trie,CALLBACK callback ){
//    TrieNode* state=trie;
//    for (int i=0;i<s.size();i++){
//        int chr=charToNum(s[i]);
//        while(state!=trie&&state->children[chr]==NULL){
//            state=state->fail;
//        }
//        if (state->children[chr])state=state->children[chr];
//        for (LinkedList* t=state->output;t;t=t->next){
//            callback(i,t->elem);
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin>>n;
//    vector<string> v;
//    vector<string> answer;
//    TrieNode* root=new TrieNode();
//    for (int i = 0 ; i < n;i++){
//        string s;
//        cin>>s;
//        v.push_back(s);
//        root->insert(s,i);
//    }
//    calFailureFunction(root);
//    for (int i = 0 ; i <m;i++){
//        string s1;
//        cin>>s1;
//        
//    }
//    
//    
//}
