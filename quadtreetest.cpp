////
////  quadtreetest.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/11.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//string solution(const string& s,int index){
//    if (index>=s.length())return "";
//    char first=s[index];
//    if (first=='w')return "w";
//    if (first=='b')return "b";
//    index++;
//    string lu=solution(s,index);
//    index+=lu.length();
//    string ru=solution(s,index);
//    index+=ru.length();
//    string ld=solution(s,index);
//    index+=ld.length();
//    string rd=solution(s, index);
//    return "x"+ld+rd+lu+ru;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin>>c;
//    while(c--){
//        string a;
//        cin >>a;
//        string answer =solution(a, 0);
//        cout<<answer<<'\n';
//    }
//    
//}
