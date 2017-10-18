#include "main.h"
#include "claw.h"

const int clawClose = 8;
const int clawRotation = 2;
const int clawVerticle1 = 3;
const int clawVerticle2 = 4;

void closeClaw(int c){
  motorSet(clawClose, c);
}

void rotateClaw(int r){
  motorSet(clawRotation, r);
}

void liftClaw(int l){
  motorSet(clawVerticle1, l);
  motorSet(clawVerticle2, -l);
}
