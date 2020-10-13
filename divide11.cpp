////
////  divide11.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/09.
////
//
//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> a;
//vector<int> b;
//
//void divied(int n,int div){
//    if (n==0)return;
//    a.push_back(n%div);
//    divied(n/div,div);
//}
//
//vector<int> solution(int N){
//    vector<int> answer;
//    int an=0;
//    int index=-1;
//    for (int i = 2 ; i<=N;i++){
//        a=b;
//        divied(N,i);
//        int sum=1;
//        for (auto i : a){
//            sum*=i;
//        }
//        if (an<=sum){
//            an=sum;
//            index=i;
//        }
//    }
//    answer.push_back(index);
//    answer.push_back(an);
//    cout<<index<<' '<<an;
//    return answer;
//}
//
//int main(){
//    solution(10);
//}
