struct VM{
    int pc; //The program counter
    int stackPointer; //The stack pointer
    int program[1024]; //The current instruction set.
    int stack[64]; //The program stack

    typedef enum{
        A, //Various registers
        B,
        C,
        D,
        E,
        F
    }Registers;
};