#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <string>
#include <functional>
#include <gmock/gmock.h>

#include "assembple_type.h"
#include "print.h"


int stack[10];

int selectCarType(int answer);
int selectEngine(int answer);
int selectbrakeSystem(int answer);
int selectSteeringSystem(int answer);
int selectNullOperation(int answer);

void runProducedCar();
void testProducedCar();
void delay(int ms);

// 질문에 대한 전역 맵 선언
std::map<int, std::string> questionMap = {
    {CarType_Q, "차량 타입은"},
    {Engine_Q, "엔진은"},
    {brakeSystem_Q, "제동장치는"},
    {SteeringSystem_Q, "조향장치는"},
    {Run_Test, "Run_Test"}
};

std::string getQuestionString2(int step) {
    return questionMap[step];
}

bool check_input_consistency(int step, int inputData) {
    int maxInputDataCount;
    int minInputDataCount = 0;
    bool ret = true;

    switch (step) {
    case CarType_Q:
        maxInputDataCount = CarType_Cnt - 1;
        minInputDataCount = 1;
        break;
    case Engine_Q:
        maxInputDataCount = Engine_Cnt - 1;
        break;
    case brakeSystem_Q:
        maxInputDataCount = brakeSystem_Cnt - 1;
        break;
    case SteeringSystem_Q:
        maxInputDataCount = SteeringSystem_Cnt - 1;
        break;
    case Run_Test:
        maxInputDataCount = 2;
        break;
    default:
        return "Unknown Error";
    }

    if (!(inputData >= minInputDataCount && inputData <= maxInputDataCount))
    {
        ret = false;

        if (step == Run_Test)
        {
            printf("ERROR :: Run 또는 Test 중 하나를 선택 필요\n");
            return ret;
        }

        printf("ERROR :: %s 1 ~ %d 범위만 선택 가능\n", getQuestionString2(step).c_str(), maxInputDataCount);
    }

    return ret;
}

// CarType에 대한 전역 맵 선언
std::map<int, std::string> carTypeMap = {
    {SEDAN, "Sedad"},
    {SUV, "SUV"},
    {TRUCK, "Truck"}
};

std::string getcarTypeString2(int answer) {
    return carTypeMap[answer];
}

// Engine에 대한 전역 맵 선언
std::map<int, std::string> engineTypeMap = {
    {GM, "GM"},
    {TOYOTA, "TOYOTA"},
    {WIA, "WIA"},
};

std::string getengineTypeString2(int answer) {
    return engineTypeMap[answer];
}

// brakeSystem에 대한 전역 맵 선언
std::map<int, std::string> brakeSystemTypeMap = {
    {MANDO, "MANDO"},
    {CONTINENTAL, "CONTINENTAL"},
    {BOSCH_B, "BOSCH"}
};

std::string getbrakeSystemTypeString2(int answer) {
    return brakeSystemTypeMap[answer];
}

// SteeringSystem에 대한 전역 맵 선언
std::map<int, std::string> SteeringSystemTypeMap = {
    {BOSCH_S, "BOSCH"},
    {MOBIS, "MOBIS"},
};

std::string getSteeringSystemTypeString2(int answer) {
    return SteeringSystemTypeMap[answer];
}

// 함수 포인터 배열 선언
int (*selectOperation[QuestionType_Cnt])(int) = { selectCarType, selectEngine, selectbrakeSystem, selectSteeringSystem, nullptr };

void delay(int ms)
{
    volatile int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            for (int t = 0; t < ms; t++)
            {
                sum++;
            }
        }
    }
}

int processAnswer(int step, int answer) {
    // 이전 step 값을 리턴
    if (answer == 0)
    {
        if (step > CarType_Q)
        {
            // 이전 step 값을 리턴
            return (step - 1);
        }
    }
    return selectOperation[step](answer);
}

int main()
{
    char buf[100];
    int step = CarType_Q;

    while (1)
    {
        // 현 상태에 따라 화면을 출력할 수 있도록 함
        printScrren(step);

        printf("INPUT > ");
        fgets(buf, sizeof(buf), stdin);

        // 엔터 개행문자 제거
        char* context = nullptr;
        strtok_s(buf, "\r", &context);
        strtok_s(buf, "\n", &context);

        if (!strcmp(buf, "exit"))
        {
            printf("바이바이\n");
            break;
        }

        // 숫자로 된 대답인지 확인
        char* checkNumber;
        int answer = strtol(buf, &checkNumber, 10); // 문자열을 10진수로 변환

        // 입력받은 문자가 숫자가 아니라면
        if (*checkNumber != '\0')
        {
            printf("ERROR :: 숫자만 입력 가능\n");
            delay(800);
            continue;
        }

        // 입력받은 값이 정상 범위인지 확인
        if (!check_input_consistency(step, answer))
        {
            delay(800);
            continue;
        }

        // 입력값에 대한 동작 실행
        // Run_Test만 다르게 동작하므로
        if (step == Run_Test)
        {
            switch (answer) {
            case RETURN_TO_START:
                step = CarType_Q;
                continue;
            case RUN_PRODUCED_CAR:
                runProducedCar();
                delay(2000);
                continue;
            case RUN_TEST:
                printf("Test...\n");
                delay(1500);
                testProducedCar();
                delay(2000);
                continue;
            }
        }
        else
        {
            step = processAnswer(step, answer);
        }
    }

    testing::InitGoogleMock();
    return RUN_ALL_TESTS();

}

int selectCarType(int answer)
{
    stack[CarType_Q] = answer;
    printf("차량 타입으로 %s을(를) 선택하셨습니다.\n", getcarTypeString2(answer).c_str());
    delay(800);

    return Engine_Q;
}

int selectEngine(int answer)
{
    stack[Engine_Q] = answer;
    printf("%s 엔진을 선택하셨습니다.\n", getengineTypeString2(answer).c_str());
    delay(800);

    return brakeSystem_Q;
}

int selectbrakeSystem(int answer)
{
    stack[brakeSystem_Q] = answer;
    printf("%s 제동장치를 선택하셨습니다.\n", getbrakeSystemTypeString2(answer).c_str());
    delay(800);

    return SteeringSystem_Q;
}

int selectSteeringSystem(int answer)
{
    stack[SteeringSystem_Q] = answer;
    printf("%s 조향장치를 선택하셨습니다.\n", getSteeringSystemTypeString2(answer).c_str());
    delay(800);

    return Run_Test;
}


int isValidCheck()
{
    if (stack[CarType_Q] == SEDAN && stack[brakeSystem_Q] == CONTINENTAL)
    {
        return false;
    }
    else if (stack[CarType_Q] == SUV && stack[Engine_Q] == TOYOTA)
    {
        return false;
    }
    else if (stack[CarType_Q] == TRUCK && stack[Engine_Q] == WIA)
    {
        return false;
    }
    else if (stack[CarType_Q] == TRUCK && stack[brakeSystem_Q] == MANDO)
    {
        return false;
    }
    else if (stack[brakeSystem_Q] == BOSCH_B && stack[SteeringSystem_Q] != BOSCH_S)
    {
        return false;
    }
    else
    {
        return true;
    }
    return true;
}

void runProducedCar()
{
    if (isValidCheck() == false)
    {
        printf("자동차가 동작되지 않습니다\n");
    }
    else
    {
        if (stack[Engine_Q] == 4)
        {
            printf("엔진이 고장나있습니다.\n");
            printf("자동차가 움직이지 않습니다.\n");
        }
        else
        {
            printf("Car Type : %s\n", getcarTypeString2(stack[CarType_Q]).c_str());
            printf("Engine : %s\n", getengineTypeString2(stack[Engine_Q]).c_str());
            printf("Brake System : %s\n", getbrakeSystemTypeString2(stack[brakeSystem_Q]).c_str());
            printf("SteeringSystem : %s\n", getSteeringSystemTypeString2(stack[SteeringSystem_Q]).c_str());

            printf("자동차가 동작됩니다.\n");
        }
    }
}

void testProducedCar()
{
    if (stack[CarType_Q] == SEDAN && stack[brakeSystem_Q] == CONTINENTAL)
    {
        printf("자동차 부품 조합 테스트 결과 : FAIL\n");
        printf("Sedan에는 Continental제동장치 사용 불가\n");
    }
    else if (stack[CarType_Q] == SUV && stack[Engine_Q] == TOYOTA)
    {
        printf("자동차 부품 조합 테스트 결과 : FAIL\n");
        printf("SUV에는 TOYOTA엔진 사용 불가\n");
    }
    else if (stack[CarType_Q] == TRUCK && stack[Engine_Q] == WIA)
    {
        printf("자동차 부품 조합 테스트 결과 : FAIL\n");
        printf("Truck에는 WIA엔진 사용 불가\n");
    }
    else if (stack[CarType_Q] == TRUCK && stack[brakeSystem_Q] == MANDO)
    {
        printf("자동차 부품 조합 테스트 결과 : FAIL\n");
        printf("Truck에는 Mando제동장치 사용 불가\n");
    }
    else if (stack[brakeSystem_Q] == BOSCH_B && stack[SteeringSystem_Q] != BOSCH_S)
    {
        printf("자동차 부품 조합 테스트 결과 : FAIL\n");
        printf("Bosch제동장치에는 Bosch조향장치 이외 사용 불가\n");
    }
    else
    {
        printf("자동차 부품 조합 테스트 결과 : PASS\n");
    }
}