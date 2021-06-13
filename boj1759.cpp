////
////  boj1759.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/14.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int n,m;
//int alpha[27];
//vector<int> answer;
//int vowel[5]={0,4,8,14,20};
//int vow=0;
//bool isVowel(int num){
//    for (int i = 0 ; i<5;i++){
//        if (num==vowel[i]){
//            return true;
//        }
//    }
//    return false;
//}
//void go(int index,int prev){
//    if (index==n){
//        int mo=n-vow;
//        if (vow<=0)return;
//        if (mo<2)return;
//        for (auto i : answer){
//            char tmp=i+'a';
//            cout<<tmp;
//        }
//        cout<<'\n';
//        return;
//    }
//    for (int i = prev+1 ;i<26;i++){
//        if (alpha[i]>0){
//            if (isVowel(i)){
//                vow++;
//            }
//            answer.push_back(i);
//            go(index+1,i);
//            answer.pop_back();
//            if (isVowel(i))vow--;
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ;i<m;i++){
//        char tmp;
//        cin>>tmp;
//        int index=tmp-'a';
//        alpha[index]=1;
//    }
//    go(0,-1);
//    
//}
