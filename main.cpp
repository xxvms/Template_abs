#include <iostream>

template <class T>              // function template
T abs(T n){
    return (n < 0 ) ? -n : n;
}


int main() {
    int int1 = 5;
    int int2 = -6;

    long long1 = 70000;
    long long2 = -80000;
    double dub1 = 9.95;
    double dub2 = -10.15;

    // calls to instantiate functions
    std::cout << "abs (" << int1 << ")=" << abs(int1) << '\n'; // abs int
    std::cout << "abs (" << int2 << ")=" << abs(int2) << '\n'; // abs int
    std::cout << "abs (" << long1 << ")=" << abs(long1) << '\n'; // abs long
    std::cout << "abs (" << long2 << ")=" << abs(long2) << '\n'; // abs long
    std::cout << "abs (" << dub1 << ")=" << abs(dub1) << '\n'; // abs double
    std::cout << "abs (" << dub2 << ")=" << abs(dub2) << '\n'; // abs double




    return 0;
}