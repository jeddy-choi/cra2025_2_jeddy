#pragma once
enum QuestionType
{
    CarType_Q,
    Engine_Q,
    brakeSystem_Q,
    SteeringSystem_Q,
    Run_Test,
    QuestionType_Cnt
};

enum CarType
{
    SEDAN = 1,
    SUV,
    TRUCK,
    CarType_Cnt
};

enum Engine
{
    GM = 1,
    TOYOTA,
    WIA,
    BROCKEN_Engine,
    Engine_Cnt
};

enum brakeSystem
{
    MANDO = 1,
    CONTINENTAL,
    BOSCH_B,
    brakeSystem_Cnt
};

enum SteeringSystem
{
    BOSCH_S = 1,
    MOBIS,
    SteeringSystem_Cnt
};

enum RunTest
{
    RETURN_TO_START,
    RUN_PRODUCED_CAR,
    RUN_TEST,
    RunTest_Cnt
};