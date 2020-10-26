////
////  dsfsdf.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/25.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//string ltrim(const string &);
//string rtrim(const string &);
//
//
//using namespace std;
//int n;
//int arr[100001];
//vector<int> arr2;
//int balancedSum(vector<int> arr) {
//    int n=arr[0];
//    for (int i=1;i<=1+n;i++){
//        arr2.push_back(arr[i]);
//    }
//    int left=arr2[0];
//    int right=arr2[n-1];
//    int leftindex=0;
//    int rightindex=n-1;
//    while (leftindex<rightindex){
//        if (left>right){
//            right+=arr2[--rightindex];
//        }
//        else if (right>left){
//            left+=arr2[++leftindex];
//        }
//        else{
//            return ++leftindex;
//        }
//        
//    }
//    return 0;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin>>c;
//    vector<int> a;
//    a.push_back(c);
//    while (c--){
//        int tmp;
//        cin>>tmp;
//        a.push_back(tmp);
//    }
//    cout<<balancedSum(a)<<'\n';
//}
