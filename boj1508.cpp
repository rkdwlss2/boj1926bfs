//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n, m, k;
//vector<int> human;
//
//
//vector<int> Decision(int gap)
//{
//    vector<int> ret;
//    int limit = -1;
//    int cnt = 0;
//
//    for (int i = 0; i < human.size(); i++)
//    {
//        if (limit <= human[i])
//        {
//            cnt++;
//            limit = human[i] + gap;
//            ret.push_back(1);
//
//            if (cnt == m)
//            {
//                while (ret.size() != human.size())
//                    ret.push_back(0);
//
//                break;
//            }
//        }
//
//        else
//            ret.push_back(0);
//    }
//
//    if (cnt == m)
//        return ret;
//
//    ret.clear();
//    return ret;
//}
//
//vector<int> Solve()
//{
//    int left = 0;
//    int right = n;
//    vector<int> temp_ret;
//    vector<int> ret;
//
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//
//        temp_ret = Decision(mid);
//
//        if (temp_ret.size() != 0)
//        {
//            left = mid + 1;
//            ret = temp_ret;
//        }
//
//        else
//            right = mid - 1;
//    }
//
//    return ret;
//}
//
//int main()
//{
//    cin.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//    int temp;
//    vector<int> result;
//
//    cin >> n >> m >> k;
//
//    for (int i = 0; i < k; i++)
//    {
//        cin >> temp;
//        human.push_back(temp);
//    }
//
//    result = Solve();
//
//    for (int i = 0; i < result.size(); i++)
//        cout << result[i];
//
//    return 0;
//}
