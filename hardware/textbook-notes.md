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

  ## Memory
  - ideally, memory should be faster than executing instruction so that CPU is not held up by memory, large, and cheap
  - memory system is constructed as hierarchy of layers
  - top have higher speed, smaller capacity and greater cost per bit than lower
    - top layer conists of registers internal to CPU and made of same material as CPU, so just as fast; no delay in accessing them
    - programs must manage registers (ie. decide what to keep in them) themselves in the software

### Caching
- cache is controlled by hardware
  - main memory is divided into **cache lines**, typically 64 bytes
  - kept close to CPU so when needed, it makes a **cache hit** to check which takes 2 clock cycles; does not use bus
  - some machines have 2 or 3 levels of cache, each one slower than the last

  #### Frequent Cache Questions
  - When to put a new item into cache.
  - Which cache line to put new item in.
  - Which item to remove from cache when slot is needed
  - Where to put newly evicted item in larger memory.

- modern CPU has 2 cache; difference between 2 lies in timing
  1. L1 cache is inside CPU and feeds decoded instructions into CPY execution engine; no delay
  2. L2 cache holds several MB of recently used memory words; 1 or 2 clock cycles

### RAM
- sometimes called core memory
- all CPU requests that cannot be satisfied by cache go to main memory

### ROM (Read Only Memory)
- small amount of non-volatile random-access memory and not lost when power off
- programmed at the factory and cannot be changed
- fast and inexpensive
- can come with bootstrap loader to start computer

### EEPROM (Electrically Erasable PROM) and flash memory
- non-volatile but can be erased and rewritten
- writing takes longer than writing RAM, so used same way ROM is
- flash also commonly used as storage medium in portable electronic devices, like digital camera or portable music players. if its erased too many times, it wears out

## Disks
- next in hierarchy is magnetic disk (hard disk)
- accessing disk is 3 orders of magnitude slower than RAM, but cheaper and larger
- accessed like a vinyl record
- read a track, and all tracks for given arm position for a cylinder
- some disks aren't disks at all, such as **SSDs** (Solid State Disks)
  - these don't have moving parts, do not contain platters in shape of disks, and store data in Flash memory
  - the only way they are disks is they keep stored data when the computer is shut off