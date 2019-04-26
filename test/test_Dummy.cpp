#include <boost/test/unit_test.hpp>
#include <rock_library_mode/Dummy.hpp>

using namespace rock_library_mode;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    rock_library_mode::DummyClass dummy;
    dummy.welcome();
}
