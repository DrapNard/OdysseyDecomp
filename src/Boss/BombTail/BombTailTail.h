#pragma once

#include <math/seadMatrix.h>

class BombTailTailJointCalulator {
public:
    void calcTailBombThrowOld(const sead::Matrix34f* matrix);
    void calcBounce(const sead::Matrix34f* matrix, float value);
};

class BombTailTail {
public:
    void startResetAttack();
};
