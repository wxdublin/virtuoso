
#ifndef __LINUX_TASK_STRUCT_OFFSETS_H_ 
#define __LINUX_TASK_STRUCT_OFFSETS_H_ 


// ~8192 is 0xfe000000, by the way (32-bit).
// current linux task_struct is apparently at ESP & (~8192UL)
#define CURRENT_TASK_MASK (~8191UL)


// Offsets of slots within Linux task_struct.
// These oare for Ubuntu 2.6.24-19-generic
// as computed by Ryan Smith's magic module
//
// NB: the task_struct is defined in 
// /usr/src/linux-headers-2.6.24-23/include/linux/sched.h

#define PID_OFFSET 500
#define UID_OFFSET 704
#define COMM_OFFSET 792

#define PARENT_TASK_PTR_OFFSET 508
#define REAL_PARENT_TASK_PTR_OFFSET 504

// these two are both of type struct timespec
// which has two slots: tv_sec and tv_nsec (seconds and nanoseconds) 
#define START_TIME_OFFSET 640
#define REAL_START_TIME_OFFSET 648


#define PID_SIZE 4
#define UID_SIZE 4
#define COMM_SIZE 16   // only 16 characters of the command string is there, according to sched.h
#define PARENT_TASK_PTR_SIZE 4
#define START_TIME_SIZE 16
#define REAL_START_TIME_SIZE 16



#endif // __LINUX_TASK_STRUCT_OFFSETS_H_
