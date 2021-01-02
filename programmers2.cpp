////
////  programmers2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/22.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//
//int solution(vector<int> arr){
//    int answer=0;
//    
//    
//    vector<int> arr2;
//    while(true){
//        arr2.clear();
//        int now=arr[0];
//        int count=1;
//        if (arr.size()==1&&arr[0]==1){
//            break;
//        }
//        for (int i =1;i<arr.size();i++){
//            int tmp=arr[i];
//            if (tmp==now){
//                count++;
//            }else{
//                arr2.push_back(count);
//                count=1;
//                now=arr[i];
//            }
//        }
//        arr2.push_back(count);
//        arr=arr2;
//        answer++;
//    }
//    return answer;
//}
//
//
//int main(){
//    vector<int> arr={1, 1, 3, 3, 2, 2, 4, 5, 1, 1, 1, 3, 3, 3};
//    cout<<solution(arr);
//}
