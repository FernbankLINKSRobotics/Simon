#include "main.h"
#include "arm.h"

const int armElbow = 6;
const int armRotate = 7;
const int armShoulder = 5;

void bodyRotate(int r){
  motorSet(armRotate, r);
}

void elbowRotate(int e){
  motorSet(armElbow, e);
}

void shoulderRotate(int s){
  motorSet(armShoulder, s);
}
