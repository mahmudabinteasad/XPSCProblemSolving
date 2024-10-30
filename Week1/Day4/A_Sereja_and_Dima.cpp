// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for(int i = 0; i < n; i++)
//    {
//     cin >> a[i];
//    }
//    int i = 0, j = n - 1, sereja = 0, dima = 0;
//    while(i < j)
//    {
//     if(a[i] < a[j])
//     {
//         sereja += a[j];
//         j--;
//     }
//     else
//     {
//         sereja += a[i];
//         i++;
//     }

//     if(a[i] < a[j])
//     {
//         dima += a[j];
//         j--;
//     }
//     else
//     {
//         dima += a[i];
//         i++;
//     }
//    }
//    if(i == j)
//    {
//     sereja += a[i];
//    }
//    cout << sereja << " " << dima << '\n';
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   deque<int> dq(n);
   for (int i = 0;i < n;i++) {
      cin >> dq[i];
   }

   int ans1 = 0, ans2 = 0, who = 1;
   while (!dq.empty()) {
      int left = dq.front(), right = dq.back(), mx;
      mx = max(left, right);
      if (who % 2 != 0) {
         ans1 += mx;
      }
      else {
         ans2 += mx;
      }

      if (mx == left) {
         dq.pop_front();
      }
      else {
         dq.pop_back();
      }
      who++;
   }

   cout << ans1 << " " << ans2 << '\n';
   return 0;
}