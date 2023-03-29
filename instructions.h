typedef enum{
    PSH,  //Pushes x onto the VM's stack
    ADD,  //Pops two values off of the VM stack, adds them, then pushes the result onto the stack.
    SUB,  //Pops two values off of the VM stack, subtracts them, then pushes the result onto the stack.
    MULT, //Pops two values off of the VM stack, multiplies them, then pushes the result onto the stack.
    DIV,  //Pops two values off of the VM stack, divides them, then pushes the result onto the stack.
    POP,  //Pops the first value on the stack, then prints the value. Mainly for debugging.
    PEEK, //Prints the top value on the stack.
    SET,  //Sets the registers value to X.
    HLT  //Ends the program.
} InstructionSet;