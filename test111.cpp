////
////  test111.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/09.
////
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//vector<int> a;
//vector<int> arr(2000000002);
//vector<int> c;
//int m;
//int solution(int k,vector<int> score){
//    m=score.size();
//    vector<bool> check1(m);
//    int answer=-1;
//    a.push_back(-1);
//    for (int i=0;i<score.size()-1;i++){
//        a.push_back(score[i+1]-score[i]);
//        arr[score[i+1]-score[i]]+=1;
//    }
//    for (int i = 1; i<2000000002;i++){
//        if (arr[i]>=k){
//            c.push_back(i);
//        }
//    }
//    int count=0;
//    for (auto k : c){
//        for (int i=0;i<score.size();i++){
//            if (a[i]==k){
//                check1[i-1]=false;
//                check1[i]=false;
//            }
//        }
//    }
//    for (int i = 0 ; i < m;i++){
//        if(check1[i]==true){
//            count++;
//        }
//    }
//    return count;
//}
//int main(void){
//    int k=3;
//    vector<int> score={24,22,20,10,5,3,2,1};
//    int a=solution(3,score);
//    cout<<a;
//}
