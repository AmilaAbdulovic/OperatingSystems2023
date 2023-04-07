# OperatingSystems2023
Team members: Amila Abdulović, Anđela Jeftović

Our project consists of several parts, 5 tasks.
Most are called tasWe encountered many challenges through our way, most of them being something completely new to us making it hard for us to understand some errors. 


TASK 5
Q1 
a) To read from disk, a program typically needs to request the operating system to 
perform the necessary disk I/O operations on its behalf by issuing a system call. These 
operations require privileged access to hardware and system resources that are only 
available in kernel mode. Therefore, the operating system must switch to kernel mode 
to safely and efficiently pcerform these operations and then return control back to the 
user mode program once the data has been read.
b) To read the current time from the hardware clock, a program also needs to request 
the operating system to access this system resource on its behalf by issuing a system 
call. This operation requires privileged access to system resources that are only 
available in kernel mode. Therefore, the operating system must switch to kernel mode 
to safely and efficiently the time from the hardware clock and then return control 
back to the user mode program with the current time.

Q2 
A system call is a mechanism provided by the operating system that allows user mode 
programs to request services and resources from the kernel. Its main purpose is to enable 
user mode programs to access privileged operations and system resources that are not 
available directly in user mode. System calls provide a secure and controlled interface 
between user mode programs and the kernel, allowing user mode programs to request 
services or resources, and the kernel to execute those requests on behalf of the user mode 
programs.
There are several categories of system calls, including process management, file 
management, device management, inter-process communication, and memory management. 
Each category of system call provides a specific set of services to user mode programs.
Process management system calls, for example, allow user mode programs to create and 
manage new processes. File management system calls enable user mode programs to read 
and write files, while device management system calls allow user mode programs to 
communicate with hardware devices. Inter-process communication system calls enable user 
mode programs to communicate with other processes, and memory management system 
calls allow user mode programs to allocate and manage memory.
Overall, system calls provide a vital interface between user mode programs and the kernel, 
allowing user mode programs to perform privileged operations and access system resources 
in a secure and controlled wa
