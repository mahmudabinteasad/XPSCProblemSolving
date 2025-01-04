#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 0;
    int n = 0;
    int light = 0;
    cin >> x >> n;
    set<int> st;
    multiset<int> mul;

    st.insert(0);
    st.insert(x);
    mul.insert(x);

    for (int i = 0; i < n; i++)
    {
        cin >> light;
        auto iterator_right = st.upper_bound(light);
        auto iterator_left = iterator_right;
        iterator_left--;

        mul.erase(mul.find(*iterator_right - *iterator_left));

        mul.insert(*iterator_right - light);
        mul.insert(light - *iterator_left);

        st.insert(light);

        cout << *mul.rbegin() << " ";
    }
}