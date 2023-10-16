#include <iostream>
#include <thread>

using namespace std;

long long fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 40;
    thread t1([n]() { cout << "Fib(" << n << ") = " << fib(n) << endl; });
    t1.join();
    return 0;
}
