#include "main.h"
#include "arm.h"

void bodyRotate(int r){
  motorSet(armRotate, r);
}

void elbowRotate(int e){
  motorSet(armElbow, e);
}

void shoulderRotate(int s){
  motorSet(armShoulder, s);
}
