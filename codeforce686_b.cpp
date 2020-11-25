////
////  codeforce686_b.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/25.
////
//
//#include <iostream>
//using namespace std;
//int a[2*100000+1];
//int a2[2*100000+1];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        int n;
//        cin>>n;
//        fill(a,a+2*100000+1,0);
//        fill(a2,a2+2*100000+1,0);
//        for (int i =0  ; i < n;i++){
//            int tmp;
//            cin>>tmp;
//            a2[i+1]=tmp;
//            a[tmp]++;
//        }
//        bool finished=false;
//        int value=-1;
//        for (int i =1  ; i <=2*100000 ;i++){
//            if (a[i]==1){
//                value=i;
//                finished=true;
//                break;
//            }
//        }
//        if (finished==false){
//            cout<<-1<<'\n';
//        }else{
//            for (int i =1  ; i <= n;i++){
//                if (a2[i]==value){
//                    cout<<i<<'\n';
//                    break;
//                }
//            }
//        }
//    }
//}
