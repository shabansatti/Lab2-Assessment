#include <gtest/gtest.h>
#include "../include/student_code.h"

/*
===========================================
  GOOGLE TEST CASES
===========================================
*/

TEST(TypeTest, IntToFloatConversion) {
    EXPECT_FLOAT_EQ(static_cast<float>(getIntValue()), 10.0f);
}

TEST(TypeTest, FloatToIntConversion) {
    EXPECT_EQ(static_cast<int>(getFloatValue()), 10);
}

TEST(TypeTest, CharToIntConversion) {
    EXPECT_EQ(static_cast<int>(getCharValue()), 65);
}

TEST(TypeTest, StaticCastFunction) {
    EXPECT_EQ(convertFloatToInt(99.99f), 99);
}

TEST(TemperatureTest, FahrenheitToCelsius) {
    EXPECT_NEAR(fahrenheitToCelsius(32.0f), 0.0f, 0.001f);
    EXPECT_NEAR(fahrenheitToCelsius(212.0f), 100.0f, 0.001f);
    EXPECT_NEAR(fahrenheitToCelsius(98.6f), 37.0f, 0.1f);
}
