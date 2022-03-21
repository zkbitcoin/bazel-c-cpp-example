#include "speller/greeting/greeting.h"

#include "gtest/gtest.h"

namespace OasisDigital {

TEST(GreetingTest, GetGreet) {
  EXPECT_EQ(get_greet("Bazel"),
            "Looking up whether 'Bazel' is a valid word");
}

}  // namespace OasisDigital
