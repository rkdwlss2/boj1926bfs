////
////  algospotSuffixArray.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/30.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct SuffixComparator{
//    const string& s;
//    SuffixComparator(const string& s): s(s){}
//    bool operator ()(int i,int j){
//        return strcmp(s.c_str()+i,s.c_str()+j)<0;
//    }
//};
//vector<int> getSuffixArrayNaive(const string& s){
//    vector<int> perm;
//    for (int i = 0 ; i < s.size();i++)perm.push_back(i);
//    sort(perm.begin(),perm.end(),SuffixComparator(s));
//    return perm;
//}
//
//int main(){
//    string magic="alohomora";
//    vector<int> answer=getSuffixArrayNaive(magic);
//    for (auto i : answer){
//        cout<<i<<'\n';
//    }
//}
