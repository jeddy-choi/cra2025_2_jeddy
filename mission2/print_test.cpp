#include "gmock/gmock.h"
#include "assembple_type.h"
#include "print.h"


TEST(PrintScreenTest, CarType) {
	// �׽�Ʈ�� �Է� ��
	int input = CarType_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	printScrren(input);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}

TEST(MyVoidFunctionTest, Engine) {
	// �׽�Ʈ�� �Է� ��
	int input = Engine_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	printScrren(input);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}

TEST(MyVoidFunctionTest, brakeSystem) {
	// �׽�Ʈ�� �Է� ��
	int input = brakeSystem_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	printScrren(input);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}

TEST(MyVoidFunctionTest, SteeringSystem) {
	// �׽�Ʈ�� �Է� ��
	int input = SteeringSystem_Q;

	// �׽�Ʈ ��� �Լ� ȣ��
	printScrren(input);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}

TEST(MyVoidFunctionTest, Run_Test) {
	// �׽�Ʈ�� �Է� ��
	int input = Run_Test;

	// �׽�Ʈ ��� �Լ� ȣ��
	printScrren(input);

	ASSERT_TRUE(true); // �����ϰ� �Լ��� �������� �ʾ����� Ȯ��
}
