////
////  line.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/20.
////
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//int ans[6];
//
//string solution(vector<string> table, vector<string> languages, vector<int> preference) {
//    string answer = "";
//    int ans=0;
//    int who=-1;
//    vector<string> table2;
//    table2.push_back(table[1]);
//    table2.push_back(table[4]);
//    table2.push_back(table[2]);
//    table2.push_back(table[3]);
//    table2.push_back(table[0]);
//    table=table2;
//    vector<int> array;
//    for (int i = 0 ; i < 5;i++){
//        string tmp=table[i];
//        string tmp2="";
//        int sum=0;
//        int index=0;
//        for (int j = 0;j<tmp.size();j++){
//            if (tmp[j]==' '){
//                for (int a=0;a<languages.size();a++){
//                    if (tmp2==languages[a]){
//                        sum+=(preference[a]*(6-index));
//                    }
//                }
//                index++;
//                tmp2="";
//            }else tmp2+=tmp[j];
//            
//        }
//        array.push_back(sum);
//        if (sum>ans){
//            ans=sum;
//        }
//    }
//    bool check=false;
//    for (int c=0;c<array.size();c++){
//        if (ans==array[c]){
//            for (int b=0;b<table[c].size();b++){
//                if (table[c][b]==' '){
//                    check=true;
//                    break;
//                }
//                answer+=table[c][b];
//            }
//            if (check==true)break;
//        }
//    }
//    return answer;
//}
//
//int main(){
//    vector<string> table={"SI JAVA JAVASCRIPT SQL PYTHON C#", "CONTENTS JAVASCRIPT JAVA PYTHON SQL C++", "HARDWARE C C++ PYTHON JAVA JAVASCRIPT", "PORTAL JAVA JAVASCRIPT PYTHON KOTLIN PHP", "GAME C++ C# JAVASCRIPT C JAVA"};
//    vector<string> languages={"PYTHON", "C++", "SQL"};
//    vector<int> preference={7,5,5};
//    cout<<solution(table,languages,preference)<<'\n';
//}
