#include <iostream>
#include <bitset>

using namespace std;

// We should define this empty print function in order to avoid compilation failure.
void print()
{
}

template <typename T, typename... Types>
void print(const T& firstArg, const Types&... args)
{
    cout << "First Arg: " << firstArg << " Sizeof(args): " << sizeof...(args) << endl;
    print(args...);
}

int main()
{
    print(7.5, "Hello", bitset<16>(377), 42);

    return 0;
}
