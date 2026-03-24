#include <iostream>
#include "ArrayQueue.hpp"
using namespace std;
int main() {
    ArrayQueue<int> q(5);
    q.enqueue(0);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Front: " << q.front() << endl; // 1
    cout << "Back: " << q.back() << endl;   // 3
    q.dequeue();
    cout << "Front: " << q.front() << endl; // 2
    cout << "Back: " << q.back() << endl;   // 3
    return 0;
}