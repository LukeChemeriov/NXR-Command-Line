/* Main.cpp

"...where all the good stuff's goin' on" ~ John Hammond, literally every video ever

*/

/* A preprocessor statement. Just the one. */
#include <iostream>
#include "/functions/functions.h"

int main() { /* the infamous main */
    /* Main loop */
    while (true) {
        /* Get the user's command */
        std::getline(std::cin, command);
        /* Test it */
        Test(command);

    }
}

