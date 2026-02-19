#include <unistd.h>
#include <sys/syscall.h>

int main(void){
    //write
    syscall(
	SYS_write,// numb er for write syscall
	1, // 1 for stdout file descriptor
	"hello\n", // the message to put in
	6 // the size of the message
	);

    // exit
    syscall(SYS_exit,0); // 0 for success
}
