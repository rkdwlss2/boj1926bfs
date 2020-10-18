////
////  codeforcenicematrix.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/17.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//#define ll long long int
//int n,m;
//ll arr[101][101];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin >> c;
//    while (c--){
//        cin>>n>>m;
//        for (int i = 0 ; i<n;i++){
//            for (int j = 0 ; j<m;j++){
//                cin >> arr[i][j];
//            }
//        }
//        ll ans=0;
//        int newx=n/2;
//        int newy=m/2;
//        if (n%2==1)newx=n/2+1;
//        if (m%2==1)newy=m/2+1;
//        for (int i = 0;i<newx;i++){
//            for (int j =0;j<newy;j++){
//                vector<ll> v;
//                ll avg=(arr[i][j]+arr[n-i-1][j]+arr[i][m-j-1]+arr[n-i-1][m-j-1]);
//                v.push_back(arr[i][j]);
//                if (i!=n-i-1){
//                    v.push_back(arr[n-i-1][j]);
//                }
//                if (j!=m-j-1){
//                    v.push_back(arr[i][m-j-1]);
//                }
//                if (i!=n-i-1&&j!=m-j-1){
//                    v.push_back(arr[n-i-1][m-j-1]);
//                }
//                ll realsum=(ll)1e18;
//                for (int k =0;k<v.size();k++){
//                    ll sum=0;
//                    for (int l=0;l<v.size();l++){
//                        sum+=abs(v[k]-v[l]);
//                    }
//                    if (realsum>sum)realsum=sum;
//                }
//                ans+=realsum;
//            }
//        }
//        cout<<ans<<'\n';
//    }
//    
//}
