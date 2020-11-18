////
////  boj5052.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/18.
////
//
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <vector>
//using namespace std;
//const int NUMBER = 10;
//
//int charToNum(char charactor){return charactor-'0';}
//
//struct TrieNode{
//    TrieNode* children[NUMBER];
//    bool isterminated;
//    TrieNode():isterminated(false){
//        memset(children,0,sizeof(children));
//    }
//    ~TrieNode(){
//        for (int i = 0 ; i <NUMBER;i++){
//            if (children[i]!=0){
//                delete children[i];
//            }
//        }
//    }
//    bool insert(const char* key){
//        if (*key=='\0'){
//            isterminated=true;
//            return true;
//        }else{
//            if (isterminated==true){
//                return false;
//            }
//            int next=charToNum(*key);
//            if (children[next]==0){
//                children[next]=new TrieNode();
//            }else if (children[next]!=0&&*(key+1)=='\0'){
//                return false;
//            }
//            return children[next]->insert(key+1);
//        }
//    }
//};
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        int n;
//        cin>>n;
//        bool ok=true;
//        TrieNode* root=new TrieNode();
//        for (int i = 0 ; i <n;i++){
//            string tmp;
//            cin>>tmp;
//            if (ok==true)ok=root->insert(tmp.c_str());
//        }
//        delete root;
//        if (ok==false)cout<<"NO"<<'\n';
//        else cout<<"YES"<<'\n';
//    }
//}
