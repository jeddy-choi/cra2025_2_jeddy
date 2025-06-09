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
    printf("� ���� Ÿ���� �����ұ��?\n");
    printf("1. Sedan\n");
    printf("2. SUV\n");
    printf("3. Truck\n");
}

void printScreenEngine() {
    printf("� ������ ž���ұ��?\n");
    printf("0. �ڷΰ���\n");
    printf("1. GM\n");
    printf("2. TOYOTA\n");
    printf("3. WIA\n");
    printf("4. ���峭 ����\n");
}

void printScreenBrakeSystem() {
    printf("� ������ġ�� �����ұ��?\n");
    printf("0. �ڷΰ���\n");
    printf("1. MANDO\n");
    printf("2. CONTINENTAL\n");
    printf("3. BOSCH\n");
}

void printScreenSteeringSystem() {
    printf("� ������ġ�� �����ұ��?\n");
    printf("0. �ڷΰ���\n");
    printf("1. BOSCH\n");
    printf("2. MOBIS\n");
}

void printScreenRunTest() {
    printf("���� ������ �ϼ��Ǿ����ϴ�.\n");
    printf("� ������ �ұ��?\n");
    printf("0. ó�� ȭ������ ���ư���\n");
    printf("1. RUN\n");
    printf("2. Test\n");

}

void printScrren(int step)
{
    printf(CLEAR_SCREEN);
    printScreenType[step]();
    printf("===============================\n");
}