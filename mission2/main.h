#pragma once
int selectCarType(int answer);
int selectEngine(int answer);
int selectbrakeSystem(int answer);
int selectSteeringSystem(int answer);
int selectNullOperation(int answer);

bool check_input_consistency(int step, int inputData);
int processAnswer(int step, int answer);

void runProducedCar();
void testProducedCar();
void delay(int ms);