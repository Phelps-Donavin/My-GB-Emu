#include <stdio.h>
#include "instructions.h"
#include "VM.h"
#include "functions.h"


int main(){
    struct VM VM; //Delcaring a VM 
    //Fetch, Decode, Execute...
    while(eval(fetch(&VM), &VM)){} //While still evaluating the most recent fetched instruction...
    return 0;
}