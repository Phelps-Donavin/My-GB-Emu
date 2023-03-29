#include <stdbool.h>
#include "VM.h"
int fetch(struct VM* VM);
_Bool eval(int instr, struct VM* VM);
int pop(struct VM* VM);
_Bool push(int x, struct VM* VM);
#include "functions.c"