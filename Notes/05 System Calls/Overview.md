### User Mode vs Kernel Mode
---
User Mode - the standard mode processes begin execution in. system calls do not run in usermode

Kernel Mode - an elevated privilege mode processes can run in to interact with the hardware. (for example, to create new files and processes)

The **System Calls interface** allows us to initiate a switch between the two modes.

---
## Forking, Zombies, and Reaping
--- 
fork() - the syscall used to create child processes.

Zombies - completed processes that hasn't been removed from the system. when the process terminates, the kernel doesn't immediatly remove it from the system.

Reaping - the action of a parent process removing a terminated child process from the system

Terminating Processes:
    - receive a signal to do so
    - returning from main
    - calling the exit() syscall interface

If a parent terminates w/o reaping its zombie children, the the kernel will handle it.

---

## Signals
---
A signal is a small message that notifies a process that an event of some type has occured in the system.

Examples: 

SIGKILL - kills a program
SIGQUIT - quit from keyboard
SIGINT - interrupt from keyboard (ex: ctrl+c)

In c, we have the <signal.h> lib

---
