////
////  boj2941.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/22.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//string arr[8]={"c=","c-","dz=","d-","lj","nj","s=","z="};
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string str;
//    cin>>str;
//    int answer=0;
//    for (int i = 0 ; i<str.size();i++){
//        for (int j =0 ;j<8;j++){
//            bool same=true;
//            for (int k = 0 ;k<arr[j].size();k++){
//                if (str[i+k]!=arr[j][k]){
//                    same=false;
//                    break;
//                }
//            }
//            if (same==true){
//                i+=(arr[j].size()-1);
//                answer++;
//                break;
//            }
//            if (j==7&&same==false)answer++;
//        }
//    }
//    cout<<answer<<'\n';
//}
