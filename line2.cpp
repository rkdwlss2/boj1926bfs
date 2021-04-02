////
////  line2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/20.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//char arr[9]={
//    '~','!','@','#','$','%','^','&','*'
//};
//bool two[4];
//int asc[128];
//vector<int> solution(string inp_str) {
//    vector<int> answer;
//    vector<int> we;
//    if (inp_str.size()<8||inp_str.size()>15)we.push_back(1);
//    int bo=0;
//    for (char i : inp_str){
//        bool che=false;
//        if (i>='A'&&i<='Z'){
//            two[0]=true;
//            che=true;
//        }else if (i>='a'&&i<='z'){
//            two[1]=true;
//            che=true;
//        }else if (i>='0'&&i<='9'){
//            two[2]=true;
//            che=true;
//        }else{
//            for (int index=0;index<9;index++){
//                if (arr[index]==i){
//                    two[3]=true;
//                    che=true;
//                }
//            }
//        }
//        if (che==false){
//            bo++;
//        }
//    }
//    if (bo>0){
//        we.push_back(2);
//    }
//    int sum=0;
//    for (int i = 0 ; i <4;i++){
//        if (two[i]==true)sum++;
//    }
//    if (sum<3){
//        we.push_back(3);
//    }
//    char pre=inp_str[0];
//    int m=1;
//    for (int i =1 ; i<inp_str.size();i++){
//        if (pre==inp_str[i]){
//            m++;
//        }else{
//            pre=inp_str[i];
//            m=1;
//        }
//        
//        if (m>=4){
//            we.push_back(4);
//            break;
//        }
//    }
//    for (int i =0 ; i<inp_str.size();i++){
//        int a1=inp_str[i];
//        asc[a1]++;
//    }
//    for (int i =0 ; i<128;i++){
//        if (asc[i]>=5){
//            we.push_back(5);
//        }
//    }
//    if (we.size()==0){
//        we.push_back(0);
//    }
//    return we;
//}
//
//int main(){
//    string ia="ZzZz9Z824";
//    vector<int> an=solution(ia);
//    for (auto i : an){
//        cout<<i<<'\n';
//    }
//}
