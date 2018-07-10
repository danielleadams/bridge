# Fundamentals of System Hardware (Module)

- Definition: computer is electromechanical device with input/processining/output
- Mainframe: large computer that used to act as central point for all computing done on "campus"
    - uni may have 1 mainframe
- Server: exists in datacenter or room dedicated with AC and power. not used by most. lots of RAM and CPU - serves one purpose
- Also includes desktops, laptops, tablet, and phones

## Inside a Computer
- See slide/image

## Common/All Have
- CPU which is the "brain"
- Memory and secondary storage
- Video graphic controller for screen
- Network interface for internet
- Peripheral interface for Firewire, USB, etc

--> Most devices in computer are I/O or processinging

## Communication between Devices
- Internal comm in a machine is done via "bus"
- Physical pathway between 2 or more devices
- System bus is pathway between CPU and main memory
- Also carries data to and from I/O devices

## CPU
- only place in the system where code can be run
- CPU runs machine language code, not easy to write, we will write stuff to convert to machine language
- higher level code is for humans
- operates on "fetch-decode-execute" cycle
- each type of CPU has own set of instructions
- CPU can have cache memory

## Machine Language
- computers have basic commands like move, add, subtract, compare, jump, etc.

## Instruction Set
- work with higher languages to bring down to run on CPU

## Fetch-Execute Cycle
- with CPU it fetches and once everything is loaded, it can operate
- fetch would go to memory and bring to "register"
- once operation is complete, then repeat next instructions in sequence
- millions of times per second
- each operation could take as little as 10 nanoseconds

## Memory
- instructions stored in bytes and not in registers
- create memory heirarchy so that each layer adds space and costs less and runs slower

## Hierarchy
1. use registers sparingly because that's the only place instructions can take place
2. cache measure toll in megabytes. slower than register but can speed up processining. can pipeline instructions
3. RAM is measured in gigabytes. over 10 nanoseconds of access time. take into account that RAM is volatile memory. RAM is erased when computer shut down. useful because that's where data and code will come from to load into registers one by one
4. secondary storage device in terabytes in order of 10 milliseconds. only permanent storage device inside system. in the form of hard drive or disk drive. this is where OS and code (when started off)
5. tertiary storage is for offline (CD, USB drive, etc.). can be very large.

## RAM (Random Access Memory)
- can access any byte at same amount of time.
- chips store a certain amount of RAM, which is physical device

## Secondary Storage
- moving from hard disc drives to secondary disc drives.
  - measured in resolutions/min (rotations)
- solid state disc drive is where industry moving
  - nothing that moves
  - contain number of chips
  - stored electrically and looks like RAM but designed differently
  - significantly smaller and expensive
  - performance benefit

## Networking
- copper, fiber, and wireless
  - copper - ethernet, cable involving metallic connection. commonly inside 8 wires and 4 pairs. twisted together in form of twisted pair
  - fiber is newer. transmission of light on piece of glass. lose more information but go faster and longer distances. cost more.
  - wireless in past 20 years. everywhere in form of wifi.
  - there's a few like microwave.
- protocols in use, want to know who comeing from and going to.
- each have to understand connections which is protocol and type of connection
- 100 based T is fast ethernet (100 mgbit) defines when start send data, stop and format
- wifi is 802.11

## Packets
- on phone there was a physical connection between sender and receiver. operaters would connect callers
- along line would create a physical channel
- today packets are sent. small amounts of info. 1000 or 1500 bytes
- program to program and can't be sent directly
- has to be sent via protocols
- small info on packet
- way sent encapsulate the packet and get to lower level protocol
- creates hierarchy of network layer
  - app layer is HTTP, SMTP, IMAP
  - logical/network is broken down into 2 layers
    - UDP (connection less) or TCP (connection oriented)
    - global delivery of packets is by IP
  - physical layer is concerned with local addressing
    - ethernet
    - 802.11 (wifi)
    - take original data: http, tcp, ip, and ethernet header
