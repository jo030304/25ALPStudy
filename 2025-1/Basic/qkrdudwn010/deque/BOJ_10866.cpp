#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    deque<int> dq;

    while(n--){
        string op;
        int x;
        cin >> op;
        if(op == "push_front"){
            cin >> x;
            dq.push_front(x);
        }
        else if(op == "push_back"){
            cin >> x;
            dq.push_back(x);
        }
        else if(op == "pop_front"){
            if(dq.empty()) cout << -1 << '\n';
            else{
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(op == "pop_back"){
            if(dq.empty()) cout << -1 << '\n';
            else{
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if(op == "size"){
            cout << dq.size() << '\n';
        }
        else if(op == "empty"){
            cout << dq.empty() << '\n';
        }
        else if(op == "front"){
            if(dq.empty()) cout << -1 << '\n';
            else cout << dq.front() << '\n';
        }
        else if(op == "back"){
            if(dq.empty()) cout << -1 << '\n';
            else cout << dq.back() << '\n';
        }
    }
    return 0;
}
