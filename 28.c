/*
Tathagat Das
MT2024161
Write a program to get maximum and minimum real time priority.
*/
#include <stdio.h>
#include <sched.h>
int main()
{
	printf("Maximum priority and Minimum priority of SCHED_FIFO scheduling is %d and %d respectively\n", sched_get_priority_max(SCHED_FIFO), sched_get_priority_min(SCHED_FIFO));

	printf("Maximum priority and Minimum priority of SCHED_RR scheduling is %d and %d respectively\n", sched_get_priority_max(SCHED_RR), sched_get_priority_min(SCHED_RR));
	printf("Maximum priority and Minimum priority of SCHED_OTHER scheduling is %d and %d respectively\n", sched_get_priority_max(SCHED_OTHER), sched_get_priority_min(SCHED_OTHER));
}
