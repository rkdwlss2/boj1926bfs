////
////  kmptest.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/30.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//vector<int> naiveSearch(const string& H,const string& N){
//    vector<int> ret;
//    for (int begin=0;begin+N.size()<=H.size();++begin){
//        bool matched =true;
//        for (int i=0;i<N.size();++i)
//            if(H[begin+i]!=N[i]){
//                matched=false;
//                break;
//        }
//        if (matched)ret.push_back(begin);
//    }
//    return ret;
//}
//
//int main(){
//    string H="avadakedavraaked";
//    string N="aked";
//    vector<int> answer=naiveSearch(H, N);
//    for (auto i : answer){
//        cout<<i<<' ';
//    }
//}
