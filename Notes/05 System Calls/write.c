#include <unistd.h> // contains write()
#include <stdlib.h> // contins exit()

int main(void) {
    // the write() wrapper for syscall
    write(1, "hello\n", 6);

    exit(0);

}
