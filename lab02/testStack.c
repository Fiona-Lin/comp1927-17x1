#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "Item.h"
#include "Stack.h"

//This function should contain
//tests that have access to the internal structure 
//of the stack. It should be implemented in arrayStack.c
void whiteBoxTests(void);


int main (int argc, char *argv[]){
    Stack s;
    //Run white box tests
    whiteBoxTests();

    //Run black box tests
    //Black box tests should test the ADT through the interface only
    printf("Black Box tests:\n");
    printf("This is just a small example for you to get started\n");

    printf("Test 1: createStack");
    s = createStack();
    assert(s != NULL);
    assert(stackSize(s) == 0);
    printf("Passed\n");

    printf("Test 2: push stack\n");
    printf("push 10 to stack\n");
    push(s,10);
    assert(stackSize(s) == 1);
    printf("Passed\n");

    printf("Test 3: pop stack\n");
    printf("poping: %d\n", pop(s));
    assert(stackSize(s) == 0);
    printf("Passed\n");
   // Tested, aborted successfully
   // printf("poping empty array, program is going to abort.\n");
   // pop(s);
    destroyStack(s);
    return 0;
}
