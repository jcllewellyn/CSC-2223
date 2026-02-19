# The 'exec' Family Functions

These functions execute programs.

These functions take over the process they are called in. Anything that is programmed to happen after the call to 'exec' won't happen (unless 'exec' resulted in an error).

## The execl functions
---

The 'l' stands for 'list'.

1. execl: 

    format: 

    execl(char *pathToExecutable, char *arg0, char *arg1, ..., NULL);

    example:

    execl("/bin/ls", "ls", "-lh", NULL);

2. execlp: p is for path. it uses the PATH environment variable to search for binaries.

    format:

    execlp(char *executable, char *arg0, char *arg1, ..., NULL);

    example:

    execlp("ls", "ls", "-lh", NULL);

3. execle: e is for environment. We can pass in env vars

    format:
    
    execle(char *executable, char *arg0, char *arg1, ..., NULL, char *envp[]);

    example:

    char *env[] = {
        "PATH=/bin:/usr/bin",
        // others?
    };
    execle("ls", "ls", "-lh", NULL, env);

---

## The execv functions

---

The 'v' stands for 'vector' (as in an array).

1. execv:

    format:

    execv("char *pathToExecutable, char *args[]);


2. execvp:

    see example in other file

3. execvpe:

    format:

    execvpe(char *executable, char *args[], char *env[]);

---















