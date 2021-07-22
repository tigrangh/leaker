#include <leaker/test.hpp>

void caller()
{
    leaker::test();
}
int main()
{
    caller();
    return 0;
}
