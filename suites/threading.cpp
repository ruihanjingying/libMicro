#ifndef _THREADING_
#define _THREADING_

sched_yield	"sched_yield"	-B 32000
sched_yield	"sched_yieldT4"	-B 32000	-T 4

#include "syscalls.cpp"

mutex	"mutex_st"	-B 5m
mutex	"mutex_mt"	-t	-B 5m
mutex	"mutex_T2"	-T 2	-B 1m
mutex	"mutex_sts"	-s	-B 5m
mutex	"mutex_mts"	-t	-s	-B 5m
mutex	"mutex_T2s"	-s	-T 2	-B 1m
mutex	"mutex_mto1"	-o 1	-t	-B 5m
mutex	"mutex_mto4"	-o 4	-t	-B 5m
mutex	"mutex_mto8"	-o 8	-t	-B 5m
mutex	"mutex_mto16"	-o 16	-t	-B 5m
mutex	"mutex_mto32"	-o 32	-t	-B 5m

cascade_mutex	"c_mutex_1"
cascade_mutex	"c_mutex_10"	-T 10	-B 1k
cascade_mutex	"c_mutex_200"	-T 200	-B 100
cascade_mutex	"c_mutex_s1"	-s
cascade_mutex	"c_mutex_s10"	-s	-T 10	-B 1k
cascade_mutex	"c_mutex_s200"	-s	-T 200	-B 100

cascade_cond	"c_cond_1"
cascade_cond	"c_cond_10"	-T 10	-B 1k
cascade_cond	"c_cond_200"	-T 200	-B 100
cascade_cond	"c_cond_o1"	-o
cascade_cond	"c_cond_o10"	-o	-T 10	-B 1k
cascade_cond	"c_cond_o200"	-o	-T 200	-B 100
cascade_cond	"c_cond_s1"	-s
cascade_cond	"c_cond_s10"	-s	-T 10	-B 1k
cascade_cond	"c_cond_s200"	-s	-T 200	-B 100
cascade_cond	"c_cond_os1"	-o	-s
cascade_cond	"c_cond_os10"	-o	-s	-T 10	-B 1k
cascade_cond	"c_cond_os200"	-o	-s	-T 200	-B 100

cascade_fcntl	"c_fcntl_1"	-B 10k
cascade_fcntl	"c_fcntl_10"	-P 10	-B 1k
cascade_fcntl	"c_fcntl_200"	-P 200	-B 20

pthread_create	"pthread_32"	-B 32
pthread_create	"pthread_64"	-B 64
pthread_create	"pthread_128"	-B 128
pthread_create	"pthread_256"	-B 256
pthread_create	"pthread_512"	-B 512

semop	"semop"

#endif /* _THREADING_ */
