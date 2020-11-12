////
////  uatest6.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/07.
////
//
//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int pun[5001];
//int punnum[5001];
//int punsum[5001];
//long long ten1(int n){
//    if (n==0)return 1;
//    return 10*ten1(n-1);
//}
//vector<string> solution(vector<string> logs) {
//    vector<string> answer;
//    for (int i = 0 ; i < logs.size();i++){
//        string num;
//        string munjea;
//        string score;
//        int tmp=0;
//        for (int j =0;j<logs[i].size();j++){
//            if (logs[i][j]==' '){
//                tmp++;
//            }
//            else if (tmp==0){
//                num+=logs[i][j];
//            }
//            else if(tmp==1){
//                munjea+=logs[i][j];
//            }
//            else{
//                score+=logs[i][j];
//            }
//        }
//        int num1=0;
//        int n1=num.size();
//        int m1=n1;
//        for (int i1 = 0 ; i1<n1;i1++){
//            num1+=(num[i1]-'0')*ten1(--m1);
//        }
//        int munjea1=0;
//        int n2=munjea.size();
//        int m2=n2;
//        for (int i1 = 0 ; i1<n2;i1++){
//            munjea1+=(munjea[i1]-'0')*ten1(--m2);
//        }
//        int score1=0;
//        int n3=score.size();
//        int m3=n3;
//        for (int i1 = 0 ; i1<n3;i1++){
//            score1+=(score[i1]-'0')*ten1(--m3);
//        }
//        pun[num1]++;
//        punnum[num1]+=munjea1;
//        punsum[num1]+=score1;
//    }
//    for (int i = 5 ; i<=100;i++){
//        vector<int> a;
//        for (int j=1;j<=5000;j++){
//            if (pun[j]==i){
//                a.push_back(j);
//            }
//        }
//        
//    }
//    return answer;
//}
//int main(){
//    vector<string> logs={"0001 3 95", "0001 5 90", "0001 5 100", "0002 3 95", "0001 7 80", "0001 8 80", "0001 10 90", "0002 10 90", "0002 7 80", "0002 8 80", "0002 5 100", "0003 99 90"};
//    solution(logs);
//}
