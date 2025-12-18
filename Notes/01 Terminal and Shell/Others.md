
# Find

 - used to find a file or directory

Format:

```sh
find [path] [flags]

```

```sh
# example
find . -name "file.py"
find . -name "*.py"
```

# Chaining Commands

AND
```sh
# command2 only happends if command1 is successful
command1 && command2
```

OR
```sh
# if command 1 fails, then command 2 executes
command1 || command2
```

## Combining Lines

```sh
# seperate w/ ;
command; command; command;
```
