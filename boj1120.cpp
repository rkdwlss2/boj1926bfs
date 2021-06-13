////
////  boj1120.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/06/13.
////
//
//#include <iostream>
//#include <deque>
//#include <string>
//#include <vector>
//using namespace std;
//int n,m;
//deque<int> A;
//deque<int> B;
//int answer=987654321;
//void bf(int index){
//    if (index==m){
//        int tmp=0;
//        for (int i = 0 ; i <m;i++){
//            int nowA=A.front();
//            int nowB=B.front();
//            A.pop_front();
//            B.pop_front();
//            A.push_back(nowA);
//            B.push_back(nowB);
//            if (nowA==-1||(nowA==nowB))continue;
//            else tmp++;
//        }
//        if (answer>tmp)answer=tmp;
//        return;
//    }
//    A.push_back(-1);
//    bf(index+1);
//    A.pop_back();
//    A.push_front(-1);
//    bf(index+1);
//    A.pop_front();
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string a,b;
//    cin>>a>>b;
//    n=a.size();
//    m=b.size();
//    for (int i = 0;i<n;i++){
//        A.push_back(a[i]-'a');
//    }
//    for (int i = 0;i<m;i++){
//        B.push_back(b[i]-'a');
//    }
//    bf(n);
//    cout<<answer<<'\n';
//}
