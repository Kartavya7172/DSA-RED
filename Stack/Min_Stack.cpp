#include <iostream>
#include <vector>
using namespace std;

class MinStack {
public:
    vector<pair<int, int>> arr;

    // Constructor
    MinStack() {

    }

    // Push element onto the stack
    void push(int value) {

        // If stack is empty, value itself is the minimum
        if (arr.empty()) {
            arr.push_back({value, value});
            return;
        }

        // Previous minimum
        auto top = arr.back();

        // Find minimum till current position
        int min_till_now = min(value, top.second);

        // Store {value, minimum till now}
        arr.push_back({value, min_till_now});
    }

    // Remove the top element
    void pop() {
        if (!arr.empty())
            arr.pop_back();
    }

    // Return the top element
    int top() {
        return arr.back().first;
    }

    // Return the minimum element
    int getMin() {
        return arr.back().second;
    }
};

int main() {

    MinStack st;

    st.push(-2);
    st.push(0);
    st.push(-3);

    cout << "Minimum = " << st.getMin() << endl;

    st.pop();

    cout << "Top = " << st.top() << endl;
    cout << "Minimum = " << st.getMin() << endl;

    st.push(-5);

    cout << "Top = " << st.top() << endl;
    cout << "Minimum = " << st.getMin() << endl;

    st.pop();

    cout << "Top = " << st.top() << endl;
    cout << "Minimum = " << st.getMin() << endl;

    return 0;
}