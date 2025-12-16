# grep (gloabl regular expression print) **CTRL-F on crack**

## Format

grep [flags] [searchstring] [filepath[

## Examples


**search for cat in main.py
   -  grep cat main.py

### Ignore case w/ -i
   -  grep -i cat main.py

### search in a directory
   -  grep -r cat docs/
   -  grep -r cat . # for "here"

### count unmber of lines w/ -c
   -  grep -c cat main.py

### combine flags
   -  grep -iro meow .

### pipe into wordcount (|)
   -  grep -iro meow . | wc -l


# Regular Expression (REGEX)

Regex specifies a pattern in text.

-P is a flag that enable Perl compatible regex

## Character Types

Character       Meaning
.             - Any Character (except the newline character)
\d            - digits 0-9
\D            - not a digit
\w            - word character (a-z, A-Z, 0-9, or \_ )
\W            - not a word character
\s            - whitespace (space, tab, newline \n)
\S            - not whitespace

## Meta Characters

Character       Meaning
[]            - grouping specifing valid chars for 1 char place
[^ ]          - not these chracters
{}            - quantifies the number of items for the preceeding character (ex: \d{3})
()            - for making a group
\             - escape the folling chracter (\\d)
|             - or
?             - matches 0 or 1 of the preceeding character
*             - matches 0 or more of the preceeding character
+             - matches 1 or more of the preceeding character

