# File Permission

*to see file permission we use ls -l*
- the ten character string on the left is the permission string

**EX: -rw-rw-r--

Char      1: -   Indicates the file type, here we have a normal file  
Char  2,3,4: rw- Permissions for user that owns the file  
Char  5,6,7: rw- Permissions for group that owns the file  
Char 8,9,10: r-- Permissions for the 'other' users on the machine  

    r - Read; w - Write; x - Execute (rwx)

Options for Char 1:
    - for normal files  
    d for directories  
    l for links (aka shortcuts in windows)  
    ... there are more  


**Octal Permission Values:
    r = 4
    w = 2
    x = 1

**Ex: -   r--     rw-     rwx
          4       4+2=6   4+2+1=7    
Octal Perm is 467

**Ex: -   rw-     rw-     r--
          6       6       4
Octal Perm is 664

# The Change Mode Command (chmod)

*Key:
    u = user who owns the file
    g = group that owns the file
    o = all other users

**EX: chmod u+w file.txt
      chmod g-x file.txt
      chmod 755 file.txt
      chmod 000 file.txt

# The Change Owner Command (chown)

**EX: sudo chown [newowner] [filename]
      sudo chown :[newgroupowner] [filename]
      sudo chown [newowner] :[newgroup] [filename]
    (adduser to add user ;])

