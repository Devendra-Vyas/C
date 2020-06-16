#include <stdio.h>
main()
{
int  pointer;
int newpointer;
pointer=10;
printf("the value and address of pointer is %d %d \n ", *(&pointer) , &pointer);
newpointer=test(&pointer);
printf("newpointer is %d \n", newpointer);
}
test(int *testpointer)
{
printf("received in test function is %d \n",testpointer);
printf("value of testpointer is %d \n", *testpointer );
return testpointer;
}


/* All variables are memory locations. A pointer is a specially declared variable that signals intent to be used as a memory reference.

When you declare a variable what you are getting is a block of memory starting from a point. 
The purpose of pointer is to pass around those memory references between functions rather than pass the entire chunks of memory.
And then - within a function you can access the memory block by de-referencing.

you cannot do test (pointer) in line 11.

if it were just an ordinary variable that would be possible. 
but test is expecting a (int *pointer) because it has been invoked with an address in main. line 8.

In main no pointer declaration has been done at all.

when you say - & - you are saying address of [reference of value]

when you say - * - you are saying value at reference [de-reference of location]

you pass/declare - int *p - you are declaring intent that it is a memory location [reference declaration]

that’s it. */
