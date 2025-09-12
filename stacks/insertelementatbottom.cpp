#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int x)
{
    // base case
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();

    // recursive call
    solve(s, x);
    s.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    solve(myStack, x);
    return myStack;
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << "Original stack top: " << st.top() << endl;
    pushAtBottom(st, 99);
    cout << "Stack after pushing 99 at bottom: " << endl;
    while (!st.empty())
    {
        cout << st.top() <<" ";
        st.pop();
    }
    cout << endl;
    return 0;
}
