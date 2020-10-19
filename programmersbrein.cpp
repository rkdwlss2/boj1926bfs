////
////  programmersbrein.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/19.
////
//
//#include <iostream>
//#include <string>
//#include <deque>
//using namespace std;
//
//bool check[27];
//bool upward[1001];
//int arr[1001];
//int n;
//string solution(string sentence){
//    string answer="";
//    n=sentence.size();
//    fill(arr,arr+1001,-1);
//    for (int i = 0 ;i<n;i++){
//        if (sentence[i]-'a'<0){
//            upward[i]=true;
//            arr[i]=sentence[i]-'A';
//        }
//        else{
//            arr[i]=sentence[i]-'a';
//        }
//    }
//    int now=-1;
//    int count=0;
//    int count2=0;
//    int last=-1;
//    deque<int> q;
//    for (int i = 0 ; i <n;i++){
//        if (upward[i]==false){
//            if (now!=arr[i]&&check[arr[i]]==true){
////                cout<<"invalid";
//                return "invalid";
//            }
//            if (now==-1){
//                now=arr[i];
//                check[arr[i]]=true;
//                count2++;
//                last=i;
//                count=0;
//            }
//            else if (now!=arr[i]){
//                now=arr[i];
//                check[arr[i]]=true;
//                last=i;
//                if (count2>2){
////                    int tmp=q.back();
////                    q.pop_back();
//                    q.push_back(-1);
////                    q.push_back(tmp);
//                }
//                else{
//                    q.push_back(-1);
//                }
//                count2=0;
//                count=0;
//            }else{
//                last=i;
//                count2++;
//                count=0;
//            }
//        }
//        else{
//            if (upward[i]==true){
//                count++;
//                if (count>=2||n-1==i){
//                    q.push_back(-1);
//                }
//                q.push_back(arr[i]+'A');
//            }
//            else{
//                q.push_back(arr[i]+'a');
//            }
//        }
//    }
//    cout << "q size : "<<q.size()<<'\n';
//    while(!q.empty()){
//        if (q.front()==-1){
//            cout<<' ';
//            answer+=' ';
//        }else{
//            answer+=q.front();
//            cout<<(char)q.front();
//        }
//        q.pop_front();
//    }
//    return answer;
//}
//int main(){
//    cout<<solution("HaEaLLaLa");
//}
