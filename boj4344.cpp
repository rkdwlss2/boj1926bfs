////
////  boj4344.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/17.
////
//
//#include <iostream>
//using namespace std;
//double arr[1001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        fill(arr,arr+1001,0);
//        double n;
//        cin>>n;
//        double sum=0;
//        for (int i = 0 ; i < n;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//        }
//        double Avg=sum/n;
//        double count=0;
//        for (int i = 0 ; i < n;i++){
//            if (arr[i]>Avg)count++;
//        }
//        double number=n;
//        double answer=(count/number)*100;
////        if (answer*0.0001>=0.0005){
////            answer+=0.001;
////        }
//        cout<<fixed;
//        cout.precision(3);
//        cout<<answer<<'%'<<'\n';
//    }
//}
