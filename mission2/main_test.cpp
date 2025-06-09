#include "gmock/gmock.h"
#include "assembple_type.h"
#include "main.h"

#include "print.h"

TEST(InputTest, CarType)
{
	// �׽�Ʈ�� �Է� ��
	int input = CarType_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	bool condition = check_input_consistency(input, 1);

	EXPECT_TRUE(condition); // ������ ��� true�̹Ƿ� �׽�Ʈ ���
}

TEST(InputTest, CarType_false)
{
	// �׽�Ʈ�� �Է� ��
	int input = CarType_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	bool condition = check_input_consistency(input, 0);

	EXPECT_FALSE(condition); // ������ ��� true�̹Ƿ� �׽�Ʈ ���
}


TEST(InputTest, Engine) {
	// �׽�Ʈ�� �Է� ��
	int input = Engine_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	bool condition = check_input_consistency(input, 0);

	EXPECT_TRUE(condition); // ������ ��� true�̹Ƿ� �׽�Ʈ ���
}

TEST(InputTest, brakeSystem) {
	// �׽�Ʈ�� �Է� ��
	int input = brakeSystem_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	bool condition = check_input_consistency(input, 0);

	EXPECT_TRUE(condition); // ������ ��� true�̹Ƿ� �׽�Ʈ ���
}

TEST(InputTest, SteeringSystem) {
	// �׽�Ʈ�� �Է� ��
	int input = SteeringSystem_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	bool condition = check_input_consistency(input, 0);

	EXPECT_TRUE(condition); // ������ ��� true�̹Ƿ� �׽�Ʈ ���
}

TEST(InputTest, Run_Test) {
	// �׽�Ʈ�� �Է� ��
	int input = Run_Test;

	// �׽�Ʈ ��� �Լ� ȣ��
	bool condition = check_input_consistency(input, 0);

	EXPECT_TRUE(condition); // ������ ��� true�̹Ƿ� �׽�Ʈ ���
}

TEST(InputTest, Run_Test1) {
	// �׽�Ʈ�� �Է� ��
	int input = Run_Test;

	// �׽�Ʈ ��� �Լ� ȣ��
	bool condition = check_input_consistency(input, 7);

	EXPECT_FALSE(condition); // ������ ��� true�̹Ƿ� �׽�Ʈ ���
}


TEST(SelectTest, CarType)
{
	// �׽�Ʈ�� �Է� ��
	int input = CarType_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	processAnswer(input, 0);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}


TEST(SelectTest, Engine) {
	// �׽�Ʈ�� �Է� ��
	int input = Engine_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	processAnswer(input, 0);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}

TEST(SelectTest, Engine1) {
	// �׽�Ʈ�� �Է� ��
	int input = Engine_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	processAnswer(input, 1);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}

TEST(SelectTest, brakeSystem) {
	// �׽�Ʈ�� �Է� ��
	int input = brakeSystem_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	processAnswer(input, 0);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}

TEST(SelectTest, brakeSystem1) {
	// �׽�Ʈ�� �Է� ��
	int input = brakeSystem_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	processAnswer(input, 1);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}

TEST(SelectTest, SteeringSystem) {
	// �׽�Ʈ�� �Է� ��
	int input = SteeringSystem_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	processAnswer(input, 0);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}

TEST(SelectTest, SteeringSystem1) {
	// �׽�Ʈ�� �Է� ��
	int input = SteeringSystem_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	processAnswer(input, 1);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}

TEST(SelectTest, Run_Test)
{
	// �׽�Ʈ�� �Է� ��
	int input = Run_Test;

	// �׽�Ʈ ��� �Լ� ȣ��
	processAnswer(input, 0);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}
