#include <iostream>
/* The following are function declarations. They _declare_ that the functions
exist but they do not _define_ what the functions actually do (the definitions
appear after the main function). By declaring these functions here, they may be
called in the main before they are defined.
Note: function1 expects an int type, whereas function2 expects a pointer to an int
*/
void function1(int);
void function2(int *);
int main() {
int number = 10;


// C1. Display the contents of number to the screen
printf("C1. Number: %d\n", number);

// C2. Display the address of variable number to the screen
printf("C2. Address of number: %p\n", (void*)&number);

// C3. Call function1
function1(number);

// C4. Display the contents of number to the screen
printf("C4. Number after function1 call: %d\n", number);

// C5. Call function2
function2(&number);

// C6. Display the contents of number to the screen
printf("C6. Number after function2 call: %d\n", number);

return 0;
}

void function1(int number){
   // C7. Increment number by one
   number += 1;

   // C8. Display the contents of number to the screen (should be 11)
   printf("C8. Number inside function1: %d\n", number);

   // C9. Display the address of number to the screen
   printf("C9. Address of number inside function1: %p\n", (void*)&number);
}


void function2(int *numberPtr)

{
/* C10. display the address of number to the screen (should be the same
address as you displayed first in main) */
/* C11. display the value that the pointer numberPtr points to */
/* C12. increment the value stored in number */
/* C13. display the contents of number to the screen */
}