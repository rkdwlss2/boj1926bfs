////
////  baek1992.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/11.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//int n;
//char arr[65][65];
//
//string solution(const string& s,int x,int y,int index){
//    if (index==1)return s+arr[x][y];
//    string lu=solution(s,x,y,index/2);
//    string ru=solution(s,x,index/2+y,index/2);
//    string ld=solution(s,index/2+x,y,index/2);
//    string rd=solution(s,index/2+x,index/2+y,index/2);
//    if (lu[0]!='('&&lu==ru && lu==ld&& lu==rd){
//        return lu;
//    }
//    return "("+lu+ru+ld+rd+")";
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    for (int i = 0 ; i < n ;i++){
//        for (int j = 0 ; j < n ;j++){
//            cin>>arr[i][j];
//        }
//    }
//    string answer=solution("",0,0,n);
//    cout<<answer;
//}
