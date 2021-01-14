#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld){
	char* test_val[3];
	test_val[0] = "./c-echo";
	test_val[1] = "hello";
	test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3, test_val));
}

TEST(EchoTest, EmptyString){
	char* test_val[1];
	test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, CarlieHuang){
	char* test_val[3];
	test_val[0] = "./c-echo";
	test_val[1] = "Carlie";
	test_val[2] = "Huang";
	EXPECT_EQ("Carlie Huang", echo(3, test_val));
}

TEST(EchoTest, One){
	char* test_val[2];
	test_val[0] = "./c-echo";
	test_val[1] = "One";
	EXPECT_EQ("One", echo(2, test_val));
}

TEST(EchoTest, Sentence){
	char* test_val[5];
	test_val[0] = "./c-echo";
	test_val[1] = "The";
	test_val[2] = "sky";
	test_val[3] = "is";
	test_val[4] = "blue!";
	EXPECT_EQ("The sky is blue!", echo(5, test_val));
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
