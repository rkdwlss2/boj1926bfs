////
////  proraming1.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/07.
////
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int solution(vector<string> grades, vector<int> weights, int threshold) {
//    int answer = 0;
//    for (int i=0;i<grades.size();i++){
//        int tmp=0;
//        int weigh=weights[i];
//        string str1=grades[i];
//        if (str1[0]=='A'){
//            if (str1[1]=='+'){
//                tmp=10;
//            }else{
//                tmp=9;
//            }
//        }else if(str1[0]=='B'){
//            if (str1[1]=='+'){
//                tmp=8;
//            }else{
//                tmp=7;
//            }
//        }else if(str1[0]=='C'){
//            if (str1[1]=='+'){
//                tmp=6;
//            }else{
//                tmp=5;
//            }
//        }
//        else if(str1[0]=='D'){
//            if (str1[1]=='+'){
//                tmp=4;
//            }else{
//                tmp=3;
//            }
//        }
//        
//        else{
//            tmp=0;
//        }
//        answer+=tmp*weigh;
//    }
//    return answer-threshold;
//}
//
//int main(){
//    vector<string> grades={"A+","D+","F","C0"};
//    vector<int> weights={2,5,10,3};
//    cout<<solution(grades, weights, 50)<<'\n';
//}
