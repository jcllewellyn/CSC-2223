# ASM Primer

source: see notes posted to canvas (for me)

## Common Instruction Sets
---
- Intel x86 
    * most windows machines
    * where we will be doing asm
    * built for backwards compatibility

- ARM 
    * most new macs - m series macs
    * most smartphones and tablets

- RISC-V
    * reduced instruction set computer - five

---
## Registers (x86_64)
---

We have 16 gen purpose registers that we typically use.
The label/name indicates which of the 64-bits we are referring to within each register.

___________________________________________________________________________

Base    All         Lower           Lower           Upper 8 of      Lower
Label   64 bits     32-bits         16-bits         Lower 16        8-bits
___________________________________________________________________________

A       RAX         EAX             AX              AH              AL
B       RBX         EBX             BX              BH              BL
C       RCX         ECX             CX              CH              CL
D       RDX         EDX             DX              DH              DL

SI      RSI         ESI             SI              --              SIL
DI      RDI         EDI             DI              --              DIL
BP      RBP         EBP             BP              --              BPL
SP      RSP         ESP             SP              --              SPL

8       R8          R8D             R8W             --              R8B
.       
.
.
15      R15         R15D            R15W            --              R15B
___________________________________________________________________________

---

## Install NASM

Netwide Assembler

```sh
sudo apt update
sudo apt nasm

nasm -v
```

## Check for Linker

```sh
ld --version
```

if you dont have a linker

```sh
sudo apt install build-essential
```




