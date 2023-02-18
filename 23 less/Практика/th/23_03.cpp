#include <iostream>
#include <stack>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    stack<int> st;
    st.push(12);
    st.push(23);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    // for (const auto &val : st)
    // {
    //     cout << val << " ";
    // }
}
