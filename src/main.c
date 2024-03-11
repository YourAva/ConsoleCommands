#include <stdio.h>
//adding strings!!!! whooop whooop
#include <string.h>

//strcmp -> String Compare!! 

int main(int argc, char* argv[]) {
    if (argc != 2) { // Check if too many or too few arguments were passed with the function.
        printf("Bad command usage..! This app only takes one argument.\n");
        return -1;
    }

    if (strcmp(argv[1], "shutdown") == 0) {
        printf("Shutting down.\n");
        system("shutdown -s -f");
    }
    else if (strcmp(argv[1], "lock") == 0) {
        printf("Locking computer.\n");
        system("rundll32.exe user32.dll,LockWorkStation");
    }
    else if (strcmp(argv[1], "restart") == 0) {
        printf("Restarting.\n");
        system("shutdown /r");
    }
    else {
        printf("Bad command usage..! Enter a valid argument. (shutdown, lock, or restart)\n%s", argv[1]);
    }
}