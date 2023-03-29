#include "instructions.h"

int fetch(struct VM* VM){
    return VM->program[VM->pc];
}

int pop(struct VM* VM){
    int valuePopped = VM->stack[VM->stackPointer];
    VM->stackPointer--;
    return valuePopped;
}

_Bool push(int x, struct VM* VM){
    VM->stack[VM->stackPointer++]=x;
    return true;
}

_Bool eval(int instr, struct VM* VM){
    switch(instr){
        case PSH:
            push(VM->program[VM->pc++], &VM);
            return true;
            break;
        case ADD:
            push(pop(&VM)+pop(&VM), &VM);
            return true;
            break;
        case SUB:
            push(pop(&VM)-pop(&VM), &VM);
            return true;
            break;
        case MULT:
            push(pop(&VM)*pop(&VM), &VM);
            return true;
            break;
        case DIV:
            int operand1=pop(&VM);
            int operand2=pop(&VM);
            if(operand2!=0){
                push(operand1/operand2, &VM);
                return true;
            }
            printf("ERROR: DIV BY 0");
            return false;
            break;
        case POP:
            printf("Value popped: %d", pop(&VM));
            return true;
            break;
        case PEEK:
            printf("Value peeked: %d", VM->stack[VM->stackPointer]);
            return true;
            break;
        case SET:
            return true;
            break;
        case HLT:
            return false;
            break;
    }  
}