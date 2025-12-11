

# Standard Output Redirect

* idea: *takes the normal output of a program and store it in a file*
    - abbreviated w/ stdout
    - redireected with '>' symbol
    - we can append with '>>' symbol
    - note that this is the same as '1>' or '1>>'

**EX: echo "Jesse" > name.txt
      echo "Annabelle" >> name.txt** 

# Standard Input Redirect

* idea: *feed info into a program that takes input*
    - abbreviated w/ stdin
    - redirect symbol is '<'

**EX: python3 greeting.py < names.txt**

# Standard Error Redirect

* idea: *feed the error messages into a file*
    - abbreviated with stderr
    - redirect symbol is '2>' or '2>>'

**EX: echoo "jesse" 2>> errors.txt
  Note: echoo isn't a command so the error ends up in errors**

# Pipe

* idea: *Take one program's result and feed it into another program*
    - used to string programs together

**EX: ls -al /usr/bin | more**



