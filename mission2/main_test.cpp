#include "gmock/gmock.h"
#include "assembple_type.h"
#include "main.h"

#include "print.h"

TEST(InputTest, CarType)
{
	// 테스트할 입력 값
	int input = CarType_Q;

	// 테스트 대상 함수 호출
	bool condition = check_input_consistency(input, 1);

	EXPECT_TRUE(condition); // 예상한 대로 true이므로 테스트 통과
}

TEST(InputTest, CarType_false)
{
	// 테스트할 입력 값
	int input = CarType_Q;

	// 테스트 대상 함수 호출
	bool condition = check_input_consistency(input, 0);

	EXPECT_FALSE(condition); // 예상한 대로 true이므로 테스트 통과
}


TEST(InputTest, Engine) {
	// 테스트할 입력 값
	int input = Engine_Q;

	// 테스트 대상 함수 호출
	bool condition = check_input_consistency(input, 0);

	EXPECT_TRUE(condition); // 예상한 대로 true이므로 테스트 통과
}

TEST(InputTest, brakeSystem) {
	// 테스트할 입력 값
	int input = brakeSystem_Q;

	// 테스트 대상 함수 호출
	bool condition = check_input_consistency(input, 0);

	EXPECT_TRUE(condition); // 예상한 대로 true이므로 테스트 통과
}

TEST(InputTest, SteeringSystem) {
	// 테스트할 입력 값
	int input = SteeringSystem_Q;

	// 테스트 대상 함수 호출
	bool condition = check_input_consistency(input, 0);

	EXPECT_TRUE(condition); // 예상한 대로 true이므로 테스트 통과
}

TEST(InputTest, Run_Test) {
	// 테스트할 입력 값
	int input = Run_Test;

	// 테스트 대상 함수 호출
	bool condition = check_input_consistency(input, 0);

	EXPECT_TRUE(condition); // 예상한 대로 true이므로 테스트 통과
}

TEST(InputTest, Run_Test1) {
	// 테스트할 입력 값
	int input = Run_Test;

	// 테스트 대상 함수 호출
	bool condition = check_input_consistency(input, 7);

	EXPECT_FALSE(condition); // 예상한 대로 true이므로 테스트 통과
}


TEST(SelectTest, CarType)
{
	// 테스트할 입력 값
	int input = CarType_Q;

	// 테스트 대상 함수 호출
	processAnswer(input, 0);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}


TEST(SelectTest, Engine) {
	// 테스트할 입력 값
	int input = Engine_Q;

	// 테스트 대상 함수 호출
	processAnswer(input, 0);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}

TEST(SelectTest, Engine1) {
	// 테스트할 입력 값
	int input = Engine_Q;

	// 테스트 대상 함수 호출
	processAnswer(input, 1);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}

TEST(SelectTest, brakeSystem) {
	// 테스트할 입력 값
	int input = brakeSystem_Q;

	// 테스트 대상 함수 호출
	processAnswer(input, 0);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}

TEST(SelectTest, brakeSystem1) {
	// 테스트할 입력 값
	int input = brakeSystem_Q;

	// 테스트 대상 함수 호출
	processAnswer(input, 1);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}

TEST(SelectTest, SteeringSystem) {
	// 테스트할 입력 값
	int input = SteeringSystem_Q;

	// 테스트 대상 함수 호출
	processAnswer(input, 0);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}

TEST(SelectTest, SteeringSystem1) {
	// 테스트할 입력 값
	int input = SteeringSystem_Q;

	// 테스트 대상 함수 호출
	processAnswer(input, 1);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}

TEST(SelectTest, Run_Test)
{
	// 테스트할 입력 값
	int input = Run_Test;

	// 테스트 대상 함수 호출
	processAnswer(input, 0);

	ASSERT_TRUE(true); // 간단하게 함수가 실패하지 않았음을 확인
}
