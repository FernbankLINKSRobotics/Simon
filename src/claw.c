#include "main.h"
#include "claw.h"

void closeClaw(int c){
  motorSet(clawClose, c);
}

void rotateClaw(int r){
  motorSet(clawRotation, r);
}

void liftClaw(int l){
  motorSet(clawVerticle1, l);
  motorSet(clawVerticle2, l);
}
