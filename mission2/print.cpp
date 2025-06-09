#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <string>
#include <functional>
#include <gmock/gmock.h>

#include "assembple_type.h"
#include "print.h"

#define CLEAR_SCREEN "\033[H\033[2J"


void (*printScreenType[QuestionType_Cnt])(void) = { printScreenCarType, printScreenEngine, printScreenBrakeSystem, printScreenSteeringSystem, printScreenRunTest };


void printScreenCarType() {
    printf("        ______________\n");
    printf("       /|            | \n");
    printf("  ____/_|_____________|____\n");
    printf(" |                      O  |\n");
    printf(" '-(@)----------------(@)--'\n");
    printf("===============================\n");
    printf("어떤 차량 타입을 선택할까요?\n");
    printf("1. Sedan\n");
    printf("2. SUV\n");
    printf("3. Truck\n");
}

void printScreenEngine() {
    printf("어떤 엔진을 탑재할까요?\n");
    printf("0. 뒤로가기\n");
    printf("1. GM\n");
    printf("2. TOYOTA\n");
    printf("3. WIA\n");
    printf("4. 고장난 엔진\n");
}

void printScreenBrakeSystem() {
    printf("어떤 제동장치를 선택할까요?\n");
    printf("0. 뒤로가기\n");
    printf("1. MANDO\n");
    printf("2. CONTINENTAL\n");
    printf("3. BOSCH\n");
}

void printScreenSteeringSystem() {
    printf("어떤 조향장치를 선택할까요?\n");
    printf("0. 뒤로가기\n");
    printf("1. BOSCH\n");
    printf("2. MOBIS\n");
}

void printScreenRunTest() {
    printf("멋진 차량이 완성되었습니다.\n");
    printf("어떤 동작을 할까요?\n");
    printf("0. 처음 화면으로 돌아가기\n");
    printf("1. RUN\n");
    printf("2. Test\n");

}

void printScrren(int step)
{
    printf(CLEAR_SCREEN);
    printScreenType[step]();
    printf("===============================\n");
}