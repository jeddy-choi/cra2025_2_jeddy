#include "gmock/gmock.h"
#include "assembple_type.h"
#include "print.h"


TEST(PrintScreenTest, CarType) {
	// 테스트할 입력 값
	int input = CarType_Q;

	// 테스트 대상 함수 호출
	printScrren(input);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}

TEST(MyVoidFunctionTest, Engine) {
	// 테스트할 입력 값
	int input = Engine_Q;

	// 테스트 대상 함수 호출
	printScrren(input);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}

TEST(MyVoidFunctionTest, brakeSystem) {
	// 테스트할 입력 값
	int input = brakeSystem_Q;

	// 테스트 대상 함수 호출
	printScrren(input);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}

TEST(MyVoidFunctionTest, SteeringSystem) {
	// 테스트할 입력 값
	int input = SteeringSystem_Q;

	// 테스트 대상 함수 호출
	printScrren(input);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}

TEST(MyVoidFunctionTest, Run_Test) {
	// 테스트할 입력 값
	int input = Run_Test;

	// 테스트 대상 함수 호출
	printScrren(input);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}
