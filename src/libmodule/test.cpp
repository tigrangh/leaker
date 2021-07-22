#include "test.hpp"

namespace leaker
{
class dummy
{};
void test()
{
    new dummy();
}
} // end leaker


