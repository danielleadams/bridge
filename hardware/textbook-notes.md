# Computer Hardware Review

## Processors
- all CPU contain registers inside to hold key variables and temp results
- instructions may combine two operands from registers, memory, or both into a result such as adding 2 words and storing result in a register or in memory
- special registers may exist that are visible to programmer
  - program counter: contains memory address of next instruction fetched. once fetched, it updates to point to its successor
  - stack pointer: points to top of current stack in memory. stack contains one frame for each procedure that has been entered but not exited
  - the PSW (Program Status Word): contains the condition code bits, which set by comparison instructions, CPU priority, mode (user vs. kernel), etc.
- to improve performance, old way is to fetch, decode and execute one at a time
  - modern CPU have facilities for executing more than 1 at a time, called a pipeline
- more advanced than pipeline is superscalar CPU
  - implication is that instructions can be exectured out of order (in holding buffer)
- in Kernel mode, CPU can execute every instruction in its instruction set and use every feature of the hardware.
  - on desktop and server machines, operating system normally runs in Kernel mode, giving access to complete hardware
  - on embedded systems, small piece runs in kernel mode, with rest in user mode
- user programs always run in user mode, permitting subset of instructions to be executed and subset of features accessed.
  - all instructions involving I/O and memory protection are disallowed in user mode
  - Setting PSW mode bit to enter kernel mode is also forbidden
- to obtain services from OS, user program must make a **system call**
  - traps into kernel and invokes the OS
  - TRAP instruction switches user to kernel and starts OS; when work completed the control is returned to user following system call

## Multithreaded & Multicore Chips
- Moore's law states # of transisters on a chip doubles every 18 months.
  - observation by Intel Gordon Moore of how fast process engineers at semiconductor companies are able to shrink transistors
- Intel Pentium 4 introduced multithreading in which 1 CPU holds state of 2 threads and switch back and forth on nanosecond time scale
- does not offer true parallelism, with only 1 process running at a time but thread switching time is reduced
- has implications in that each thread appears to OS as separate CPU
  - scheduling might get complex as OS may schedule 2 threads on same CPU
- many CPU chips now have 4, 8 or more **cores** on them.
  - making use of multicore chip will require multiprocessor OS
- **GPU (Graphics Processing Unit)** is thousands of tiny cores
  - good for many small computations done in parallel, like rendering polygons in graphics application.
  - not great for serial tasks
  - also hard to program
