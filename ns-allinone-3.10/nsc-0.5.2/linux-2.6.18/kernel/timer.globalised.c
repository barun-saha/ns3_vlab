# 1 "linux-2.6.18/kernel/timer.c"
# 1 "/home/barun/Desktop/ns3/ns-allinone-3.10/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "linux-2.6.18/include/linux/config.h" 1





# 1 "linux-2.6.18/include/linux/autoconf.h" 1
# 7 "linux-2.6.18/include/linux/config.h" 2
# 1 "<command-line>" 2
# 1 "linux-2.6.18/nsc/nsc_override.h" 1




#include "num_stacks.h"
static inline struct task_struct * get_nsc_task(void)
{
  typedef  struct task_struct   _GLOBAL_0_T; extern  _GLOBAL_0_T  * global_nsc_task[NUM_STACKS];    
  return global_nsc_task[get_stack_id()];
}
# 1 "<command-line>" 2
# 1 "linux-2.6.18/kernel/timer.c"
# 22 "linux-2.6.18/kernel/timer.c"
# 1 "linux-2.6.18/include/linux/kernel_stat.h" 1



# 1 "linux-2.6.18/include/asm/irq.h" 1
# 13 "linux-2.6.18/include/asm/irq.h"
# 1 "linux-2.6.18/include/linux/sched.h" 1



# 1 "linux-2.6.18/include/linux/auxvec.h" 1



# 1 "linux-2.6.18/include/asm/auxvec.h" 1
# 5 "linux-2.6.18/include/linux/auxvec.h" 2
# 5 "linux-2.6.18/include/linux/sched.h" 2
# 38 "linux-2.6.18/include/linux/sched.h"
struct sched_param {
 int sched_priority;
};

# 1 "linux-2.6.18/include/asm/param.h" 1
# 43 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/capability.h" 1
# 16 "linux-2.6.18/include/linux/capability.h"
# 1 "linux-2.6.18/include/linux/types.h" 1
# 14 "linux-2.6.18/include/linux/types.h"
# 1 "linux-2.6.18/include/linux/posix_types.h" 1



# 1 "linux-2.6.18/include/linux/stddef.h" 1



# 1 "linux-2.6.18/include/linux/compiler.h" 1
# 42 "linux-2.6.18/include/linux/compiler.h"
# 1 "linux-2.6.18/include/linux/compiler-gcc4.h" 1



# 1 "linux-2.6.18/include/linux/compiler-gcc.h" 1
# 5 "linux-2.6.18/include/linux/compiler-gcc4.h" 2
# 43 "linux-2.6.18/include/linux/compiler.h" 2
# 5 "linux-2.6.18/include/linux/stddef.h" 2
# 5 "linux-2.6.18/include/linux/posix_types.h" 2
# 36 "linux-2.6.18/include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "linux-2.6.18/include/asm/posix_types.h" 1
# 10 "linux-2.6.18/include/asm/posix_types.h"
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;


typedef long long __kernel_loff_t;


typedef struct {

 int val[2];



} __kernel_fsid_t;
# 48 "linux-2.6.18/include/linux/posix_types.h" 2
# 15 "linux-2.6.18/include/linux/types.h" 2
# 1 "linux-2.6.18/include/asm/types.h" 1





typedef unsigned short umode_t;






typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


typedef __signed__ long long __s64;
typedef unsigned long long __u64;
# 39 "linux-2.6.18/include/asm/types.h"
typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;






typedef u32 dma_addr_t;

typedef u64 dma64_addr_t;


typedef u64 sector_t;
# 16 "linux-2.6.18/include/linux/types.h" 2



typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_nlink_t nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;


typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;
# 56 "linux-2.6.18/include/linux/types.h"
typedef __kernel_loff_t loff_t;
# 65 "linux-2.6.18/include/linux/types.h"
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;



typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;


typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
# 140 "linux-2.6.18/include/linux/types.h"
typedef unsigned long blkcnt_t;
# 169 "linux-2.6.18/include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;

typedef __u64 __le64;
typedef __u64 __be64;



typedef unsigned gfp_t;




typedef u32 resource_size_t;




struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 17 "linux-2.6.18/include/linux/capability.h" 2
# 32 "linux-2.6.18/include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;



# 1 "linux-2.6.18/include/linux/spinlock.h" 1
# 49 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/linux/preempt.h" 1
# 9 "linux-2.6.18/include/linux/preempt.h"
# 1 "linux-2.6.18/include/linux/thread_info.h" 1
# 13 "linux-2.6.18/include/linux/thread_info.h"
struct restart_block {
 long (*fn)(struct restart_block *);
 unsigned long arg0, arg1, arg2, arg3;
};

extern long do_no_restart_syscall(struct restart_block *parm);

# 1 "linux-2.6.18/include/linux/bitops.h" 1
# 9 "linux-2.6.18/include/linux/bitops.h"
# 1 "linux-2.6.18/include/asm/bitops.h" 1
# 9 "linux-2.6.18/include/asm/bitops.h"
# 1 "linux-2.6.18/include/asm/alternative.h" 1
# 10 "linux-2.6.18/include/asm/alternative.h"
struct alt_instr {
 u8 *instr;
 u8 *replacement;
 u8 cpuid;
 u8 instrlen;
 u8 replacementlen;
 u8 pad;
};

extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;







static inline  __attribute__((always_inline)) void alternatives_smp_module_add(struct module *mod, char *name,
     void *locks, void *locks_end,
     void *text, void *text_end) {}
static inline  __attribute__((always_inline)) void alternatives_smp_module_del(struct module *mod) {}
static inline  __attribute__((always_inline)) void alternatives_smp_switch(int smp) {}
# 10 "linux-2.6.18/include/asm/bitops.h" 2
# 36 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void set_bit(int nr, volatile unsigned long * addr)
{
 __asm__ __volatile__( ""
  "btsl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"Ir" (nr));
}
# 53 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void __set_bit(int nr, volatile unsigned long * addr)
{
 __asm__(
  "btsl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"Ir" (nr));
}
# 71 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void clear_bit(int nr, volatile unsigned long * addr)
{
 __asm__ __volatile__( ""
  "btrl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"Ir" (nr));
}

static inline  __attribute__((always_inline)) void __clear_bit(int nr, volatile unsigned long * addr)
{
 __asm__ __volatile__(
  "btrl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"Ir" (nr));
}
# 98 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void __change_bit(int nr, volatile unsigned long * addr)
{
 __asm__ __volatile__(
  "btcl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"Ir" (nr));
}
# 116 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void change_bit(int nr, volatile unsigned long * addr)
{
 __asm__ __volatile__( ""
  "btcl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"Ir" (nr));
}
# 133 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_set_bit(int nr, volatile unsigned long * addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btsl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"Ir" (nr) : "memory");
 return oldbit;
}
# 153 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int __test_and_set_bit(int nr, volatile unsigned long * addr)
{
 int oldbit;

 __asm__(
  "btsl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"Ir" (nr));
 return oldbit;
}
# 173 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_clear_bit(int nr, volatile unsigned long * addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btrl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"Ir" (nr) : "memory");
 return oldbit;
}
# 193 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int __test_and_clear_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 __asm__(
  "btrl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"Ir" (nr));
 return oldbit;
}


static inline  __attribute__((always_inline)) int __test_and_change_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 __asm__ __volatile__(
  "btcl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"Ir" (nr) : "memory");
 return oldbit;
}
# 224 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_change_bit(int nr, volatile unsigned long* addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btcl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"Ir" (nr) : "memory");
 return oldbit;
}
# 244 "linux-2.6.18/include/asm/bitops.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) int constant_test_bit(int nr, const volatile unsigned long *addr)
{
 return ((1UL << (nr & 31)) & (addr[nr >> 5])) != 0;
}

static inline  __attribute__((always_inline)) int variable_test_bit(int nr, const volatile unsigned long * addr)
{
 int oldbit;

 __asm__ __volatile__(
  "btl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit)
  :"m" ((*(volatile long *) addr)),"Ir" (nr));
 return oldbit;
}
# 275 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int find_first_zero_bit(const unsigned long *addr, unsigned size)
{
 int d0, d1, d2;
 int res;

 if (!size)
  return 0;

 __asm__ __volatile__(
  "movl $-1,%%eax\n\t"
  "xorl %%edx,%%edx\n\t"
  "repe; scasl\n\t"
  "je 1f\n\t"
  "xorl -4(%%edi),%%eax\n\t"
  "subl $4,%%edi\n\t"
  "bsfl %%eax,%%edx\n"
  "1:\tsubl %%ebx,%%edi\n\t"
  "shll $3,%%edi\n\t"
  "addl %%edi,%%edx"
  :"=d" (res), "=&c" (d0), "=&D" (d1), "=&a" (d2)
  :"1" ((size + 31) >> 5), "2" (addr), "b" (addr) : "memory");
 return res;
}







int find_next_zero_bit(const unsigned long *addr, int size, int offset);







static inline  __attribute__((always_inline)) unsigned long __ffs(unsigned long word)
{
 __asm__("bsfl %1,%0"
  :"=r" (word)
  :"rm" (word));
 return word;
}
# 329 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) unsigned find_first_bit(const unsigned long *addr, unsigned size)
{
 unsigned x = 0;

 while (x < size) {
  unsigned long val = *addr++;
  if (val)
   return __ffs(val) + x;
  x += (sizeof(*addr)<<3);
 }
 return x;
}







int find_next_bit(const unsigned long *addr, int size, int offset);







static inline  __attribute__((always_inline)) unsigned long ffz(unsigned long word)
{
 __asm__("bsfl %1,%0"
  :"=r" (word)
  :"r" (~word));
 return word;
}



# 1 "linux-2.6.18/include/asm-generic/bitops/sched.h" 1
# 13 "linux-2.6.18/include/asm-generic/bitops/sched.h"
static inline  __attribute__((always_inline)) int sched_find_first_bit(const unsigned long *b)
{







 if (__builtin_expect(!!(b[0]), 0))
  return __ffs(b[0]);
 if (__builtin_expect(!!(b[1]), 0))
  return __ffs(b[1]) + 32;
 if (__builtin_expect(!!(b[2]), 0))
  return __ffs(b[2]) + 64;
 if (b[3])
  return __ffs(b[3]) + 96;
 return __ffs(b[4]) + 128;



}
# 367 "linux-2.6.18/include/asm/bitops.h" 2
# 376 "linux-2.6.18/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int ffs(int x)
{
 int r;

 __asm__("bsfl %1,%0\n\t"
  "jnz 1f\n\t"
  "movl $-1,%0\n"
  "1:" : "=r" (r) : "rm" (x));
 return r+1;
}







static inline  __attribute__((always_inline)) int fls(int x)
{
 int r;

 __asm__("bsrl %1,%0\n\t"
  "jnz 1f\n\t"
  "movl $-1,%0\n"
  "1:" : "=r" (r) : "rm" (x));
 return r+1;
}

# 1 "linux-2.6.18/include/asm-generic/bitops/hweight.h" 1





extern unsigned int hweight32(unsigned int w);
extern unsigned int hweight16(unsigned int w);
extern unsigned int hweight8(unsigned int w);
extern unsigned long hweight64(__u64 w);
# 405 "linux-2.6.18/include/asm/bitops.h" 2



# 1 "linux-2.6.18/include/asm-generic/bitops/fls64.h" 1





static inline  __attribute__((always_inline)) int fls64(__u64 x)
{
 __u32 h = x >> 32;
 if (h)
  return fls(h) + 32;
 return fls(x);
}
# 409 "linux-2.6.18/include/asm/bitops.h" 2



# 1 "linux-2.6.18/include/asm-generic/bitops/ext2-non-atomic.h" 1



# 1 "linux-2.6.18/include/asm-generic/bitops/le.h" 1




# 1 "linux-2.6.18/include/asm/byteorder.h" 1
# 13 "linux-2.6.18/include/asm/byteorder.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 ___arch__swab32(__u32 x)
{

 __asm__("bswap %0" : "=r" (x) : "0" (x));







 return x;
}

static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 ___arch__swab64(__u64 val)
{
 union {
  struct { __u32 a,b; } s;
  __u64 u;
 } v;
 v.u = val;

 asm("bswapl %0 ; bswapl %1 ; xchgl %0,%1"
     : "=r" (v.s.a), "=r" (v.s.b)
     : "0" (v.s.a), "1" (v.s.b));





 return v.u;
}
# 56 "linux-2.6.18/include/asm/byteorder.h"
# 1 "linux-2.6.18/include/linux/byteorder/little_endian.h" 1
# 12 "linux-2.6.18/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6.18/include/linux/byteorder/swab.h" 1
# 133 "linux-2.6.18/include/linux/byteorder/swab.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u16 __fswab16(__u16 x)
{
 return ({ __u16 __tmp = (x) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__  __attribute__((always_inline)) __u16 __swab16p(const __u16 *x)
{
 return ({ __u16 __tmp = (*(x)) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__  __attribute__((always_inline)) void __swab16s(__u16 *addr)
{
 do { *(addr) = ({ __u16 __tmp = (*((addr))) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); }); } while (0);
}

static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 __fswab32(__u32 x)
{
 return ___arch__swab32(x);
}
static __inline__  __attribute__((always_inline)) __u32 __swab32p(const __u32 *x)
{
 return ___arch__swab32(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab32s(__u32 *addr)
{
 do { *(addr) = ___arch__swab32(*((addr))); } while (0);
}


static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 __fswab64(__u64 x)
{





 return ___arch__swab64(x);

}
static __inline__  __attribute__((always_inline)) __u64 __swab64p(const __u64 *x)
{
 return ___arch__swab64(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab64s(__u64 *addr)
{
 do { *(addr) = ___arch__swab64(*((addr))); } while (0);
}
# 13 "linux-2.6.18/include/linux/byteorder/little_endian.h" 2
# 43 "linux-2.6.18/include/linux/byteorder/little_endian.h"
static inline  __attribute__((always_inline)) __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline  __attribute__((always_inline)) __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline  __attribute__((always_inline)) __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline  __attribute__((always_inline)) __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline  __attribute__((always_inline)) __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline  __attribute__((always_inline)) __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline  __attribute__((always_inline)) __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline  __attribute__((always_inline)) __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline  __attribute__((always_inline)) __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline  __attribute__((always_inline)) __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline  __attribute__((always_inline)) __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline  __attribute__((always_inline)) __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 104 "linux-2.6.18/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6.18/include/linux/byteorder/generic.h" 1
# 154 "linux-2.6.18/include/linux/byteorder/generic.h"
extern __u32 ntohl(__be32);
extern __be32 htonl(__u32);
extern __u16 ntohs(__be16);
extern __be16 htons(__u16);
# 105 "linux-2.6.18/include/linux/byteorder/little_endian.h" 2
# 57 "linux-2.6.18/include/asm/byteorder.h" 2
# 6 "linux-2.6.18/include/asm-generic/bitops/le.h" 2
# 5 "linux-2.6.18/include/asm-generic/bitops/ext2-non-atomic.h" 2
# 413 "linux-2.6.18/include/asm/bitops.h" 2






# 1 "linux-2.6.18/include/asm-generic/bitops/minix.h" 1
# 420 "linux-2.6.18/include/asm/bitops.h" 2
# 10 "linux-2.6.18/include/linux/bitops.h" 2

static __inline__  __attribute__((always_inline)) int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__  __attribute__((always_inline)) int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}

static inline  __attribute__((always_inline)) unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? hweight32(w) : hweight64(w);
}







static inline  __attribute__((always_inline)) __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}







static inline  __attribute__((always_inline)) __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}

static inline  __attribute__((always_inline)) unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
# 21 "linux-2.6.18/include/linux/thread_info.h" 2
# 1 "linux-2.6.18/include/asm/thread_info.h" 1
# 13 "linux-2.6.18/include/asm/thread_info.h"
# 1 "linux-2.6.18/include/asm/page.h" 1
# 44 "linux-2.6.18/include/asm/page.h"
typedef  int  _GLOBAL_1_T; extern  _GLOBAL_1_T  global_nx_enabled[NUM_STACKS];   
# 56 "linux-2.6.18/include/asm/page.h"
typedef struct { unsigned long pte_low; } pte_t;
typedef struct { unsigned long pgd; } pgd_t;
typedef struct { unsigned long pgprot; } pgprot_t;
# 99 "linux-2.6.18/include/asm/page.h"
struct vm_area_struct;





typedef  unsigned int   _GLOBAL_2_T; extern  _GLOBAL_2_T  global___VMALLOC_RESERVE[NUM_STACKS];    

typedef  int  _GLOBAL_3_T; extern  _GLOBAL_3_T  global_sysctl_legacy_va_layout[NUM_STACKS];   

extern int page_is_ram(unsigned long pagenr);
# 141 "linux-2.6.18/include/asm/page.h"
# 1 "linux-2.6.18/include/asm-generic/memory_model.h" 1
# 142 "linux-2.6.18/include/asm/page.h" 2
# 1 "linux-2.6.18/include/asm-generic/page.h" 1
# 10 "linux-2.6.18/include/asm-generic/page.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) int get_order(unsigned long size)
{
 int order;

 size = (size - 1) >> (12 - 1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
 return order;
}
# 143 "linux-2.6.18/include/asm/page.h" 2
# 14 "linux-2.6.18/include/asm/thread_info.h" 2


# 1 "linux-2.6.18/include/asm/processor.h" 1
# 10 "linux-2.6.18/include/asm/processor.h"
# 1 "linux-2.6.18/include/asm/vm86.h" 1
# 72 "linux-2.6.18/include/asm/vm86.h"
struct vm86_regs {



 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 long __null_ds;
 long __null_es;
 long __null_fs;
 long __null_gs;
 long orig_eax;
 long eip;
 unsigned short cs, __csh;
 long eflags;
 long esp;
 unsigned short ss, __ssh;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct revectored_struct {
 unsigned long __map[8];
};

struct vm86_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
};






struct vm86plus_info_struct {
 unsigned long force_return_for_pic:1;
 unsigned long vm86dbg_active:1;
 unsigned long vm86dbg_TFpendig:1;
 unsigned long unused:28;
 unsigned long is_vm86pus:1;
 unsigned char vm86dbg_intxxtab[32];
};

struct vm86plus_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
};
# 149 "linux-2.6.18/include/asm/vm86.h"
struct kernel_vm86_regs {



 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 long __null_ds;
 long __null_es;
 long orig_eax;
 long eip;
 unsigned short cs, __csh;
 long eflags;
 long esp;
 unsigned short ss, __ssh;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct kernel_vm86_struct {
 struct kernel_vm86_regs regs;
# 188 "linux-2.6.18/include/asm/vm86.h"
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
 struct pt_regs *regs32;
# 205 "linux-2.6.18/include/asm/vm86.h"
};
# 220 "linux-2.6.18/include/asm/vm86.h"
static inline  __attribute__((always_inline)) int handle_vm86_trap(struct kernel_vm86_regs *a, long b, int c) {
 return 0;
}
# 11 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/math_emu.h" 1



# 1 "linux-2.6.18/include/asm/sigcontext.h" 1
# 20 "linux-2.6.18/include/asm/sigcontext.h"
struct _fpreg {
 unsigned short significand[4];
 unsigned short exponent;
};

struct _fpxreg {
 unsigned short significand[4];
 unsigned short exponent;
 unsigned short padding[3];
};

struct _xmmreg {
 unsigned long element[4];
};

struct _fpstate {

 unsigned long cw;
 unsigned long sw;
 unsigned long tag;
 unsigned long ipoff;
 unsigned long cssel;
 unsigned long dataoff;
 unsigned long datasel;
 struct _fpreg _st[8];
 unsigned short status;
 unsigned short magic;


 unsigned long _fxsr_env[6];
 unsigned long mxcsr;
 unsigned long reserved;
 struct _fpxreg _fxsr_st[8];
 struct _xmmreg _xmm[8];
 unsigned long padding[56];
};



struct sigcontext {
 unsigned short gs, __gsh;
 unsigned short fs, __fsh;
 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned long edi;
 unsigned long esi;
 unsigned long ebp;
 unsigned long esp;
 unsigned long ebx;
 unsigned long edx;
 unsigned long ecx;
 unsigned long eax;
 unsigned long trapno;
 unsigned long err;
 unsigned long eip;
 unsigned short cs, __csh;
 unsigned long eflags;
 unsigned long esp_at_signal;
 unsigned short ss, __ssh;
 struct _fpstate * fpstate;
 unsigned long oldmask;
 unsigned long cr2;
};
# 5 "linux-2.6.18/include/asm/math_emu.h" 2

int restore_i387_soft(void *s387, struct _fpstate *buf);
int save_i387_soft(void *s387, struct _fpstate *buf);





struct info {
 long ___orig_eip;
 long ___ebx;
 long ___ecx;
 long ___edx;
 long ___esi;
 long ___edi;
 long ___ebp;
 long ___eax;
 long ___ds;
 long ___es;
 long ___orig_eax;
 long ___eip;
 long ___cs;
 long ___eflags;
 long ___esp;
 long ___ss;
 long ___vm86_es;
 long ___vm86_ds;
 long ___vm86_fs;
 long ___vm86_gs;
};
# 12 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/segment.h" 1
# 13 "linux-2.6.18/include/asm/processor.h" 2



# 1 "linux-2.6.18/include/asm/cpufeature.h" 1
# 17 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/msr.h" 1
# 27 "linux-2.6.18/include/asm/msr.h"
static inline  __attribute__((always_inline)) void wrmsrl (unsigned long msr, unsigned long long val)
{
 unsigned long lo, hi;
 lo = (unsigned long) val;
 hi = val >> 32;
 __asm__ __volatile__("wrmsr" : : "c" (msr), "a" (lo), "d" (hi));
}
# 18 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/system.h" 1



# 1 "linux-2.6.18/include/linux/kernel.h" 1
# 10 "linux-2.6.18/include/linux/kernel.h"
# 1 "/usr/lib/gcc/i486-linux-gnu/4.4.3/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i486-linux-gnu/4.4.3/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/i486-linux-gnu/4.4.3/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 11 "linux-2.6.18/include/linux/kernel.h" 2
# 1 "linux-2.6.18/include/linux/linkage.h" 1



# 1 "linux-2.6.18/include/asm/linkage.h" 1
# 5 "linux-2.6.18/include/linux/linkage.h" 2
# 12 "linux-2.6.18/include/linux/kernel.h" 2





# 1 "linux-2.6.18/include/asm/bug.h" 1
# 24 "linux-2.6.18/include/asm/bug.h"
# 1 "linux-2.6.18/include/asm-generic/bug.h" 1
# 25 "linux-2.6.18/include/asm/bug.h" 2
# 18 "linux-2.6.18/include/linux/kernel.h" 2

typedef  const char   _GLOBAL_4_T; extern  _GLOBAL_4_T  _GLOBAL_0_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_1_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_2_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_3_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_4_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_5_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_6_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_7_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_8_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_9_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_10_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_11_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_12_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_13_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_14_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_15_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_16_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_17_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_18_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_19_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_20_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_21_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_22_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_23_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_24_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_25_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_26_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_27_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_28_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_29_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_30_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_31_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_32_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_33_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_34_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_35_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_36_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_37_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_38_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_39_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_40_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_41_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_42_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_43_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_44_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_45_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_46_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_47_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_48_linux_banner_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_49_linux_banner_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linux_banner_I) *_GLOBAL_linux_banner_0_A[NUM_STACKS];   
# 47 "linux-2.6.18/include/linux/kernel.h"
typedef  int  _GLOBAL_5_T; extern  _GLOBAL_5_T  _GLOBAL_0_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_1_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_2_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_3_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_4_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_5_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_6_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_7_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_8_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_9_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_10_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_11_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_12_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_13_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_14_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_15_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_16_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_17_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_18_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_19_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_20_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_21_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_22_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_23_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_24_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_25_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_26_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_27_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_28_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_29_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_30_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_31_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_32_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_33_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_34_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_35_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_36_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_37_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_38_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_39_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_40_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_41_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_42_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_43_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_44_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_45_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_46_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_47_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_48_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_49_console_printk_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_console_printk_I) *_GLOBAL_console_printk_1_A[NUM_STACKS] = { &_GLOBAL_0_console_printk_I, &_GLOBAL_1_console_printk_I, &_GLOBAL_2_console_printk_I, &_GLOBAL_3_console_printk_I, &_GLOBAL_4_console_printk_I, &_GLOBAL_5_console_printk_I, &_GLOBAL_6_console_printk_I, &_GLOBAL_7_console_printk_I, &_GLOBAL_8_console_printk_I, &_GLOBAL_9_console_printk_I, &_GLOBAL_10_console_printk_I, &_GLOBAL_11_console_printk_I, &_GLOBAL_12_console_printk_I, &_GLOBAL_13_console_printk_I, &_GLOBAL_14_console_printk_I, &_GLOBAL_15_console_printk_I, &_GLOBAL_16_console_printk_I, &_GLOBAL_17_console_printk_I, &_GLOBAL_18_console_printk_I, &_GLOBAL_19_console_printk_I, &_GLOBAL_20_console_printk_I, &_GLOBAL_21_console_printk_I, &_GLOBAL_22_console_printk_I, &_GLOBAL_23_console_printk_I, &_GLOBAL_24_console_printk_I, &_GLOBAL_25_console_printk_I, &_GLOBAL_26_console_printk_I, &_GLOBAL_27_console_printk_I, &_GLOBAL_28_console_printk_I, &_GLOBAL_29_console_printk_I, &_GLOBAL_30_console_printk_I, &_GLOBAL_31_console_printk_I, &_GLOBAL_32_console_printk_I, &_GLOBAL_33_console_printk_I, &_GLOBAL_34_console_printk_I, &_GLOBAL_35_console_printk_I, &_GLOBAL_36_console_printk_I, &_GLOBAL_37_console_printk_I, &_GLOBAL_38_console_printk_I, &_GLOBAL_39_console_printk_I, &_GLOBAL_40_console_printk_I, &_GLOBAL_41_console_printk_I, &_GLOBAL_42_console_printk_I, &_GLOBAL_43_console_printk_I, &_GLOBAL_44_console_printk_I, &_GLOBAL_45_console_printk_I, &_GLOBAL_46_console_printk_I, &_GLOBAL_47_console_printk_I, &_GLOBAL_48_console_printk_I, &_GLOBAL_49_console_printk_I, };  






struct completion;
struct pt_regs;
struct user;
# 95 "linux-2.6.18/include/linux/kernel.h"
typedef  struct atomic_notifier_head   _GLOBAL_6_T; extern  _GLOBAL_6_T  _GLOBAL_0_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_1_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_2_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_3_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_4_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_5_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_6_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_7_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_8_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_9_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_10_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_11_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_12_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_13_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_14_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_15_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_16_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_17_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_18_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_19_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_20_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_21_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_22_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_23_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_24_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_25_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_26_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_27_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_28_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_29_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_30_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_31_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_32_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_33_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_34_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_35_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_36_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_37_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_38_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_39_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_40_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_41_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_42_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_43_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_44_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_45_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_46_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_47_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_48_panic_notifier_list_I; extern  _GLOBAL_6_T  _GLOBAL_49_panic_notifier_list_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_panic_notifier_list_I) *_GLOBAL_panic_notifier_list_2_A[NUM_STACKS];   
typedef  long   ( *_GLOBAL_8_T  )  ( long  time  ) ; extern  _GLOBAL_8_T global_panic_blink[NUM_STACKS];    
 void panic(const char * fmt, ...)
 __attribute__ ((noreturn, format (printf, 1, 2))) ;
extern void oops_enter(void);
extern void oops_exit(void);
extern int oops_may_print(void);
 __attribute__((regparm(3))) void do_exit(long error_code)
 __attribute__((noreturn)) ;
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn)) ;
extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);
extern int sprintf(char * buf, const char * fmt, ...)
 __attribute__ ((format (printf, 2, 3))) ;
extern int vsprintf(char *buf, const char *, va_list)
 __attribute__ ((format (printf, 2, 0))) ;
extern int snprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4))) ;
extern int vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0))) ;
extern int scnprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4))) ;
extern int vscnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0))) ;
extern char *kasprintf(gfp_t gfp, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3))) ;

extern int sscanf(const char *, const char *, ...)
 __attribute__ ((format (scanf, 2, 3))) ;
extern int vsscanf(const char *, const char *, va_list)
 __attribute__ ((format (scanf, 2, 0))) ;

extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(char *ptr, char **retptr);

extern int core_kernel_text(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
extern int session_of_pgrp(int pgrp);

extern void dump_thread(struct pt_regs *regs, struct user *dump);







static inline  __attribute__((always_inline)) int vprintk(const char *s, va_list args)
 __attribute__ ((format (printf, 1, 0))) ;
static inline  __attribute__((always_inline)) int vprintk(const char *s, va_list args) { return 0; }
static inline  __attribute__((always_inline)) int printk(const char *s, ...)
 __attribute__ ((format (printf, 1, 2))) ;
static inline  __attribute__((always_inline)) int printk(const char *s, ...) { return 0; }


unsigned long int_sqrt(unsigned long);

static inline  __attribute__((always_inline)) int  __attribute__((pure)) long_log2(unsigned long x)
{
 int r = 0;
 for (x >>= 1; x > 0; x >>= 1)
  r++;
 return r;
}

static inline  __attribute__((always_inline)) unsigned long
 __attribute__((__const__)) roundup_pow_of_two(unsigned long x)
{
 return 1UL << fls_long(x - 1);
}

extern int printk_ratelimit(void);
extern int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst);

static inline  __attribute__((always_inline)) void console_silent(void)
{
 ((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]) = 0;
}

static inline  __attribute__((always_inline)) void console_verbose(void)
{
 if (((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]))
  ((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]) = 15;
}

extern void bust_spinlocks(int yes);
typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_oops_in_progress[NUM_STACKS];   
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_panic_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_panic_on_oops[NUM_STACKS];   
typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_tainted[NUM_STACKS];   
extern const char *print_tainted(void);
extern void add_taint(unsigned);


typedef  enum system_states { SYSTEM_BOOTING , SYSTEM_RUNNING  , SYSTEM_HALT  , SYSTEM_POWER_OFF  , SYSTEM_RESTART  , SYSTEM_SUSPEND_DISK  , }   _GLOBAL_13_T; extern  _GLOBAL_13_T  global_system_state[NUM_STACKS];    
 
 
 
 
 
 
 
# 210 "linux-2.6.18/include/linux/kernel.h"
extern void dump_stack(void);
# 322 "linux-2.6.18/include/linux/kernel.h"
struct sysinfo {
 long uptime;
 unsigned long loads[3];
 unsigned long totalram;
 unsigned long freeram;
 unsigned long sharedram;
 unsigned long bufferram;
 unsigned long totalswap;
 unsigned long freeswap;
 unsigned short procs;
 unsigned short pad;
 unsigned long totalhigh;
 unsigned long freehigh;
 unsigned int mem_unit;
 char _f[20-2*sizeof(long)-sizeof(int)];
};
# 5 "linux-2.6.18/include/asm/system.h" 2






struct task_struct;
extern struct task_struct * __switch_to(struct task_struct *prev, struct task_struct *next) __attribute__((regparm(3))) ;
# 153 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long get_limit(unsigned long segment)
{
 unsigned long __limit;
 __asm__("lsll %1,%0"
  :"=r" (__limit):"r" (segment));
 return __limit+1;
}







struct __xchg_dummy { unsigned long a[100]; };
# 234 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long __xchg(unsigned long x, volatile void * ptr, int size)
{
 switch (size) {
  case 1:
   __asm__ __volatile__("xchgb %b0,%1"
    :"=q" (x)
    :"m" (*((struct __xchg_dummy *)(ptr))), "0" (x)
    :"memory");
   break;
  case 2:
   __asm__ __volatile__("xchgw %w0,%1"
    :"=r" (x)
    :"m" (*((struct __xchg_dummy *)(ptr))), "0" (x)
    :"memory");
   break;
  case 4:
   __asm__ __volatile__("xchgl %0,%1"
    :"=r" (x)
    :"m" (*((struct __xchg_dummy *)(ptr))), "0" (x)
    :"memory");
   break;
 }
 return x;
}
# 272 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long __cmpxchg(volatile void *ptr, unsigned long old,
          unsigned long new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  __asm__ __volatile__("" "cmpxchgb %b1,%2"
         : "=a"(prev)
         : "q"(new), "m"(*((struct __xchg_dummy *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 2:
  __asm__ __volatile__("" "cmpxchgw %w1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((struct __xchg_dummy *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 4:
  __asm__ __volatile__("" "cmpxchgl %1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((struct __xchg_dummy *)(ptr))), "0"(old)
         : "memory");
  return prev;
 }
 return old;
}
# 462 "linux-2.6.18/include/asm/system.h"
# 1 "linux-2.6.18/include/linux/irqflags.h" 1
# 463 "linux-2.6.18/include/asm/system.h" 2





void disable_hlt(void);
void enable_hlt(void);

typedef  int  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_es7000_plat[NUM_STACKS];   
void cpu_idle_wait(void);





static inline  __attribute__((always_inline)) void sched_cacheflush(void)
{
 __asm__ __volatile__ ("wbinvd": : :"memory");
}

extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);

void default_idle(void);
# 19 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/linux/cache.h" 1




# 1 "linux-2.6.18/include/asm/cache.h" 1
# 6 "linux-2.6.18/include/linux/cache.h" 2
# 20 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/linux/threads.h" 1
# 21 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/percpu.h" 1



# 1 "linux-2.6.18/include/asm-generic/percpu.h" 1
# 5 "linux-2.6.18/include/asm/percpu.h" 2
# 22 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/linux/cpumask.h" 1
# 86 "linux-2.6.18/include/linux/cpumask.h"
# 1 "linux-2.6.18/include/linux/bitmap.h" 1







# 1 "linux-2.6.18/include/linux/string.h" 1
# 16 "linux-2.6.18/include/linux/string.h"
extern char *strndup_user(const char *, long);




# 1 "linux-2.6.18/include/asm/string.h" 1
# 29 "linux-2.6.18/include/asm/string.h"
static inline  __attribute__((always_inline)) char * strcpy(char * dest,const char *src)
{
int d0, d1, d2;
__asm__ __volatile__(
 "1:\tlodsb\n\t"
 "stosb\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b"
 : "=&S" (d0), "=&D" (d1), "=&a" (d2)
 :"0" (src),"1" (dest) : "memory");
return dest;
}


static inline  __attribute__((always_inline)) char * strncpy(char * dest,const char *src,size_t count)
{
int d0, d1, d2, d3;
__asm__ __volatile__(
 "1:\tdecl %2\n\t"
 "js 2f\n\t"
 "lodsb\n\t"
 "stosb\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n\t"
 "rep\n\t"
 "stosb\n"
 "2:"
 : "=&S" (d0), "=&D" (d1), "=&c" (d2), "=&a" (d3)
 :"0" (src),"1" (dest),"2" (count) : "memory");
return dest;
}


static inline  __attribute__((always_inline)) char * strcat(char * dest,const char * src)
{
int d0, d1, d2, d3;
__asm__ __volatile__(
 "repne\n\t"
 "scasb\n\t"
 "decl %1\n"
 "1:\tlodsb\n\t"
 "stosb\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b"
 : "=&S" (d0), "=&D" (d1), "=&a" (d2), "=&c" (d3)
 : "0" (src), "1" (dest), "2" (0), "3" (0xffffffffu):"memory");
return dest;
}


static inline  __attribute__((always_inline)) char * strncat(char * dest,const char * src,size_t count)
{
int d0, d1, d2, d3;
__asm__ __volatile__(
 "repne\n\t"
 "scasb\n\t"
 "decl %1\n\t"
 "movl %8,%3\n"
 "1:\tdecl %3\n\t"
 "js 2f\n\t"
 "lodsb\n\t"
 "stosb\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n"
 "2:\txorl %2,%2\n\t"
 "stosb"
 : "=&S" (d0), "=&D" (d1), "=&a" (d2), "=&c" (d3)
 : "0" (src),"1" (dest),"2" (0),"3" (0xffffffffu), "g" (count)
 : "memory");
return dest;
}


static inline  __attribute__((always_inline)) int strcmp(const char * cs,const char * ct)
{
int d0, d1;
register int __res;
__asm__ __volatile__(
 "1:\tlodsb\n\t"
 "scasb\n\t"
 "jne 2f\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n\t"
 "xorl %%eax,%%eax\n\t"
 "jmp 3f\n"
 "2:\tsbbl %%eax,%%eax\n\t"
 "orb $1,%%al\n"
 "3:"
 :"=a" (__res), "=&S" (d0), "=&D" (d1)
 :"1" (cs),"2" (ct)
 :"memory");
return __res;
}


static inline  __attribute__((always_inline)) int strncmp(const char * cs,const char * ct,size_t count)
{
register int __res;
int d0, d1, d2;
__asm__ __volatile__(
 "1:\tdecl %3\n\t"
 "js 2f\n\t"
 "lodsb\n\t"
 "scasb\n\t"
 "jne 3f\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n"
 "2:\txorl %%eax,%%eax\n\t"
 "jmp 4f\n"
 "3:\tsbbl %%eax,%%eax\n\t"
 "orb $1,%%al\n"
 "4:"
 :"=a" (__res), "=&S" (d0), "=&D" (d1), "=&c" (d2)
 :"1" (cs),"2" (ct),"3" (count)
 :"memory");
return __res;
}


static inline  __attribute__((always_inline)) char * strchr(const char * s, int c)
{
int d0;
register char * __res;
__asm__ __volatile__(
 "movb %%al,%%ah\n"
 "1:\tlodsb\n\t"
 "cmpb %%ah,%%al\n\t"
 "je 2f\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n\t"
 "movl $1,%1\n"
 "2:\tmovl %1,%0\n\t"
 "decl %0"
 :"=a" (__res), "=&S" (d0)
 :"1" (s),"0" (c)
 :"memory");
return __res;
}


static inline  __attribute__((always_inline)) char * strrchr(const char * s, int c)
{
int d0, d1;
register char * __res;
__asm__ __volatile__(
 "movb %%al,%%ah\n"
 "1:\tlodsb\n\t"
 "cmpb %%ah,%%al\n\t"
 "jne 2f\n\t"
 "leal -1(%%esi),%0\n"
 "2:\ttestb %%al,%%al\n\t"
 "jne 1b"
 :"=g" (__res), "=&S" (d0), "=&a" (d1)
 :"0" (0),"1" (s),"2" (c)
 :"memory");
return __res;
}


static inline  __attribute__((always_inline)) size_t strlen(const char * s)
{
int d0;
register int __res;
__asm__ __volatile__(
 "repne\n\t"
 "scasb\n\t"
 "notl %0\n\t"
 "decl %0"
 :"=c" (__res), "=&D" (d0)
 :"1" (s),"a" (0), "0" (0xffffffffu)
 :"memory");
return __res;
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) void * __memcpy(void * to, const void * from, size_t n)
{
int d0, d1, d2;
__asm__ __volatile__(
 "rep ; movsl\n\t"
 "movl %4,%%ecx\n\t"
 "andl $3,%%ecx\n\t"

 "jz 1f\n\t"

 "rep ; movsb\n\t"
 "1:"
 : "=&c" (d0), "=&D" (d1), "=&S" (d2)
 : "0" (n/4), "g" (n), "1" ((long) to), "2" ((long) from)
 : "memory");
return (to);
}





static inline   __attribute__((always_inline)) __attribute__((always_inline)) void * __constant_memcpy(void * to, const void * from, size_t n)
{
 long esi, edi;
 if (!n) return to;

 switch (n) {
  case 1: *(char*)to = *(char*)from; return to;
  case 2: *(short*)to = *(short*)from; return to;
  case 4: *(int*)to = *(int*)from; return to;

  case 3: *(short*)to = *(short*)from;
   *((char*)to+2) = *((char*)from+2); return to;
  case 5: *(int*)to = *(int*)from;
   *((char*)to+4) = *((char*)from+4); return to;
  case 6: *(int*)to = *(int*)from;
   *((short*)to+2) = *((short*)from+2); return to;
  case 8: *(int*)to = *(int*)from;
   *((int*)to+1) = *((int*)from+1); return to;

 }

 esi = (long) from;
 edi = (long) to;
 if (n >= 5*4) {

  int ecx;
  __asm__ __volatile__(
   "rep ; movsl"
   : "=&c" (ecx), "=&D" (edi), "=&S" (esi)
   : "0" (n/4), "1" (edi),"2" (esi)
   : "memory"
  );
 } else {

  if (n >= 4*4) __asm__ __volatile__("movsl"
   :"=&D"(edi),"=&S"(esi):"0"(edi),"1"(esi):"memory");
  if (n >= 3*4) __asm__ __volatile__("movsl"
   :"=&D"(edi),"=&S"(esi):"0"(edi),"1"(esi):"memory");
  if (n >= 2*4) __asm__ __volatile__("movsl"
   :"=&D"(edi),"=&S"(esi):"0"(edi),"1"(esi):"memory");
  if (n >= 1*4) __asm__ __volatile__("movsl"
   :"=&D"(edi),"=&S"(esi):"0"(edi),"1"(esi):"memory");
 }
 switch (n % 4) {

  case 0: return to;
  case 1: __asm__ __volatile__("movsb"
   :"=&D"(edi),"=&S"(esi):"0"(edi),"1"(esi):"memory");
   return to;
  case 2: __asm__ __volatile__("movsw"
   :"=&D"(edi),"=&S"(esi):"0"(edi),"1"(esi):"memory");
   return to;
  default: __asm__ __volatile__("movsw\n\tmovsb"
   :"=&D"(edi),"=&S"(esi):"0"(edi),"1"(esi):"memory");
   return to;
 }
}
# 326 "linux-2.6.18/include/asm/string.h"
void *memmove(void * dest,const void * src, size_t n);




static inline  __attribute__((always_inline)) void * memchr(const void * cs,int c,size_t count)
{
int d0;
register void * __res;
if (!count)
 return ((void *)0);
__asm__ __volatile__(
 "repne\n\t"
 "scasb\n\t"
 "je 1f\n\t"
 "movl $1,%0\n"
 "1:\tdecl %0"
 :"=D" (__res), "=&c" (d0)
 :"a" (c),"0" (cs),"1" (count)
 :"memory");
return __res;
}

static inline  __attribute__((always_inline)) void * __memset_generic(void * s, char c,size_t count)
{
int d0, d1;
__asm__ __volatile__(
 "rep\n\t"
 "stosb"
 : "=&c" (d0), "=&D" (d1)
 :"a" (c),"1" (s),"0" (count)
 :"memory");
return s;
}
# 369 "linux-2.6.18/include/asm/string.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) void * __constant_c_memset(void * s, unsigned long c, size_t count)
{
int d0, d1;
__asm__ __volatile__(
 "rep ; stosl\n\t"
 "testb $2,%b3\n\t"
 "je 1f\n\t"
 "stosw\n"
 "1:\ttestb $1,%b3\n\t"
 "je 2f\n\t"
 "stosb\n"
 "2:"
 :"=&c" (d0), "=&D" (d1)
 :"a" (c), "q" (count), "0" (count/4), "1" ((long) s)
 :"memory");
return (s);
}



static inline  __attribute__((always_inline)) size_t strnlen(const char * s, size_t count)
{
int d0;
register int __res;
__asm__ __volatile__(
 "movl %2,%0\n\t"
 "jmp 2f\n"
 "1:\tcmpb $0,(%0)\n\t"
 "je 3f\n\t"
 "incl %0\n"
 "2:\tdecl %1\n\t"
 "cmpl $-1,%1\n\t"
 "jne 1b\n"
 "3:\tsubl %2,%0"
 :"=a" (__res), "=&d" (d0)
 :"c" (s),"1" (count)
 :"memory");
return __res;
}




extern char *strstr(const char *cs, const char *ct);





static inline   __attribute__((always_inline)) __attribute__((always_inline)) void * __constant_c_and_count_memset(void * s, unsigned long pattern, size_t count)
{
 switch (count) {
  case 0:
   return s;
  case 1:
   *(unsigned char *)s = pattern;
   return s;
  case 2:
   *(unsigned short *)s = pattern;
   return s;
  case 3:
   *(unsigned short *)s = pattern;
   *(2+(unsigned char *)s) = pattern;
   return s;
  case 4:
   *(unsigned long *)s = pattern;
   return s;
 }







{
 int d0, d1;
 switch (count % 4) {
  case 0: __asm__ __volatile__( "rep ; stosl" "" : "=&c" (d0), "=&D" (d1) : "a" (pattern),"0" (count/4),"1" ((long) s) : "memory"); return s;
  case 1: __asm__ __volatile__( "rep ; stosl" "\n\tstosb" : "=&c" (d0), "=&D" (d1) : "a" (pattern),"0" (count/4),"1" ((long) s) : "memory"); return s;
  case 2: __asm__ __volatile__( "rep ; stosl" "\n\tstosw" : "=&c" (d0), "=&D" (d1) : "a" (pattern),"0" (count/4),"1" ((long) s) : "memory"); return s;
  default: __asm__ __volatile__( "rep ; stosl" "\n\tstosw\n\tstosb" : "=&c" (d0), "=&D" (d1) : "a" (pattern),"0" (count/4),"1" ((long) s) : "memory"); return s;
 }
}


}
# 477 "linux-2.6.18/include/asm/string.h"
static inline  __attribute__((always_inline)) void * memscan(void * addr, int c, size_t size)
{
 if (!size)
  return addr;
 __asm__("repnz; scasb\n\t"
  "jnz 1f\n\t"
  "dec %%edi\n"
  "1:"
  : "=D" (addr), "=c" (size)
  : "0" (addr), "1" (size), "a" (c)
  : "memory");
 return addr;
}
# 22 "linux-2.6.18/include/linux/string.h" 2
# 30 "linux-2.6.18/include/linux/string.h"
size_t strlcpy(char *, const char *, size_t);
# 39 "linux-2.6.18/include/linux/string.h"
extern size_t strlcat(char *, const char *, __kernel_size_t);
# 48 "linux-2.6.18/include/linux/string.h"
extern int strnicmp(const char *, const char *, __kernel_size_t);





extern char * strnchr(const char *, size_t, int);




extern char * strstrip(char *);
# 70 "linux-2.6.18/include/linux/string.h"
extern char * strpbrk(const char *,const char *);


extern char * strsep(char **,const char *);


extern __kernel_size_t strspn(const char *,const char *);


extern __kernel_size_t strcspn(const char *,const char *);
# 95 "linux-2.6.18/include/linux/string.h"
extern int __builtin_memcmp(const void *,const void *,__kernel_size_t);





extern char *kstrdup(const char *s, gfp_t gfp);
# 9 "linux-2.6.18/include/linux/bitmap.h" 2
# 83 "linux-2.6.18/include/linux/bitmap.h"
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
                 const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parse(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
   int nmaskbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);







static inline  __attribute__((always_inline)) void bitmap_zero(unsigned long *dst, int nbits)
{
 if (nbits <= 32)
  *dst = 0UL;
 else {
  int len = (((nbits)+32 -1)/32) * sizeof(unsigned long);
  (__builtin_constant_p(0) ? (__builtin_constant_p((len)) ? __constant_c_and_count_memset(((dst)),((0x01010101UL*(unsigned char)(0))),((len))) : __constant_c_memset(((dst)),((0x01010101UL*(unsigned char)(0))),((len)))) : (__builtin_constant_p((len)) ? __memset_generic((((dst))),(((0))),(((len)))) : __memset_generic(((dst)),((0)),((len)))));
 }
}

static inline  __attribute__((always_inline)) void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits)+32 -1)/32);
 if (nlongs > 1) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  (__builtin_constant_p(0xff) ? (__builtin_constant_p((len)) ? __constant_c_and_count_memset(((dst)),((0x01010101UL*(unsigned char)(0xff))),((len))) : __constant_c_memset(((dst)),((0x01010101UL*(unsigned char)(0xff))),((len)))) : (__builtin_constant_p((len)) ? __memset_generic((((dst))),(((0xff))),(((len)))) : __memset_generic(((dst)),((0xff)),((len)))));
 }
 dst[nlongs - 1] = ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
}

static inline  __attribute__((always_inline)) void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 32)
  *dst = *src;
 else {
  int len = (((nbits)+32 -1)/32) * sizeof(unsigned long);
  (__builtin_constant_p(len) ? __constant_memcpy((dst),(src),(len)) : __memcpy((dst),(src),(len)));
 }
}

static inline  __attribute__((always_inline)) void bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 & *src2;
 else
  __bitmap_and(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 & ~(*src2);
 else
  __bitmap_andnot(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 32)
  *dst = ~(*src) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  return ! ((*src1 ^ *src2) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  return ((*src1 & *src2) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_empty(const unsigned long *src, int nbits)
{
 if (nbits <= 32)
  return ! (*src & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_full(const unsigned long *src, int nbits)
{
 if (nbits <= 32)
  return ! (~(*src) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_weight(const unsigned long *src, int nbits)
{
 if (nbits <= 32)
  return hweight_long(*src & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 32)
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 32)
  *dst = (*src << n) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}
# 87 "linux-2.6.18/include/linux/cpumask.h" 2

typedef struct { unsigned long bits[(((1)+32 -1)/32)]; } cpumask_t;
typedef  cpumask_t  _GLOBAL_15_T; extern  _GLOBAL_15_T  global__unused_cpumask_arg_[NUM_STACKS];   


static inline  __attribute__((always_inline)) void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline  __attribute__((always_inline)) void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline  __attribute__((always_inline)) void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline  __attribute__((always_inline)) int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline  __attribute__((always_inline)) void __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_complement(cpumask_t *dstp,
     const cpumask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_full(const cpumask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_shift_right(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}
# 270 "linux-2.6.18/include/linux/cpumask.h"
static inline  __attribute__((always_inline)) int __cpumask_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpumask_parse(const char *buf, int len,
     cpumask_t *dstp, int nbits)
{
 return bitmap_parse(buf, len, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpulist_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpulist_parse(const char *buf, cpumask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpu_remap(int oldbit,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_remap(cpumask_t *dstp, const cpumask_t *srcp,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}
# 380 "linux-2.6.18/include/linux/cpumask.h"
typedef  cpumask_t  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_cpu_possible_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_cpu_online_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_18_T; extern  _GLOBAL_18_T  global_cpu_present_map[NUM_STACKS];   
# 23 "linux-2.6.18/include/asm/processor.h" 2


typedef  int  _GLOBAL_19_T; extern  _GLOBAL_19_T  global_tsc_disable[NUM_STACKS];   

struct desc_struct {
 unsigned long a,b;
};
# 48 "linux-2.6.18/include/asm/processor.h"
struct cpuinfo_x86 {
 __u8 x86;
 __u8 x86_vendor;
 __u8 x86_model;
 __u8 x86_mask;
 char wp_works_ok;
 char hlt_works_ok;
 char hard_math;
 char rfu;
        int cpuid_level;
 unsigned long x86_capability[7];
 char x86_vendor_id[16];
 char x86_model_id[64];
 int x86_cache_size;

 int x86_cache_alignment;
 char fdiv_bug;
 char f00f_bug;
 char coma_bug;
 char pad0;
 int x86_power;
 unsigned long loops_per_jiffy;



 unsigned char x86_max_cores;
 unsigned char apicid;





} __attribute__((__aligned__((1 << (7))))) ;
# 98 "linux-2.6.18/include/asm/processor.h"
typedef  struct cpuinfo_x86   _GLOBAL_20_T; extern  _GLOBAL_20_T  global_boot_cpu_data[NUM_STACKS];    
typedef  struct cpuinfo_x86   _GLOBAL_21_T; extern  _GLOBAL_21_T  global_new_cpu_data[NUM_STACKS];    
typedef  struct tss_struct   _GLOBAL_22_T; extern  _GLOBAL_22_T  _GLOBAL_0_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_1_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_2_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_3_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_4_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_5_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_6_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_7_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_8_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_9_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_10_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_11_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_12_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_13_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_14_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_15_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_16_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_17_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_18_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_19_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_20_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_21_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_22_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_23_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_24_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_25_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_26_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_27_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_28_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_29_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_30_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_31_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_32_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_33_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_34_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_35_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_36_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_37_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_38_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_39_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_40_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_41_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_42_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_43_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_44_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_45_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_46_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_47_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_48_doublefault_tss_I; extern  _GLOBAL_22_T  _GLOBAL_49_doublefault_tss_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_doublefault_tss_I) *_GLOBAL_doublefault_tss_3_A[NUM_STACKS];   
typedef  __typeof__ ( struct tss_struct  )   _GLOBAL_23_T; extern  _GLOBAL_23_T  _GLOBAL_0_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_1_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_2_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_3_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_4_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_5_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_6_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_7_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_8_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_9_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_10_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_11_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_12_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_13_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_14_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_15_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_16_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_17_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_18_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_19_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_20_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_21_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_22_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_23_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_24_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_25_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_26_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_27_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_28_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_29_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_30_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_31_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_32_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_33_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_34_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_35_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_36_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_37_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_38_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_39_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_40_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_41_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_42_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_43_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_44_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_45_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_46_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_47_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_48_per_cpu__init_tss_I; extern  _GLOBAL_23_T  _GLOBAL_49_per_cpu__init_tss_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_per_cpu__init_tss_I) *_GLOBAL_per_cpu__init_tss_4_A[NUM_STACKS];   
# 111 "linux-2.6.18/include/asm/processor.h"
typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  _GLOBAL_0_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_1_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_2_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_3_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_4_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_5_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_6_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_7_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_8_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_9_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_10_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_11_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_12_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_13_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_14_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_15_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_16_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_17_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_18_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_19_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_20_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_21_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_22_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_23_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_24_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_25_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_26_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_27_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_28_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_29_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_30_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_31_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_32_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_33_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_34_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_35_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_36_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_37_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_38_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_39_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_40_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_41_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_42_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_43_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_44_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_45_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_46_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_47_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_48_cpu_llc_id_I [ 1 ] ; extern  _GLOBAL_24_T  _GLOBAL_49_cpu_llc_id_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cpu_llc_id_I) *_GLOBAL_cpu_llc_id_5_A[NUM_STACKS];  
typedef  char  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_ignore_fpu_irq[NUM_STACKS];   

extern void identify_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
typedef  unsigned short   _GLOBAL_26_T; extern  _GLOBAL_26_T  global_num_cache_leaves[NUM_STACKS];    




static inline  __attribute__((always_inline)) void detect_ht(struct cpuinfo_x86 *c) {}
# 151 "linux-2.6.18/include/asm/processor.h"
static inline  __attribute__((always_inline)) void cpuid(unsigned int op, unsigned int *eax, unsigned int *ebx, unsigned int *ecx, unsigned int *edx)
{
 __asm__("cpuid"
  : "=a" (*eax),
    "=b" (*ebx),
    "=c" (*ecx),
    "=d" (*edx)
  : "0" (op), "c"(0));
}


static inline  __attribute__((always_inline)) void cpuid_count(int op, int count, int *eax, int *ebx, int *ecx,
         int *edx)
{
 __asm__("cpuid"
  : "=a" (*eax),
    "=b" (*ebx),
    "=c" (*ecx),
    "=d" (*edx)
  : "0" (op), "c" (count));
}




static inline  __attribute__((always_inline)) unsigned int cpuid_eax(unsigned int op)
{
 unsigned int eax;

 __asm__("cpuid"
  : "=a" (eax)
  : "0" (op)
  : "bx", "cx", "dx");
 return eax;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_ebx(unsigned int op)
{
 unsigned int eax, ebx;

 __asm__("cpuid"
  : "=a" (eax), "=b" (ebx)
  : "0" (op)
  : "cx", "dx" );
 return ebx;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_ecx(unsigned int op)
{
 unsigned int eax, ecx;

 __asm__("cpuid"
  : "=a" (eax), "=c" (ecx)
  : "0" (op)
  : "bx", "dx" );
 return ecx;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_edx(unsigned int op)
{
 unsigned int eax, edx;

 __asm__("cpuid"
  : "=a" (eax), "=d" (edx)
  : "0" (op)
  : "bx", "cx");
 return edx;
}
# 240 "linux-2.6.18/include/asm/processor.h"
typedef  unsigned long   _GLOBAL_27_T; extern  _GLOBAL_27_T  global_mmu_cr4_features[NUM_STACKS];    

static inline  __attribute__((always_inline)) void set_in_cr4 (unsigned long mask)
{
 unsigned cr4;
 global_mmu_cr4_features[get_stack_id()] |= mask;
 cr4 = ({ unsigned int __dummy; __asm__( "movl %%cr4,%0\n\t" :"=r" (__dummy)); __dummy; });
 cr4 |= mask;
 __asm__ __volatile__("movl %0,%%cr4": :"r" (cr4));
}

static inline  __attribute__((always_inline)) void clear_in_cr4 (unsigned long mask)
{
 unsigned cr4;
 global_mmu_cr4_features[get_stack_id()] &= ~mask;
 cr4 = ({ unsigned int __dummy; __asm__( "movl %%cr4,%0\n\t" :"=r" (__dummy)); __dummy; });
 cr4 &= ~mask;
 __asm__ __volatile__("movl %0,%%cr4": :"r" (cr4));
}
# 292 "linux-2.6.18/include/asm/processor.h"
static inline  __attribute__((always_inline)) void sync_core(void)
{
 int tmp;
 asm volatile("cpuid" : "=a" (tmp) : "0" (1) : "ebx","ecx","edx","memory");
}

static inline  __attribute__((always_inline)) void __monitor(const void *eax, unsigned long ecx,
  unsigned long edx)
{

 asm volatile(
  ".byte 0x0f,0x01,0xc8;"
  : :"a" (eax), "c" (ecx), "d"(edx));
}

static inline  __attribute__((always_inline)) void __mwait(unsigned long eax, unsigned long ecx)
{

 asm volatile(
  ".byte 0x0f,0x01,0xc9;"
  : :"a" (eax), "c" (ecx));
}



typedef  unsigned int   _GLOBAL_28_T; extern  _GLOBAL_28_T  global_machine_id[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_29_T; extern  _GLOBAL_29_T  global_machine_submodel_id[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_30_T; extern  _GLOBAL_30_T  global_BIOS_revision[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_31_T; extern  _GLOBAL_31_T  global_mca_pentium_flag[NUM_STACKS];    


typedef  int  _GLOBAL_32_T; extern  _GLOBAL_32_T  global_bootloader_type[NUM_STACKS];   
# 347 "linux-2.6.18/include/asm/processor.h"
struct i387_fsave_struct {
 long cwd;
 long swd;
 long twd;
 long fip;
 long fcs;
 long foo;
 long fos;
 long st_space[20];
 long status;
};

struct i387_fxsave_struct {
 unsigned short cwd;
 unsigned short swd;
 unsigned short twd;
 unsigned short fop;
 long fip;
 long fcs;
 long foo;
 long fos;
 long mxcsr;
 long mxcsr_mask;
 long st_space[32];
 long xmm_space[32];
 long padding[56];
} __attribute__ ((aligned (16))) ;

struct i387_soft_struct {
 long cwd;
 long swd;
 long twd;
 long fip;
 long fcs;
 long foo;
 long fos;
 long st_space[20];
 unsigned char ftop, changed, lookahead, no_update, rm, alimit;
 struct info *info;
 unsigned long entry_eip;
};

union i387_union {
 struct i387_fsave_struct fsave;
 struct i387_fxsave_struct fxsave;
 struct i387_soft_struct soft;
};

typedef struct {
 unsigned long seg;
} mm_segment_t;

struct thread_struct;

struct tss_struct {
 unsigned short back_link,__blh;
 unsigned long esp0;
 unsigned short ss0,__ss0h;
 unsigned long esp1;
 unsigned short ss1,__ss1h;
 unsigned long esp2;
 unsigned short ss2,__ss2h;
 unsigned long __cr3;
 unsigned long eip;
 unsigned long eflags;
 unsigned long eax,ecx,edx,ebx;
 unsigned long esp;
 unsigned long ebp;
 unsigned long esi;
 unsigned long edi;
 unsigned short es, __esh;
 unsigned short cs, __csh;
 unsigned short ss, __ssh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
 unsigned short ldt, __ldth;
 unsigned short trace, io_bitmap_base;






 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];



 unsigned long io_bitmap_max;
 struct thread_struct *io_bitmap_owner;



 unsigned long __cacheline_filler[35];



 unsigned long stack[64];
} __attribute__((packed)) ;



struct thread_struct {

 struct desc_struct tls_array[3];
 unsigned long esp0;
 unsigned long sysenter_cs;
 unsigned long eip;
 unsigned long esp;
 unsigned long fs;
 unsigned long gs;

 unsigned long debugreg[8];

 unsigned long cr2, trap_no, error_code;

 union i387_union i387;

 struct vm86_struct * vm86_info;
 unsigned long screen_bitmap;
 unsigned long v86flags, v86mask, saved_esp0;
 unsigned int saved_fs, saved_gs;

 unsigned long *io_bitmap_ptr;
  unsigned long iopl;

 unsigned long io_bitmap_max;
};
# 496 "linux-2.6.18/include/asm/processor.h"
static inline  __attribute__((always_inline)) void load_esp0(struct tss_struct *tss, struct thread_struct *thread)
{
 tss->esp0 = thread->esp0;

 if (__builtin_expect(!!(tss->ss1 != thread->sysenter_cs), 0)) {
  tss->ss1 = thread->sysenter_cs;
  __asm__ __volatile__("wrmsr" : : "c" (0x174), "a" (thread->sysenter_cs), "d" (0));
 }
}
# 531 "linux-2.6.18/include/asm/processor.h"
static inline  __attribute__((always_inline)) void set_iopl_mask(unsigned mask)
{
 unsigned int reg;
 __asm__ __volatile__ ("pushfl;"
         "popl %0;"
         "andl %1, %0;"
         "orl %2, %0;"
         "pushl %0;"
         "popfl"
    : "=&r" (reg)
    : "i" (~0x00003000), "r" (mask));
}


struct task_struct;
struct mm_struct;


extern void release_thread(struct task_struct *);


extern void prepare_to_copy(struct task_struct *tsk);




extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);

extern unsigned long thread_saved_pc(struct task_struct *tsk);
void show_trace(struct task_struct *task, struct pt_regs *regs, unsigned long *stack);

unsigned long get_wchan(struct task_struct *p);
# 592 "linux-2.6.18/include/asm/processor.h"
struct microcode_header {
 unsigned int hdrver;
 unsigned int rev;
 unsigned int date;
 unsigned int sig;
 unsigned int cksum;
 unsigned int ldrver;
 unsigned int pf;
 unsigned int datasize;
 unsigned int totalsize;
 unsigned int reserved[3];
};

struct microcode {
 struct microcode_header hdr;
 unsigned int bits[0];
};

typedef struct microcode microcode_t;
typedef struct microcode_header microcode_header_t;


struct extended_signature {
 unsigned int sig;
 unsigned int pf;
 unsigned int cksum;
};

struct extended_sigtable {
 unsigned int count;
 unsigned int cksum;
 unsigned int reserved[3];
 struct extended_signature sigs[0];
};


static inline  __attribute__((always_inline)) void rep_nop(void)
{
 __asm__ __volatile__("rep;nop": : :"memory");
}
# 703 "linux-2.6.18/include/asm/processor.h"
static inline  __attribute__((always_inline)) void prefetch(const void *x)
{
 asm volatile ("661:\n\t" ".byte 0x8d,0x74,0x26,0x00\n" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 4\n" "  .long 661b\n" "  .long 663f\n" "  .byte %c0\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchnta (%1)" "\n664:\n" ".previous" :: "i" ((0*32+25)), "r" (x));



}







static inline  __attribute__((always_inline)) void prefetchw(const void *x)
{
 asm volatile ("661:\n\t" ".byte 0x8d,0x74,0x26,0x00\n" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 4\n" "  .long 661b\n" "  .long 663f\n" "  .byte %c0\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchw (%1)" "\n664:\n" ".previous" :: "i" ((1*32+31)), "r" (x));



}


extern void select_idle_routine(const struct cpuinfo_x86 *c);



typedef  unsigned long   _GLOBAL_33_T; extern  _GLOBAL_33_T  global_boot_option_idle_override[NUM_STACKS];    
extern void enable_sep_cpu(void);
extern int sysenter_setup(void);
# 17 "linux-2.6.18/include/asm/thread_info.h" 2
# 27 "linux-2.6.18/include/asm/thread_info.h"
struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 unsigned long flags;
 unsigned long status;
 __u32 cpu;
 int preempt_count;


 mm_segment_t addr_limit;



 void *sysenter_return;
 struct restart_block restart_block;

 unsigned long previous_esp;


 __u8 supervisor_stack[0];
};
# 88 "linux-2.6.18/include/asm/thread_info.h"
register unsigned long current_stack_pointer asm("esp") __attribute__((__used__)) ;


static inline  __attribute__((always_inline)) struct thread_info *current_thread_info(void)
{


 extern struct thread_info *nsc_get_current_thread_info(void);
 return nsc_get_current_thread_info();



}
# 22 "linux-2.6.18/include/linux/thread_info.h" 2
# 30 "linux-2.6.18/include/linux/thread_info.h"
static inline  __attribute__((always_inline)) void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p(flag) ? constant_test_bit((flag),(&ti->flags)) : variable_test_bit((flag),(&ti->flags)));
}
# 10 "linux-2.6.18/include/linux/preempt.h" 2
# 50 "linux-2.6.18/include/linux/spinlock.h" 2




# 1 "linux-2.6.18/include/linux/stringify.h" 1
# 55 "linux-2.6.18/include/linux/spinlock.h" 2
# 78 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/linux/spinlock_types.h" 1
# 12 "linux-2.6.18/include/linux/spinlock_types.h"
# 1 "linux-2.6.18/include/linux/lockdep.h" 1
# 12 "linux-2.6.18/include/linux/lockdep.h"
# 1 "linux-2.6.18/include/linux/list.h" 1






# 1 "linux-2.6.18/include/linux/poison.h" 1
# 8 "linux-2.6.18/include/linux/list.h" 2
# 1 "linux-2.6.18/include/linux/prefetch.h" 1
# 58 "linux-2.6.18/include/linux/prefetch.h"
static inline  __attribute__((always_inline)) void prefetch_range(void *addr, size_t len)
{

 char *cp;
 char *end = addr + len;

 for (cp = addr; cp < end; cp += (4*(1 << (7))))
  prefetch(cp);

}
# 9 "linux-2.6.18/include/linux/list.h" 2
# 21 "linux-2.6.18/include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};






static inline  __attribute__((always_inline)) void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}







static inline  __attribute__((always_inline)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 60 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 73 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}







static inline  __attribute__((always_inline)) void __list_add_rcu(struct list_head * new,
  struct list_head * prev, struct list_head * next)
{
 new->next = next;
 new->prev = prev;
 __asm__ __volatile__("": : :"memory");
 next->prev = new;
 prev->next = new;
}
# 110 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_rcu(struct list_head *new, struct list_head *head)
{
 __list_add_rcu(new, head, head->next);
}
# 131 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail_rcu(struct list_head *new,
     struct list_head *head)
{
 __list_add_rcu(new, head->prev, head);
}
# 144 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}







static inline  __attribute__((always_inline)) void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100);
 entry->prev = ((void *) 0x00200200);
}
# 187 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_del_rcu(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->prev = ((void *) 0x00200200);
}







static inline  __attribute__((always_inline)) void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline  __attribute__((always_inline)) void list_replace_init(struct list_head *old,
     struct list_head *new)
{
 list_replace(old, new);
 INIT_LIST_HEAD(old);
}
# 223 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_replace_rcu(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->prev = old->prev;
 __asm__ __volatile__("": : :"memory");
 new->next->prev = new;
 new->prev->next = new;
 old->prev = ((void *) 0x00200200);
}





static inline  __attribute__((always_inline)) void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 INIT_LIST_HEAD(entry);
}






static inline  __attribute__((always_inline)) void list_move(struct list_head *list, struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add(list, head);
}






static inline  __attribute__((always_inline)) void list_move_tail(struct list_head *list,
      struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add_tail(list, head);
}






static inline  __attribute__((always_inline)) int list_is_last(const struct list_head *list,
    const struct list_head *head)
{
 return list->next == head;
}





static inline  __attribute__((always_inline)) int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 300 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}

static inline  __attribute__((always_inline)) void __list_splice(struct list_head *list,
     struct list_head *head)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 first->prev = head;
 head->next = first;

 last->next = at;
 at->prev = last;
}






static inline  __attribute__((always_inline)) void list_splice(struct list_head *list, struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head);
}
# 338 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head);
  INIT_LIST_HEAD(list);
 }
}
# 592 "linux-2.6.18/include/linux/list.h"
struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};




static inline  __attribute__((always_inline)) void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next = ((void *)0);
 h->pprev = ((void *)0);
}

static inline  __attribute__((always_inline)) int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline  __attribute__((always_inline)) int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline  __attribute__((always_inline)) void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline  __attribute__((always_inline)) void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100);
 n->pprev = ((void *) 0x00200200);
}
# 654 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200);
}

static inline  __attribute__((always_inline)) void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}
# 675 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_replace_rcu(struct hlist_node *old,
     struct hlist_node *new)
{
 struct hlist_node *next = old->next;

 new->next = next;
 new->pprev = old->pprev;
 __asm__ __volatile__("": : :"memory");
 if (next)
  new->next->pprev = &new->next;
 *new->pprev = new;
 old->pprev = ((void *) 0x00200200);
}

static inline  __attribute__((always_inline)) void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}
# 719 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 n->pprev = &h->first;
 __asm__ __volatile__("": : :"memory");
 if (first)
  first->pprev = &n->next;
 h->first = n;
}


static inline  __attribute__((always_inline)) void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline  __attribute__((always_inline)) void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}
# 770 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 __asm__ __volatile__("": : :"memory");
 next->pprev = &n->next;
 *(n->pprev) = n;
}
# 798 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_after_rcu(struct hlist_node *prev,
           struct hlist_node *n)
{
 n->next = prev->next;
 n->pprev = &prev->next;
 __asm__ __volatile__("": : :"memory");
 prev->next = n;
 if (n->next)
  n->next->pprev = &n->next;
}
# 13 "linux-2.6.18/include/linux/lockdep.h" 2
# 1 "linux-2.6.18/include/linux/debug_locks.h" 1



struct task_struct;

typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_debug_locks[NUM_STACKS];   
typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_debug_locks_silent[NUM_STACKS];   




extern int debug_locks_off(void);
# 52 "linux-2.6.18/include/linux/debug_locks.h"
static inline  __attribute__((always_inline)) void debug_show_all_locks(void)
{
}

static inline  __attribute__((always_inline)) void debug_show_held_locks(struct task_struct *task)
{
}

static inline  __attribute__((always_inline)) void
debug_check_no_locks_freed(const void *from, unsigned long len)
{
}

static inline  __attribute__((always_inline)) void
debug_check_no_locks_held(struct task_struct *task)
{
}
# 14 "linux-2.6.18/include/linux/lockdep.h" 2
# 1 "linux-2.6.18/include/linux/stacktrace.h" 1
# 15 "linux-2.6.18/include/linux/lockdep.h" 2
# 243 "linux-2.6.18/include/linux/lockdep.h"
static inline  __attribute__((always_inline)) void lockdep_off(void)
{
}

static inline  __attribute__((always_inline)) void lockdep_on(void)
{
}

static inline  __attribute__((always_inline)) int lockdep_internal(void)
{
 return 0;
}
# 270 "linux-2.6.18/include/linux/lockdep.h"
struct lock_class_key { };
# 13 "linux-2.6.18/include/linux/spinlock_types.h" 2




# 1 "linux-2.6.18/include/linux/spinlock_types_up.h" 1
# 29 "linux-2.6.18/include/linux/spinlock_types_up.h"
typedef struct { } raw_spinlock_t;





typedef struct {




} raw_rwlock_t;
# 18 "linux-2.6.18/include/linux/spinlock_types.h" 2


typedef struct {
 raw_spinlock_t raw_lock;
# 32 "linux-2.6.18/include/linux/spinlock_types.h"
} spinlock_t;



typedef struct {
 raw_rwlock_t raw_lock;
# 48 "linux-2.6.18/include/linux/spinlock_types.h"
} rwlock_t;
# 79 "linux-2.6.18/include/linux/spinlock.h" 2

extern int   __attribute__((regparm(3))) __attribute__((section(".spinlock.text"))) generic__raw_read_trylock(raw_rwlock_t *lock);







# 1 "linux-2.6.18/include/linux/spinlock_up.h" 1
# 89 "linux-2.6.18/include/linux/spinlock.h" 2
# 134 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/linux/spinlock_api_up.h" 1
# 135 "linux-2.6.18/include/linux/spinlock.h" 2
# 259 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/asm/atomic.h" 1
# 17 "linux-2.6.18/include/asm/atomic.h"
typedef struct { volatile int counter; } atomic_t;
# 45 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic_add(int i, atomic_t *v)
{
 __asm__ __volatile__(
  "" "addl %1,%0"
  :"+m" (v->counter)
  :"ir" (i));
}
# 60 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic_sub(int i, atomic_t *v)
{
 __asm__ __volatile__(
  "" "subl %1,%0"
  :"+m" (v->counter)
  :"ir" (i));
}
# 77 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_sub_and_test(int i, atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "subl %2,%0; sete %1"
  :"+m" (v->counter), "=qm" (c)
  :"ir" (i) : "memory");
 return c;
}







static __inline__  __attribute__((always_inline)) void atomic_inc(atomic_t *v)
{
 __asm__ __volatile__(
  "" "incl %0"
  :"+m" (v->counter));
}







static __inline__  __attribute__((always_inline)) void atomic_dec(atomic_t *v)
{
 __asm__ __volatile__(
  "" "decl %0"
  :"+m" (v->counter));
}
# 122 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_dec_and_test(atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "decl %0; sete %1"
  :"+m" (v->counter), "=qm" (c)
  : : "memory");
 return c != 0;
}
# 141 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_inc_and_test(atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "incl %0; sete %1"
  :"+m" (v->counter), "=qm" (c)
  : : "memory");
 return c != 0;
}
# 161 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_add_negative(int i, atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "addl %2,%0; sets %1"
  :"+m" (v->counter), "=qm" (c)
  :"ir" (i) : "memory");
 return c;
}
# 179 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_add_return(int i, atomic_t *v)
{
 int __i;






 __i = i;
 __asm__ __volatile__(
  "" "xaddl %0, %1;"
  :"=r"(i)
  :"m"(v->counter), "0"(i));
 return i + __i;
# 203 "linux-2.6.18/include/asm/atomic.h"
}

static __inline__  __attribute__((always_inline)) int atomic_sub_return(int i, atomic_t *v)
{
 return atomic_add_return(-i,v);
}
# 256 "linux-2.6.18/include/asm/atomic.h"
# 1 "linux-2.6.18/include/asm-generic/atomic.h" 1
# 71 "linux-2.6.18/include/asm-generic/atomic.h"
typedef atomic_t atomic_long_t;


static inline  __attribute__((always_inline)) long atomic_long_read(atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 return (long)((v)->counter);
}

static inline  __attribute__((always_inline)) void atomic_long_set(atomic_long_t *l, long i)
{
 atomic_t *v = (atomic_t *)l;

 (((v)->counter) = (i));
}

static inline  __attribute__((always_inline)) void atomic_long_inc(atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 atomic_inc(v);
}

static inline  __attribute__((always_inline)) void atomic_long_dec(atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 atomic_dec(v);
}

static inline  __attribute__((always_inline)) void atomic_long_add(long i, atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 atomic_add(i, v);
}

static inline  __attribute__((always_inline)) void atomic_long_sub(long i, atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 atomic_sub(i, v);
}
# 257 "linux-2.6.18/include/asm/atomic.h" 2
# 260 "linux-2.6.18/include/linux/spinlock.h" 2





extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 46 "linux-2.6.18/include/linux/capability.h" 2
# 1 "linux-2.6.18/include/asm/current.h" 1
# 47 "linux-2.6.18/include/linux/capability.h" 2
# 58 "linux-2.6.18/include/linux/capability.h"
typedef __u32 kernel_cap_t;
# 295 "linux-2.6.18/include/linux/capability.h"
typedef  kernel_cap_t  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_cap_bset[NUM_STACKS];   
# 323 "linux-2.6.18/include/linux/capability.h"
static inline  __attribute__((always_inline)) kernel_cap_t cap_combine(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) | (b);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_intersect(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) & (b);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_drop(kernel_cap_t a, kernel_cap_t drop)
{
     kernel_cap_t dest;
     (dest) = (a) & ~(drop);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_invert(kernel_cap_t c)
{
     kernel_cap_t dest;
     (dest) = ~(c);
     return dest;
}
# 360 "linux-2.6.18/include/linux/capability.h"
int capable(int cap);
int __capable(struct task_struct *t, int cap);
# 45 "linux-2.6.18/include/linux/sched.h" 2



# 1 "linux-2.6.18/include/linux/timex.h" 1
# 57 "linux-2.6.18/include/linux/timex.h"
# 1 "linux-2.6.18/include/linux/time.h" 1






# 1 "linux-2.6.18/include/linux/seqlock.h" 1
# 32 "linux-2.6.18/include/linux/seqlock.h"
typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
# 57 "linux-2.6.18/include/linux/seqlock.h"
static inline  __attribute__((always_inline)) void write_seqlock(seqlock_t *sl)
{
 do { do { } while (0); (void)0; (void)(&sl->lock); } while (0);
 ++sl->sequence;
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void write_sequnlock(seqlock_t *sl)
{
 __asm__ __volatile__("": : :"memory");
 sl->sequence++;
 do { do { } while (0); (void)0; (void)(&sl->lock); } while (0);
}

static inline  __attribute__((always_inline)) int write_tryseqlock(seqlock_t *sl)
{
 int ret = (({ do { do { } while (0); (void)0; (void)(&sl->lock); } while (0); 1; }));

 if (ret) {
  ++sl->sequence;
  __asm__ __volatile__("": : :"memory");
 }
 return ret;
}


static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned read_seqbegin(const seqlock_t *sl)
{
 unsigned ret = sl->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}
# 98 "linux-2.6.18/include/linux/seqlock.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) int read_seqretry(const seqlock_t *sl, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (sl->sequence ^ iv);
}
# 112 "linux-2.6.18/include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline  __attribute__((always_inline)) unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret = s->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}






static inline  __attribute__((always_inline)) int read_seqcount_retry(const seqcount_t *s, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (s->sequence ^ iv);
}






static inline  __attribute__((always_inline)) void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void write_seqcount_end(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence++;
}
# 8 "linux-2.6.18/include/linux/time.h" 2




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 39 "linux-2.6.18/include/linux/time.h"
static inline  __attribute__((always_inline)) int timespec_equal(struct timespec *a, struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}






static inline  __attribute__((always_inline)) int timespec_compare(struct timespec *lhs, struct timespec *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_nsec - rhs->tv_nsec;
}

static inline  __attribute__((always_inline)) int timeval_compare(struct timeval *lhs, struct timeval *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_usec - rhs->tv_usec;
}

extern unsigned long mktime(const unsigned int year, const unsigned int mon,
       const unsigned int day, const unsigned int hour,
       const unsigned int min, const unsigned int sec);

extern void set_normalized_timespec(struct timespec *ts, time_t sec, long nsec);




static inline  __attribute__((always_inline)) struct timespec timespec_sub(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec - rhs.tv_sec,
    lhs.tv_nsec - rhs.tv_nsec);
 return ts_delta;
}







typedef  struct timespec   _GLOBAL_37_T; extern  _GLOBAL_37_T  global_xtime[NUM_STACKS];    
typedef  struct timespec   _GLOBAL_38_T; extern  _GLOBAL_38_T  global_wall_to_monotonic[NUM_STACKS];    
typedef  seqlock_t  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_xtime_lock[NUM_STACKS];   

void timekeeping_init(void);

static inline  __attribute__((always_inline)) unsigned long get_seconds(void)
{
 return global_xtime[get_stack_id()].tv_sec;
}

struct timespec current_kernel_time(void);




extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(struct timespec *tv);
extern int do_sys_settimeofday(struct timespec *tv, struct timezone *tz);

extern long do_utimes(int dfd, char *filename, struct timeval *times);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday(struct timespec *tv);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_is_continuous(void);
# 129 "linux-2.6.18/include/linux/time.h"
static inline  __attribute__((always_inline)) s64 timespec_to_ns(const struct timespec *ts)
{
 return ((s64) ts->tv_sec * 1000000000L) + ts->tv_nsec;
}
# 141 "linux-2.6.18/include/linux/time.h"
static inline  __attribute__((always_inline)) s64 timeval_to_ns(const struct timeval *tv)
{
 return ((s64) tv->tv_sec * 1000000000L) +
  tv->tv_usec * 1000L;
}







extern struct timespec ns_to_timespec(const s64 nsec);







extern struct timeval ns_to_timeval(const s64 nsec);






static inline  __attribute__((always_inline)) void timespec_add_ns(struct timespec *a, u64 ns)
{
 ns += a->tv_nsec;
 while(__builtin_expect(!!(ns >= 1000000000L), 0)) {
  ns -= 1000000000L;
  a->tv_sec++;
 }
 a->tv_nsec = ns;
}
# 195 "linux-2.6.18/include/linux/time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 58 "linux-2.6.18/include/linux/timex.h" 2
# 106 "linux-2.6.18/include/linux/timex.h"
struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
};
# 193 "linux-2.6.18/include/linux/timex.h"
# 1 "linux-2.6.18/include/asm/timex.h" 1
# 10 "linux-2.6.18/include/asm/timex.h"
# 1 "linux-2.6.18/include/asm/tsc.h" 1
# 26 "linux-2.6.18/include/asm/tsc.h"
typedef unsigned long long cycles_t;

typedef  unsigned int   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_cpu_khz[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_41_T; extern  _GLOBAL_41_T  global_tsc_khz[NUM_STACKS];    

static inline  __attribute__((always_inline)) cycles_t get_cycles(void)
{
 unsigned long long ret = 0;







 __asm__ __volatile__("rdtsc" : "=A" (ret));

 return ret;
}

extern void tsc_init(void);
extern void mark_tsc_unstable(void);
# 11 "linux-2.6.18/include/asm/timex.h" 2
# 19 "linux-2.6.18/include/asm/timex.h"
extern int read_current_timer(unsigned long *timer_value);
# 194 "linux-2.6.18/include/linux/timex.h" 2






typedef  unsigned long   _GLOBAL_42_T; extern  _GLOBAL_42_T  global_tick_usec[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_43_T; extern  _GLOBAL_43_T  global_tick_nsec[NUM_STACKS];    
typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_tickadj[NUM_STACKS];   




typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_time_state[NUM_STACKS];   
typedef  int  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_time_status[NUM_STACKS];   
typedef  long  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_time_offset[NUM_STACKS];   
typedef  long  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_time_constant[NUM_STACKS];   
typedef  long  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_time_tolerance[NUM_STACKS];   
typedef  long  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_time_precision[NUM_STACKS];   
typedef  long  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_time_maxerror[NUM_STACKS];   
typedef  long  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_time_esterror[NUM_STACKS];   

typedef  long  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_time_freq[NUM_STACKS];   
typedef  long  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_time_reftime[NUM_STACKS];   

typedef  long  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_time_adjust[NUM_STACKS];   
typedef  long  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_time_next_adjust[NUM_STACKS];   






static inline  __attribute__((always_inline)) void ntp_clear(void)
{
 global_time_adjust[get_stack_id()] = 0;
 global_time_status[get_stack_id()] |= 0x0040;
 global_time_maxerror[get_stack_id()] = (512000L << 5);
 global_time_esterror[get_stack_id()] = (512000L << 5);
}





static inline  __attribute__((always_inline)) int ntp_synced(void)
{
 return !(global_time_status[get_stack_id()] & 0x0040);
}
# 300 "linux-2.6.18/include/linux/timex.h"
static inline  __attribute__((always_inline)) void
time_interpolator_reset(void)
{
}






extern u64 current_tick_length(void);

extern int do_adjtimex(struct timex *);
# 49 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/jiffies.h" 1



# 1 "linux-2.6.18/include/linux/calc64.h" 1




# 1 "linux-2.6.18/include/asm/div64.h" 1
# 38 "linux-2.6.18/include/asm/div64.h"
static inline  __attribute__((always_inline)) long
div_ll_X_l_rem(long long divs, long div, long *rem)
{
 long dum2;
      __asm__("divl %2":"=a"(dum2), "=d"(*rem)
      : "rm"(div), "A"(divs));

 return dum2;

}
# 6 "linux-2.6.18/include/linux/calc64.h" 2
# 35 "linux-2.6.18/include/linux/calc64.h"
static inline  __attribute__((always_inline)) long div_long_long_rem_signed(const long long dividend,
         const long divisor, long *remainder)
{
 long res;

 if (__builtin_expect(!!(dividend < 0), 0)) {
  res = -div_ll_X_l_rem(-dividend,divisor,remainder);
  *remainder = -(*remainder);
 } else
  res = div_ll_X_l_rem(dividend,divisor,remainder);

 return res;
}
# 5 "linux-2.6.18/include/linux/jiffies.h" 2
# 81 "linux-2.6.18/include/linux/jiffies.h"
typedef  u64   _GLOBAL_57_T; extern  __attribute__((section(".data")))   _GLOBAL_57_T  global_jiffies_64[NUM_STACKS];    
typedef  unsigned long    _GLOBAL_58_T; extern volatile  __attribute__((section(".data")))   _GLOBAL_58_T  global_jiffies[NUM_STACKS];      


u64 get_jiffies_64(void);
# 252 "linux-2.6.18/include/linux/jiffies.h"
static inline  __attribute__((always_inline)) unsigned int jiffies_to_msecs(const unsigned long j)
{

 return (1000L / 1000) * j;





}

static inline  __attribute__((always_inline)) unsigned int jiffies_to_usecs(const unsigned long j)
{

 return (1000000L / 1000) * j;





}

static inline  __attribute__((always_inline)) unsigned long msecs_to_jiffies(const unsigned int m)
{
 if (m > jiffies_to_msecs(((~0UL >> 1)-1)))
  return ((~0UL >> 1)-1);

 return (m + (1000L / 1000) - 1) / (1000L / 1000);





}

static inline  __attribute__((always_inline)) unsigned long usecs_to_jiffies(const unsigned int u)
{
 if (u > jiffies_to_usecs(((~0UL >> 1)-1)))
  return ((~0UL >> 1)-1);

 return (u + (1000000L / 1000) - 1) / (1000000L / 1000);





}
# 311 "linux-2.6.18/include/linux/jiffies.h"
static __inline__  __attribute__((always_inline)) unsigned long
timespec_to_jiffies(const struct timespec *value)
{
 unsigned long sec = value->tv_sec;
 long nsec = value->tv_nsec + (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))))) - 1;

 if (sec >= (long)((u64)((u64)((~0UL >> 1)-1) * (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))))) / 1000000000L)){
  sec = (long)((u64)((u64)((~0UL >> 1)-1) * (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))))) / 1000000000L);
  nsec = 0;
 }
 return (((u64)sec * ((unsigned long)((((u64)1000000000L << (32 - 10)) + (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))))))) +
  (((u64)nsec * ((unsigned long)((((u64)1 << ((32 - 10) + 29)) + (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))))))) >>
   (((32 - 10) + 29) - (32 - 10)))) >> (32 - 10);

}

static __inline__  __attribute__((always_inline)) void
jiffies_to_timespec(const unsigned long jiffies, struct timespec *value)
{




 u64 nsec = (u64)jiffies * (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))));
 value->tv_sec = div_ll_X_l_rem(nsec,1000000000L,&value->tv_nsec);
}
# 350 "linux-2.6.18/include/linux/jiffies.h"
static __inline__  __attribute__((always_inline)) unsigned long
timeval_to_jiffies(const struct timeval *value)
{
 unsigned long sec = value->tv_sec;
 long usec = value->tv_usec;

 if (sec >= (long)((u64)((u64)((~0UL >> 1)-1) * (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))))) / 1000000000L)){
  sec = (long)((u64)((u64)((~0UL >> 1)-1) * (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))))) / 1000000000L);
  usec = 0;
 }
 return (((u64)sec * ((unsigned long)((((u64)1000000000L << (32 - 10)) + (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))))))) +
  (((u64)usec * ((unsigned long)((((u64)1000L << ((32 - 10) + 19)) + (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))))))) + (u64)(((u64)1 << ((32 - 10) + 19)) - 1)) >>
   (((32 - 10) + 19) - (32 - 10)))) >> (32 - 10);
}

static __inline__  __attribute__((always_inline)) void
jiffies_to_timeval(const unsigned long jiffies, struct timeval *value)
{




 u64 nsec = (u64)jiffies * (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))));
 long tv_usec;

 value->tv_sec = div_ll_X_l_rem(nsec,1000000000L,&tv_usec);
 tv_usec /= 1000L;
 value->tv_usec = tv_usec;
}




static inline  __attribute__((always_inline)) clock_t jiffies_to_clock_t(long x)
{



 u64 tmp = (u64)x * (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))));
 ({ unsigned long __upper, __low, __high, __mod, __base; __base = ((1000000000L / 100)); asm("":"=a" (__low), "=d" (__high):"A" (tmp)); __upper = __high; if (__high) { __upper = __high % (__base); __high = __high / (__base); } asm("divl %2":"=a" (__low), "=d" (__mod):"rm" (__base), "0" (__low), "1" (__upper)); asm("":"=A" (tmp):"a" (__low),"d" (__high)); __mod; });
 return (long)tmp;

}

static inline  __attribute__((always_inline)) unsigned long clock_t_to_jiffies(unsigned long x)
{

 if (x >= ~0UL / (1000 / 100))
  return ~0UL;
 return x * (1000 / 100);
# 412 "linux-2.6.18/include/linux/jiffies.h"
}

static inline  __attribute__((always_inline)) u64 jiffies_64_to_clock_t(u64 x)
{
# 424 "linux-2.6.18/include/linux/jiffies.h"
 x *= (( (((1000000UL * 1000) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))) << (8)) + ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000))))) / 2) / ((( (((1193182) / (((1193182 + 1000/2) / 1000))) << (8)) + ((((1193182) % (((1193182 + 1000/2) / 1000))) << (8)) + (((1193182 + 1000/2) / 1000)) / 2) / (((1193182 + 1000/2) / 1000)))))));
 ({ unsigned long __upper, __low, __high, __mod, __base; __base = ((1000000000L / 100)); asm("":"=a" (__low), "=d" (__high):"A" (x)); __upper = __high; if (__high) { __upper = __high % (__base); __high = __high / (__base); } asm("divl %2":"=a" (__low), "=d" (__mod):"rm" (__base), "0" (__low), "1" (__upper)); asm("":"=A" (x):"a" (__low),"d" (__high)); __mod; });

 return x;
}

static inline  __attribute__((always_inline)) u64 nsec_to_clock_t(u64 x)
{

 ({ unsigned long __upper, __low, __high, __mod, __base; __base = ((1000000000L / 100)); asm("":"=a" (__low), "=d" (__high):"A" (x)); __upper = __high; if (__high) { __upper = __high % (__base); __high = __high / (__base); } asm("divl %2":"=a" (__low), "=d" (__mod):"rm" (__base), "0" (__low), "1" (__upper)); asm("":"=A" (x):"a" (__low),"d" (__high)); __mod; });
# 447 "linux-2.6.18/include/linux/jiffies.h"
 return x;
}
# 50 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/rbtree.h" 1
# 100 "linux-2.6.18/include/linux/rbtree.h"
struct rb_node
{
 unsigned long rb_parent_color;


 struct rb_node *rb_right;
 struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long)))) ;


struct rb_root
{
 struct rb_node *rb_node;
};
# 123 "linux-2.6.18/include/linux/rbtree.h"
static inline  __attribute__((always_inline)) void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
 rb->rb_parent_color = (rb->rb_parent_color & 3) | (unsigned long)p;
}
static inline  __attribute__((always_inline)) void rb_set_color(struct rb_node *rb, int color)
{
 rb->rb_parent_color = (rb->rb_parent_color & ~1) | color;
}
# 139 "linux-2.6.18/include/linux/rbtree.h"
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);


extern struct rb_node *rb_next(struct rb_node *);
extern struct rb_node *rb_prev(struct rb_node *);
extern struct rb_node *rb_first(struct rb_root *);
extern struct rb_node *rb_last(struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline  __attribute__((always_inline)) void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent_color = (unsigned long )parent;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 51 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/linux/errno.h" 1



# 1 "linux-2.6.18/include/asm/errno.h" 1



# 1 "linux-2.6.18/include/asm-generic/errno.h" 1



# 1 "linux-2.6.18/include/asm-generic/errno-base.h" 1
# 5 "linux-2.6.18/include/asm-generic/errno.h" 2
# 5 "linux-2.6.18/include/asm/errno.h" 2
# 5 "linux-2.6.18/include/linux/errno.h" 2
# 54 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/nodemask.h" 1
# 86 "linux-2.6.18/include/linux/nodemask.h"
# 1 "linux-2.6.18/include/linux/numa.h" 1
# 87 "linux-2.6.18/include/linux/nodemask.h" 2

typedef struct { unsigned long bits[((((1 << 0))+32 -1)/32)]; } nodemask_t;
typedef  nodemask_t  _GLOBAL_59_T; extern  _GLOBAL_59_T  global__unused_nodemask_arg_[NUM_STACKS];   


static inline  __attribute__((always_inline)) void __node_set(int node, volatile nodemask_t *dstp)
{
 set_bit(node, dstp->bits);
}


static inline  __attribute__((always_inline)) void __node_clear(int node, volatile nodemask_t *dstp)
{
 clear_bit(node, dstp->bits);
}


static inline  __attribute__((always_inline)) void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline  __attribute__((always_inline)) void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline  __attribute__((always_inline)) int __node_test_and_set(int node, nodemask_t *addr)
{
 return test_and_set_bit(node, addr->bits);
}



static inline  __attribute__((always_inline)) void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_complement(nodemask_t *dstp,
     const nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_equal(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_intersects(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_subset(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_empty(const nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_full(const nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_weight(const nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_shift_right(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_shift_left(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline  __attribute__((always_inline)) int __first_node(const nodemask_t *srcp)
{
 return ({ int __x = ((1 << 0)); int __y = (find_first_bit(srcp->bits, (1 << 0))); __x < __y ? __x: __y; });
}


static inline  __attribute__((always_inline)) int __next_node(int n, const nodemask_t *srcp)
{
 return ({ int __x = ((1 << 0)); int __y = (find_next_bit(srcp->bits, (1 << 0), n+1)); __x < __y ? __x: __y; });
}
# 251 "linux-2.6.18/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int __first_unset_node(const nodemask_t *maskp)
{
 return ({ int __x = ((1 << 0)); int __y = (find_first_zero_bit(maskp->bits, (1 << 0))); __x < __y ? __x: __y; });

}
# 285 "linux-2.6.18/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodemask_parse(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse(buf, len, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodelist_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __node_remap(int oldbit,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}
# 345 "linux-2.6.18/include/linux/nodemask.h"
typedef  nodemask_t  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_node_online_map[NUM_STACKS];   
typedef  nodemask_t  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_node_possible_map[NUM_STACKS];   
# 55 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/asm/semaphore.h" 1
# 41 "linux-2.6.18/include/asm/semaphore.h"
# 1 "linux-2.6.18/include/linux/wait.h" 1
# 28 "linux-2.6.18/include/linux/wait.h"
typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int sync, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);

struct __wait_queue {
 unsigned int flags;

 void *private;
 wait_queue_func_t func;
 struct list_head task_list;
};

struct wait_bit_key {
 void *flags;
 int bit_nr;
};

struct wait_bit_queue {
 struct wait_bit_key key;
 wait_queue_t wait;
};

struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;

struct task_struct;
# 80 "linux-2.6.18/include/linux/wait.h"
extern void init_waitqueue_head(wait_queue_head_t *q);

static inline  __attribute__((always_inline)) void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->private = p;
 q->func = default_wake_function;
}

static inline  __attribute__((always_inline)) void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
{
 q->flags = 0;
 q->private = ((void *)0);
 q->func = func;
}

static inline  __attribute__((always_inline)) int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}
# 111 "linux-2.6.18/include/linux/wait.h"
extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t * wait) __attribute__((regparm(3))) ;
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t * wait) __attribute__((regparm(3))) ;
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t * wait) __attribute__((regparm(3))) ;

static inline  __attribute__((always_inline)) void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
 list_add(&new->task_list, &head->task_list);
}




static inline  __attribute__((always_inline)) void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
 list_add_tail(&new->task_list, &head->task_list);
}

static inline  __attribute__((always_inline)) void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key) __attribute__((regparm(3))) ;
extern void __wake_up_locked(wait_queue_head_t *q, unsigned int mode) __attribute__((regparm(3))) ;
extern void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr) __attribute__((regparm(3))) ;
void __wake_up_bit(wait_queue_head_t *, void *, int) __attribute__((regparm(3))) ;
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned) __attribute__((regparm(3))) ;
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned) __attribute__((regparm(3))) ;
void wake_up_bit(void *, int) __attribute__((regparm(3))) ;
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned) __attribute__((regparm(3))) ;
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned) __attribute__((regparm(3))) ;
wait_queue_head_t *bit_waitqueue(void *, int) __attribute__((regparm(3))) ;
# 342 "linux-2.6.18/include/linux/wait.h"
static inline  __attribute__((always_inline)) void add_wait_queue_exclusive_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}




static inline  __attribute__((always_inline)) void remove_wait_queue_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 __remove_wait_queue(q, wait);
}






extern void sleep_on(wait_queue_head_t *q) __attribute__((regparm(3))) ;
extern long sleep_on_timeout(wait_queue_head_t *q, signed long timeout) __attribute__((regparm(3))) ;

extern void interruptible_sleep_on(wait_queue_head_t *q) __attribute__((regparm(3))) ;
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q, signed long timeout) __attribute__((regparm(3))) ;





void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state) __attribute__((regparm(3))) ;

void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state) __attribute__((regparm(3))) ;

void finish_wait(wait_queue_head_t *q, wait_queue_t *wait) __attribute__((regparm(3))) ;
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 420 "linux-2.6.18/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!(__builtin_constant_p(bit) ? constant_test_bit((bit),(word)) : variable_test_bit((bit),(word))))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 444 "linux-2.6.18/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 42 "linux-2.6.18/include/asm/semaphore.h" 2
# 1 "linux-2.6.18/include/linux/rwsem.h" 1
# 19 "linux-2.6.18/include/linux/rwsem.h"
struct rw_semaphore;


# 1 "linux-2.6.18/include/linux/rwsem-spinlock.h" 1
# 22 "linux-2.6.18/include/linux/rwsem-spinlock.h"
struct rwsem_waiter;
# 31 "linux-2.6.18/include/linux/rwsem-spinlock.h"
struct rw_semaphore {
 __s32 activity;
 spinlock_t wait_lock;
 struct list_head wait_list;



};
# 52 "linux-2.6.18/include/linux/rwsem-spinlock.h"
extern void __init_rwsem(struct rw_semaphore *sem, const char *name,
    struct lock_class_key *key);
# 62 "linux-2.6.18/include/linux/rwsem-spinlock.h"
extern void __down_read(struct rw_semaphore *sem) __attribute__((regparm(3))) ;
extern int __down_read_trylock(struct rw_semaphore *sem) __attribute__((regparm(3))) ;
extern void __down_write(struct rw_semaphore *sem) __attribute__((regparm(3))) ;
extern void __down_write_nested(struct rw_semaphore *sem, int subclass) __attribute__((regparm(3))) ;
extern int __down_write_trylock(struct rw_semaphore *sem) __attribute__((regparm(3))) ;
extern void __up_read(struct rw_semaphore *sem) __attribute__((regparm(3))) ;
extern void __up_write(struct rw_semaphore *sem) __attribute__((regparm(3))) ;
extern void __downgrade_write(struct rw_semaphore *sem) __attribute__((regparm(3))) ;

static inline  __attribute__((always_inline)) int rwsem_is_locked(struct rw_semaphore *sem)
{
 return (sem->activity != 0);
}
# 23 "linux-2.6.18/include/linux/rwsem.h" 2







extern void down_read(struct rw_semaphore *sem);




extern int down_read_trylock(struct rw_semaphore *sem);




extern void down_write(struct rw_semaphore *sem);




extern int down_write_trylock(struct rw_semaphore *sem);




extern void up_read(struct rw_semaphore *sem);




extern void up_write(struct rw_semaphore *sem);




extern void downgrade_write(struct rw_semaphore *sem);
# 43 "linux-2.6.18/include/asm/semaphore.h" 2

struct semaphore {
 atomic_t count;
 int sleepers;
 wait_queue_head_t wait;
};
# 64 "linux-2.6.18/include/asm/semaphore.h"
static inline  __attribute__((always_inline)) void sema_init (struct semaphore *sem, int val)
{






 (((&sem->count)->counter) = (val));
 sem->sleepers = 0;
 init_waitqueue_head(&sem->wait);
}

static inline  __attribute__((always_inline)) void init_MUTEX (struct semaphore *sem)
{
 sema_init(sem, 1);
}

static inline  __attribute__((always_inline)) void init_MUTEX_LOCKED (struct semaphore *sem)
{
 sema_init(sem, 0);
}

 __attribute__((regparm(3))) void __down_failed(void );
 __attribute__((regparm(3))) int __down_failed_interruptible(void );
 __attribute__((regparm(3))) int __down_failed_trylock(void );
 __attribute__((regparm(3))) void __up_wakeup(void );






static inline  __attribute__((always_inline)) void down(struct semaphore * sem)
{
 do { do { } while (0); } while (0);
 __asm__ __volatile__(
  "# atomic down operation\n\t"
  "" "decl %0\n\t"
  "js 2f\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tlea %0,%%eax\n\t"
  "call __down_failed\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"+m" (sem->count)
  :
  :"memory","ax");
}





static inline  __attribute__((always_inline)) int down_interruptible(struct semaphore * sem)
{
 int result;

 do { do { } while (0); } while (0);
 __asm__ __volatile__(
  "# atomic interruptible down operation\n\t"
  "" "decl %1\n\t"
  "js 2f\n\t"
  "xorl %0,%0\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tlea %1,%%eax\n\t"
  "call __down_failed_interruptible\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=a" (result), "+m" (sem->count)
  :
  :"memory");
 return result;
}





static inline  __attribute__((always_inline)) int down_trylock(struct semaphore * sem)
{
 int result;

 __asm__ __volatile__(
  "# atomic interruptible down operation\n\t"
  "" "decl %1\n\t"
  "js 2f\n\t"
  "xorl %0,%0\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tlea %1,%%eax\n\t"
  "call __down_failed_trylock\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=a" (result), "+m" (sem->count)
  :
  :"memory");
 return result;
}







static inline  __attribute__((always_inline)) void up(struct semaphore * sem)
{
 __asm__ __volatile__(
  "# atomic up operation\n\t"
  "" "incl %0\n\t"
  "jle 2f\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tlea %0,%%eax\n\t"
  "call __up_wakeup\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  ".subsection 0\n"
  :"+m" (sem->count)
  :
  :"memory","ax");
}
# 58 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/asm/ptrace.h" 1
# 26 "linux-2.6.18/include/asm/ptrace.h"
struct pt_regs {
 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 int xds;
 int xes;
 long orig_eax;
 long eip;
 int xcs;
 long eflags;
 long esp;
 int xss;
};
# 64 "linux-2.6.18/include/asm/ptrace.h"
struct task_struct;
extern void send_sigtrap(struct task_struct *tsk, struct pt_regs *regs, int error_code);
# 74 "linux-2.6.18/include/asm/ptrace.h"
static inline  __attribute__((always_inline)) int user_mode(struct pt_regs *regs)
{
 return (regs->xcs & 3) != 0;
}
static inline  __attribute__((always_inline)) int user_mode_vm(struct pt_regs *regs)
{
 return ((regs->xcs & 3) | (regs->eflags & 0)) != 0;
}
# 60 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/asm/mmu.h" 1
# 11 "linux-2.6.18/include/asm/mmu.h"
typedef struct {
 int size;
 struct semaphore sem;
 void *ldt;
 void *vdso;
} mm_context_t;
# 61 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/asm/cputime.h" 1



# 1 "linux-2.6.18/include/asm-generic/cputime.h" 1






typedef unsigned long cputime_t;
# 23 "linux-2.6.18/include/asm-generic/cputime.h"
typedef u64 cputime64_t;
# 5 "linux-2.6.18/include/asm/cputime.h" 2
# 62 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/smp.h" 1
# 10 "linux-2.6.18/include/linux/smp.h"
extern void cpu_idle(void);
# 84 "linux-2.6.18/include/linux/smp.h"
static inline  __attribute__((always_inline)) int up_smp_call_function(void)
{
 return 0;
}
# 96 "linux-2.6.18/include/linux/smp.h"
static inline  __attribute__((always_inline)) void smp_send_reschedule(int cpu) { }
# 128 "linux-2.6.18/include/linux/smp.h"
void smp_setup_processor_id(void);
# 64 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/sem.h" 1



# 1 "linux-2.6.18/include/linux/ipc.h" 1
# 9 "linux-2.6.18/include/linux/ipc.h"
struct ipc_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
};


# 1 "linux-2.6.18/include/asm/ipcbuf.h" 1
# 14 "linux-2.6.18/include/asm/ipcbuf.h"
struct ipc64_perm
{
 __kernel_key_t key;
 __kernel_uid32_t uid;
 __kernel_gid32_t gid;
 __kernel_uid32_t cuid;
 __kernel_gid32_t cgid;
 __kernel_mode_t mode;
 unsigned short __pad1;
 unsigned short seq;
 unsigned short __pad2;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 22 "linux-2.6.18/include/linux/ipc.h" 2
# 57 "linux-2.6.18/include/linux/ipc.h"
struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 key_t key;
 uid_t uid;
 gid_t gid;
 uid_t cuid;
 gid_t cgid;
 mode_t mode;
 unsigned long seq;
 void *security;
};
# 5 "linux-2.6.18/include/linux/sem.h" 2
# 23 "linux-2.6.18/include/linux/sem.h"
struct semid_ds {
 struct ipc_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned short sem_nsems;
};


# 1 "linux-2.6.18/include/asm/sembuf.h" 1
# 14 "linux-2.6.18/include/asm/sembuf.h"
struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 unsigned long __unused1;
 __kernel_time_t sem_ctime;
 unsigned long __unused2;
 unsigned long sem_nsems;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 36 "linux-2.6.18/include/linux/sem.h" 2


struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};


union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
 struct seminfo *__buf;
 void *__pad;
};

struct seminfo {
 int semmap;
 int semmni;
 int semmns;
 int semmnu;
 int semmsl;
 int semopm;
 int semume;
 int semusz;
 int semvmx;
 int semaem;
};
# 82 "linux-2.6.18/include/linux/sem.h"
struct task_struct;


struct sem {
 int semval;
 int sempid;
};


struct sem_array {
 struct kern_ipc_perm sem_perm;
 int sem_id;
 time_t sem_otime;
 time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned long sem_nsems;
};


struct sem_queue {
 struct sem_queue * next;
 struct sem_queue ** prev;
 struct task_struct* sleeper;
 struct sem_undo * undo;
 int pid;
 int status;
 struct sem_array * sma;
 int id;
 struct sembuf * sops;
 int nsops;
 int alter;
};




struct sem_undo {
 struct sem_undo * proc_next;
 struct sem_undo * id_next;
 int semid;
 short * semadj;
};




struct sem_undo_list {
 atomic_t refcnt;
 spinlock_t lock;
 struct sem_undo *proc_list;
};

struct sysv_sem {
 struct sem_undo_list *undo_list;
};



extern int copy_semundo(unsigned long clone_flags, struct task_struct *tsk);
extern void exit_sem(struct task_struct *tsk);
# 65 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/signal.h" 1



# 1 "linux-2.6.18/include/asm/signal.h" 1
# 9 "linux-2.6.18/include/asm/signal.h"
struct siginfo;
# 22 "linux-2.6.18/include/asm/signal.h"
typedef unsigned long old_sigset_t;

typedef struct {
 unsigned long sig[(64 / 32)];
} sigset_t;
# 113 "linux-2.6.18/include/asm/signal.h"
# 1 "linux-2.6.18/include/asm-generic/signal.h" 1
# 17 "linux-2.6.18/include/asm-generic/signal.h"
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
# 114 "linux-2.6.18/include/asm/signal.h" 2


struct old_sigaction {
 __sighandler_t sa_handler;
 old_sigset_t sa_mask;
 unsigned long sa_flags;
 __sigrestore_t sa_restorer;
};

struct sigaction {
 __sighandler_t sa_handler;
 unsigned long sa_flags;
 __sigrestore_t sa_restorer;
 sigset_t sa_mask;
};

struct k_sigaction {
 struct sigaction sa;
};
# 151 "linux-2.6.18/include/asm/signal.h"
typedef struct sigaltstack {
 void *ss_sp;
 int ss_flags;
 size_t ss_size;
} stack_t;
# 167 "linux-2.6.18/include/asm/signal.h"
static __inline__  __attribute__((always_inline)) void __gen_sigaddset(sigset_t *set, int _sig)
{
 __asm__("btsl %1,%0" : "+m"(*set) : "Ir"(_sig - 1) : "cc");
}

static __inline__  __attribute__((always_inline)) void __const_sigaddset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 set->sig[sig / 32] |= 1 << (sig % 32);
}







static __inline__  __attribute__((always_inline)) void __gen_sigdelset(sigset_t *set, int _sig)
{
 __asm__("btrl %1,%0" : "+m"(*set) : "Ir"(_sig - 1) : "cc");
}

static __inline__  __attribute__((always_inline)) void __const_sigdelset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 set->sig[sig / 32] &= ~(1 << (sig % 32));
}

static __inline__  __attribute__((always_inline)) int __const_sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 return 1 & (set->sig[sig / 32] >> (sig % 32));
}

static __inline__  __attribute__((always_inline)) int __gen_sigismember(sigset_t *set, int _sig)
{
 int ret;
 __asm__("btl %2,%1\n\tsbbl %0,%0"
  : "=r"(ret) : "m"(*set), "Ir"(_sig-1) : "cc");
 return ret;
}






static __inline__  __attribute__((always_inline)) int sigfindinword(unsigned long word)
{
 __asm__("bsfl %1,%0" : "=r"(word) : "rm"(word) : "cc");
 return word;
}

struct pt_regs;
# 5 "linux-2.6.18/include/linux/signal.h" 2
# 1 "linux-2.6.18/include/asm/siginfo.h" 1



# 1 "linux-2.6.18/include/asm-generic/siginfo.h" 1






typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 40 "linux-2.6.18/include/asm-generic/siginfo.h"
typedef struct siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
  int _pad[((128 - (3 * sizeof(int))) / sizeof(int))];


  struct {
   pid_t _pid;
   uid_t _uid;
  } _kill;


  struct {
   timer_t _tid;
   int _overrun;
   char _pad[sizeof( uid_t) - sizeof(int)];
   sigval_t _sigval;
   int _sys_private;
  } _timer;


  struct {
   pid_t _pid;
   uid_t _uid;
   sigval_t _sigval;
  } _rt;


  struct {
   pid_t _pid;
   uid_t _uid;
   int _status;
   clock_t _utime;
   clock_t _stime;
  } _sigchld;


  struct {
   void *_addr;



  } _sigfault;


  struct {
   long _band;
   int _fd;
  } _sigpoll;
 } _sifields;
} siginfo_t;
# 251 "linux-2.6.18/include/asm-generic/siginfo.h"
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64 - (sizeof(int) * 2 + sizeof(sigval_t))) / sizeof(int))];
   int _tid;

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;







struct siginfo;
void do_schedule_next_timer(struct siginfo *info);





static inline  __attribute__((always_inline)) void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
 if (from->si_code < 0)
  (__builtin_constant_p(sizeof(*to)) ? __constant_memcpy((to),(from),(sizeof(*to))) : __memcpy((to),(from),(sizeof(*to))));
 else

  (__builtin_constant_p((3 * sizeof(int)) + sizeof(from->_sifields._sigchld)) ? __constant_memcpy((to),(from),((3 * sizeof(int)) + sizeof(from->_sifields._sigchld))) : __memcpy((to),(from),((3 * sizeof(int)) + sizeof(from->_sifields._sigchld))));
}



extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);
# 5 "linux-2.6.18/include/asm/siginfo.h" 2
# 6 "linux-2.6.18/include/linux/signal.h" 2
# 15 "linux-2.6.18/include/linux/signal.h"
struct sigqueue {
 struct list_head list;
 int flags;
 siginfo_t info;
 struct user_struct *user;
};




struct sigpending {
 struct list_head list;
 sigset_t signal;
};
# 73 "linux-2.6.18/include/linux/signal.h"
static inline  __attribute__((always_inline)) int sigisemptyset(sigset_t *set)
{
 extern void _NSIG_WORDS_is_unsupported_size(void);
 switch ((64 / 32)) {
 case 4:
  return (set->sig[3] | set->sig[2] |
   set->sig[1] | set->sig[0]) == 0;
 case 2:
  return (set->sig[1] | set->sig[0]) == 0;
 case 1:
  return set->sig[0] == 0;
 default:
  _NSIG_WORDS_is_unsupported_size();
  return 0;
 }
}
# 120 "linux-2.6.18/include/linux/signal.h"
static inline  __attribute__((always_inline)) void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 32)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 32)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void signandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 32)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
# 150 "linux-2.6.18/include/linux/signal.h"
static inline  __attribute__((always_inline)) void signotset(sigset_t *set) { extern void _NSIG_WORDS_is_unsupported_size(void); switch ((64 / 32)) { case 4: set->sig[3] = (~(set->sig[3])); set->sig[2] = (~(set->sig[2])); case 2: set->sig[1] = (~(set->sig[1])); case 1: set->sig[0] = (~(set->sig[0])); break; default: _NSIG_WORDS_is_unsupported_size(); } }




static inline  __attribute__((always_inline)) void sigemptyset(sigset_t *set)
{
 switch ((64 / 32)) {
 default:
  (__builtin_constant_p(0) ? (__builtin_constant_p((sizeof(sigset_t))) ? __constant_c_and_count_memset(((set)),((0x01010101UL*(unsigned char)(0))),((sizeof(sigset_t)))) : __constant_c_memset(((set)),((0x01010101UL*(unsigned char)(0))),((sizeof(sigset_t))))) : (__builtin_constant_p((sizeof(sigset_t))) ? __memset_generic((((set))),(((0))),(((sizeof(sigset_t))))) : __memset_generic(((set)),((0)),((sizeof(sigset_t))))));
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline  __attribute__((always_inline)) void sigfillset(sigset_t *set)
{
 switch ((64 / 32)) {
 default:
  (__builtin_constant_p(-1) ? (__builtin_constant_p((sizeof(sigset_t))) ? __constant_c_and_count_memset(((set)),((0x01010101UL*(unsigned char)(-1))),((sizeof(sigset_t)))) : __constant_c_memset(((set)),((0x01010101UL*(unsigned char)(-1))),((sizeof(sigset_t))))) : (__builtin_constant_p((sizeof(sigset_t))) ? __memset_generic((((set))),(((-1))),(((sizeof(sigset_t))))) : __memset_generic(((set)),((-1)),((sizeof(sigset_t))))));
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}



static inline  __attribute__((always_inline)) void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline  __attribute__((always_inline)) void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline  __attribute__((always_inline)) int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline  __attribute__((always_inline)) void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((64 / 32)) {
 default:
  (__builtin_constant_p(0) ? (__builtin_constant_p((sizeof(long)*((64 / 32)-1))) ? __constant_c_and_count_memset(((&set->sig[1])),((0x01010101UL*(unsigned char)(0))),((sizeof(long)*((64 / 32)-1)))) : __constant_c_memset(((&set->sig[1])),((0x01010101UL*(unsigned char)(0))),((sizeof(long)*((64 / 32)-1))))) : (__builtin_constant_p((sizeof(long)*((64 / 32)-1))) ? __memset_generic((((&set->sig[1]))),(((0))),(((sizeof(long)*((64 / 32)-1))))) : __memset_generic(((&set->sig[1])),((0)),((sizeof(long)*((64 / 32)-1))))));
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline  __attribute__((always_inline)) void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((64 / 32)) {
 default:
  (__builtin_constant_p(-1) ? (__builtin_constant_p((sizeof(long)*((64 / 32)-1))) ? __constant_c_and_count_memset(((&set->sig[1])),((0x01010101UL*(unsigned char)(-1))),((sizeof(long)*((64 / 32)-1)))) : __constant_c_memset(((&set->sig[1])),((0x01010101UL*(unsigned char)(-1))),((sizeof(long)*((64 / 32)-1))))) : (__builtin_constant_p((sizeof(long)*((64 / 32)-1))) ? __memset_generic((((&set->sig[1]))),(((-1))),(((sizeof(long)*((64 / 32)-1))))) : __memset_generic(((&set->sig[1])),((-1)),((sizeof(long)*((64 / 32)-1))))));
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline  __attribute__((always_inline)) void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 INIT_LIST_HEAD(&sig->list);
}

extern void flush_sigqueue(struct sigpending *queue);


static inline  __attribute__((always_inline)) int valid_signal(unsigned long sig)
{
 return sig <= 64 ? 1 : 0;
}

extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern long do_sigpending(void *, unsigned long);
extern int sigprocmask(int, sigset_t *, sigset_t *);

struct pt_regs;
extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
# 66 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/securebits.h" 1





typedef  unsigned  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_securebits[NUM_STACKS];   
# 67 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/fs_struct.h" 1



struct dentry;
struct vfsmount;

struct fs_struct {
 atomic_t count;
 rwlock_t lock;
 int umask;
 struct dentry * root, * pwd, * altroot;
 struct vfsmount * rootmnt, * pwdmnt, * altrootmnt;
};







extern void exit_fs(struct task_struct *);
extern void set_fs_altroot(void);
extern void set_fs_root(struct fs_struct *, struct vfsmount *, struct dentry *);
extern void set_fs_pwd(struct fs_struct *, struct vfsmount *, struct dentry *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void put_fs_struct(struct fs_struct *);
# 68 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/completion.h" 1
# 13 "linux-2.6.18/include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
# 39 "linux-2.6.18/include/linux/completion.h"
static inline  __attribute__((always_inline)) void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *) __attribute__((regparm(3))) ;
extern int wait_for_completion_interruptible(struct completion *x) __attribute__((regparm(3))) ;
extern unsigned long wait_for_completion_timeout(struct completion *x, unsigned long timeout) __attribute__((regparm(3))) ;

extern unsigned long wait_for_completion_interruptible_timeout( struct completion *x, unsigned long timeout) __attribute__((regparm(3))) ;


extern void complete(struct completion *) __attribute__((regparm(3))) ;
extern void complete_all(struct completion *) __attribute__((regparm(3))) ;
# 70 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/pid.h" 1



# 1 "linux-2.6.18/include/linux/rcupdate.h" 1
# 41 "linux-2.6.18/include/linux/rcupdate.h"
# 1 "linux-2.6.18/include/linux/percpu.h" 1



# 1 "linux-2.6.18/include/linux/slab.h" 1
# 12 "linux-2.6.18/include/linux/slab.h"
typedef struct kmem_cache kmem_cache_t;

# 1 "linux-2.6.18/include/linux/gfp.h" 1



# 1 "linux-2.6.18/include/linux/mmzone.h" 1
# 13 "linux-2.6.18/include/linux/mmzone.h"
# 1 "linux-2.6.18/include/linux/init.h" 1
# 63 "linux-2.6.18/include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
typedef  initcall_t  _GLOBAL_63_T; extern  _GLOBAL_63_T  _GLOBAL_0___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_1___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_2___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_3___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_4___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_5___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_6___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_7___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_8___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_9___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_10___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_11___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_12___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_13___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_14___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_15___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_16___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_17___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_18___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_19___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_20___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_21___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_22___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_23___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_24___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_25___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_26___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_27___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_28___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_29___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_30___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_31___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_32___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_33___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_34___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_35___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_36___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_37___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_38___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_39___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_40___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_41___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_42___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_43___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_44___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_45___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_46___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_47___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_48___security_initcall_start_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_49___security_initcall_start_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___security_initcall_start_I) *_GLOBAL___security_initcall_start_6_A[NUM_STACKS];extern  _GLOBAL_63_T  _GLOBAL_0___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_1___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_2___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_3___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_4___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_5___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_6___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_7___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_8___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_9___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_10___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_11___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_12___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_13___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_14___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_15___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_16___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_17___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_18___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_19___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_20___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_21___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_22___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_23___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_24___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_25___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_26___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_27___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_28___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_29___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_30___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_31___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_32___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_33___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_34___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_35___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_36___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_37___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_38___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_39___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_40___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_41___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_42___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_43___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_44___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_45___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_46___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_47___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_48___security_initcall_end_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_49___security_initcall_end_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___security_initcall_end_I) *_GLOBAL___security_initcall_end_7_A[NUM_STACKS];   


typedef  char  _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_1_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_2_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_3_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_4_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_5_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_6_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_7_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_8_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_9_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_10_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_11_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_12_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_13_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_14_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_15_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_16_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_17_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_18_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_19_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_20_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_21_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_22_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_23_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_24_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_25_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_26_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_27_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_28_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_29_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_30_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_31_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_32_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_33_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_34_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_35_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_36_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_37_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_38_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_39_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_40_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_41_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_42_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_43_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_44_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_45_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_46_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_47_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_48_saved_command_line_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_49_saved_command_line_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_saved_command_line_I) *_GLOBAL_saved_command_line_8_A[NUM_STACKS];  


extern void setup_arch(char **);
# 113 "linux-2.6.18/include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 148 "linux-2.6.18/include/linux/init.h"
void  __attribute__ ((__section__ (".init.text"))) parse_early_param(void);
# 14 "linux-2.6.18/include/linux/mmzone.h" 2
# 27 "linux-2.6.18/include/linux/mmzone.h"
struct free_area {
 struct list_head free_list;
 unsigned long nr_free;
};

struct pglist_data;
# 49 "linux-2.6.18/include/linux/mmzone.h"
enum zone_stat_item {
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_SLAB,
 NR_PAGETABLE,
 NR_FILE_DIRTY,
 NR_WRITEBACK,
 NR_UNSTABLE_NFS,
 NR_BOUNCE,
# 68 "linux-2.6.18/include/linux/mmzone.h"
 NR_VM_ZONE_STAT_ITEMS };

struct per_cpu_pages {
 int count;
 int high;
 int batch;
 struct list_head list;
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp[2];




} ;
# 139 "linux-2.6.18/include/linux/mmzone.h"
struct zone {

 unsigned long free_pages;
 unsigned long pages_min, pages_low, pages_high;
# 151 "linux-2.6.18/include/linux/mmzone.h"
 unsigned long lowmem_reserve[4];
# 160 "linux-2.6.18/include/linux/mmzone.h"
 struct per_cpu_pageset pageset[1];




 spinlock_t lock;




 struct free_area free_area[11];





 spinlock_t lru_lock;
 struct list_head active_list;
 struct list_head inactive_list;
 unsigned long nr_scan_active;
 unsigned long nr_scan_inactive;
 unsigned long nr_active;
 unsigned long nr_inactive;
 unsigned long pages_scanned;
 int all_unreclaimable;


 atomic_t reclaim_in_progress;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
# 208 "linux-2.6.18/include/linux/mmzone.h"
 int temp_priority;
 int prev_priority;



# 239 "linux-2.6.18/include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
# 260 "linux-2.6.18/include/linux/mmzone.h"
 unsigned long spanned_pages;
 unsigned long present_pages;




 char *name;
} ;
# 288 "linux-2.6.18/include/linux/mmzone.h"
struct zonelist {
 struct zone *zones[(1 << 0) * 4 + 1];
};
# 304 "linux-2.6.18/include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[4];
 struct zonelist node_zonelists[((0x07 + 1) / 2 + 1)];
 int nr_zones;



 struct bootmem_data *bdata;
# 323 "linux-2.6.18/include/linux/mmzone.h"
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
} pg_data_t;
# 342 "linux-2.6.18/include/linux/mmzone.h"
# 1 "linux-2.6.18/include/linux/memory_hotplug.h" 1



# 1 "linux-2.6.18/include/linux/mmzone.h" 1
# 5 "linux-2.6.18/include/linux/memory_hotplug.h" 2


# 1 "linux-2.6.18/include/linux/notifier.h" 1
# 13 "linux-2.6.18/include/linux/notifier.h"
# 1 "linux-2.6.18/include/linux/mutex.h" 1
# 47 "linux-2.6.18/include/linux/mutex.h"
struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;
# 60 "linux-2.6.18/include/linux/mutex.h"
};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;




};
# 105 "linux-2.6.18/include/linux/mutex.h"
extern void __mutex_init(struct mutex *lock, const char *name,
    struct lock_class_key *key);







static inline  __attribute__((always_inline)) int  __attribute__((regparm(3))) mutex_is_locked(struct mutex *lock)
{
 return ((&lock->count)->counter) != 1;
}





extern void  __attribute__((regparm(3))) mutex_lock(struct mutex *lock);
extern int  __attribute__((regparm(3))) mutex_lock_interruptible(struct mutex *lock);
# 136 "linux-2.6.18/include/linux/mutex.h"
extern int  __attribute__((regparm(3))) mutex_trylock(struct mutex *lock);
extern void  __attribute__((regparm(3))) mutex_unlock(struct mutex *lock);
# 14 "linux-2.6.18/include/linux/notifier.h" 2
# 35 "linux-2.6.18/include/linux/notifier.h"
struct notifier_block {
 int (*notifier_call)(struct notifier_block *, unsigned long, void *);
 struct notifier_block *next;
 int priority;
};

struct atomic_notifier_head {
 spinlock_t lock;
 struct notifier_block *head;
};

struct blocking_notifier_head {
 struct rw_semaphore rwsem;
 struct notifier_block *head;
};

struct raw_notifier_head {
 struct notifier_block *head;
};
# 88 "linux-2.6.18/include/linux/notifier.h"
extern int atomic_notifier_chain_register(struct atomic_notifier_head *,
  struct notifier_block *);
extern int blocking_notifier_chain_register(struct blocking_notifier_head *,
  struct notifier_block *);
extern int raw_notifier_chain_register(struct raw_notifier_head *,
  struct notifier_block *);

extern int atomic_notifier_chain_unregister(struct atomic_notifier_head *,
  struct notifier_block *);
extern int blocking_notifier_chain_unregister(struct blocking_notifier_head *,
  struct notifier_block *);
extern int raw_notifier_chain_unregister(struct raw_notifier_head *,
  struct notifier_block *);

extern int atomic_notifier_call_chain(struct atomic_notifier_head *,
  unsigned long val, void *v);
extern int blocking_notifier_call_chain(struct blocking_notifier_head *,
  unsigned long val, void *v);
extern int raw_notifier_call_chain(struct raw_notifier_head *,
  unsigned long val, void *v);
# 8 "linux-2.6.18/include/linux/memory_hotplug.h" 2

struct page;
struct zone;
struct pglist_data;
# 140 "linux-2.6.18/include/linux/memory_hotplug.h"
static inline  __attribute__((always_inline)) void pgdat_resize_lock(struct pglist_data *p, unsigned long *f) {}
static inline  __attribute__((always_inline)) void pgdat_resize_unlock(struct pglist_data *p, unsigned long *f) {}
static inline  __attribute__((always_inline)) void pgdat_resize_init(struct pglist_data *pgdat) {}

static inline  __attribute__((always_inline)) unsigned zone_span_seqbegin(struct zone *zone)
{
 return 0;
}
static inline  __attribute__((always_inline)) int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return 0;
}
static inline  __attribute__((always_inline)) void zone_span_writelock(struct zone *zone) {}
static inline  __attribute__((always_inline)) void zone_span_writeunlock(struct zone *zone) {}
static inline  __attribute__((always_inline)) void zone_seqlock_init(struct zone *zone) {}

static inline  __attribute__((always_inline)) int mhp_notimplemented(const char *func)
{
 printk("<4>" "%s() called, with CONFIG_MEMORY_HOTPLUG disabled\n", func);
 dump_stack();
 return -38;
}


static inline  __attribute__((always_inline)) int __remove_pages(struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages)
{
 printk("<4>" "%s() called, not yet supported\n", (__func__));
 dump_stack();
 return -38;
}

extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
# 343 "linux-2.6.18/include/linux/mmzone.h" 2

void __get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free, struct pglist_data *pgdat);
void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void);
void wakeup_kswapd(struct zone *zone, int order);
int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);

extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size);




static inline  __attribute__((always_inline)) void memory_present(int nid, unsigned long start, unsigned long end) {}
# 371 "linux-2.6.18/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

static inline  __attribute__((always_inline)) int is_highmem_idx(int idx)
{
 return (idx == 3);
}

static inline  __attribute__((always_inline)) int is_normal_idx(int idx)
{
 return (idx == 2);
}







static inline  __attribute__((always_inline)) int is_highmem(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 3;
}

static inline  __attribute__((always_inline)) int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 2;
}

static inline  __attribute__((always_inline)) int is_dma32(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 1;
}

static inline  __attribute__((always_inline)) int is_dma(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 0;
}


struct ctl_table;
struct file;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  _GLOBAL_0_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_1_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_2_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_3_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_4_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_5_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_6_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_7_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_8_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_9_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_10_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_11_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_12_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_13_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_14_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_15_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_16_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_17_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_18_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_19_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_20_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_21_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_22_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_23_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_24_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_25_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_26_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_27_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_28_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_29_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_30_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_31_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_32_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_33_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_34_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_35_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_36_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_37_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_38_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_39_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_40_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_41_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_42_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_43_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_44_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_45_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_46_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_47_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_48_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_49_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysctl_lowmem_reserve_ratio_I) *_GLOBAL_sysctl_lowmem_reserve_ratio_9_A[NUM_STACKS];   
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);

# 1 "linux-2.6.18/include/linux/topology.h" 1
# 34 "linux-2.6.18/include/linux/topology.h"
# 1 "linux-2.6.18/include/asm/topology.h" 1
# 109 "linux-2.6.18/include/asm/topology.h"
# 1 "linux-2.6.18/include/asm-generic/topology.h" 1
# 110 "linux-2.6.18/include/asm/topology.h" 2



extern cpumask_t cpu_coregroup_map(int cpu);
# 35 "linux-2.6.18/include/linux/topology.h" 2
# 426 "linux-2.6.18/include/linux/mmzone.h" 2







typedef  struct pglist_data   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_contig_page_data[NUM_STACKS];    
# 444 "linux-2.6.18/include/linux/mmzone.h"
extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
# 636 "linux-2.6.18/include/linux/mmzone.h"
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long  __attribute__ ((__section__ (".init.text"))) node_memmap_size_bytes(int, unsigned long, unsigned long);
# 5 "linux-2.6.18/include/linux/gfp.h" 2



struct vm_area_struct;
# 79 "linux-2.6.18/include/linux/gfp.h"
static inline  __attribute__((always_inline)) int gfp_zone(gfp_t gfp)
{
 int zone = 0x07 & ( int) gfp;
 do { if (zone >= ((0x07 + 1) / 2 + 1)) ; } while(0);
 return zone;
}
# 102 "linux-2.6.18/include/linux/gfp.h"
static inline  __attribute__((always_inline)) void arch_free_page(struct page *page, int order) { }


extern struct page *
__alloc_pages(gfp_t, unsigned int, struct zonelist *) __attribute__((regparm(3))) ;

static inline  __attribute__((always_inline)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return ((void *)0);


 if (nid < 0)
  nid = ((0));

 return __alloc_pages(gfp_mask, order,
  (&global_contig_page_data[get_stack_id()])->node_zonelists + gfp_zone(gfp_mask));
}
# 142 "linux-2.6.18/include/linux/gfp.h"
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order) __attribute__((regparm(3))) ;
extern unsigned long get_zeroed_page(gfp_t gfp_mask) __attribute__((regparm(3))) ;







extern void __free_pages(struct page *page, unsigned int order) __attribute__((regparm(3))) ;
extern void free_pages(unsigned long addr, unsigned int order) __attribute__((regparm(3))) ;
extern void free_hot_page(struct page *page) __attribute__((regparm(3))) ;
extern void free_cold_page(struct page *page) __attribute__((regparm(3))) ;




void page_alloc_init(void);



static inline  __attribute__((always_inline)) void drain_node_pages(int node) { };
# 15 "linux-2.6.18/include/linux/slab.h" 2
# 58 "linux-2.6.18/include/linux/slab.h"
extern void  __attribute__ ((__section__ (".init.text"))) kmem_cache_init(void);

extern kmem_cache_t *kmem_cache_create(const char *, size_t, size_t, unsigned long,
           void (*)(void *, kmem_cache_t *, unsigned long),
           void (*)(void *, kmem_cache_t *, unsigned long));
extern int kmem_cache_destroy(kmem_cache_t *);
extern int kmem_cache_shrink(kmem_cache_t *);
extern void *kmem_cache_alloc(kmem_cache_t *, gfp_t);
extern void *kmem_cache_zalloc(struct kmem_cache *, gfp_t);
extern void kmem_cache_free(kmem_cache_t *, void *);
extern unsigned int kmem_cache_size(kmem_cache_t *);
extern const char *kmem_cache_name(kmem_cache_t *);
extern kmem_cache_t *kmem_find_general_cachep(size_t size, gfp_t gfpflags);


struct cache_sizes {
 size_t cs_size;
 kmem_cache_t *cs_cachep;
 kmem_cache_t *cs_dmacachep;
};
typedef  struct cache_sizes   _GLOBAL_67_T; extern  _GLOBAL_67_T  _GLOBAL_0_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_1_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_2_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_3_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_4_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_5_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_6_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_7_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_8_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_9_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_10_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_11_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_12_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_13_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_14_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_15_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_16_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_17_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_18_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_19_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_20_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_21_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_22_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_23_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_24_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_25_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_26_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_27_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_28_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_29_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_30_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_31_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_32_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_33_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_34_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_35_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_36_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_37_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_38_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_39_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_40_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_41_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_42_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_43_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_44_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_45_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_46_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_47_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_48_malloc_sizes_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_49_malloc_sizes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_malloc_sizes_I) *_GLOBAL_malloc_sizes_10_A[NUM_STACKS] = { &_GLOBAL_0_malloc_sizes_I, &_GLOBAL_1_malloc_sizes_I, &_GLOBAL_2_malloc_sizes_I, &_GLOBAL_3_malloc_sizes_I, &_GLOBAL_4_malloc_sizes_I, &_GLOBAL_5_malloc_sizes_I, &_GLOBAL_6_malloc_sizes_I, &_GLOBAL_7_malloc_sizes_I, &_GLOBAL_8_malloc_sizes_I, &_GLOBAL_9_malloc_sizes_I, &_GLOBAL_10_malloc_sizes_I, &_GLOBAL_11_malloc_sizes_I, &_GLOBAL_12_malloc_sizes_I, &_GLOBAL_13_malloc_sizes_I, &_GLOBAL_14_malloc_sizes_I, &_GLOBAL_15_malloc_sizes_I, &_GLOBAL_16_malloc_sizes_I, &_GLOBAL_17_malloc_sizes_I, &_GLOBAL_18_malloc_sizes_I, &_GLOBAL_19_malloc_sizes_I, &_GLOBAL_20_malloc_sizes_I, &_GLOBAL_21_malloc_sizes_I, &_GLOBAL_22_malloc_sizes_I, &_GLOBAL_23_malloc_sizes_I, &_GLOBAL_24_malloc_sizes_I, &_GLOBAL_25_malloc_sizes_I, &_GLOBAL_26_malloc_sizes_I, &_GLOBAL_27_malloc_sizes_I, &_GLOBAL_28_malloc_sizes_I, &_GLOBAL_29_malloc_sizes_I, &_GLOBAL_30_malloc_sizes_I, &_GLOBAL_31_malloc_sizes_I, &_GLOBAL_32_malloc_sizes_I, &_GLOBAL_33_malloc_sizes_I, &_GLOBAL_34_malloc_sizes_I, &_GLOBAL_35_malloc_sizes_I, &_GLOBAL_36_malloc_sizes_I, &_GLOBAL_37_malloc_sizes_I, &_GLOBAL_38_malloc_sizes_I, &_GLOBAL_39_malloc_sizes_I, &_GLOBAL_40_malloc_sizes_I, &_GLOBAL_41_malloc_sizes_I, &_GLOBAL_42_malloc_sizes_I, &_GLOBAL_43_malloc_sizes_I, &_GLOBAL_44_malloc_sizes_I, &_GLOBAL_45_malloc_sizes_I, &_GLOBAL_46_malloc_sizes_I, &_GLOBAL_47_malloc_sizes_I, &_GLOBAL_48_malloc_sizes_I, &_GLOBAL_49_malloc_sizes_I, };   

extern void *__kmalloc(size_t, gfp_t);
# 134 "linux-2.6.18/include/linux/slab.h"
static inline  __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  int i = 0;





# 1 "linux-2.6.18/include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;



 if (size <= 128) goto found; else i++;



 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;
# 144 "linux-2.6.18/include/linux/slab.h" 2

  {
   extern void __you_cannot_kmalloc_that_much(void);
   __you_cannot_kmalloc_that_much();
  }
found:
  return kmem_cache_alloc((flags & (( gfp_t)0x01u)) ?
   (*_GLOBAL_malloc_sizes_10_A[get_stack_id()])[i].cs_dmacachep :
   (*_GLOBAL_malloc_sizes_10_A[get_stack_id()])[i].cs_cachep, flags);
 }
 return __kmalloc(size, flags);
}

extern void *__kzalloc(size_t, gfp_t);






static inline  __attribute__((always_inline)) void *kzalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  int i = 0;





# 1 "linux-2.6.18/include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;



 if (size <= 128) goto found; else i++;



 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;
# 174 "linux-2.6.18/include/linux/slab.h" 2

  {
   extern void __you_cannot_kzalloc_that_much(void);
   __you_cannot_kzalloc_that_much();
  }
found:
  return kmem_cache_zalloc((flags & (( gfp_t)0x01u)) ?
   (*_GLOBAL_malloc_sizes_10_A[get_stack_id()])[i].cs_dmacachep :
   (*_GLOBAL_malloc_sizes_10_A[get_stack_id()])[i].cs_cachep, flags);
 }
 return __kzalloc(size, flags);
}







static inline  __attribute__((always_inline)) void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (n != 0 && size > (~0UL) / n)
  return ((void *)0);
 return kzalloc(n * size, flags);
}

extern void kfree(const void *);
extern unsigned int ksize(const void *);
extern int slab_is_available(void);





static inline  __attribute__((always_inline)) void *kmem_cache_alloc_node(kmem_cache_t *cachep, gfp_t flags, int node)
{
 return kmem_cache_alloc(cachep, flags);
}
static inline  __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc(size, flags);
}


extern int kmem_cache_reap(int) __attribute__((regparm(3))) ;
extern int kmem_ptr_validate(kmem_cache_t *cachep, void *ptr) __attribute__((regparm(3))) ;
# 258 "linux-2.6.18/include/linux/slab.h"
typedef  kmem_cache_t  _GLOBAL_68_T; extern  _GLOBAL_68_T  * global_vm_area_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_69_T; extern  _GLOBAL_69_T  * global_names_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_70_T; extern  _GLOBAL_70_T  * global_files_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_71_T; extern  _GLOBAL_71_T  * global_filp_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_72_T; extern  _GLOBAL_72_T  * global_fs_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_73_T; extern  _GLOBAL_73_T  * global_sighand_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_74_T; extern  _GLOBAL_74_T  * global_bio_cachep[NUM_STACKS];   

typedef  atomic_t  _GLOBAL_75_T; extern  _GLOBAL_75_T  global_slab_reclaim_pages[NUM_STACKS];   
# 5 "linux-2.6.18/include/linux/percpu.h" 2
# 42 "linux-2.6.18/include/linux/percpu.h"
static inline  __attribute__((always_inline)) void *__alloc_percpu(size_t size)
{
 void *ret = kmalloc(size, ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
 if (ret)
  (__builtin_constant_p(0) ? (__builtin_constant_p((size)) ? __constant_c_and_count_memset(((ret)),((0x01010101UL*(unsigned char)(0))),((size))) : __constant_c_memset(((ret)),((0x01010101UL*(unsigned char)(0))),((size)))) : (__builtin_constant_p((size)) ? __memset_generic((((ret))),(((0))),(((size)))) : __memset_generic(((ret)),((0)),((size)))));
 return ret;
}
static inline  __attribute__((always_inline)) void free_percpu(const void *ptr)
{
 kfree(ptr);
}
# 42 "linux-2.6.18/include/linux/rcupdate.h" 2
# 50 "linux-2.6.18/include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};
# 64 "linux-2.6.18/include/linux/rcupdate.h"
struct rcu_ctrlblk {
 long cur;
 long completed;
 int next_pending;

 spinlock_t lock ;
 cpumask_t cpumask;

} ;


static inline  __attribute__((always_inline)) int rcu_batch_before(long a, long b)
{
        return (a - b) < 0;
}


static inline  __attribute__((always_inline)) int rcu_batch_after(long a, long b)
{
        return (a - b) > 0;
}






struct rcu_data {

 long quiescbatch;
 int passed_quiesc;
 int qs_pending;


 long batch;
 struct rcu_head *nxtlist;
 struct rcu_head **nxttail;
 long qlen;
 struct rcu_head *curlist;
 struct rcu_head **curtail;
 struct rcu_head *donelist;
 struct rcu_head **donetail;
 long blimit;
 int cpu;
 struct rcu_head barrier;



};

typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_per_cpu__rcu_data[NUM_STACKS];    
typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_per_cpu__rcu_bh_data[NUM_STACKS];    







static inline  __attribute__((always_inline)) void rcu_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)(cpu), &global_per_cpu__rcu_data[get_stack_id()]));
 rdp->passed_quiesc = 1;
}
static inline  __attribute__((always_inline)) void rcu_bh_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)(cpu), &global_per_cpu__rcu_bh_data[get_stack_id()]));
 rdp->passed_quiesc = 1;
}

extern int rcu_pending(int cpu);
extern int rcu_needs_cpu(int cpu);
# 273 "linux-2.6.18/include/linux/rcupdate.h"
extern void rcu_init(void);
extern void rcu_check_callbacks(int cpu, int user);
extern void rcu_restart_cpu(int cpu);
extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);


extern void call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *head)) __attribute__((regparm(3))) ;

extern void call_rcu_bh(struct rcu_head *head, void (*func)(struct rcu_head *head)) __attribute__((regparm(3))) ;

extern void synchronize_rcu(void);
void synchronize_idle(void);
extern void rcu_barrier(void);
# 5 "linux-2.6.18/include/linux/pid.h" 2

enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};
# 42 "linux-2.6.18/include/linux/pid.h"
struct pid
{
 atomic_t count;

 int nr;
 struct hlist_node pid_chain;

 struct hlist_head tasks[PIDTYPE_MAX];
 struct rcu_head rcu;
};

struct pid_link
{
 struct hlist_node node;
 struct pid *pid;
};

static inline  __attribute__((always_inline)) struct pid *get_pid(struct pid *pid)
{
 if (pid)
  atomic_inc(&pid->count);
 return pid;
}

extern void put_pid(struct pid *pid) __attribute__((regparm(3))) ;
extern struct task_struct *pid_task(struct pid *pid, enum pid_type) __attribute__((regparm(3))) ;
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type) __attribute__((regparm(3))) ;






extern int attach_pid(struct task_struct *task, enum pid_type type, int nr) __attribute__((regparm(3))) ;


extern void detach_pid(struct task_struct *task, enum pid_type) __attribute__((regparm(3))) ;





extern struct pid *find_pid(int nr) __attribute__((regparm(3))) ;




extern struct pid *find_get_pid(int nr);

extern struct pid *alloc_pid(void);
extern void free_pid(struct pid *pid) __attribute__((regparm(3))) ;
# 71 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/linux/seccomp.h" 1
# 28 "linux-2.6.18/include/linux/seccomp.h"
typedef struct { } seccomp_t;



static inline  __attribute__((always_inline)) int has_secure_computing(struct thread_info *ti)
{
 return 0;
}
# 74 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/futex.h" 1



# 1 "linux-2.6.18/include/linux/sched.h" 1
# 5 "linux-2.6.18/include/linux/futex.h" 2
# 33 "linux-2.6.18/include/linux/futex.h"
struct robust_list {
 struct robust_list *next;
};
# 45 "linux-2.6.18/include/linux/futex.h"
struct robust_list_head {



 struct robust_list list;







 long futex_offset;
# 69 "linux-2.6.18/include/linux/futex.h"
 struct robust_list *list_op_pending;
};
# 96 "linux-2.6.18/include/linux/futex.h"
long do_futex(u32 *uaddr, int op, u32 val, unsigned long timeout,
       u32 *uaddr2, u32 val2, u32 val3);

extern int
handle_futex_death(u32 *uaddr, struct task_struct *curr, int pi);


extern void exit_robust_list(struct task_struct *curr);
extern void exit_pi_state_list(struct task_struct *curr);
# 76 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/rtmutex.h" 1
# 16 "linux-2.6.18/include/linux/rtmutex.h"
# 1 "linux-2.6.18/include/linux/plist.h" 1
# 80 "linux-2.6.18/include/linux/plist.h"
struct plist_head {
 struct list_head prio_list;
 struct list_head node_list;



};

struct plist_node {
 int prio;
 struct plist_head plist;
};
# 128 "linux-2.6.18/include/linux/plist.h"
static inline  __attribute__((always_inline)) void
plist_head_init(struct plist_head *head, spinlock_t *lock)
{
 INIT_LIST_HEAD(&head->prio_list);
 INIT_LIST_HEAD(&head->node_list);



}







static inline  __attribute__((always_inline)) void plist_node_init(struct plist_node *node, int prio)
{
 node->prio = prio;
 plist_head_init(&node->plist, ((void *)0));
}

extern void plist_add(struct plist_node *node, struct plist_head *head);
extern void plist_del(struct plist_node *node, struct plist_head *head);
# 200 "linux-2.6.18/include/linux/plist.h"
static inline  __attribute__((always_inline)) int plist_head_empty(const struct plist_head *head)
{
 return list_empty(&head->node_list);
}






static inline  __attribute__((always_inline)) int plist_node_empty(const struct plist_node *node)
{
 return plist_head_empty(&node->plist);
}
# 242 "linux-2.6.18/include/linux/plist.h"
static inline  __attribute__((always_inline)) struct plist_node* plist_first(const struct plist_head *head)
{
 return ({ const typeof( ((struct plist_node *)0)->plist.node_list ) *__mptr = (head->node_list.next); (struct plist_node *)( (char *)__mptr - __builtin_offsetof(struct plist_node,plist.node_list) );});

}
# 17 "linux-2.6.18/include/linux/rtmutex.h" 2
# 26 "linux-2.6.18/include/linux/rtmutex.h"
struct rt_mutex {
 spinlock_t wait_lock;
 struct plist_head wait_list;
 struct task_struct *owner;






};

struct rt_mutex_waiter;
struct hrtimer_sleeper;






 static inline  __attribute__((always_inline)) int rt_mutex_debug_check_no_locks_freed(const void *from,
             unsigned long len)
 {
 return 0;
 }
# 80 "linux-2.6.18/include/linux/rtmutex.h"
static inline  __attribute__((always_inline)) int rt_mutex_is_locked(struct rt_mutex *lock)
{
 return lock->owner != ((void *)0);
}

extern void __rt_mutex_init(struct rt_mutex *lock, const char *name);
extern void rt_mutex_destroy(struct rt_mutex *lock);

extern void rt_mutex_lock(struct rt_mutex *lock);
extern int rt_mutex_lock_interruptible(struct rt_mutex *lock,
      int detect_deadlock);
extern int rt_mutex_timed_lock(struct rt_mutex *lock,
     struct hrtimer_sleeper *timeout,
     int detect_deadlock);

extern int rt_mutex_trylock(struct rt_mutex *lock);

extern void rt_mutex_unlock(struct rt_mutex *lock);
# 77 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/linux/param.h" 1
# 80 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/resource.h" 1





struct task_struct;
# 23 "linux-2.6.18/include/linux/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};
# 70 "linux-2.6.18/include/linux/resource.h"
# 1 "linux-2.6.18/include/asm/resource.h" 1



# 1 "linux-2.6.18/include/asm-generic/resource.h" 1
# 5 "linux-2.6.18/include/asm/resource.h" 2
# 71 "linux-2.6.18/include/linux/resource.h" 2

int getrusage(struct task_struct *p, int who, struct rusage *ru);
# 81 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/timer.h" 1







struct tvec_t_base_s;

struct timer_list {
 struct list_head entry;
 unsigned long expires;

 void (*function)(unsigned long);
 unsigned long data;

 struct tvec_t_base_s *base;
};

typedef  struct tvec_t_base_s   _GLOBAL_78_T; extern  _GLOBAL_78_T  _GLOBAL_0_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_1_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_2_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_3_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_4_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_5_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_6_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_7_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_8_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_9_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_10_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_11_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_12_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_13_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_14_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_15_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_16_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_17_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_18_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_19_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_20_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_21_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_22_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_23_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_24_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_25_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_26_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_27_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_28_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_29_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_30_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_31_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_32_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_33_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_34_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_35_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_36_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_37_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_38_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_39_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_40_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_41_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_42_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_43_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_44_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_45_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_46_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_47_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_48_boot_tvec_bases_I; extern  _GLOBAL_78_T  _GLOBAL_49_boot_tvec_bases_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_tvec_bases_I) *_GLOBAL_boot_tvec_bases_11_A[NUM_STACKS] = { &_GLOBAL_0_boot_tvec_bases_I, &_GLOBAL_1_boot_tvec_bases_I, &_GLOBAL_2_boot_tvec_bases_I, &_GLOBAL_3_boot_tvec_bases_I, &_GLOBAL_4_boot_tvec_bases_I, &_GLOBAL_5_boot_tvec_bases_I, &_GLOBAL_6_boot_tvec_bases_I, &_GLOBAL_7_boot_tvec_bases_I, &_GLOBAL_8_boot_tvec_bases_I, &_GLOBAL_9_boot_tvec_bases_I, &_GLOBAL_10_boot_tvec_bases_I, &_GLOBAL_11_boot_tvec_bases_I, &_GLOBAL_12_boot_tvec_bases_I, &_GLOBAL_13_boot_tvec_bases_I, &_GLOBAL_14_boot_tvec_bases_I, &_GLOBAL_15_boot_tvec_bases_I, &_GLOBAL_16_boot_tvec_bases_I, &_GLOBAL_17_boot_tvec_bases_I, &_GLOBAL_18_boot_tvec_bases_I, &_GLOBAL_19_boot_tvec_bases_I, &_GLOBAL_20_boot_tvec_bases_I, &_GLOBAL_21_boot_tvec_bases_I, &_GLOBAL_22_boot_tvec_bases_I, &_GLOBAL_23_boot_tvec_bases_I, &_GLOBAL_24_boot_tvec_bases_I, &_GLOBAL_25_boot_tvec_bases_I, &_GLOBAL_26_boot_tvec_bases_I, &_GLOBAL_27_boot_tvec_bases_I, &_GLOBAL_28_boot_tvec_bases_I, &_GLOBAL_29_boot_tvec_bases_I, &_GLOBAL_30_boot_tvec_bases_I, &_GLOBAL_31_boot_tvec_bases_I, &_GLOBAL_32_boot_tvec_bases_I, &_GLOBAL_33_boot_tvec_bases_I, &_GLOBAL_34_boot_tvec_bases_I, &_GLOBAL_35_boot_tvec_bases_I, &_GLOBAL_36_boot_tvec_bases_I, &_GLOBAL_37_boot_tvec_bases_I, &_GLOBAL_38_boot_tvec_bases_I, &_GLOBAL_39_boot_tvec_bases_I, &_GLOBAL_40_boot_tvec_bases_I, &_GLOBAL_41_boot_tvec_bases_I, &_GLOBAL_42_boot_tvec_bases_I, &_GLOBAL_43_boot_tvec_bases_I, &_GLOBAL_44_boot_tvec_bases_I, &_GLOBAL_45_boot_tvec_bases_I, &_GLOBAL_46_boot_tvec_bases_I, &_GLOBAL_47_boot_tvec_bases_I, &_GLOBAL_48_boot_tvec_bases_I, &_GLOBAL_49_boot_tvec_bases_I, };   
# 33 "linux-2.6.18/include/linux/timer.h"
void  __attribute__((regparm(3))) init_timer(struct timer_list * timer);

static inline  __attribute__((always_inline)) void setup_timer(struct timer_list * timer,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer(timer);
}
# 54 "linux-2.6.18/include/linux/timer.h"
static inline  __attribute__((always_inline)) int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int __mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer(struct timer_list *timer, unsigned long expires);

extern unsigned long next_timer_interrupt(void);
# 80 "linux-2.6.18/include/linux/timer.h"
static inline  __attribute__((always_inline)) void add_timer(struct timer_list *timer)
{
 do { if (timer_pending(timer)) ; } while(0);
 __mod_timer(timer, timer->expires);
}
# 96 "linux-2.6.18/include/linux/timer.h"
extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern int it_real_fn(struct hrtimer *);
# 82 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/hrtimer.h" 1
# 19 "linux-2.6.18/include/linux/hrtimer.h"
# 1 "linux-2.6.18/include/linux/ktime.h" 1
# 46 "linux-2.6.18/include/linux/ktime.h"
typedef union {
 s64 tv64;

 struct {



 s32 nsec, sec;

 } tv;

} ktime_t;
# 138 "linux-2.6.18/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t ktime_set(const long secs, const unsigned long nsecs)
{
 return (ktime_t) { .tv = { .sec = secs, .nsec = nsecs } };
}
# 150 "linux-2.6.18/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t ktime_sub(const ktime_t lhs, const ktime_t rhs)
{
 ktime_t res;

 res.tv64 = lhs.tv64 - rhs.tv64;
 if (res.tv.nsec < 0)
  res.tv.nsec += 1000000000L;

 return res;
}
# 168 "linux-2.6.18/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t ktime_add(const ktime_t add1, const ktime_t add2)
{
 ktime_t res;

 res.tv64 = add1.tv64 + add2.tv64;
# 181 "linux-2.6.18/include/linux/ktime.h"
 if (res.tv.nsec >= 1000000000L)
  res.tv64 += (u32)-1000000000L;

 return res;
}
# 194 "linux-2.6.18/include/linux/ktime.h"
extern ktime_t ktime_add_ns(const ktime_t kt, u64 nsec);







static inline  __attribute__((always_inline)) ktime_t timespec_to_ktime(const struct timespec ts)
{
 return (ktime_t) { .tv = { .sec = (s32)ts.tv_sec,
          .nsec = (s32)ts.tv_nsec } };
}







static inline  __attribute__((always_inline)) ktime_t timeval_to_ktime(const struct timeval tv)
{
 return (ktime_t) { .tv = { .sec = (s32)tv.tv_sec,
       .nsec = (s32)tv.tv_usec * 1000 } };
}







static inline  __attribute__((always_inline)) struct timespec ktime_to_timespec(const ktime_t kt)
{
 return (struct timespec) { .tv_sec = (time_t) kt.tv.sec,
       .tv_nsec = (long) kt.tv.nsec };
}







static inline  __attribute__((always_inline)) struct timeval ktime_to_timeval(const ktime_t kt)
{
 return (struct timeval) {
  .tv_sec = (time_t) kt.tv.sec,
  .tv_usec = (suseconds_t) (kt.tv.nsec / 1000L) };
}







static inline  __attribute__((always_inline)) u64 ktime_to_ns(const ktime_t kt)
{
 return (u64) kt.tv.sec * 1000000000L + kt.tv.nsec;
}
# 268 "linux-2.6.18/include/linux/ktime.h"
extern void ktime_get_ts(struct timespec *ts);
# 20 "linux-2.6.18/include/linux/hrtimer.h" 2







enum hrtimer_mode {
 HRTIMER_ABS,
 HRTIMER_REL,
};

enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};



struct hrtimer_base;
# 52 "linux-2.6.18/include/linux/hrtimer.h"
struct hrtimer {
 struct rb_node node;
 ktime_t expires;
 int (*function)(struct hrtimer *);
 struct hrtimer_base *base;
};
# 66 "linux-2.6.18/include/linux/hrtimer.h"
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
# 85 "linux-2.6.18/include/linux/hrtimer.h"
struct hrtimer_base {
 clockid_t index;
 spinlock_t lock;
 struct rb_root active;
 struct rb_node *first;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t (*get_softirq_time)(void);
 struct hrtimer *curr_timer;
 ktime_t softirq_time;
 struct lock_class_key lock_key;
};
# 108 "linux-2.6.18/include/linux/hrtimer.h"
extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);


extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    const enum hrtimer_mode mode);
extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);




extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);





static inline  __attribute__((always_inline)) int hrtimer_active(const struct hrtimer *timer)
{
 return ((struct rb_node *)((&timer->node)->rb_parent_color & ~3)) != &timer->node;
}


extern unsigned long
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         const enum hrtimer_mode mode,
         const clockid_t clockid);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);


extern void hrtimer_run_queues(void);


extern void  __attribute__ ((__section__ (".init.text"))) hrtimers_init(void);
# 83 "linux-2.6.18/include/linux/sched.h" 2



struct exec_domain;
struct futex_pi_state;
# 105 "linux-2.6.18/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_79_T; extern  _GLOBAL_79_T  _GLOBAL_0_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_1_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_2_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_3_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_4_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_5_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_6_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_7_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_8_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_9_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_10_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_11_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_12_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_13_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_14_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_15_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_16_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_17_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_18_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_19_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_20_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_21_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_22_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_23_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_24_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_25_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_26_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_27_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_28_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_29_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_30_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_31_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_32_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_33_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_34_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_35_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_36_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_37_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_38_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_39_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_40_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_41_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_42_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_43_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_44_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_45_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_46_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_47_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_48_avenrun_I [ ] ; extern  _GLOBAL_79_T  _GLOBAL_49_avenrun_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_avenrun_I) *_GLOBAL_avenrun_12_A[NUM_STACKS] = { &_GLOBAL_0_avenrun_I, &_GLOBAL_1_avenrun_I, &_GLOBAL_2_avenrun_I, &_GLOBAL_3_avenrun_I, &_GLOBAL_4_avenrun_I, &_GLOBAL_5_avenrun_I, &_GLOBAL_6_avenrun_I, &_GLOBAL_7_avenrun_I, &_GLOBAL_8_avenrun_I, &_GLOBAL_9_avenrun_I, &_GLOBAL_10_avenrun_I, &_GLOBAL_11_avenrun_I, &_GLOBAL_12_avenrun_I, &_GLOBAL_13_avenrun_I, &_GLOBAL_14_avenrun_I, &_GLOBAL_15_avenrun_I, &_GLOBAL_16_avenrun_I, &_GLOBAL_17_avenrun_I, &_GLOBAL_18_avenrun_I, &_GLOBAL_19_avenrun_I, &_GLOBAL_20_avenrun_I, &_GLOBAL_21_avenrun_I, &_GLOBAL_22_avenrun_I, &_GLOBAL_23_avenrun_I, &_GLOBAL_24_avenrun_I, &_GLOBAL_25_avenrun_I, &_GLOBAL_26_avenrun_I, &_GLOBAL_27_avenrun_I, &_GLOBAL_28_avenrun_I, &_GLOBAL_29_avenrun_I, &_GLOBAL_30_avenrun_I, &_GLOBAL_31_avenrun_I, &_GLOBAL_32_avenrun_I, &_GLOBAL_33_avenrun_I, &_GLOBAL_34_avenrun_I, &_GLOBAL_35_avenrun_I, &_GLOBAL_36_avenrun_I, &_GLOBAL_37_avenrun_I, &_GLOBAL_38_avenrun_I, &_GLOBAL_39_avenrun_I, &_GLOBAL_40_avenrun_I, &_GLOBAL_41_avenrun_I, &_GLOBAL_42_avenrun_I, &_GLOBAL_43_avenrun_I, &_GLOBAL_44_avenrun_I, &_GLOBAL_45_avenrun_I, &_GLOBAL_46_avenrun_I, &_GLOBAL_47_avenrun_I, &_GLOBAL_48_avenrun_I, &_GLOBAL_49_avenrun_I, };   
# 119 "linux-2.6.18/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_total_forks[NUM_STACKS];    
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_nr_threads[NUM_STACKS];   
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_last_pid[NUM_STACKS];   
typedef  __typeof__ ( unsigned long  )   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_per_cpu__process_counts[NUM_STACKS];    
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_active(void);
extern unsigned long nr_iowait(void);
extern unsigned long weighted_cpuload(const int cpu);
# 184 "linux-2.6.18/include/linux/sched.h"
typedef  rwlock_t  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_tasklist_lock[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_mmlist_lock[NUM_STACKS];   

struct task_struct;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void init_idle(struct task_struct *idle, int cpu);

typedef  cpumask_t  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_nohz_cpu_mask[NUM_STACKS];   

extern void show_state(void);
extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void update_process_times(int user);
extern void scheduler_tick(void);


extern void softlockup_tick(void);
extern void spawn_softlockup_task(void);
extern void touch_softlockup_watchdog(void);
# 233 "linux-2.6.18/include/linux/sched.h"
extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout) __attribute__((regparm(3))) ;
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
  __attribute__((regparm(0))) void schedule(void);

struct namespace;




typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_sysctl_max_map_count[NUM_STACKS];   

# 1 "linux-2.6.18/include/linux/aio.h" 1




# 1 "linux-2.6.18/include/linux/workqueue.h" 1
# 12 "linux-2.6.18/include/linux/workqueue.h"
struct workqueue_struct;

struct work_struct {
 unsigned long pending;
 struct list_head entry;
 void (*func)(void *);
 void *data;
 void *wq_data;
 struct timer_list timer;
};

struct execute_work {
 struct work_struct work;
};
# 57 "linux-2.6.18/include/linux/workqueue.h"
extern struct workqueue_struct *__create_workqueue(const char *name,
          int singlethread);



extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work) __attribute__((regparm(3))) ;
extern int queue_delayed_work(struct workqueue_struct *wq, struct work_struct *work, unsigned long delay) __attribute__((regparm(3))) ;
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
 struct work_struct *work, unsigned long delay);
extern void flush_workqueue(struct workqueue_struct *wq) __attribute__((regparm(3))) ;

extern int schedule_work(struct work_struct *work) __attribute__((regparm(3))) ;
extern int schedule_delayed_work(struct work_struct *work, unsigned long delay) __attribute__((regparm(3))) ;

extern int schedule_delayed_work_on(int cpu, struct work_struct *work, unsigned long delay);
extern int schedule_on_each_cpu(void (*func)(void *info), void *info);
extern void flush_scheduled_work(void);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);
void cancel_rearming_delayed_work(struct work_struct *work);
void cancel_rearming_delayed_workqueue(struct workqueue_struct *,
           struct work_struct *);
int execute_in_process_context(void (*fn)(void *), void *,
          struct execute_work *);






static inline  __attribute__((always_inline)) int cancel_delayed_work(struct work_struct *work)
{
 int ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(0, &work->pending);
 return ret;
}
# 6 "linux-2.6.18/include/linux/aio.h" 2
# 1 "linux-2.6.18/include/linux/aio_abi.h" 1
# 32 "linux-2.6.18/include/linux/aio_abi.h"
typedef unsigned long aio_context_t;

enum {
 IOCB_CMD_PREAD = 0,
 IOCB_CMD_PWRITE = 1,
 IOCB_CMD_FSYNC = 2,
 IOCB_CMD_FDSYNC = 3,




 IOCB_CMD_NOOP = 6,
};


struct io_event {
 __u64 data;
 __u64 obj;
 __s64 res;
 __s64 res2;
};
# 68 "linux-2.6.18/include/linux/aio_abi.h"
struct iocb {

 __u64 aio_data;
 __u32 aio_key, aio_reserved1;



 __u16 aio_lio_opcode;
 __s16 aio_reqprio;
 __u32 aio_fildes;

 __u64 aio_buf;
 __u64 aio_nbytes;
 __s64 aio_offset;


 __u64 aio_reserved2;
 __u64 aio_reserved3;
};
# 7 "linux-2.6.18/include/linux/aio.h" 2






struct kioctx;
# 85 "linux-2.6.18/include/linux/aio.h"
struct kiocb {
 struct list_head ki_run_list;
 long ki_flags;
 int ki_users;
 unsigned ki_key;

 struct file *ki_filp;
 struct kioctx *ki_ctx;
 int (*ki_cancel)(struct kiocb *, struct io_event *);
 ssize_t (*ki_retry)(struct kiocb *);
 void (*ki_dtor)(struct kiocb *);

 union {
  void *user;
  struct task_struct *tsk;
 } ki_obj;

 __u64 ki_user_data;
 wait_queue_t ki_wait;
 loff_t ki_pos;

 void *private;

 unsigned short ki_opcode;
 size_t ki_nbytes;
 char *ki_buf;
 size_t ki_left;
 long ki_retried;
 long ki_kicked;
 long ki_queued;

 struct list_head ki_list;

};
# 140 "linux-2.6.18/include/linux/aio.h"
struct aio_ring {
 unsigned id;
 unsigned nr;
 unsigned head;
 unsigned tail;

 unsigned magic;
 unsigned compat_features;
 unsigned incompat_features;
 unsigned header_length;


 struct io_event io_events[0];
};




struct aio_ring_info {
 unsigned long mmap_base;
 unsigned long mmap_size;

 struct page **ring_pages;
 spinlock_t ring_lock;
 long nr_pages;

 unsigned nr, tail;

 struct page *internal_pages[8];
};

struct kioctx {
 atomic_t users;
 int dead;
 struct mm_struct *mm;


 unsigned long user_id;
 struct kioctx *next;

 wait_queue_head_t wait;

 spinlock_t ctx_lock;

 int reqs_active;
 struct list_head active_reqs;
 struct list_head run_list;


 unsigned max_reqs;

 struct aio_ring_info ring_info;

 struct work_struct wq;
};


typedef  unsigned  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_aio_max_size[NUM_STACKS];   

extern ssize_t wait_on_sync_kiocb(struct kiocb *iocb) __attribute__((regparm(3))) ;
extern int aio_put_req(struct kiocb *iocb) __attribute__((regparm(3))) ;
extern void kick_iocb(struct kiocb *iocb) __attribute__((regparm(3))) ;
extern int aio_complete(struct kiocb *iocb, long res, long res2) __attribute__((regparm(3))) ;
extern void __put_ioctx(struct kioctx *ctx) __attribute__((regparm(3))) ;
struct mm_struct;
extern void exit_aio(struct mm_struct *mm) __attribute__((regparm(3))) ;
extern struct kioctx *lookup_ioctx(unsigned long ctx_id);
extern int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb) __attribute__((regparm(3))) ;



struct kioctx *lookup_ioctx(unsigned long ctx_id);
int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb) __attribute__((regparm(3))) ;
# 241 "linux-2.6.18/include/linux/aio.h"
static inline  __attribute__((always_inline)) struct kiocb *list_kiocb(struct list_head *h)
{
 return ({ const typeof( ((struct kiocb *)0)->ki_list ) *__mptr = (h); (struct kiocb *)( (char *)__mptr - __builtin_offsetof(struct kiocb,ki_list) );});
}


typedef  unsigned long   _GLOBAL_89_T; extern  _GLOBAL_89_T  global_aio_nr[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_90_T; extern  _GLOBAL_90_T  global_aio_max_nr[NUM_STACKS];    
# 249 "linux-2.6.18/include/linux/sched.h" 2

extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);
extern void arch_unmap_area(struct mm_struct *, unsigned long);
extern void arch_unmap_area_topdown(struct mm_struct *, unsigned long);
# 270 "linux-2.6.18/include/linux/sched.h"
typedef atomic_long_t mm_counter_t;
# 298 "linux-2.6.18/include/linux/sched.h"
struct mm_struct {
 struct vm_area_struct * mmap;
 struct rb_root mm_rb;
 struct vm_area_struct * mmap_cache;
 unsigned long (*get_unmapped_area) (struct file *filp,
    unsigned long addr, unsigned long len,
    unsigned long pgoff, unsigned long flags);
 void (*unmap_area) (struct mm_struct *mm, unsigned long addr);
 unsigned long mmap_base;
 unsigned long task_size;
 unsigned long cached_hole_size;
 unsigned long free_area_cache;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;
 struct rw_semaphore mmap_sem;
 spinlock_t page_table_lock;

 struct list_head mmlist;







 mm_counter_t _file_rss;
 mm_counter_t _anon_rss;

 unsigned long hiwater_rss;
 unsigned long hiwater_vm;

 unsigned long total_vm, locked_vm, shared_vm, exec_vm;
 unsigned long stack_vm, reserved_vm, def_flags, nr_ptes;
 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;

 unsigned long saved_auxv[44];

 unsigned dumpable:2;
 cpumask_t cpu_vm_mask;


 mm_context_t context;


 unsigned long swap_token_time;
 char recent_pagein;


 int core_waiters;
 struct completion *core_startup_done, core_done;


 rwlock_t ioctx_list_lock;
 struct kioctx *ioctx_list;
};

struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[64];
 spinlock_t siglock;
};

struct pacct_struct {
 int ac_flag;
 long ac_exitcode;
 unsigned long ac_mem;
 cputime_t ac_utime, ac_stime;
 unsigned long ac_minflt, ac_majflt;
};
# 379 "linux-2.6.18/include/linux/sched.h"
struct signal_struct {
 atomic_t count;
 atomic_t live;

 wait_queue_head_t wait_chldexit;


 struct task_struct *curr_target;


 struct sigpending shared_pending;


 int group_exit_code;





 struct task_struct *group_exit_task;
 int notify_count;


 int group_stop_count;
 unsigned int flags;


 struct list_head posix_timers;


 struct hrtimer real_timer;
 struct task_struct *tsk;
 ktime_t it_real_incr;


 cputime_t it_prof_expires, it_virt_expires;
 cputime_t it_prof_incr, it_virt_incr;


 pid_t pgrp;
 pid_t tty_old_pgrp;
 pid_t session;

 int leader;

 struct tty_struct *tty;







 cputime_t utime, stime, cutime, cstime;
 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;







 unsigned long long sched_time;
# 453 "linux-2.6.18/include/linux/sched.h"
 struct rlimit rlim[15];

 struct list_head cpu_timers[3];
# 470 "linux-2.6.18/include/linux/sched.h"
};
# 513 "linux-2.6.18/include/linux/sched.h"
struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;





 unsigned long mq_bytes;
 unsigned long locked_shm;







 struct list_head uidhash_list;
 uid_t uid;
};

extern struct user_struct *find_user(uid_t);

typedef  struct user_struct   _GLOBAL_91_T; extern  _GLOBAL_91_T  global_root_user[NUM_STACKS];    


struct backing_dev_info;
struct reclaim_state;
# 591 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int sched_info_on(void)
{






 return 0;

}

enum idle_type
{
 SCHED_IDLE,
 NOT_IDLE,
 NEWLY_IDLE,
 MAX_IDLE_TYPES
};
# 711 "linux-2.6.18/include/linux/sched.h"
struct io_context;
void exit_io_context(void);
struct cpuset;



struct group_info {
 int ngroups;
 atomic_t usage;
 gid_t small_block[32];
 int nblocks;
 gid_t *blocks[0];
};
# 740 "linux-2.6.18/include/linux/sched.h"
extern struct group_info *groups_alloc(int gidsetsize);
extern void groups_free(struct group_info *group_info);
extern int set_current_groups(struct group_info *group_info);
extern int groups_search(struct group_info *group_info, gid_t grp);







static inline  __attribute__((always_inline)) void prefetch_stack(struct task_struct *t) { }


struct audit_context;
struct mempolicy;
struct pipe_inode_info;

enum sleep_type {
 SLEEP_NORMAL,
 SLEEP_NONINTERACTIVE,
 SLEEP_INTERACTIVE,
 SLEEP_INTERRUPTED,
};

struct prio_array;

struct task_struct {
 volatile long state;
 struct thread_info *thread_info;
 atomic_t usage;
 unsigned long flags;
 unsigned long ptrace;

 int lock_depth;






 int load_weight;
 int prio, static_prio, normal_prio;
 struct list_head run_list;
 struct prio_array *array;

 unsigned short ioprio;
 unsigned int btrace_seq;

 unsigned long sleep_avg;
 unsigned long long timestamp, last_ran;
 unsigned long long sched_time;
 enum sleep_type sleep_type;

 unsigned long policy;
 cpumask_t cpus_allowed;
 unsigned int time_slice, first_time_slice;





 struct list_head tasks;




 struct list_head ptrace_children;
 struct list_head ptrace_list;

 struct mm_struct *mm, *active_mm;


 struct linux_binfmt *binfmt;
 long exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;

 unsigned long personality;
 unsigned did_exec:1;
 pid_t pid;
 pid_t tgid;





 struct task_struct *real_parent;
 struct task_struct *parent;




 struct list_head children;
 struct list_head sibling;
 struct task_struct *group_leader;


 struct pid_link pids[PIDTYPE_MAX];
 struct list_head thread_group;

 struct completion *vfork_done;
 int *set_child_tid;
 int *clear_child_tid;

 unsigned long rt_priority;
 cputime_t utime, stime;
 unsigned long nvcsw, nivcsw;
 struct timespec start_time;

 unsigned long min_flt, maj_flt;

   cputime_t it_prof_expires, it_virt_expires;
 unsigned long long it_sched_expires;
 struct list_head cpu_timers[3];


 uid_t uid,euid,suid,fsuid;
 gid_t gid,egid,sgid,fsgid;
 struct group_info *group_info;
 kernel_cap_t cap_effective, cap_inheritable, cap_permitted;
 unsigned keep_capabilities:1;
 struct user_struct *user;





 int oomkilladj;
 char comm[16];




 int link_count, total_link_count;

 struct sysv_sem sysvsem;

 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct namespace *namespace;

 struct signal_struct *signal;
 struct sighand_struct *sighand;

 sigset_t blocked, real_blocked;
 sigset_t saved_sigmask;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;

 void *security;
 struct audit_context *audit_context;
 seccomp_t seccomp;


    u32 parent_exec_id;
    u32 self_exec_id;

 spinlock_t alloc_lock;


 spinlock_t pi_lock;
# 947 "linux-2.6.18/include/linux/sched.h"
 void *journal_info;


 struct reclaim_state *reclaim_state;

 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;






 wait_queue_t *io_wait;

 u64 rchar, wchar, syscr, syscw;
# 977 "linux-2.6.18/include/linux/sched.h"
 struct cpuset *cpuset;
 nodemask_t mems_allowed;
 int cpuset_mems_generation;
 int cpuset_mem_spread_rotor;

 struct robust_list_head *robust_list;



 struct list_head pi_state_list;
 struct futex_pi_state *pi_state_cache;

 atomic_t fs_excl;
 struct rcu_head rcu;




 struct pipe_inode_info *splice_pipe;



};

static inline  __attribute__((always_inline)) pid_t process_group(struct task_struct *tsk)
{
 return tsk->signal->pgrp;
}
# 1014 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int pid_alive(struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].pid != ((void *)0);
}

extern void free_task(struct task_struct *tsk);


extern void __put_task_struct(struct task_struct *t);

static inline  __attribute__((always_inline)) void put_task_struct(struct task_struct *t)
{
 if (atomic_dec_and_test(&t->usage))
  __put_task_struct(t);
}
# 1088 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int set_cpus_allowed(struct task_struct *p, cpumask_t new_mask)
{
 if (!(__builtin_constant_p((0)) ? constant_test_bit(((0)),((new_mask).bits)) : variable_test_bit(((0)),((new_mask).bits))))
  return -22;
 return 0;
}


extern unsigned long long sched_clock(void);
extern unsigned long long
current_sched_time(const struct task_struct *current_task);
# 1110 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) void idle_task_exit(void) {}


extern void sched_idle_next(void);






static inline  __attribute__((always_inline)) int rt_mutex_getprio(struct task_struct *p)
{
 return p->normal_prio;
}



extern void set_user_nice(struct task_struct *p, long nice);
extern int task_prio(const struct task_struct *p);
extern int task_nice(const struct task_struct *p);
extern int can_nice(const struct task_struct *p, const int nice);
extern int task_curr(const struct task_struct *p);
extern int idle_cpu(int cpu);
extern int sched_setscheduler(struct task_struct *, int, struct sched_param *);
extern struct task_struct *idle_task(int cpu);
extern struct task_struct *curr_task(int cpu);
extern void set_curr_task(int cpu, struct task_struct *p);

void yield(void);




typedef  struct exec_domain   _GLOBAL_92_T; extern  _GLOBAL_92_T  _GLOBAL_0_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_1_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_2_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_3_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_4_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_5_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_6_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_7_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_8_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_9_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_10_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_11_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_12_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_13_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_14_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_15_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_16_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_17_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_18_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_19_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_20_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_21_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_22_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_23_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_24_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_25_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_26_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_27_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_28_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_29_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_30_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_31_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_32_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_33_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_34_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_35_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_36_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_37_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_38_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_39_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_40_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_41_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_42_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_43_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_44_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_45_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_46_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_47_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_48_default_exec_domain_I; extern  _GLOBAL_92_T  _GLOBAL_49_default_exec_domain_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_default_exec_domain_I) *_GLOBAL_default_exec_domain_13_A[NUM_STACKS];   

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[(4096)/sizeof(long)];
};


static inline  __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & ((4096)-sizeof(void*)));
}


typedef  union thread_union   _GLOBAL_93_T; extern  _GLOBAL_93_T  global_init_thread_union[NUM_STACKS];    
typedef  struct task_struct   _GLOBAL_94_T; extern  _GLOBAL_94_T  global_init_task[NUM_STACKS];    

typedef  struct mm_struct   _GLOBAL_95_T; extern  _GLOBAL_95_T  global_init_mm[NUM_STACKS];    


extern struct task_struct *find_task_by_pid_type(int type, int pid);
extern void set_special_pids(pid_t session, pid_t pgrp);
extern void __set_special_pids(pid_t session, pid_t pgrp);


extern struct user_struct * alloc_uid(uid_t);
static inline  __attribute__((always_inline)) struct user_struct *get_uid(struct user_struct *u)
{
 atomic_inc(&u->__count);
 return u;
}
extern void free_uid(struct user_struct *);
extern void switch_uid(struct user_struct *);



extern void do_timer(struct pt_regs *);

extern int wake_up_state(struct task_struct * tsk, unsigned int state) __attribute__((regparm(3))) ;
extern int wake_up_process(struct task_struct * tsk) __attribute__((regparm(3))) ;
extern void wake_up_new_task(struct task_struct * tsk, unsigned long clone_flags) __attribute__((regparm(3))) ;




 static inline  __attribute__((always_inline)) void kick_process(struct task_struct *tsk) { }

extern void sched_fork(struct task_struct * p, int clone_flags) __attribute__((regparm(3))) ;
extern void sched_exit(struct task_struct * p) __attribute__((regparm(3))) ;

extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);

static inline  __attribute__((always_inline)) int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
{
 unsigned long flags;
 int ret;

 do { (void)(flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);
 ret = dequeue_signal(tsk, mask, info);
 do { (void)(flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);

 return ret;
}

extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int send_group_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pg_info(int sig, struct siginfo *info, pid_t pgrp);
extern int kill_pg_info(int, struct siginfo *, pid_t);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern int kill_proc_info_as_uid(int, struct siginfo *, pid_t, uid_t, uid_t, u32);
extern void do_notify_parent(struct task_struct *, int);
extern void force_sig(int, struct task_struct *);
extern void force_sig_specific(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern void zap_other_threads(struct task_struct *p);
extern int kill_pg(pid_t, int, int);
extern int kill_proc(pid_t, int, int);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int send_group_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int do_sigaction(int, struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t *, stack_t *, unsigned long);






static inline  __attribute__((always_inline)) int is_si_special(const struct siginfo *info)
{
 return info <= ((struct siginfo *) 2);
}



static inline  __attribute__((always_inline)) int on_sig_stack(unsigned long sp)
{
 return (sp - get_nsc_task()->sas_ss_sp < get_nsc_task()->sas_ss_size);
}

static inline  __attribute__((always_inline)) int sas_ss_flags(unsigned long sp)
{
 return (get_nsc_task()->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}




extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *) __attribute__((regparm(3))) ;
static inline  __attribute__((always_inline)) void mmdrop(struct mm_struct * mm)
{
 if (atomic_dec_and_test(&mm->mm_count))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern int copy_thread(int, unsigned long, unsigned long, unsigned long, struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_files(struct task_struct *);
extern void __cleanup_signal(struct signal_struct *);
extern void __cleanup_sighand(struct sighand_struct *);
extern void exit_itimers(struct signal_struct *);

extern void do_group_exit(int);

extern void daemonize(const char *, ...);
extern int allow_signal(int);
extern int disallow_signal(int);
typedef  struct task_struct   _GLOBAL_96_T; extern  _GLOBAL_96_T  * global_child_reaper[NUM_STACKS];    

extern int do_execve(char *, char * *, char * *, struct pt_regs *);
extern long do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long, int *, int *);
struct task_struct *fork_idle(int);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern void get_task_comm(char *to, struct task_struct *tsk);
# 1335 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) struct task_struct *next_thread(const struct task_struct *p)
{
 return ({ const typeof( ((struct task_struct *)0)->thread_group ) *__mptr = (({ typeof(p->thread_group.next) _________p1 = p->thread_group.next; do { } while(0); (_________p1); })); (struct task_struct *)( (char *)__mptr - __builtin_offsetof(struct task_struct,thread_group) );});

}

static inline  __attribute__((always_inline)) int thread_group_empty(struct task_struct *p)
{
 return list_empty(&p->thread_group);
}
# 1358 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) void task_lock(struct task_struct *p)
{
 do { do { } while (0); (void)0; (void)(&p->alloc_lock); } while (0);
}

static inline  __attribute__((always_inline)) void task_unlock(struct task_struct *p)
{
 do { do { } while (0); (void)0; (void)(&p->alloc_lock); } while (0);
}

extern struct sighand_struct *lock_task_sighand(struct task_struct *tsk,
       unsigned long *flags);

static inline  __attribute__((always_inline)) void unlock_task_sighand(struct task_struct *tsk,
      unsigned long *flags)
{
 do { (void)(*flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);
}






static inline  __attribute__((always_inline)) void setup_thread_stack(struct task_struct *p, struct task_struct *org)
{
 *(p)->thread_info = *(org)->thread_info;
 (p)->thread_info->task = p;
}

static inline  __attribute__((always_inline)) unsigned long *end_of_stack(struct task_struct *p)
{
 return (unsigned long *)(p->thread_info + 1);
}






static inline  __attribute__((always_inline)) void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,2)), 0);
}

static inline  __attribute__((always_inline)) int need_resched(void)
{
 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}
# 1450 "linux-2.6.18/include/linux/sched.h"
extern int cond_resched(void);
extern int cond_resched_lock(spinlock_t * lock);
extern int cond_resched_softirq(void);
# 1468 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int lock_need_resched(spinlock_t *lock)
{
 if (0 || need_resched())
  return 1;
 return 0;
}





extern void recalc_sigpending_tsk(struct task_struct *t) __attribute__((regparm(3))) ;
extern void recalc_sigpending(void);

extern void signal_wake_up(struct task_struct *t, int resume_stopped);
# 1501 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) unsigned int task_cpu(const struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void set_task_cpu(struct task_struct *p, unsigned int cpu)
{
}




extern void arch_pick_mmap_layout(struct mm_struct *mm);
# 1523 "linux-2.6.18/include/linux/sched.h"
extern long sched_setaffinity(pid_t pid, cpumask_t new_mask);
extern long sched_getaffinity(pid_t pid, cpumask_t *mask);

# 1 "linux-2.6.18/include/linux/sysdev.h" 1
# 24 "linux-2.6.18/include/linux/sysdev.h"
# 1 "linux-2.6.18/include/linux/kobject.h" 1
# 22 "linux-2.6.18/include/linux/kobject.h"
# 1 "linux-2.6.18/include/linux/sysfs.h" 1
# 15 "linux-2.6.18/include/linux/sysfs.h"
struct kobject;
struct module;

struct attribute {
 const char * name;
 struct module * owner;
 mode_t mode;
};

struct attribute_group {
 const char * name;
 struct attribute ** attrs;
};
# 51 "linux-2.6.18/include/linux/sysfs.h"
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct kobject *, char *, loff_t, size_t);
 ssize_t (*write)(struct kobject *, char *, loff_t, size_t);
 int (*mmap)(struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};

struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};

struct sysfs_dirent {
 atomic_t s_count;
 struct list_head s_sibling;
 struct list_head s_children;
 void * s_element;
 int s_type;
 umode_t s_mode;
 struct dentry * s_dentry;
 struct iattr * s_iattr;
 atomic_t s_event;
};
# 125 "linux-2.6.18/include/linux/sysfs.h"
static inline  __attribute__((always_inline)) int sysfs_create_dir(struct kobject * k)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_dir(struct kobject * k)
{
 ;
}

static inline  __attribute__((always_inline)) int sysfs_rename_dir(struct kobject * k, const char *new_name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_create_file(struct kobject * k, const struct attribute * a)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_update_file(struct kobject * k, const struct attribute * a)
{
 return 0;
}
static inline  __attribute__((always_inline)) int sysfs_chmod_file(struct kobject *kobj, struct attribute *attr, mode_t mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_file(struct kobject * k, const struct attribute * a)
{
 ;
}

static inline  __attribute__((always_inline)) int sysfs_create_link(struct kobject * k, struct kobject * t, const char * n)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_link(struct kobject * k, const char * name)
{
 ;
}


static inline  __attribute__((always_inline)) int sysfs_create_bin_file(struct kobject * k, struct bin_attribute * a)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_remove_bin_file(struct kobject * k, struct bin_attribute * a)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_create_group(struct kobject * k, const struct attribute_group *g)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_group(struct kobject * k, const struct attribute_group * g)
{
 ;
}

static inline  __attribute__((always_inline)) void sysfs_notify(struct kobject * k, char *dir, char *attr)
{
}
# 23 "linux-2.6.18/include/linux/kobject.h" 2


# 1 "linux-2.6.18/include/linux/kref.h" 1
# 23 "linux-2.6.18/include/linux/kref.h"
struct kref {
 atomic_t refcount;
};

void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
# 26 "linux-2.6.18/include/linux/kobject.h" 2
# 34 "linux-2.6.18/include/linux/kobject.h"
typedef  char  _GLOBAL_97_T; extern  _GLOBAL_97_T  _GLOBAL_0_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_1_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_2_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_3_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_4_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_5_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_6_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_7_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_8_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_9_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_10_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_11_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_12_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_13_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_14_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_15_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_16_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_17_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_18_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_19_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_20_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_21_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_22_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_23_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_24_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_25_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_26_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_27_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_28_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_29_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_30_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_31_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_32_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_33_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_34_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_35_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_36_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_37_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_38_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_39_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_40_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_41_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_42_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_43_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_44_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_45_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_46_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_47_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_48_uevent_helper_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_49_uevent_helper_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uevent_helper_I) *_GLOBAL_uevent_helper_14_A[NUM_STACKS];  


typedef  u64  _GLOBAL_98_T; extern  _GLOBAL_98_T  global_uevent_seqnum[NUM_STACKS];   


typedef int kobject_action_t;
enum kobject_action {
 KOBJ_ADD = ( kobject_action_t) 0x01,
 KOBJ_REMOVE = ( kobject_action_t) 0x02,
 KOBJ_CHANGE = ( kobject_action_t) 0x03,
 KOBJ_MOUNT = ( kobject_action_t) 0x04,
 KOBJ_UMOUNT = ( kobject_action_t) 0x05,
 KOBJ_OFFLINE = ( kobject_action_t) 0x06,
 KOBJ_ONLINE = ( kobject_action_t) 0x07,
};

struct kobject {
 const char * k_name;
 char name[20];
 struct kref kref;
 struct list_head entry;
 struct kobject * parent;
 struct kset * kset;
 struct kobj_type * ktype;
 struct dentry * dentry;
 wait_queue_head_t poll;
};

extern int kobject_set_name(struct kobject *, const char *, ...)
 __attribute__((format(printf,2,3))) ;

static inline  __attribute__((always_inline)) const char * kobject_name(const struct kobject * kobj)
{
 return kobj->k_name;
}

extern void kobject_init(struct kobject *);
extern void kobject_cleanup(struct kobject *);

extern int kobject_add(struct kobject *);
extern void kobject_del(struct kobject *);

extern int kobject_rename(struct kobject *, const char *new_name);

extern int kobject_register(struct kobject *);
extern void kobject_unregister(struct kobject *);

extern struct kobject * kobject_get(struct kobject *);
extern void kobject_put(struct kobject *);

extern struct kobject *kobject_add_dir(struct kobject *, const char *);

extern char * kobject_get_path(struct kobject *, gfp_t);

struct kobj_type {
 void (*release)(struct kobject *);
 struct sysfs_ops * sysfs_ops;
 struct attribute ** default_attrs;
};
# 113 "linux-2.6.18/include/linux/kobject.h"
struct kset_uevent_ops {
 int (*filter)(struct kset *kset, struct kobject *kobj);
 const char *(*name)(struct kset *kset, struct kobject *kobj);
 int (*uevent)(struct kset *kset, struct kobject *kobj, char **envp,
   int num_envp, char *buffer, int buffer_size);
};

struct kset {
 struct subsystem * subsys;
 struct kobj_type * ktype;
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 struct kset_uevent_ops * uevent_ops;
};


extern void kset_init(struct kset * k);
extern int kset_add(struct kset * k);
extern int kset_register(struct kset * k);
extern void kset_unregister(struct kset * k);

static inline  __attribute__((always_inline)) struct kset * to_kset(struct kobject * kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - __builtin_offsetof(struct kset,kobj) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) struct kset * kset_get(struct kset * k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline  __attribute__((always_inline)) void kset_put(struct kset * k)
{
 kobject_put(&k->kobj);
}

static inline  __attribute__((always_inline)) struct kobj_type * get_ktype(struct kobject * k)
{
 if (k->kset && k->kset->ktype)
  return k->kset->ktype;
 else
  return k->ktype;
}

extern struct kobject * kset_find_obj(struct kset *, const char *);
# 169 "linux-2.6.18/include/linux/kobject.h"
struct subsystem {
 struct kset kset;
 struct rw_semaphore rwsem;
};
# 192 "linux-2.6.18/include/linux/kobject.h"
typedef  struct subsystem   _GLOBAL_99_T; extern  _GLOBAL_99_T  global_kernel_subsys[NUM_STACKS];    

typedef  struct subsystem   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_hypervisor_subsys[NUM_STACKS];    
# 241 "linux-2.6.18/include/linux/kobject.h"
extern void subsystem_init(struct subsystem *);
extern int subsystem_register(struct subsystem *);
extern void subsystem_unregister(struct subsystem *);

static inline  __attribute__((always_inline)) struct subsystem * subsys_get(struct subsystem * s)
{
 return s ? ({ const typeof( ((struct subsystem *)0)->kset ) *__mptr = (kset_get(&s->kset)); (struct subsystem *)( (char *)__mptr - __builtin_offsetof(struct subsystem,kset) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) void subsys_put(struct subsystem * s)
{
 kset_put(&s->kset);
}

struct subsys_attribute {
 struct attribute attr;
 ssize_t (*show)(struct subsystem *, char *);
 ssize_t (*store)(struct subsystem *, const char *, size_t);
};

extern int subsys_create_file(struct subsystem * , struct subsys_attribute *);


void kobject_uevent(struct kobject *kobj, enum kobject_action action);

int add_uevent_var(char **envp, int num_envp, int *cur_index,
   char *buffer, int buffer_size, int *cur_len,
   const char *format, ...)
 __attribute__((format (printf, 7, 8))) ;
# 25 "linux-2.6.18/include/linux/sysdev.h" 2
# 1 "linux-2.6.18/include/linux/pm.h" 1
# 34 "linux-2.6.18/include/linux/pm.h"
typedef int pm_request_t;
# 43 "linux-2.6.18/include/linux/pm.h"
typedef int pm_dev_t;
# 56 "linux-2.6.18/include/linux/pm.h"
enum
{
 PM_SYS_UNKNOWN = 0x00000000,
 PM_SYS_KBC = 0x41d00303,
 PM_SYS_COM = 0x41d00500,
 PM_SYS_IRDA = 0x41d00510,
 PM_SYS_FDC = 0x41d00700,
 PM_SYS_VGA = 0x41d00900,
 PM_SYS_PCMCIA = 0x41d00e00,
};
# 75 "linux-2.6.18/include/linux/pm.h"
struct pm_dev;

typedef int (*pm_callback)(struct pm_dev *dev, pm_request_t rqst, void *data);




struct pm_dev
{
 pm_dev_t type;
 unsigned long id;
 pm_callback callback;
 void *data;

 unsigned long flags;
 unsigned long state;
 unsigned long prev_state;

 struct list_head entry;
};







typedef  void   ( *_GLOBAL_102_T  )  ( void  ) ; extern  _GLOBAL_102_T global_pm_idle[NUM_STACKS];   
typedef  void   ( *_GLOBAL_104_T  )  ( void  ) ; extern  _GLOBAL_104_T global_pm_power_off[NUM_STACKS];   

typedef int suspend_state_t;







typedef int suspend_disk_method_t;







struct pm_ops {
 suspend_disk_method_t pm_disk_mode;
 int (*valid)(suspend_state_t state);
 int (*prepare)(suspend_state_t state);
 int (*enter)(suspend_state_t state);
 int (*finish)(suspend_state_t state);
};

extern void pm_set_ops(struct pm_ops *);
typedef  struct pm_ops   _GLOBAL_105_T; extern  _GLOBAL_105_T  * global_pm_ops[NUM_STACKS];    
extern int pm_suspend(suspend_state_t state);






struct device;

typedef struct pm_message {
 int event;
} pm_message_t;
# 171 "linux-2.6.18/include/linux/pm.h"
struct dev_pm_info {
 pm_message_t power_state;
 unsigned can_wakeup:1;

 unsigned should_wakeup:1;
 pm_message_t prev_state;
 void * saved_state;
 struct device * pm_parent;
 struct list_head entry;

};

extern void device_pm_set_parent(struct device * dev, struct device * parent);

extern int device_power_down(pm_message_t state);
extern void device_power_up(void);
extern void device_resume(void);


typedef  suspend_disk_method_t  _GLOBAL_106_T; extern  _GLOBAL_106_T  global_pm_disk_mode[NUM_STACKS];   

extern int device_suspend(pm_message_t state);






extern int dpm_runtime_suspend(struct device *, pm_message_t);
extern void dpm_runtime_resume(struct device *);
extern void __suspend_report_result(const char *function, void *fn, int ret);
# 26 "linux-2.6.18/include/linux/sysdev.h" 2


struct sys_device;

struct sysdev_class {
 struct list_head drivers;


 int (*shutdown)(struct sys_device *);
 int (*suspend)(struct sys_device *, pm_message_t state);
 int (*resume)(struct sys_device *);
 struct kset kset;
};

struct sysdev_class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct sysdev_class *, char *);
 ssize_t (*store)(struct sysdev_class *, const char *, size_t);
};
# 54 "linux-2.6.18/include/linux/sysdev.h"
extern int sysdev_class_register(struct sysdev_class *);
extern void sysdev_class_unregister(struct sysdev_class *);

extern int sysdev_class_create_file(struct sysdev_class *,
 struct sysdev_class_attribute *);
extern void sysdev_class_remove_file(struct sysdev_class *,
 struct sysdev_class_attribute *);




struct sysdev_driver {
 struct list_head entry;
 int (*add)(struct sys_device *);
 int (*remove)(struct sys_device *);
 int (*shutdown)(struct sys_device *);
 int (*suspend)(struct sys_device *, pm_message_t state);
 int (*resume)(struct sys_device *);
};


extern int sysdev_driver_register(struct sysdev_class *, struct sysdev_driver *);
extern void sysdev_driver_unregister(struct sysdev_class *, struct sysdev_driver *);







struct sys_device {
 u32 id;
 struct sysdev_class * cls;
 struct kobject kobj;
};

extern int sysdev_register(struct sys_device *);
extern void sysdev_unregister(struct sys_device *);


struct sysdev_attribute {
 struct attribute attr;
 ssize_t (*show)(struct sys_device *, char *);
 ssize_t (*store)(struct sys_device *, const char *, size_t);
};
# 108 "linux-2.6.18/include/linux/sysdev.h"
extern int sysdev_create_file(struct sys_device *, struct sysdev_attribute *);
extern void sysdev_remove_file(struct sys_device *, struct sysdev_attribute *);
# 1527 "linux-2.6.18/include/linux/sched.h" 2
typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_107_T  global_sched_smt_power_savings[NUM_STACKS];    
typedef  struct sysdev_attribute   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_attr_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_108_T  global_attr_sched_smt_power_savings[NUM_STACKS];     
extern int sched_create_sysfs_power_savings_entries(struct sysdev_class *cls);

extern void normalize_rt_tasks(void);





static inline  __attribute__((always_inline)) int frozen(struct task_struct *p)
{
 return p->flags & 0x00010000;
}




static inline  __attribute__((always_inline)) int freezing(struct task_struct *p)
{
 return p->flags & 0x00004000;
}





static inline  __attribute__((always_inline)) void freeze(struct task_struct *p)
{
 p->flags |= 0x00004000;
}




static inline  __attribute__((always_inline)) void do_not_freeze(struct task_struct *p)
{
 p->flags &= ~0x00004000;
}




static inline  __attribute__((always_inline)) int thaw_process(struct task_struct *p)
{
 if (frozen(p)) {
  p->flags &= ~0x00010000;
  wake_up_process(p);
  return 1;
 }
 return 0;
}




static inline  __attribute__((always_inline)) void frozen_process(struct task_struct *p)
{
 p->flags = (p->flags & ~0x00004000) | 0x00010000;
}

extern void refrigerator(void);
extern int freeze_processes(void);
extern void thaw_processes(void);

static inline  __attribute__((always_inline)) int try_to_freeze(void)
{
 if (freezing(get_nsc_task())) {
  refrigerator();
  return 1;
 } else
  return 0;
}
# 14 "linux-2.6.18/include/asm/irq.h" 2

# 1 "linux-2.6.18/include/asm/mach-default/irq_vectors.h" 1
# 87 "linux-2.6.18/include/asm/mach-default/irq_vectors.h"
# 1 "linux-2.6.18/include/asm/mach-default/irq_vectors_limits.h" 1
# 88 "linux-2.6.18/include/asm/mach-default/irq_vectors.h" 2
# 16 "linux-2.6.18/include/asm/irq.h" 2


static __inline__  __attribute__((always_inline)) int irq_canonicalize(int irq)
{
 return ((irq == 2) ? 9 : irq);
}






  extern void irq_ctx_init(int cpu);
  extern void irq_ctx_exit(int cpu);







extern int irqbalance_disable(char *str);
# 5 "linux-2.6.18/include/linux/kernel_stat.h" 2
# 17 "linux-2.6.18/include/linux/kernel_stat.h"
struct cpu_usage_stat {
 cputime64_t user;
 cputime64_t nice;
 cputime64_t system;
 cputime64_t softirq;
 cputime64_t irq;
 cputime64_t idle;
 cputime64_t iowait;
 cputime64_t steal;
};

struct kernel_stat {
 struct cpu_usage_stat cpustat;
 unsigned int irqs[224];
};

typedef  __typeof__ ( struct kernel_stat  )   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_per_cpu__kstat[NUM_STACKS];    





extern unsigned long long nr_context_switches(void);




static inline  __attribute__((always_inline)) int kstat_irqs(int irq)
{
 int cpu, sum = 0;

 for (((cpu)) = 0; ((cpu)) < 1; ((cpu))++, (void)global_cpu_possible_map[get_stack_id()])
  sum += (*((void)(cpu), &global_per_cpu__kstat[get_stack_id()])).irqs[irq];

 return sum;
}

extern void account_user_time(struct task_struct *, cputime_t);
extern void account_system_time(struct task_struct *, int, cputime_t);
extern void account_steal_time(struct task_struct *, cputime_t);
# 23 "linux-2.6.18/kernel/timer.c" 2
# 1 "linux-2.6.18/include/linux/module.h" 1
# 12 "linux-2.6.18/include/linux/module.h"
# 1 "linux-2.6.18/include/linux/stat.h" 1





# 1 "linux-2.6.18/include/asm/stat.h" 1



struct __old_kernel_stat {
 unsigned short st_dev;
 unsigned short st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned short st_rdev;
 unsigned long st_size;
 unsigned long st_atime;
 unsigned long st_mtime;
 unsigned long st_ctime;
};

struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned long st_rdev;
 unsigned long st_size;
 unsigned long st_blksize;
 unsigned long st_blocks;
 unsigned long st_atime;
 unsigned long st_atime_nsec;
 unsigned long st_mtime;
 unsigned long st_mtime_nsec;
 unsigned long st_ctime;
 unsigned long st_ctime_nsec;
 unsigned long __unused4;
 unsigned long __unused5;
};




struct stat64 {
 unsigned long long st_dev;
 unsigned char __pad0[4];


 unsigned long __st_ino;

 unsigned int st_mode;
 unsigned int st_nlink;

 unsigned long st_uid;
 unsigned long st_gid;

 unsigned long long st_rdev;
 unsigned char __pad3[4];

 long long st_size;
 unsigned long st_blksize;

 unsigned long long st_blocks;

 unsigned long st_atime;
 unsigned long st_atime_nsec;

 unsigned long st_mtime;
 unsigned int st_mtime_nsec;

 unsigned long st_ctime;
 unsigned long st_ctime_nsec;

 unsigned long long st_ino;
};
# 7 "linux-2.6.18/include/linux/stat.h" 2
# 59 "linux-2.6.18/include/linux/stat.h"
struct kstat {
 unsigned long ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 uid_t uid;
 gid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long long blocks;
};
# 13 "linux-2.6.18/include/linux/module.h" 2


# 1 "linux-2.6.18/include/linux/kmod.h" 1
# 33 "linux-2.6.18/include/linux/kmod.h"
static inline  __attribute__((always_inline)) int request_module(const char * name, ...) { return -38; }




struct key;
extern int call_usermodehelper_keys(char *path, char *argv[], char *envp[],
        struct key *session_keyring, int wait);

static inline  __attribute__((always_inline)) int
call_usermodehelper(char *path, char **argv, char **envp, int wait)
{
 return call_usermodehelper_keys(path, argv, envp, ((void *)0), wait);
}

extern void usermodehelper_init(void);
# 16 "linux-2.6.18/include/linux/module.h" 2
# 1 "linux-2.6.18/include/linux/elf.h" 1





# 1 "linux-2.6.18/include/linux/elf-em.h" 1
# 7 "linux-2.6.18/include/linux/elf.h" 2
# 1 "linux-2.6.18/include/asm/elf.h" 1
# 9 "linux-2.6.18/include/asm/elf.h"
# 1 "linux-2.6.18/include/asm/user.h" 1
# 44 "linux-2.6.18/include/asm/user.h"
struct user_i387_struct {
 long cwd;
 long swd;
 long twd;
 long fip;
 long fcs;
 long foo;
 long fos;
 long st_space[20];
};

struct user_fxsr_struct {
 unsigned short cwd;
 unsigned short swd;
 unsigned short twd;
 unsigned short fop;
 long fip;
 long fcs;
 long foo;
 long fos;
 long mxcsr;
 long reserved;
 long st_space[32];
 long xmm_space[32];
 long padding[56];
};







struct user_regs_struct {
 long ebx, ecx, edx, esi, edi, ebp, eax;
 unsigned short ds, __ds, es, __es;
 unsigned short fs, __fs, gs, __gs;
 long orig_eax, eip;
 unsigned short cs, __cs;
 long eflags, esp;
 unsigned short ss, __ss;
};




struct user{


  struct user_regs_struct regs;

  int u_fpvalid;

  struct user_i387_struct i387;

  unsigned long int u_tsize;
  unsigned long int u_dsize;
  unsigned long int u_ssize;
  unsigned long start_code;
  unsigned long start_stack;



  long int signal;
  int reserved;
  struct user_pt_regs * u_ar0;

  struct user_i387_struct* u_fpstate;
  unsigned long magic;
  char u_comm[32];
  int u_debugreg[8];
};
# 10 "linux-2.6.18/include/asm/elf.h" 2


# 1 "linux-2.6.18/include/linux/utsname.h" 1





struct oldold_utsname {
 char sysname[9];
 char nodename[9];
 char release[9];
 char version[9];
 char machine[9];
};



struct old_utsname {
 char sysname[65];
 char nodename[65];
 char release[65];
 char version[65];
 char machine[65];
};

struct new_utsname {
 char sysname[65];
 char nodename[65];
 char release[65];
 char version[65];
 char machine[65];
 char domainname[65];
};

typedef  struct new_utsname   _GLOBAL_110_T; extern  _GLOBAL_110_T  global_system_utsname[NUM_STACKS];    

typedef  struct rw_semaphore   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_uts_sem[NUM_STACKS];    
# 13 "linux-2.6.18/include/asm/elf.h" 2
# 27 "linux-2.6.18/include/asm/elf.h"
typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof (struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;
typedef struct user_fxsr_struct elf_fpxregset_t;
# 52 "linux-2.6.18/include/asm/elf.h"
# 1 "linux-2.6.18/include/asm/desc.h" 1



# 1 "linux-2.6.18/include/asm/ldt.h" 1
# 15 "linux-2.6.18/include/asm/ldt.h"
struct user_desc {
 unsigned int entry_number;
 unsigned long base_addr;
 unsigned int limit;
 unsigned int seg_32bit:1;
 unsigned int contents:2;
 unsigned int read_exec_only:1;
 unsigned int limit_in_pages:1;
 unsigned int seg_not_present:1;
 unsigned int useable:1;
};
# 5 "linux-2.6.18/include/asm/desc.h" 2
# 17 "linux-2.6.18/include/asm/desc.h"
typedef  struct desc_struct   _GLOBAL_112_T; extern  _GLOBAL_112_T  _GLOBAL_0_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_1_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_2_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_3_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_4_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_5_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_6_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_7_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_8_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_9_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_10_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_11_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_12_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_13_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_14_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_15_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_16_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_17_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_18_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_19_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_20_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_21_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_22_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_23_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_24_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_25_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_26_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_27_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_28_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_29_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_30_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_31_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_32_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_33_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_34_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_35_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_36_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_37_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_38_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_39_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_40_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_41_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_42_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_43_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_44_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_45_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_46_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_47_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_48_cpu_gdt_table_I [ 32 ] ; extern  _GLOBAL_112_T  _GLOBAL_49_cpu_gdt_table_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cpu_gdt_table_I) *_GLOBAL_cpu_gdt_table_15_A[NUM_STACKS];   

typedef  __typeof__ ( unsigned char  )   _GLOBAL_113_T; extern  _GLOBAL_113_T  _GLOBAL_0_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_1_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_2_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_3_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_4_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_5_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_6_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_7_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_8_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_9_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_10_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_11_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_12_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_13_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_14_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_15_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_16_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_17_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_18_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_19_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_20_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_21_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_22_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_23_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_24_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_25_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_26_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_27_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_28_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_29_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_30_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_31_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_32_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_33_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_34_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_35_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_36_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_37_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_38_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_39_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_40_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_41_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_42_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_43_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_44_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_45_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_46_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_47_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_48_per_cpu__cpu_16bit_stack_I [ 1024 ] ; extern  _GLOBAL_113_T  _GLOBAL_49_per_cpu__cpu_16bit_stack_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_per_cpu__cpu_16bit_stack_I) *_GLOBAL_per_cpu__cpu_16bit_stack_16_A[NUM_STACKS];   

struct Xgt_desc_struct {
 unsigned short size;
 unsigned long address __attribute__((packed)) ;
 unsigned short pad;
} __attribute__ ((packed)) ;

typedef  struct Xgt_desc_struct   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_idt_descr[NUM_STACKS];    
typedef  __typeof__ ( struct Xgt_desc_struct  )   _GLOBAL_115_T; extern  _GLOBAL_115_T  global_per_cpu__cpu_gdt_descr[NUM_STACKS];    


static inline  __attribute__((always_inline)) struct desc_struct *get_cpu_gdt_table(unsigned int cpu)
{
 return (struct desc_struct *)(*((void)(cpu), &global_per_cpu__cpu_gdt_descr[get_stack_id()])).address;
}
# 53 "linux-2.6.18/include/asm/desc.h"
extern struct desc_struct default_ldt[];
extern void set_intr_gate(unsigned int irq, void * addr);
# 67 "linux-2.6.18/include/asm/desc.h"
static inline  __attribute__((always_inline)) void __set_tss_desc(unsigned int cpu, unsigned int entry, void *addr)
{
 __asm__ __volatile__ ("movw %w3,0(%2)\n\t" "movw %w1,2(%2)\n\t" "rorl $16,%1\n\t" "movb %b1,4(%2)\n\t" "movb %4,5(%2)\n\t" "movb $0,6(%2)\n\t" "movb %h1,7(%2)\n\t" "rorl $16,%1" : "=m"(*(&get_cpu_gdt_table(cpu)[entry])) : "q" ((int)addr), "r"(&get_cpu_gdt_table(cpu)[entry]), "ir"(__builtin_offsetof(struct tss_struct,__cacheline_filler) - 1), "i"(0x89));

}



static inline  __attribute__((always_inline)) void set_ldt_desc(unsigned int cpu, void *addr, unsigned int size)
{
 __asm__ __volatile__ ("movw %w3,0(%2)\n\t" "movw %w1,2(%2)\n\t" "rorl $16,%1\n\t" "movb %b1,4(%2)\n\t" "movb %4,5(%2)\n\t" "movb $0,6(%2)\n\t" "movb %h1,7(%2)\n\t" "rorl $16,%1" : "=m"(*(&get_cpu_gdt_table(cpu)[(12 + 5)])) : "q" ((int)addr), "r"(&get_cpu_gdt_table(cpu)[(12 + 5)]), "ir"(((size << 3)-1)), "i"(0x82));
}
# 105 "linux-2.6.18/include/asm/desc.h"
static inline  __attribute__((always_inline)) void write_ldt_entry(void *ldt, int entry, __u32 entry_a, __u32 entry_b)
{
 __u32 *lp = (__u32 *)((char *)ldt + entry*8);
 *lp = entry_a;
 *(lp+1) = entry_b;
}





static inline  __attribute__((always_inline)) void load_TLS(struct thread_struct *t, unsigned int cpu)
{

 get_cpu_gdt_table(cpu)[6 + 0] = t->tls_array[0]; get_cpu_gdt_table(cpu)[6 + 1] = t->tls_array[1]; get_cpu_gdt_table(cpu)[6 + 2] = t->tls_array[2];

}

static inline  __attribute__((always_inline)) void clear_LDT(void)
{
 int cpu = ({ do { } while (0); 0; });

 set_ldt_desc(cpu, &default_ldt[0], 5);
 __asm__ __volatile__("lldt %w0"::"q" ((12 + 5)*8));
 do { } while (0);
}




static inline  __attribute__((always_inline)) void load_LDT_nolock(mm_context_t *pc, int cpu)
{
 void *segments = pc->ldt;
 int count = pc->size;

 if (__builtin_expect(!!(!count), 1)) {
  segments = &default_ldt[0];
  count = 5;
 }

 set_ldt_desc(cpu, segments, count);
 __asm__ __volatile__("lldt %w0"::"q" ((12 + 5)*8));
}

static inline  __attribute__((always_inline)) void load_LDT(mm_context_t *pc)
{
 int cpu = ({ do { } while (0); 0; });
 load_LDT_nolock(pc, cpu);
 do { } while (0);
}

static inline  __attribute__((always_inline)) unsigned long get_desc_base(unsigned long *desc)
{
 unsigned long base;
 base = ((desc[0] >> 16) & 0x0000ffff) |
  ((desc[1] << 16) & 0x00ff0000) |
  (desc[1] & 0xff000000);
 return base;
}
# 53 "linux-2.6.18/include/asm/elf.h" 2
# 125 "linux-2.6.18/include/asm/elf.h"
struct task_struct;

extern int dump_task_regs (struct task_struct *, elf_gregset_t *);
extern int dump_task_fpu (struct task_struct *, elf_fpregset_t *);
extern int dump_task_extended_fpu (struct task_struct *, struct user_fxsr_struct *);
# 155 "linux-2.6.18/include/asm/elf.h"
extern void __kernel_vsyscall;




struct linux_binprm;
extern int arch_setup_additional_pages(struct linux_binprm *bprm,
                                       int executable_stack);

typedef  unsigned int   _GLOBAL_116_T; extern  _GLOBAL_116_T  global_vdso_enabled[NUM_STACKS];    
# 8 "linux-2.6.18/include/linux/elf.h" 2
# 17 "linux-2.6.18/include/linux/elf.h"
typedef __u32 Elf32_Addr;
typedef __u16 Elf32_Half;
typedef __u32 Elf32_Off;
typedef __s32 Elf32_Sword;
typedef __u32 Elf32_Word;


typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __s16 Elf64_SHalf;
typedef __u64 Elf64_Off;
typedef __s32 Elf64_Sword;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
typedef __s64 Elf64_Sxword;
# 107 "linux-2.6.18/include/linux/elf.h"
typedef struct dynamic{
  Elf32_Sword d_tag;
  union{
    Elf32_Sword d_val;
    Elf32_Addr d_ptr;
  } d_un;
} Elf32_Dyn;

typedef struct {
  Elf64_Sxword d_tag;
  union {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
  } d_un;
} Elf64_Dyn;
# 130 "linux-2.6.18/include/linux/elf.h"
typedef struct elf32_rel {
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;

typedef struct elf64_rel {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;

typedef struct elf32_rela{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct elf64_rela {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;

typedef struct elf32_sym{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Half st_shndx;
} Elf32_Sym;

typedef struct elf64_sym {
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Half st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct elf32_hdr{
  unsigned char e_ident[16];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct elf64_hdr {
  unsigned char e_ident[16];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;







typedef struct elf32_phdr{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct elf64_phdr {
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 269 "linux-2.6.18/include/linux/elf.h"
typedef struct {
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct elf64_shdr {
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 342 "linux-2.6.18/include/linux/elf.h"
typedef struct elf32_note {
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;


typedef struct elf64_note {
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;



typedef  Elf32_Dyn  _GLOBAL_117_T; extern  _GLOBAL_117_T  _GLOBAL_0__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_1__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_2__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_3__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_4__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_5__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_6__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_7__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_8__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_9__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_10__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_11__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_12__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_13__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_14__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_15__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_16__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_17__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_18__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_19__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_20__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_21__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_22__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_23__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_24__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_25__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_26__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_27__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_28__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_29__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_30__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_31__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_32__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_33__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_34__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_35__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_36__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_37__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_38__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_39__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_40__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_41__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_42__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_43__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_44__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_45__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_46__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_47__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_48__DYNAMIC_I [ ] ; extern  _GLOBAL_117_T  _GLOBAL_49__DYNAMIC_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__DYNAMIC_I) *_GLOBAL__DYNAMIC_17_A[NUM_STACKS];   
# 17 "linux-2.6.18/include/linux/module.h" 2


# 1 "linux-2.6.18/include/linux/moduleparam.h" 1
# 29 "linux-2.6.18/include/linux/moduleparam.h"
struct kernel_param;


typedef int (*param_set_fn)(const char *val, struct kernel_param *kp);

typedef int (*param_get_fn)(char *buffer, struct kernel_param *kp);

struct kernel_param {
 const char *name;
 unsigned int perm;
 param_set_fn set;
 param_get_fn get;
 void *arg;
};


struct kparam_string {
 unsigned int maxlen;
 char *string;
};


struct kparam_array
{
 unsigned int max;
 unsigned int *num;
 param_set_fn set;
 param_get_fn get;
 unsigned int elemsize;
 void *elem;
};
# 95 "linux-2.6.18/include/linux/moduleparam.h"
extern int parse_args(const char *name,
        char *args,
        struct kernel_param *params,
        unsigned num,
        int (*unknown)(char *param, char *val));







extern int param_set_byte(const char *val, struct kernel_param *kp);
extern int param_get_byte(char *buffer, struct kernel_param *kp);


extern int param_set_short(const char *val, struct kernel_param *kp);
extern int param_get_short(char *buffer, struct kernel_param *kp);


extern int param_set_ushort(const char *val, struct kernel_param *kp);
extern int param_get_ushort(char *buffer, struct kernel_param *kp);


extern int param_set_int(const char *val, struct kernel_param *kp);
extern int param_get_int(char *buffer, struct kernel_param *kp);


extern int param_set_uint(const char *val, struct kernel_param *kp);
extern int param_get_uint(char *buffer, struct kernel_param *kp);


extern int param_set_long(const char *val, struct kernel_param *kp);
extern int param_get_long(char *buffer, struct kernel_param *kp);


extern int param_set_ulong(const char *val, struct kernel_param *kp);
extern int param_get_ulong(char *buffer, struct kernel_param *kp);


extern int param_set_charp(const char *val, struct kernel_param *kp);
extern int param_get_charp(char *buffer, struct kernel_param *kp);


extern int param_set_bool(const char *val, struct kernel_param *kp);
extern int param_get_bool(char *buffer, struct kernel_param *kp);


extern int param_set_invbool(const char *val, struct kernel_param *kp);
extern int param_get_invbool(char *buffer, struct kernel_param *kp);
# 159 "linux-2.6.18/include/linux/moduleparam.h"
extern int param_array_set(const char *val, struct kernel_param *kp);
extern int param_array_get(char *buffer, struct kernel_param *kp);

extern int param_set_copystring(const char *val, struct kernel_param *kp);
extern int param_get_string(char *buffer, struct kernel_param *kp);



struct module;

extern int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params);

extern void module_param_sysfs_remove(struct module *mod);
# 20 "linux-2.6.18/include/linux/module.h" 2
# 1 "linux-2.6.18/include/asm/local.h" 1





typedef struct
{
 volatile long counter;
} local_t;






static __inline__  __attribute__((always_inline)) void local_inc(local_t *v)
{
 __asm__ __volatile__(
  "incl %0"
  :"+m" (v->counter));
}

static __inline__  __attribute__((always_inline)) void local_dec(local_t *v)
{
 __asm__ __volatile__(
  "decl %0"
  :"+m" (v->counter));
}

static __inline__  __attribute__((always_inline)) void local_add(long i, local_t *v)
{
 __asm__ __volatile__(
  "addl %1,%0"
  :"+m" (v->counter)
  :"ir" (i));
}

static __inline__  __attribute__((always_inline)) void local_sub(long i, local_t *v)
{
 __asm__ __volatile__(
  "subl %1,%0"
  :"+m" (v->counter)
  :"ir" (i));
}
# 21 "linux-2.6.18/include/linux/module.h" 2

# 1 "linux-2.6.18/include/asm/module.h" 1




struct mod_arch_specific
{
};
# 23 "linux-2.6.18/include/linux/module.h" 2
# 34 "linux-2.6.18/include/linux/module.h"
struct kernel_symbol
{
 unsigned long value;
 const char *name;
};

struct modversion_info
{
 unsigned long crc;
 char name[(64 - sizeof(unsigned long))];
};

struct module;

struct module_attribute {
        struct attribute attr;
        ssize_t (*show)(struct module_attribute *, struct module *, char *);
        ssize_t (*store)(struct module_attribute *, struct module *,
    const char *, size_t count);
 void (*setup)(struct module *, const char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};

struct module_kobject
{
 struct kobject kobj;
 struct module *mod;
};


extern int init_module(void);
extern void cleanup_module(void);


struct exception_table_entry;

const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
        const struct exception_table_entry *last,
        unsigned long value);
void sort_extable(struct exception_table_entry *start,
    struct exception_table_entry *finish);
void sort_main_extable(void);

typedef  struct subsystem   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_module_subsys[NUM_STACKS];    
# 160 "linux-2.6.18/include/linux/module.h"
const struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;
# 480 "linux-2.6.18/include/linux/module.h"
static inline  __attribute__((always_inline)) const struct exception_table_entry *
search_module_extables(unsigned long addr)
{
 return ((void *)0);
}


static inline  __attribute__((always_inline)) struct module *module_text_address(unsigned long addr)
{
 return ((void *)0);
}


static inline  __attribute__((always_inline)) struct module *__module_text_address(unsigned long addr)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) int is_module_address(unsigned long addr)
{
 return 0;
}






static inline  __attribute__((always_inline)) void __module_get(struct module *module)
{
}

static inline  __attribute__((always_inline)) int try_module_get(struct module *module)
{
 return 1;
}

static inline  __attribute__((always_inline)) void module_put(struct module *module)
{
}






static inline  __attribute__((always_inline)) const char *module_address_lookup(unsigned long addr,
      unsigned long *symbolsize,
      unsigned long *offset,
      char **modname)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) struct module *module_get_kallsym(unsigned int symnum,
      unsigned long *value,
      char *type, char *name,
      size_t namelen)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) unsigned long module_kallsyms_lookup_name(const char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int is_exported(const char *name, const struct module *mod)
{
 return 0;
}

static inline  __attribute__((always_inline)) int register_module_notifier(struct notifier_block * nb)
{

 return 0;
}

static inline  __attribute__((always_inline)) int unregister_module_notifier(struct notifier_block * nb)
{
 return 0;
}



static inline  __attribute__((always_inline)) void print_modules(void)
{
}

struct device_driver;
struct module;

static inline  __attribute__((always_inline)) void module_add_driver(struct module *module, struct device_driver *driver)
{
}

static inline  __attribute__((always_inline)) void module_remove_driver(struct device_driver *driver)
{
}
# 24 "linux-2.6.18/kernel/timer.c" 2
# 1 "linux-2.6.18/include/linux/interrupt.h" 1
# 10 "linux-2.6.18/include/linux/interrupt.h"
# 1 "linux-2.6.18/include/linux/irqreturn.h" 1
# 19 "linux-2.6.18/include/linux/irqreturn.h"
typedef int irqreturn_t;
# 11 "linux-2.6.18/include/linux/interrupt.h" 2
# 1 "linux-2.6.18/include/linux/hardirq.h" 1




# 1 "linux-2.6.18/include/linux/smp_lock.h" 1
# 6 "linux-2.6.18/include/linux/hardirq.h" 2

# 1 "linux-2.6.18/include/asm/hardirq.h" 1




# 1 "linux-2.6.18/include/linux/irq.h" 1
# 63 "linux-2.6.18/include/linux/irq.h"
struct proc_dir_entry;
# 87 "linux-2.6.18/include/linux/irq.h"
struct irq_chip {
 const char *name;
 unsigned int (*startup)(unsigned int irq);
 void (*shutdown)(unsigned int irq);
 void (*enable)(unsigned int irq);
 void (*disable)(unsigned int irq);

 void (*ack)(unsigned int irq);
 void (*mask)(unsigned int irq);
 void (*mask_ack)(unsigned int irq);
 void (*unmask)(unsigned int irq);
 void (*eoi)(unsigned int irq);

 void (*end)(unsigned int irq);
 void (*set_affinity)(unsigned int irq, cpumask_t dest);
 int (*retrigger)(unsigned int irq);
 int (*set_type)(unsigned int irq, unsigned int flow_type);
 int (*set_wake)(unsigned int irq, unsigned int on);
# 114 "linux-2.6.18/include/linux/irq.h"
 const char *typename;
};
# 141 "linux-2.6.18/include/linux/irq.h"
struct irq_desc {
 void  __attribute__((regparm(3))) (*handle_irq)(unsigned int irq,
           struct irq_desc *desc,
           struct pt_regs *regs);
 struct irq_chip *chip;
 void *handler_data;
 void *chip_data;
 struct irqaction *action;
 unsigned int status;

 unsigned int depth;
 unsigned int wake_depth;
 unsigned int irq_count;
 unsigned int irqs_unhandled;
 spinlock_t lock;





 cpumask_t pending_mask;
 unsigned int move_irq;


 struct proc_dir_entry *dir;

} __attribute__((__aligned__((1 << (7))))) ;

typedef  struct irq_desc   _GLOBAL_119_T; extern  _GLOBAL_119_T  _GLOBAL_0_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_1_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_2_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_3_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_4_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_5_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_6_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_7_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_8_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_9_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_10_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_11_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_12_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_13_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_14_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_15_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_16_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_17_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_18_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_19_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_20_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_21_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_22_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_23_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_24_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_25_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_26_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_27_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_28_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_29_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_30_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_31_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_32_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_33_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_34_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_35_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_36_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_37_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_38_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_39_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_40_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_41_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_42_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_43_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_44_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_45_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_46_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_47_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_48_irq_desc_I [ 224 ] ; extern  _GLOBAL_119_T  _GLOBAL_49_irq_desc_I [ 224 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_irq_desc_I) *_GLOBAL_irq_desc_18_A[NUM_STACKS];   





typedef struct irq_chip hw_irq_controller;

typedef struct irq_desc irq_desc_t;




# 1 "linux-2.6.18/include/asm/hw_irq.h" 1
# 15 "linux-2.6.18/include/asm/hw_irq.h"
# 1 "linux-2.6.18/include/linux/profile.h" 1
# 14 "linux-2.6.18/include/linux/profile.h"
struct proc_dir_entry;
struct pt_regs;
struct notifier_block;


void  __attribute__ ((__section__ (".init.text"))) profile_init(void);
void profile_tick(int, struct pt_regs *);
void profile_hit(int, void *);

void create_prof_cpu_mask(struct proc_dir_entry *);




enum profile_type {
 PROFILE_TASK_EXIT,
 PROFILE_MUNMAP
};



struct task_struct;
struct mm_struct;


void profile_task_exit(struct task_struct * task);




int profile_handoff_task(struct task_struct * task);


void profile_munmap(unsigned long addr);

int task_handoff_register(struct notifier_block * n);
int task_handoff_unregister(struct notifier_block * n);

int profile_event_register(enum profile_type, struct notifier_block * n);
int profile_event_unregister(enum profile_type, struct notifier_block * n);

int register_timer_hook(int (*hook)(struct pt_regs *));
void unregister_timer_hook(int (*hook)(struct pt_regs *));


typedef  int   ( *_GLOBAL_121_T  )  ( struct pt_regs   *  ) ; extern  _GLOBAL_121_T global_timer_hook[NUM_STACKS];     

struct pt_regs;
# 16 "linux-2.6.18/include/asm/hw_irq.h" 2


# 1 "linux-2.6.18/include/asm/sections.h" 1




# 1 "linux-2.6.18/include/asm-generic/sections.h" 1





typedef  char  _GLOBAL_122_T; extern  _GLOBAL_122_T  _GLOBAL_0__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_1__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_2__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_3__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_4__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_5__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_6__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_7__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_8__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_9__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_10__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_11__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_12__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_13__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_14__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_15__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_16__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_17__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_18__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_19__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_20__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_21__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_22__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_23__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_24__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_25__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_26__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_27__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_28__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_29__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_30__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_31__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_32__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_33__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_34__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_35__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_36__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_37__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_38__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_39__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_40__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_41__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_42__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_43__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_44__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_45__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_46__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_47__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_48__text_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_49__text_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__text_I) *_GLOBAL__text_19_A[NUM_STACKS];extern  _GLOBAL_122_T  _GLOBAL_0__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_1__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_2__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_3__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_4__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_5__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_6__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_7__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_8__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_9__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_10__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_11__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_12__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_13__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_14__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_15__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_16__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_17__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_18__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_19__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_20__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_21__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_22__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_23__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_24__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_25__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_26__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_27__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_28__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_29__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_30__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_31__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_32__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_33__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_34__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_35__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_36__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_37__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_38__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_39__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_40__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_41__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_42__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_43__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_44__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_45__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_46__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_47__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_48__stext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_49__stext_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__stext_I) *_GLOBAL__stext_20_A[NUM_STACKS];extern  _GLOBAL_122_T  _GLOBAL_0__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_1__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_2__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_3__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_4__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_5__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_6__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_7__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_8__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_9__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_10__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_11__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_12__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_13__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_14__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_15__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_16__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_17__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_18__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_19__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_20__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_21__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_22__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_23__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_24__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_25__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_26__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_27__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_28__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_29__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_30__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_31__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_32__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_33__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_34__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_35__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_36__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_37__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_38__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_39__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_40__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_41__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_42__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_43__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_44__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_45__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_46__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_47__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_48__etext_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_49__etext_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__etext_I) *_GLOBAL__etext_21_A[NUM_STACKS];    
typedef  char  _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48__data_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49__data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__data_I) *_GLOBAL__data_22_A[NUM_STACKS];extern  _GLOBAL_123_T  _GLOBAL_0__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48__sdata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49__sdata_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__sdata_I) *_GLOBAL__sdata_23_A[NUM_STACKS];extern  _GLOBAL_123_T  _GLOBAL_0__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48__edata_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49__edata_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__edata_I) *_GLOBAL__edata_24_A[NUM_STACKS];    
typedef  char  _GLOBAL_124_T; extern  _GLOBAL_124_T  __bss_start [ ] ; extern  _GLOBAL_124_T  _GLOBAL_0___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_1___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_2___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_3___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_4___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_5___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_6___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_7___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_8___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_9___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_10___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_11___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_12___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_13___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_14___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_15___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_16___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_17___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_18___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_19___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_20___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_21___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_22___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_23___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_24___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_25___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_26___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_27___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_28___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_29___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_30___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_31___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_32___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_33___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_34___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_35___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_36___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_37___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_38___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_39___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_40___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_41___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_42___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_43___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_44___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_45___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_46___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_47___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_48___bss_stop_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_49___bss_stop_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bss_stop_I) *_GLOBAL___bss_stop_25_A[NUM_STACKS];   
typedef  char  _GLOBAL_125_T; extern  _GLOBAL_125_T  _GLOBAL_0___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_1___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_2___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_3___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_4___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_5___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_6___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_7___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_8___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_9___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_10___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_11___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_12___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_13___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_14___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_15___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_16___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_17___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_18___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_19___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_20___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_21___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_22___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_23___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_24___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_25___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_26___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_27___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_28___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_29___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_30___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_31___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_32___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_33___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_34___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_35___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_36___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_37___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_38___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_39___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_40___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_41___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_42___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_43___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_44___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_45___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_46___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_47___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_48___init_begin_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_49___init_begin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___init_begin_I) *_GLOBAL___init_begin_26_A[NUM_STACKS];extern  _GLOBAL_125_T  _GLOBAL_0___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_1___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_2___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_3___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_4___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_5___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_6___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_7___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_8___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_9___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_10___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_11___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_12___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_13___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_14___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_15___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_16___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_17___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_18___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_19___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_20___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_21___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_22___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_23___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_24___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_25___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_26___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_27___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_28___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_29___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_30___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_31___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_32___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_33___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_34___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_35___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_36___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_37___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_38___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_39___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_40___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_41___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_42___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_43___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_44___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_45___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_46___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_47___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_48___init_end_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_49___init_end_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___init_end_I) *_GLOBAL___init_end_27_A[NUM_STACKS];   
typedef  char  _GLOBAL_126_T; extern  _GLOBAL_126_T  _GLOBAL_0__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_1__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_2__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_3__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_4__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_5__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_6__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_7__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_8__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_9__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_10__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_11__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_12__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_13__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_14__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_15__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_16__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_17__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_18__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_19__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_20__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_21__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_22__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_23__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_24__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_25__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_26__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_27__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_28__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_29__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_30__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_31__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_32__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_33__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_34__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_35__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_36__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_37__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_38__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_39__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_40__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_41__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_42__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_43__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_44__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_45__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_46__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_47__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_48__sinittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_49__sinittext_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__sinittext_I) *_GLOBAL__sinittext_28_A[NUM_STACKS];extern  _GLOBAL_126_T  _GLOBAL_0__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_1__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_2__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_3__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_4__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_5__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_6__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_7__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_8__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_9__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_10__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_11__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_12__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_13__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_14__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_15__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_16__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_17__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_18__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_19__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_20__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_21__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_22__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_23__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_24__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_25__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_26__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_27__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_28__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_29__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_30__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_31__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_32__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_33__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_34__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_35__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_36__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_37__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_38__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_39__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_40__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_41__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_42__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_43__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_44__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_45__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_46__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_47__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_48__einittext_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_49__einittext_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__einittext_I) *_GLOBAL__einittext_29_A[NUM_STACKS];   
typedef  char  _GLOBAL_127_T; extern  _GLOBAL_127_T  _GLOBAL_0__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_1__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_2__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_3__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_4__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_5__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_6__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_7__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_8__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_9__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_10__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_11__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_12__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_13__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_14__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_15__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_16__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_17__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_18__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_19__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_20__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_21__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_22__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_23__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_24__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_25__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_26__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_27__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_28__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_29__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_30__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_31__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_32__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_33__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_34__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_35__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_36__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_37__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_38__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_39__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_40__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_41__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_42__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_43__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_44__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_45__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_46__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_47__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_48__sextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_127_T  _GLOBAL_49__sextratext_I [ ] __attribute__((weak))  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__sextratext_I) *_GLOBAL__sextratext_30_A[NUM_STACKS];   
typedef  char  _GLOBAL_128_T; extern  _GLOBAL_128_T  _GLOBAL_0__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_1__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_2__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_3__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_4__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_5__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_6__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_7__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_8__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_9__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_10__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_11__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_12__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_13__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_14__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_15__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_16__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_17__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_18__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_19__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_20__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_21__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_22__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_23__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_24__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_25__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_26__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_27__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_28__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_29__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_30__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_31__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_32__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_33__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_34__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_35__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_36__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_37__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_38__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_39__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_40__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_41__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_42__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_43__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_44__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_45__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_46__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_47__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_48__eextratext_I [ ] __attribute__((weak))  ; extern  _GLOBAL_128_T  _GLOBAL_49__eextratext_I [ ] __attribute__((weak))  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__eextratext_I) *_GLOBAL__eextratext_31_A[NUM_STACKS];   
typedef  char  _GLOBAL_129_T; extern  _GLOBAL_129_T  _GLOBAL_0__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_1__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_2__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_3__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_4__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_5__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_6__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_7__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_8__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_9__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_10__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_11__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_12__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_13__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_14__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_15__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_16__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_17__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_18__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_19__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_20__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_21__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_22__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_23__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_24__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_25__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_26__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_27__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_28__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_29__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_30__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_31__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_32__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_33__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_34__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_35__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_36__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_37__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_38__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_39__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_40__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_41__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_42__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_43__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_44__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_45__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_46__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_47__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_48__end_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_49__end_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__end_I) *_GLOBAL__end_32_A[NUM_STACKS];  
typedef  char  _GLOBAL_130_T; extern  _GLOBAL_130_T  _GLOBAL_0___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_1___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_2___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_3___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_4___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_5___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_6___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_7___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_8___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_9___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_10___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_11___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_12___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_13___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_14___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_15___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_16___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_17___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_18___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_19___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_20___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_21___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_22___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_23___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_24___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_25___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_26___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_27___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_28___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_29___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_30___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_31___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_32___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_33___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_34___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_35___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_36___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_37___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_38___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_39___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_40___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_41___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_42___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_43___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_44___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_45___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_46___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_47___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_48___per_cpu_start_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_49___per_cpu_start_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___per_cpu_start_I) *_GLOBAL___per_cpu_start_33_A[NUM_STACKS];extern  _GLOBAL_130_T  _GLOBAL_0___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_1___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_2___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_3___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_4___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_5___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_6___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_7___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_8___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_9___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_10___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_11___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_12___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_13___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_14___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_15___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_16___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_17___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_18___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_19___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_20___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_21___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_22___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_23___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_24___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_25___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_26___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_27___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_28___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_29___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_30___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_31___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_32___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_33___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_34___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_35___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_36___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_37___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_38___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_39___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_40___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_41___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_42___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_43___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_44___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_45___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_46___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_47___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_48___per_cpu_end_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_49___per_cpu_end_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___per_cpu_end_I) *_GLOBAL___per_cpu_end_34_A[NUM_STACKS];   
typedef  char  _GLOBAL_131_T; extern  _GLOBAL_131_T  _GLOBAL_0___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_1___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_2___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_3___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_4___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_5___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_6___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_7___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_8___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_9___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_10___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_11___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_12___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_13___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_14___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_15___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_16___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_17___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_18___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_19___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_20___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_21___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_22___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_23___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_24___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_25___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_26___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_27___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_28___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_29___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_30___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_31___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_32___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_33___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_34___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_35___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_36___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_37___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_38___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_39___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_40___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_41___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_42___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_43___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_44___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_45___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_46___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_47___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_48___kprobes_text_start_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_49___kprobes_text_start_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___kprobes_text_start_I) *_GLOBAL___kprobes_text_start_35_A[NUM_STACKS];extern  _GLOBAL_131_T  _GLOBAL_0___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_1___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_2___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_3___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_4___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_5___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_6___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_7___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_8___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_9___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_10___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_11___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_12___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_13___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_14___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_15___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_16___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_17___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_18___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_19___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_20___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_21___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_22___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_23___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_24___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_25___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_26___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_27___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_28___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_29___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_30___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_31___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_32___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_33___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_34___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_35___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_36___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_37___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_38___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_39___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_40___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_41___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_42___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_43___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_44___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_45___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_46___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_47___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_48___kprobes_text_end_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_49___kprobes_text_end_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___kprobes_text_end_I) *_GLOBAL___kprobes_text_end_36_A[NUM_STACKS];   
typedef  char  _GLOBAL_132_T; extern  _GLOBAL_132_T  _GLOBAL_0___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_1___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_2___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_3___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_4___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_5___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_6___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_7___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_8___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_9___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_10___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_11___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_12___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_13___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_14___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_15___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_16___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_17___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_18___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_19___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_20___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_21___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_22___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_23___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_24___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_25___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_26___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_27___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_28___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_29___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_30___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_31___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_32___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_33___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_34___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_35___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_36___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_37___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_38___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_39___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_40___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_41___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_42___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_43___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_44___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_45___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_46___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_47___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_48___initdata_begin_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_49___initdata_begin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___initdata_begin_I) *_GLOBAL___initdata_begin_37_A[NUM_STACKS];extern  _GLOBAL_132_T  _GLOBAL_0___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_1___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_2___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_3___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_4___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_5___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_6___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_7___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_8___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_9___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_10___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_11___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_12___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_13___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_14___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_15___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_16___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_17___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_18___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_19___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_20___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_21___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_22___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_23___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_24___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_25___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_26___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_27___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_28___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_29___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_30___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_31___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_32___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_33___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_34___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_35___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_36___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_37___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_38___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_39___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_40___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_41___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_42___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_43___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_44___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_45___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_46___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_47___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_48___initdata_end_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_49___initdata_end_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___initdata_end_I) *_GLOBAL___initdata_end_38_A[NUM_STACKS];   
typedef  char  _GLOBAL_133_T; extern  _GLOBAL_133_T  _GLOBAL_0___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_1___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_2___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_3___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_4___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_5___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_6___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_7___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_8___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_9___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_10___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_11___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_12___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_13___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_14___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_15___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_16___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_17___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_18___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_19___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_20___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_21___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_22___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_23___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_24___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_25___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_26___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_27___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_28___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_29___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_30___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_31___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_32___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_33___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_34___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_35___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_36___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_37___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_38___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_39___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_40___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_41___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_42___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_43___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_44___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_45___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_46___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_47___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_48___start_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_49___start_rodata_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___start_rodata_I) *_GLOBAL___start_rodata_39_A[NUM_STACKS];extern  _GLOBAL_133_T  _GLOBAL_0___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_1___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_2___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_3___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_4___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_5___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_6___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_7___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_8___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_9___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_10___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_11___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_12___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_13___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_14___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_15___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_16___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_17___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_18___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_19___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_20___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_21___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_22___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_23___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_24___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_25___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_26___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_27___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_28___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_29___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_30___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_31___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_32___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_33___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_34___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_35___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_36___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_37___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_38___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_39___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_40___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_41___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_42___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_43___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_44___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_45___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_46___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_47___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_48___end_rodata_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_49___end_rodata_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___end_rodata_I) *_GLOBAL___end_rodata_40_A[NUM_STACKS];   
# 6 "linux-2.6.18/include/asm/sections.h" 2
# 19 "linux-2.6.18/include/asm/hw_irq.h" 2

struct irq_chip;
# 31 "linux-2.6.18/include/asm/hw_irq.h"
typedef  u8  _GLOBAL_134_T; extern  _GLOBAL_134_T  _GLOBAL_0_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_1_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_2_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_3_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_4_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_5_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_6_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_7_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_8_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_9_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_10_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_11_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_12_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_13_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_14_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_15_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_16_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_17_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_18_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_19_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_20_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_21_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_22_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_23_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_24_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_25_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_26_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_27_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_28_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_29_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_30_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_31_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_32_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_33_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_34_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_35_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_36_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_37_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_38_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_39_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_40_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_41_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_42_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_43_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_44_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_45_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_46_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_47_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_48_irq_vector_I [ 224 ] ; extern  _GLOBAL_134_T  _GLOBAL_49_irq_vector_I [ 224 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_irq_vector_I) *_GLOBAL_irq_vector_41_A[NUM_STACKS];  



typedef  void   ( *_GLOBAL_136_T [ 224 ]   )  ( void  ) ; extern  _GLOBAL_136_T _GLOBAL_0_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_1_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_2_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_3_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_4_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_5_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_6_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_7_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_8_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_9_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_10_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_11_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_12_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_13_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_14_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_15_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_16_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_17_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_18_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_19_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_20_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_21_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_22_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_23_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_24_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_25_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_26_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_27_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_28_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_29_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_30_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_31_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_32_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_33_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_34_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_35_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_36_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_37_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_38_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_39_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_40_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_41_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_42_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_43_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_44_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_45_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_46_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_47_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_48_interrupt_I; extern  _GLOBAL_136_T _GLOBAL_49_interrupt_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_interrupt_I) *_GLOBAL_interrupt_42_A[NUM_STACKS];  
# 44 "linux-2.6.18/include/asm/hw_irq.h"
 void apic_timer_interrupt(void);
 __attribute__((regparm(3))) void error_interrupt(void);
 __attribute__((regparm(3))) void spurious_interrupt(void);
 __attribute__((regparm(3))) void thermal_interrupt(struct pt_regs *);



void disable_8259A_irq(unsigned int irq);
void enable_8259A_irq(unsigned int irq);
int i8259A_irq_pending(unsigned int irq);
void make_8259A_irq(unsigned int irq);
void init_8259A(int aeoi);
void send_IPI_self(int vector) __attribute__((regparm(3))) ;
void init_VISWS_APIC_irqs(void);
void setup_IO_APIC(void);
void disable_IO_APIC(void);
void print_IO_APIC(void);
int IO_APIC_get_PCI_irq_vector(int bus, int slot, int fn);
void send_IPI(int dest, int vector);
void setup_ioapic_dest(void);

typedef  unsigned long   _GLOBAL_137_T; extern  _GLOBAL_137_T  global_io_apic_irqs[NUM_STACKS];    

typedef  atomic_t  _GLOBAL_138_T; extern  _GLOBAL_138_T  global_irq_err_count[NUM_STACKS];   
typedef  atomic_t  _GLOBAL_139_T; extern  _GLOBAL_139_T  global_irq_mis_count[NUM_STACKS];   
# 183 "linux-2.6.18/include/linux/irq.h" 2

extern int setup_irq(unsigned int irq, struct irqaction *new);
# 6 "linux-2.6.18/include/asm/hardirq.h" 2

typedef struct {
 unsigned int __softirq_pending;
 unsigned long idle_timestamp;
 unsigned int __nmi_count;
 unsigned int apic_timer_irqs;
}  __attribute__((__aligned__((1 << (7))))) irq_cpustat_t;

typedef  __typeof__ ( irq_cpustat_t )   _GLOBAL_140_T; extern  _GLOBAL_140_T  global_per_cpu__irq_stat[NUM_STACKS];   
typedef  irq_cpustat_t  _GLOBAL_141_T; extern  _GLOBAL_141_T  _GLOBAL_0_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_1_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_2_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_3_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_4_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_5_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_6_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_7_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_8_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_9_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_10_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_11_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_12_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_13_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_14_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_15_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_16_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_17_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_18_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_19_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_20_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_21_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_22_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_23_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_24_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_25_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_26_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_27_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_28_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_29_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_30_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_31_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_32_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_33_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_34_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_35_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_36_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_37_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_38_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_39_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_40_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_41_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_42_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_43_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_44_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_45_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_46_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_47_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_48_irq_stat_I [ ] ; extern  _GLOBAL_141_T  _GLOBAL_49_irq_stat_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_irq_stat_I) *_GLOBAL_irq_stat_43_A[NUM_STACKS];  




void ack_bad_irq(unsigned int irq);
# 1 "linux-2.6.18/include/linux/irq_cpustat.h" 1
# 22 "linux-2.6.18/include/asm/hardirq.h" 2
# 8 "linux-2.6.18/include/linux/hardirq.h" 2
# 90 "linux-2.6.18/include/linux/hardirq.h"
struct task_struct;


static inline  __attribute__((always_inline)) void account_system_vtime(struct task_struct *tsk)
{
}
# 124 "linux-2.6.18/include/linux/hardirq.h"
extern void irq_exit(void);
# 12 "linux-2.6.18/include/linux/interrupt.h" 2
# 67 "linux-2.6.18/include/linux/interrupt.h"
struct irqaction {
 irqreturn_t (*handler)(int, void *, struct pt_regs *);
 unsigned long flags;
 cpumask_t mask;
 const char *name;
 void *dev_id;
 struct irqaction *next;
 int irq;
 struct proc_dir_entry *dir;
};

extern irqreturn_t no_action(int cpl, void *dev_id, struct pt_regs *regs);
extern int request_irq(unsigned int,
         irqreturn_t (*handler)(int, void *, struct pt_regs *),
         unsigned long, const char *, void *);
extern void free_irq(unsigned int, void *);
# 178 "linux-2.6.18/include/linux/interrupt.h"
static inline  __attribute__((always_inline)) void  __attribute__((deprecated)) cli(void)
{
 ;
}
static inline  __attribute__((always_inline)) void  __attribute__((deprecated)) sti(void)
{
 ;
}
static inline  __attribute__((always_inline)) void  __attribute__((deprecated)) save_flags(unsigned long *x)
{
 (void)(*x);
}

static inline  __attribute__((always_inline)) void  __attribute__((deprecated)) restore_flags(unsigned long x)
{
 (void)(x);
}

static inline  __attribute__((always_inline)) void  __attribute__((deprecated)) save_and_cli(unsigned long *x)
{
 (void)(*x);
}



extern void local_bh_disable(void);
extern void __local_bh_enable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);







enum
{
 HI_SOFTIRQ=0,
 TIMER_SOFTIRQ,
 NET_TX_SOFTIRQ,
 NET_RX_SOFTIRQ,
 BLOCK_SOFTIRQ,
 TASKLET_SOFTIRQ
};





struct softirq_action
{
 void (*action)(struct softirq_action *);
 void *data;
};

  __attribute__((regparm(0))) void do_softirq(void);
extern void open_softirq(int nr, void (*action)(struct softirq_action*), void *data);
extern void softirq_init(void);

extern void raise_softirq_irqoff(unsigned int nr) __attribute__((regparm(3))) ;
extern void raise_softirq(unsigned int nr) __attribute__((regparm(3))) ;
# 263 "linux-2.6.18/include/linux/interrupt.h"
struct tasklet_struct
{
 struct tasklet_struct *next;
 unsigned long state;
 atomic_t count;
 void (*func)(unsigned long);
 unsigned long data;
};
# 279 "linux-2.6.18/include/linux/interrupt.h"
enum
{
 TASKLET_STATE_SCHED,
 TASKLET_STATE_RUN
};
# 307 "linux-2.6.18/include/linux/interrupt.h"
extern void __tasklet_schedule(struct tasklet_struct *t) __attribute__((regparm(3))) ;

static inline  __attribute__((always_inline)) void tasklet_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_schedule(t);
}

extern void __tasklet_hi_schedule(struct tasklet_struct *t) __attribute__((regparm(3))) ;

static inline  __attribute__((always_inline)) void tasklet_hi_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_hi_schedule(t);
}


static inline  __attribute__((always_inline)) void tasklet_disable_nosync(struct tasklet_struct *t)
{
 atomic_inc(&t->count);
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void tasklet_disable(struct tasklet_struct *t)
{
 tasklet_disable_nosync(t);
 do { } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void tasklet_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_dec(&t->count);
}

static inline  __attribute__((always_inline)) void tasklet_hi_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_dec(&t->count);
}

extern void tasklet_kill(struct tasklet_struct *t);
extern void tasklet_kill_immediate(struct tasklet_struct *t, unsigned int cpu);
extern void tasklet_init(struct tasklet_struct *t,
    void (*func)(unsigned long), unsigned long data);
# 396 "linux-2.6.18/include/linux/interrupt.h"
extern unsigned long probe_irq_on(void);
extern int probe_irq_off(unsigned long);
extern unsigned int probe_irq_mask(unsigned long);
# 25 "linux-2.6.18/kernel/timer.c" 2


# 1 "linux-2.6.18/include/linux/mm.h" 1
# 14 "linux-2.6.18/include/linux/mm.h"
# 1 "linux-2.6.18/include/linux/prio_tree.h" 1
# 14 "linux-2.6.18/include/linux/prio_tree.h"
struct raw_prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
};

struct prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
 unsigned long start;
 unsigned long last;
};

struct prio_tree_root {
 struct prio_tree_node *prio_tree_node;
 unsigned short index_bits;
 unsigned short raw;




};

struct prio_tree_iter {
 struct prio_tree_node *cur;
 unsigned long mask;
 unsigned long value;
 int size_level;

 struct prio_tree_root *root;
 unsigned long r_index;
 unsigned long h_index;
};

static inline  __attribute__((always_inline)) void prio_tree_iter_init(struct prio_tree_iter *iter,
  struct prio_tree_root *root, unsigned long r_index, unsigned long h_index)
{
 iter->root = root;
 iter->r_index = r_index;
 iter->h_index = h_index;
 iter->cur = ((void *)0);
}
# 84 "linux-2.6.18/include/linux/prio_tree.h"
static inline  __attribute__((always_inline)) int prio_tree_empty(const struct prio_tree_root *root)
{
 return root->prio_tree_node == ((void *)0);
}

static inline  __attribute__((always_inline)) int prio_tree_root(const struct prio_tree_node *node)
{
 return node->parent == node;
}

static inline  __attribute__((always_inline)) int prio_tree_left_empty(const struct prio_tree_node *node)
{
 return node->left == node;
}

static inline  __attribute__((always_inline)) int prio_tree_right_empty(const struct prio_tree_node *node)
{
 return node->right == node;
}


struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
                struct prio_tree_node *old, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
                struct prio_tree_node *node);
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter);
# 15 "linux-2.6.18/include/linux/mm.h" 2
# 1 "linux-2.6.18/include/linux/fs.h" 1
# 9 "linux-2.6.18/include/linux/fs.h"
# 1 "linux-2.6.18/include/linux/limits.h" 1
# 10 "linux-2.6.18/include/linux/fs.h" 2
# 1 "linux-2.6.18/include/linux/ioctl.h" 1



# 1 "linux-2.6.18/include/asm/ioctl.h" 1
# 1 "linux-2.6.18/include/asm-generic/ioctl.h" 1
# 51 "linux-2.6.18/include/asm-generic/ioctl.h"
typedef  unsigned int   _GLOBAL_142_T; extern  _GLOBAL_142_T  global___invalid_size_argument_for_IOC[NUM_STACKS];    
# 1 "linux-2.6.18/include/asm/ioctl.h" 2
# 5 "linux-2.6.18/include/linux/ioctl.h" 2
# 11 "linux-2.6.18/include/linux/fs.h" 2
# 35 "linux-2.6.18/include/linux/fs.h"
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};
typedef  struct files_stat_struct   _GLOBAL_143_T; extern  _GLOBAL_143_T  global_files_stat[NUM_STACKS];    
extern int get_max_files(void);

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
typedef  struct inodes_stat_t   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_inodes_stat[NUM_STACKS];    

typedef  int  _GLOBAL_145_T; extern  _GLOBAL_145_T  global_leases_enable[NUM_STACKS]; extern  _GLOBAL_145_T  global_lease_break_time[NUM_STACKS];    
# 228 "linux-2.6.18/include/linux/fs.h"
# 1 "linux-2.6.18/include/linux/kdev_t.h" 1
# 21 "linux-2.6.18/include/linux/kdev_t.h"
static inline  __attribute__((always_inline)) int old_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < 256 && ((unsigned int) ((dev) & ((1U << 20) - 1))) < 256;
}

static inline  __attribute__((always_inline)) u16 old_encode_dev(dev_t dev)
{
 return (((unsigned int) ((dev) >> 20)) << 8) | ((unsigned int) ((dev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) dev_t old_decode_dev(u16 val)
{
 return ((((val >> 8) & 255) << 20) | (val & 255));
}

static inline  __attribute__((always_inline)) int new_valid_dev(dev_t dev)
{
 return 1;
}

static inline  __attribute__((always_inline)) u32 new_encode_dev(dev_t dev)
{
 unsigned major = ((unsigned int) ((dev) >> 20));
 unsigned minor = ((unsigned int) ((dev) & ((1U << 20) - 1)));
 return (minor & 0xff) | (major << 8) | ((minor & ~0xff) << 12);
}

static inline  __attribute__((always_inline)) dev_t new_decode_dev(u32 dev)
{
 unsigned major = (dev & 0xfff00) >> 8;
 unsigned minor = (dev & 0xff) | ((dev >> 12) & 0xfff00);
 return (((major) << 20) | (minor));
}

static inline  __attribute__((always_inline)) int huge_valid_dev(dev_t dev)
{
 return 1;
}

static inline  __attribute__((always_inline)) u64 huge_encode_dev(dev_t dev)
{
 return new_encode_dev(dev);
}

static inline  __attribute__((always_inline)) dev_t huge_decode_dev(u64 dev)
{
 return new_decode_dev(dev);
}

static inline  __attribute__((always_inline)) int sysv_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < (1<<14) && ((unsigned int) ((dev) & ((1U << 20) - 1))) < (1<<18);
}

static inline  __attribute__((always_inline)) u32 sysv_encode_dev(dev_t dev)
{
 return ((unsigned int) ((dev) & ((1U << 20) - 1))) | (((unsigned int) ((dev) >> 20)) << 18);
}

static inline  __attribute__((always_inline)) unsigned sysv_major(u32 dev)
{
 return (dev >> 18) & 0x3fff;
}

static inline  __attribute__((always_inline)) unsigned sysv_minor(u32 dev)
{
 return dev & 0x3ffff;
}
# 229 "linux-2.6.18/include/linux/fs.h" 2
# 1 "linux-2.6.18/include/linux/dcache.h" 1
# 12 "linux-2.6.18/include/linux/dcache.h"
struct nameidata;
struct vfsmount;
# 33 "linux-2.6.18/include/linux/dcache.h"
struct qstr {
 unsigned int hash;
 unsigned int len;
 const unsigned char *name;
};

struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
};
typedef  struct dentry_stat_t   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_dentry_stat[NUM_STACKS];    






static inline  __attribute__((always_inline)) unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}





static inline  __attribute__((always_inline)) unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


static inline  __attribute__((always_inline)) unsigned int
full_name_hash(const unsigned char *name, unsigned int len)
{
 unsigned long hash = 0;
 while (len--)
  hash = partial_name_hash(*name++, hash);
 return end_name_hash(hash);
}

struct dcookie_struct;



struct dentry {
 atomic_t d_count;
 unsigned int d_flags;
 spinlock_t d_lock;
 struct inode *d_inode;





 struct hlist_node d_hash;
 struct dentry *d_parent;
 struct qstr d_name;

 struct list_head d_lru;



 union {
  struct list_head d_child;
   struct rcu_head d_rcu;
 } d_u;
 struct list_head d_subdirs;
 struct list_head d_alias;
 unsigned long d_time;
 struct dentry_operations *d_op;
 struct super_block *d_sb;
 void *d_fsdata;

 struct dcookie_struct *d_cookie;

 int d_mounted;
 unsigned char d_iname[36];
};







enum dentry_d_lock_class
{
 DENTRY_D_LOCK_NORMAL,
 DENTRY_D_LOCK_NESTED
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, struct nameidata *);
 int (*d_hash) (struct dentry *, struct qstr *);
 int (*d_compare) (struct dentry *, struct qstr *, struct qstr *);
 int (*d_delete)(struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
};
# 179 "linux-2.6.18/include/linux/dcache.h"
typedef  spinlock_t  _GLOBAL_147_T; extern  _GLOBAL_147_T  global_dcache_lock[NUM_STACKS];   
# 197 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void __d_drop(struct dentry *dentry)
{
 if (!(dentry->d_flags & 0x0010)) {
  dentry->d_flags |= 0x0010;
  hlist_del_rcu(&dentry->d_hash);
 }
}

static inline  __attribute__((always_inline)) void d_drop(struct dentry *dentry)
{
 do { do { } while (0); (void)0; (void)(&global_dcache_lock[get_stack_id()]); } while (0);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
  __d_drop(dentry);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 do { do { } while (0); (void)0; (void)(&global_dcache_lock[get_stack_id()]); } while (0);
}

static inline  __attribute__((always_inline)) int dname_external(struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_alloc_anon(struct inode *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 260 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}
# 274 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) struct dentry *d_add_unique(struct dentry *entry, struct inode *inode)
{
 struct dentry *res;

 res = d_instantiate_unique(entry, inode);
 d_rehash(res != ((void *)0) ? res : entry);
 return res;
}


extern void d_move(struct dentry *, struct dentry *);


extern struct dentry * d_lookup(struct dentry *, struct qstr *);
extern struct dentry * __d_lookup(struct dentry *, struct qstr *);
extern struct dentry * d_hash_and_lookup(struct dentry *, struct qstr *);


extern int d_validate(struct dentry *, struct dentry *);

extern char * d_path(struct dentry *, struct vfsmount *, char *, int);
# 311 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) struct dentry *dget(struct dentry *dentry)
{
 if (dentry) {
  do { if (!((&dentry->d_count)->counter)) ; } while(0);
  atomic_inc(&dentry->d_count);
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
# 329 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) int d_unhashed(struct dentry *dentry)
{
 return (dentry->d_flags & 0x0010);
}

static inline  __attribute__((always_inline)) struct dentry *dget_parent(struct dentry *dentry)
{
 struct dentry *ret;

 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 ret = dget(dentry->d_parent);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return ret;
}

extern void dput(struct dentry *);

static inline  __attribute__((always_inline)) int d_mountpoint(struct dentry *dentry)
{
 return dentry->d_mounted;
}

extern struct vfsmount *lookup_mnt(struct vfsmount *, struct dentry *);
extern struct vfsmount *__lookup_mnt(struct vfsmount *, struct dentry *, int);
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);

typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_sysctl_vfs_cache_pressure[NUM_STACKS];   
# 230 "linux-2.6.18/include/linux/fs.h" 2




# 1 "linux-2.6.18/include/linux/radix-tree.h" 1
# 29 "linux-2.6.18/include/linux/radix-tree.h"
struct radix_tree_root {
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node *rnode;
};
# 51 "linux-2.6.18/include/linux/radix-tree.h"
int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
int radix_tree_preload(gfp_t gfp_mask);
void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag);

static inline  __attribute__((always_inline)) void radix_tree_preload_end(void)
{
 do { } while (0);
}
# 235 "linux-2.6.18/include/linux/fs.h" 2
# 244 "linux-2.6.18/include/linux/fs.h"
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;

extern void  __attribute__ ((__section__ (".init.text"))) inode_init(unsigned long);
extern void  __attribute__ ((__section__ (".init.text"))) inode_init_early(void);
extern void  __attribute__ ((__section__ (".init.text"))) mnt_init(unsigned long);
extern void  __attribute__ ((__section__ (".init.text"))) files_init(unsigned long);

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *private);
# 293 "linux-2.6.18/include/linux/fs.h"
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 uid_t ia_uid;
 gid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;






 struct file *ia_file;
};




# 1 "linux-2.6.18/include/linux/quota.h" 1
# 44 "linux-2.6.18/include/linux/quota.h"
typedef __kernel_uid32_t qid_t;
typedef __u64 qsize_t;

typedef  spinlock_t  _GLOBAL_149_T; extern  _GLOBAL_149_T  global_dq_data_lock[NUM_STACKS];   
# 105 "linux-2.6.18/include/linux/quota.h"
struct if_dqblk {
 __u64 dqb_bhardlimit;
 __u64 dqb_bsoftlimit;
 __u64 dqb_curspace;
 __u64 dqb_ihardlimit;
 __u64 dqb_isoftlimit;
 __u64 dqb_curinodes;
 __u64 dqb_btime;
 __u64 dqb_itime;
 __u32 dqb_valid;
};
# 126 "linux-2.6.18/include/linux/quota.h"
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};





# 1 "linux-2.6.18/include/linux/dqblk_xfs.h" 1
# 50 "linux-2.6.18/include/linux/dqblk_xfs.h"
typedef struct fs_disk_quota {
 __s8 d_version;
 __s8 d_flags;
 __u16 d_fieldmask;
 __u32 d_id;
 __u64 d_blk_hardlimit;
 __u64 d_blk_softlimit;
 __u64 d_ino_hardlimit;
 __u64 d_ino_softlimit;
 __u64 d_bcount;
 __u64 d_icount;
 __s32 d_itimer;

 __s32 d_btimer;
 __u16 d_iwarns;
 __u16 d_bwarns;
 __s32 d_padding2;
 __u64 d_rtb_hardlimit;
 __u64 d_rtb_softlimit;
 __u64 d_rtbcount;
 __s32 d_rtbtimer;
 __u16 d_rtbwarns;
 __s16 d_padding3;
 char d_padding4[8];
} fs_disk_quota_t;
# 137 "linux-2.6.18/include/linux/dqblk_xfs.h"
typedef struct fs_qfilestat {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
} fs_qfilestat_t;

typedef struct fs_quota_stat {
 __s8 qs_version;
 __u16 qs_flags;
 __s8 qs_pad;
 fs_qfilestat_t qs_uquota;
 fs_qfilestat_t qs_gquota;
 __u32 qs_incoredqs;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
} fs_quota_stat_t;
# 138 "linux-2.6.18/include/linux/quota.h" 2
# 1 "linux-2.6.18/include/linux/dqblk_v1.h" 1
# 21 "linux-2.6.18/include/linux/dqblk_v1.h"
struct v1_mem_dqinfo {
};
# 139 "linux-2.6.18/include/linux/quota.h" 2
# 1 "linux-2.6.18/include/linux/dqblk_v2.h" 1
# 20 "linux-2.6.18/include/linux/dqblk_v2.h"
struct v2_mem_dqinfo {
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
};
# 140 "linux-2.6.18/include/linux/quota.h" 2
# 151 "linux-2.6.18/include/linux/quota.h"
struct mem_dqblk {
 __u32 dqb_bhardlimit;
 __u32 dqb_bsoftlimit;
 qsize_t dqb_curspace;
 __u32 dqb_ihardlimit;
 __u32 dqb_isoftlimit;
 __u32 dqb_curinodes;
 time_t dqb_btime;
 time_t dqb_itime;
};




struct quota_format_type;

struct mem_dqinfo {
 struct quota_format_type *dqi_format;
 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 union {
  struct v1_mem_dqinfo v1_i;
  struct v2_mem_dqinfo v2_i;
 } u;
};

struct super_block;





extern void mark_info_dirty(struct super_block *sb, int type);







struct dqstats {
 int lookups;
 int drops;
 int reads;
 int writes;
 int cache_hits;
 int allocated_dquots;
 int free_dquots;
 int syncs;
};

typedef  struct dqstats   _GLOBAL_150_T; extern  _GLOBAL_150_T  global_dqstats[NUM_STACKS];    
# 213 "linux-2.6.18/include/linux/quota.h"
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct mutex dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 unsigned int dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 short dq_type;
 struct mem_dqblk dq_dqb;
};







struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
 int (*release_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 int (*initialize) (struct inode *, int);
 int (*drop) (struct inode *);
 int (*alloc_space) (struct inode *, qsize_t, int);
 int (*alloc_inode) (const struct inode *, unsigned long);
 int (*free_space) (struct inode *, qsize_t);
 int (*free_inode) (const struct inode *, unsigned long);
 int (*transfer) (struct inode *, struct iattr *);
 int (*write_dquot) (struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);
};


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, char *);
 int (*quota_off)(struct super_block *, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*set_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
 int (*get_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
 int (*set_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
};

struct quota_format_type {
 int qf_fmt_id;
 struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};




struct quota_info {
 unsigned int flags;
 struct mutex dqio_mutex;
 struct mutex dqonoff_mutex;
 struct rw_semaphore dqptr_sem;
 struct inode *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};


int mark_dquot_dirty(struct dquot *dquot);
# 307 "linux-2.6.18/include/linux/quota.h"
int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
# 315 "linux-2.6.18/include/linux/fs.h" 2
# 342 "linux-2.6.18/include/linux/fs.h"
enum positive_aop_returns {
 AOP_WRITEPAGE_ACTIVATE = 0x80000,
 AOP_TRUNCATED_PAGE = 0x80001,
};




struct page;
struct address_space;
struct writeback_control;

struct address_space_operations {
 int (*writepage)(struct page *page, struct writeback_control *wbc);
 int (*readpage)(struct file *, struct page *);
 void (*sync_page)(struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);





 int (*prepare_write)(struct file *, struct page *, unsigned, unsigned);
 int (*commit_write)(struct file *, struct page *, unsigned, unsigned);

 sector_t (*bmap)(struct address_space *, sector_t);
 void (*invalidatepage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, gfp_t);
 ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 struct page* (*get_xip_page)(struct address_space *, sector_t,
   int);

 int (*migratepage) (struct address_space *,
   struct page *, struct page *);
};

struct backing_dev_info;
struct address_space {
 struct inode *host;
 struct radix_tree_root page_tree;
 rwlock_t tree_lock;
 unsigned int i_mmap_writable;
 struct prio_tree_root i_mmap;
 struct list_head i_mmap_nonlinear;
 spinlock_t i_mmap_lock;
 unsigned int truncate_count;
 unsigned long nrpages;
 unsigned long writeback_index;
 const struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 struct address_space *assoc_mapping;
} __attribute__((aligned(sizeof(long)))) ;






struct block_device {
 dev_t bd_dev;
 struct inode * bd_inode;
 int bd_openers;
 struct mutex bd_mutex;
 struct mutex bd_mount_mutex;
 struct list_head bd_inodes;
 void * bd_holder;
 int bd_holders;



 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct list_head bd_list;
 struct backing_dev_info *bd_inode_backing_dev_info;






 unsigned long bd_private;
};
# 449 "linux-2.6.18/include/linux/fs.h"
enum bdev_bd_mutex_lock_class
{
 BD_MUTEX_NORMAL,
 BD_MUTEX_WHOLE,
 BD_MUTEX_PARTITION
};
# 464 "linux-2.6.18/include/linux/fs.h"
int mapping_tagged(struct address_space *mapping, int tag);




static inline  __attribute__((always_inline)) int mapping_mapped(struct address_space *mapping)
{
 return !prio_tree_empty(&mapping->i_mmap) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline  __attribute__((always_inline)) int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
# 497 "linux-2.6.18/include/linux/fs.h"
struct inode {
 struct hlist_node i_hash;
 struct list_head i_list;
 struct list_head i_sb_list;
 struct list_head i_dentry;
 unsigned long i_ino;
 atomic_t i_count;
 umode_t i_mode;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 dev_t i_rdev;
 loff_t i_size;
 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 unsigned int i_blkbits;
 unsigned long i_blksize;
 unsigned long i_version;
 blkcnt_t i_blocks;
 unsigned short i_bytes;
 spinlock_t i_lock;
 struct mutex i_mutex;
 struct rw_semaphore i_alloc_sem;
 struct inode_operations *i_op;
 const struct file_operations *i_fop;
 struct super_block *i_sb;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;




 struct list_head i_devices;
 struct pipe_inode_info *i_pipe;
 struct block_device *i_bdev;
 struct cdev *i_cdev;
 int i_cindex;

 __u32 i_generation;
# 549 "linux-2.6.18/include/linux/fs.h"
 unsigned long i_state;
 unsigned long dirtied_when;

 unsigned int i_flags;

 atomic_t i_writecount;
 void *i_security;
 union {
  void *generic_ip;
 } u;



};
# 575 "linux-2.6.18/include/linux/fs.h"
enum inode_i_mutex_lock_class
{
 I_MUTEX_NORMAL,
 I_MUTEX_PARENT,
 I_MUTEX_CHILD,
 I_MUTEX_XATTR,
 I_MUTEX_QUOTA
};
# 594 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) loff_t i_size_read(struct inode *inode)
{
# 613 "linux-2.6.18/include/linux/fs.h"
 return inode->i_size;

}


static inline  __attribute__((always_inline)) void i_size_write(struct inode *inode, loff_t i_size)
{
# 629 "linux-2.6.18/include/linux/fs.h"
 inode->i_size = i_size;

}

static inline  __attribute__((always_inline)) unsigned iminor(struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) unsigned imajor(struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 int pid;
 uid_t uid, euid;
 void *security;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned long size;
 unsigned long flags;
 unsigned long cache_hit;
 unsigned long prev_page;
 unsigned long ahead_start;
 unsigned long ahead_size;
 unsigned long ra_pages;
 unsigned long mmap_hit;
 unsigned long mmap_miss;
};



struct file {




 union {
  struct list_head fu_list;
  struct rcu_head fu_rcuhead;
 } f_u;
 struct dentry *f_dentry;
 struct vfsmount *f_vfsmnt;
 const struct file_operations *f_op;
 atomic_t f_count;
 unsigned int f_flags;
 mode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 unsigned int f_uid, f_gid;
 struct file_ra_state f_ra;

 unsigned long f_version;
 void *f_security;


 void *private_data;



 struct list_head f_ep_links;
 spinlock_t f_ep_lock;

 struct address_space *f_mapping;
};
typedef  spinlock_t  _GLOBAL_151_T; extern  _GLOBAL_151_T  global_files_lock[NUM_STACKS];   
# 736 "linux-2.6.18/include/linux/fs.h"
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_insert)(struct file_lock *);
 void (*fl_remove)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*fl_compare_owner)(struct file_lock *, struct file_lock *);
 void (*fl_notify)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
 void (*fl_break)(struct file_lock *);
 int (*fl_mylease)(struct file_lock *, struct file_lock *);
 int (*fl_change)(struct file_lock **, int);
};


# 1 "linux-2.6.18/include/linux/nfs_fs_i.h" 1





# 1 "linux-2.6.18/include/linux/nfs.h" 1
# 39 "linux-2.6.18/include/linux/nfs.h"
 enum nfs_stat {
 NFS_OK = 0,
 NFSERR_PERM = 1,
 NFSERR_NOENT = 2,
 NFSERR_IO = 5,
 NFSERR_NXIO = 6,
 NFSERR_EAGAIN = 11,
 NFSERR_ACCES = 13,
 NFSERR_EXIST = 17,
 NFSERR_XDEV = 18,
 NFSERR_NODEV = 19,
 NFSERR_NOTDIR = 20,
 NFSERR_ISDIR = 21,
 NFSERR_INVAL = 22,
 NFSERR_FBIG = 27,
 NFSERR_NOSPC = 28,
 NFSERR_ROFS = 30,
 NFSERR_MLINK = 31,
 NFSERR_OPNOTSUPP = 45,
 NFSERR_NAMETOOLONG = 63,
 NFSERR_NOTEMPTY = 66,
 NFSERR_DQUOT = 69,
 NFSERR_STALE = 70,
 NFSERR_REMOTE = 71,
 NFSERR_WFLUSH = 99,
 NFSERR_BADHANDLE = 10001,
 NFSERR_NOT_SYNC = 10002,
 NFSERR_BAD_COOKIE = 10003,
 NFSERR_NOTSUPP = 10004,
 NFSERR_TOOSMALL = 10005,
 NFSERR_SERVERFAULT = 10006,
 NFSERR_BADTYPE = 10007,
 NFSERR_JUKEBOX = 10008,
 NFSERR_SAME = 10009,
 NFSERR_DENIED = 10010,
 NFSERR_EXPIRED = 10011,
 NFSERR_LOCKED = 10012,
 NFSERR_GRACE = 10013,
 NFSERR_FHEXPIRED = 10014,
 NFSERR_SHARE_DENIED = 10015,
 NFSERR_WRONGSEC = 10016,
 NFSERR_CLID_INUSE = 10017,
 NFSERR_RESOURCE = 10018,
 NFSERR_MOVED = 10019,
 NFSERR_NOFILEHANDLE = 10020,
 NFSERR_MINOR_VERS_MISMATCH = 10021,
 NFSERR_STALE_CLIENTID = 10022,
 NFSERR_STALE_STATEID = 10023,
 NFSERR_OLD_STATEID = 10024,
 NFSERR_BAD_STATEID = 10025,
 NFSERR_BAD_SEQID = 10026,
 NFSERR_NOT_SAME = 10027,
 NFSERR_LOCK_RANGE = 10028,
 NFSERR_SYMLINK = 10029,
 NFSERR_RESTOREFH = 10030,
 NFSERR_LEASE_MOVED = 10031,
 NFSERR_ATTRNOTSUPP = 10032,
 NFSERR_NO_GRACE = 10033,
 NFSERR_RECLAIM_BAD = 10034,
 NFSERR_RECLAIM_CONFLICT = 10035,
 NFSERR_BAD_XDR = 10036,
 NFSERR_LOCKS_HELD = 10037,
 NFSERR_OPENMODE = 10038,
 NFSERR_BADOWNER = 10039,
 NFSERR_BADCHAR = 10040,
 NFSERR_BADNAME = 10041,
 NFSERR_BAD_RANGE = 10042,
 NFSERR_LOCK_NOTSUPP = 10043,
 NFSERR_OP_ILLEGAL = 10044,
 NFSERR_DEADLOCK = 10045,
 NFSERR_FILE_OPEN = 10046,
 NFSERR_ADMIN_REVOKED = 10047,
 NFSERR_CB_PATH_DOWN = 10048,
 NFSERR_REPLAY_ME = 10049
};



enum nfs_ftype {
 NFNON = 0,
 NFREG = 1,
 NFDIR = 2,
 NFBLK = 3,
 NFCHR = 4,
 NFLNK = 5,
 NFSOCK = 6,
 NFBAD = 7,
 NFFIFO = 8
};


# 1 "linux-2.6.18/include/linux/sunrpc/msg_prot.h" 1
# 15 "linux-2.6.18/include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_authflavor_t;

enum rpc_auth_flavors {
 RPC_AUTH_NULL = 0,
 RPC_AUTH_UNIX = 1,
 RPC_AUTH_SHORT = 2,
 RPC_AUTH_DES = 3,
 RPC_AUTH_KRB = 4,
 RPC_AUTH_GSS = 6,
 RPC_AUTH_MAXFLAVOR = 8,

 RPC_AUTH_GSS_KRB5 = 390003,
 RPC_AUTH_GSS_KRB5I = 390004,
 RPC_AUTH_GSS_KRB5P = 390005,
 RPC_AUTH_GSS_LKEY = 390006,
 RPC_AUTH_GSS_LKEYI = 390007,
 RPC_AUTH_GSS_LKEYP = 390008,
 RPC_AUTH_GSS_SPKM = 390009,
 RPC_AUTH_GSS_SPKMI = 390010,
 RPC_AUTH_GSS_SPKMP = 390011,
};

enum rpc_msg_type {
 RPC_CALL = 0,
 RPC_REPLY = 1
};

enum rpc_reply_stat {
 RPC_MSG_ACCEPTED = 0,
 RPC_MSG_DENIED = 1
};

enum rpc_accept_stat {
 RPC_SUCCESS = 0,
 RPC_PROG_UNAVAIL = 1,
 RPC_PROG_MISMATCH = 2,
 RPC_PROC_UNAVAIL = 3,
 RPC_GARBAGE_ARGS = 4,
 RPC_SYSTEM_ERR = 5
};

enum rpc_reject_stat {
 RPC_MISMATCH = 0,
 RPC_AUTH_ERROR = 1
};

enum rpc_auth_stat {
 RPC_AUTH_OK = 0,
 RPC_AUTH_BADCRED = 1,
 RPC_AUTH_REJECTEDCRED = 2,
 RPC_AUTH_BADVERF = 3,
 RPC_AUTH_REJECTEDVERF = 4,
 RPC_AUTH_TOOWEAK = 5,

 RPCSEC_GSS_CREDPROBLEM = 13,
 RPCSEC_GSS_CTXPROBLEM = 14
};
# 98 "linux-2.6.18/include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_fraghdr;
# 131 "linux-2.6.18/include/linux/nfs.h" 2






struct nfs_fh {
 unsigned short size;
 unsigned char data[128];
};





static inline  __attribute__((always_inline)) int nfs_compare_fh(const struct nfs_fh *a, const struct nfs_fh *b)
{
 return a->size != b->size || __builtin_memcmp(a->data, b->data, a->size) != 0;
}

static inline  __attribute__((always_inline)) void nfs_copy_fh(struct nfs_fh *target, const struct nfs_fh *source)
{
 target->size = source->size;
 (__builtin_constant_p(source->size) ? __constant_memcpy((target->data),(source->data),(source->size)) : __memcpy((target->data),(source->data),(source->size)));
}
# 165 "linux-2.6.18/include/linux/nfs.h"
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};
# 7 "linux-2.6.18/include/linux/nfs_fs_i.h" 2

struct nlm_lockowner;




struct nfs_lock_info {
 u32 state;
 struct nlm_lockowner *owner;
 struct list_head list;
};

struct nfs4_lock_state;
struct nfs4_lock_info {
 struct nfs4_lock_state *owner;
};
# 757 "linux-2.6.18/include/linux/fs.h" 2

struct file_lock {
 struct file_lock *fl_next;
 struct list_head fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned int fl_pid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 unsigned char fl_flags;
 unsigned char fl_type;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;
 unsigned long fl_break_time;

 struct file_lock_operations *fl_ops;
 struct lock_manager_operations *fl_lmops;
 union {
  struct nfs_lock_info nfs_fl;
  struct nfs4_lock_info nfs4_fl;
 } fl_u;
};
# 789 "linux-2.6.18/include/linux/fs.h"
# 1 "linux-2.6.18/include/linux/fcntl.h" 1



# 1 "linux-2.6.18/include/asm/fcntl.h" 1
# 1 "linux-2.6.18/include/asm-generic/fcntl.h" 1
# 114 "linux-2.6.18/include/asm-generic/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;

};
# 137 "linux-2.6.18/include/asm-generic/fcntl.h"
struct flock64 {
 short l_type;
 short l_whence;
 loff_t l_start;
 loff_t l_len;
 pid_t l_pid;

};
# 1 "linux-2.6.18/include/asm/fcntl.h" 2
# 5 "linux-2.6.18/include/linux/fcntl.h" 2
# 790 "linux-2.6.18/include/linux/fs.h" 2

extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);


extern int fcntl_getlk64(struct file *, struct flock64 *);
extern int fcntl_setlk64(unsigned int, struct file *, unsigned int,
   struct flock64 *);


extern void send_sigio(struct fown_struct *fown, int fd, int band);
extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


extern int do_sync_file_range(struct file *file, loff_t offset, loff_t endbyte,
   unsigned int flags);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern int posix_test_lock(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_conf(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file *, struct file_lock *);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);

struct fasync_struct {
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);

extern void kill_fasync(struct fasync_struct **, int, int);

extern void __kill_fasync(struct fasync_struct *, int, int);

extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
# 855 "linux-2.6.18/include/linux/fs.h"
typedef  struct list_head   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_super_blocks[NUM_STACKS];    
typedef  spinlock_t  _GLOBAL_153_T; extern  _GLOBAL_153_T  global_sb_lock[NUM_STACKS];   



struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned long s_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 struct super_operations *s_op;
 struct dquot_operations *dq_op;
  struct quotactl_ops *s_qcop;
 struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct mutex s_lock;
 int s_count;
 int s_syncing;
 int s_need_sync_fs;
 atomic_t s_active;
 void *s_security;
 struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct list_head s_dirty;
 struct list_head s_io;
 struct hlist_head s_anon;
 struct list_head s_files;

 struct block_device *s_bdev;
 struct list_head s_instances;
 struct quota_info s_dquot;

 int s_frozen;
 wait_queue_head_t s_wait_unfrozen;

 char s_id[32];

 void *s_fs_info;





 struct mutex s_vfs_rename_mutex;



 u32 s_time_gran;
};

extern struct timespec current_fs_time(struct super_block *sb);




enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_TRANS = 2,
};




static inline  __attribute__((always_inline)) void get_fs_excl(void)
{
 atomic_inc(&get_nsc_task()->fs_excl);
}

static inline  __attribute__((always_inline)) void put_fs_excl(void)
{
 atomic_dec(&get_nsc_task()->fs_excl);
}

static inline  __attribute__((always_inline)) int has_fs_excl(void)
{
 return ((&get_nsc_task()->fs_excl)->counter);
}





static inline  __attribute__((always_inline)) void lock_super(struct super_block * sb)
{
 get_fs_excl();
 mutex_lock(&sb->s_lock);
}

static inline  __attribute__((always_inline)) void unlock_super(struct super_block * sb)
{
 put_fs_excl();
 mutex_unlock(&sb->s_lock);
}




extern int vfs_permission(struct nameidata *, int);
extern int vfs_create(struct inode *, struct dentry *, int, struct nameidata *);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *, int);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);




extern void dentry_unhash(struct dentry *dentry);




extern int file_permission(struct file *, int);
# 999 "linux-2.6.18/include/linux/fs.h"
int generic_osync_inode(struct inode *, struct address_space *, int);







typedef int (*filldir_t)(void *, const char *, int, loff_t, ino_t, unsigned);

struct block_device_operations {
 int (*open) (struct inode *, struct file *);
 int (*release) (struct inode *, struct file *);
 int (*ioctl) (struct inode *, struct file *, unsigned, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned, unsigned long);
 int (*direct_access) (struct block_device *, sector_t, unsigned long *);
 int (*media_changed) (struct gendisk *);
 int (*revalidate_disk) (struct gendisk *);
 int (*getgeo)(struct block_device *, struct hd_geometry *);
 struct module *owner;
};
# 1031 "linux-2.6.18/include/linux/fs.h"
typedef struct {
 size_t written;
 size_t count;
 union {
  char * buf;
  void *data;
 } arg;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *, unsigned long, unsigned long);
# 1054 "linux-2.6.18/include/linux/fs.h"
struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, char *, size_t, loff_t);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 ssize_t (*aio_write) (struct kiocb *, const char *, size_t, loff_t);
 int (*readdir) (struct file *, void *, filldir_t);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *, fl_owner_t id);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, struct dentry *, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*readv) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*writev) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*sendfile) (struct file *, loff_t *, size_t, read_actor_t, void *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*dir_notify)(struct file *filp, unsigned long arg);
 int (*flock) (struct file *, int, struct file_lock *);
 ssize_t (*splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, unsigned int);
 ssize_t (*splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, unsigned int);
};

struct inode_operations {
 int (*create) (struct inode *,struct dentry *,int, struct nameidata *);
 struct dentry * (*lookup) (struct inode *,struct dentry *, struct nameidata *);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *,const char *);
 int (*mkdir) (struct inode *,struct dentry *,int);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,int,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*readlink) (struct dentry *, char *,int);
 void * (*follow_link) (struct dentry *, struct nameidata *);
 void (*put_link) (struct dentry *, struct nameidata *, void *);
 void (*truncate) (struct inode *);
 int (*permission) (struct inode *, int, struct nameidata *);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, const char *,const void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, const char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, const char *);
 void (*truncate_range)(struct inode *, loff_t, loff_t);
};

struct seq_file;

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec *,
  unsigned long, loff_t *);





struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

 void (*read_inode) (struct inode *);

    void (*dirty_inode) (struct inode *);
 int (*write_inode) (struct inode *, int);
 void (*put_inode) (struct inode *);
 void (*drop_inode) (struct inode *);
 void (*delete_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 void (*write_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 void (*write_super_lockfs) (struct super_block *);
 void (*unlockfs) (struct super_block *);
 int (*statfs) (struct dentry *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*clear_inode) (struct inode *);
 void (*umount_begin) (struct vfsmount *, int);

 int (*show_options)(struct seq_file *, struct vfsmount *);
 int (*show_stats)(struct seq_file *, struct vfsmount *);

 ssize_t (*quota_read)(struct super_block *, int, char *, size_t, loff_t);
 ssize_t (*quota_write)(struct super_block *, int, const char *, size_t, loff_t);
};
# 1165 "linux-2.6.18/include/linux/fs.h"
extern void __mark_inode_dirty(struct inode *, int);
static inline  __attribute__((always_inline)) void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline  __attribute__((always_inline)) void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}

static inline  __attribute__((always_inline)) void inode_inc_link_count(struct inode *inode)
{
 inode->i_nlink++;
 mark_inode_dirty(inode);
}

static inline  __attribute__((always_inline)) void inode_dec_link_count(struct inode *inode)
{
 inode->i_nlink--;
 mark_inode_dirty(inode);
}

extern void touch_atime(struct vfsmount *mnt, struct dentry *dentry);
static inline  __attribute__((always_inline)) void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(file->f_vfsmnt, file->f_dentry);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);
# 1283 "linux-2.6.18/include/linux/fs.h"
struct export_operations {
 struct dentry *(*decode_fh)(struct super_block *sb, __u32 *fh, int fh_len, int fh_type,
    int (*acceptable)(void *context, struct dentry *de),
    void *context);
 int (*encode_fh)(struct dentry *de, __u32 *fh, int *max_len,
    int connectable);


 int (*get_name)(struct dentry *parent, char *name,
   struct dentry *child);
 struct dentry * (*get_parent)(struct dentry *child);
 struct dentry * (*get_dentry)(struct super_block *sb, void *inump);


 struct dentry * (*find_exported_dentry)(
  struct super_block *sb, void *obj, void *parent,
  int (*acceptable)(void *context, struct dentry *de),
  void *context);


};

extern struct dentry *
find_exported_dentry(struct super_block *sb, void *obj, void *parent,
       int (*acceptable)(void *context, struct dentry *de),
       void *context);

struct file_system_type {
 const char *name;
 int fs_flags;
 int (*get_sb) (struct file_system_type *, int,
         const char *, void *, struct vfsmount *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct list_head fs_supers;
 struct lock_class_key s_lock_key;
 struct lock_class_key s_umount_key;
};

extern int get_sb_bdev(struct file_system_type *fs_type,
 int flags, const char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   void *data);
extern int get_sb_pseudo(struct file_system_type *, char *,
 struct super_operations *ops, unsigned long,
 struct vfsmount *mnt);
extern int simple_set_mnt(struct vfsmount *mnt, struct super_block *sb);
int __put_super(struct super_block *sb);
int __put_super_and_need_restart(struct super_block *sb);
void unnamed_dev_init(void);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount(struct file_system_type *);
extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern void umount_tree(struct vfsmount *, int, struct list_head *);
extern void release_mounts(struct list_head *);
extern long do_mount(char *, char *, char *, unsigned long, void *);
extern struct vfsmount *copy_tree(struct vfsmount *, struct dentry *, int);
extern void mnt_set_mountpoint(struct vfsmount *, struct dentry *,
      struct vfsmount *);

extern int vfs_statfs(struct dentry *, struct kstatfs *);


typedef  struct subsystem   _GLOBAL_154_T; extern  _GLOBAL_154_T  global_fs_subsys[NUM_STACKS];    




extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);
# 1389 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) int locks_verify_locked(struct inode *inode)
{
 if ((((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_locked(inode);
 return 0;
}

extern int rw_verify_area(int, struct file *, loff_t *, size_t);

static inline  __attribute__((always_inline)) int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && (((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_area(
   2, inode, filp,
   size < inode->i_size ? size : inode->i_size,
   (size < inode->i_size ? inode->i_size - size
    : size - inode->i_size)
  );
 return 0;
}

static inline  __attribute__((always_inline)) int break_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode);
 return 0;
}



extern int do_truncate(struct dentry *, loff_t start, unsigned int time_attrs,
         struct file *filp);
extern long do_sys_open(int fdf, const char *filename, int flags,
   int mode);
extern struct file *filp_open(const char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char *);


extern void  __attribute__ ((__section__ (".init.text"))) vfs_caches_init_early(void);
extern void  __attribute__ ((__section__ (".init.text"))) vfs_caches_init(unsigned long);
# 1442 "linux-2.6.18/include/linux/fs.h"
extern int register_blkdev(unsigned int, const char *);
extern int unregister_blkdev(unsigned int, const char *);
extern struct block_device *bdget(dev_t);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern struct block_device *open_by_devnum(dev_t, unsigned);
extern struct block_device *open_partition_by_devnum(dev_t, unsigned);
typedef  const struct file_operations    _GLOBAL_155_T; extern  _GLOBAL_155_T  global_def_blk_fops[NUM_STACKS];     
typedef  const struct address_space_operations    _GLOBAL_156_T; extern  _GLOBAL_156_T  global_def_blk_aops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_157_T; extern  _GLOBAL_157_T  global_def_chr_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_158_T; extern  _GLOBAL_158_T  global_bad_sock_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_159_T; extern  _GLOBAL_159_T  global_def_fifo_fops[NUM_STACKS];     
extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct inode *, struct file *, unsigned, unsigned long);
extern long compat_blkdev_ioctl(struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *, mode_t, unsigned);
extern int blkdev_put(struct block_device *);
extern int blkdev_put_partition(struct block_device *);
extern int bd_claim(struct block_device *, void *);
extern void bd_release(struct block_device *);
# 1473 "linux-2.6.18/include/linux/fs.h"
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int register_chrdev(unsigned int, const char *,
      const struct file_operations *);
extern int unregister_chrdev(unsigned int, const char *);
extern void unregister_chrdev_region(dev_t, unsigned);
extern int chrdev_open(struct inode *, struct file *);
extern void chrdev_show(struct seq_file *,off_t);




extern const char *__bdevname(dev_t, char *buffer);
extern const char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev(const char *);
extern struct block_device *open_bdev_excl(const char *, int, void *);
extern void close_bdev_excl(struct block_device *);
extern void blkdev_show(struct seq_file *,off_t);

extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

typedef  const struct file_operations    _GLOBAL_160_T; extern  _GLOBAL_160_T  global_read_fifo_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_161_T; extern  _GLOBAL_161_T  global_write_fifo_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_162_T; extern  _GLOBAL_162_T  global_rdwr_fifo_fops[NUM_STACKS];     

extern int fs_may_remount_ro(struct super_block *);
# 1514 "linux-2.6.18/include/linux/fs.h"
extern int check_disk_change(struct block_device *);
extern int invalidate_inodes(struct super_block *);
extern int __invalidate_device(struct block_device *);
extern int invalidate_partition(struct gendisk *, int);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);
unsigned long invalidate_inode_pages(struct address_space *mapping);
static inline  __attribute__((always_inline)) void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_inode_pages(inode->i_mapping);
}
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
      unsigned long start, unsigned long end);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
            loff_t lstart, loff_t lend);
extern int wait_on_page_writeback_range(struct address_space *mapping,
    unsigned long start, unsigned long end);
extern int __filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end, int sync_mode);

extern long do_fsync(struct file *file, int datasync);
extern void sync_supers(void);
extern void sync_filesystems(int wait);
extern void emergency_sync(void);
extern void emergency_remount(void);
extern int do_remount_sb(struct super_block *sb, int flags,
    void *data, int force);
extern sector_t bmap(struct inode *, sector_t);
extern int notify_change(struct dentry *, struct iattr *);
extern int permission(struct inode *, int, struct nameidata *);
extern int generic_permission(struct inode *, int,
  int (*check_acl)(struct inode *, int));

extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline  __attribute__((always_inline)) void put_write_access(struct inode * inode)
{
 atomic_dec(&inode->i_writecount);
}
static inline  __attribute__((always_inline)) void allow_write_access(struct file *file)
{
 if (file)
  atomic_inc(&file->f_dentry->d_inode->i_writecount);
}
extern int do_pipe(int *);

extern int open_namei(int dfd, const char *, int, int, struct nameidata *);
extern int may_open(struct nameidata *, int, int);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);

# 1 "linux-2.6.18/include/linux/err.h" 1
# 20 "linux-2.6.18/include/linux/err.h"
static inline  __attribute__((always_inline)) void *ERR_PTR(long error)
{
 return (void *) error;
}

static inline  __attribute__((always_inline)) long PTR_ERR(const void *ptr)
{
 return (long) ptr;
}

static inline  __attribute__((always_inline)) long IS_ERR(const void *ptr)
{
 return __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}
# 1579 "linux-2.6.18/include/linux/fs.h" 2


extern loff_t default_llseek(struct file *file, loff_t offset, int origin);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int origin);

extern void inode_init_once(struct inode *);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern void generic_delete_inode(struct inode *inode);
extern void generic_drop_inode(struct inode *inode);

extern struct inode *ilookup5_nowait(struct super_block *sb,
  unsigned long hashval, int (*test)(struct inode *, void *),
  void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern void unlock_new_inode(struct inode *);

static inline  __attribute__((always_inline)) struct inode *iget(struct super_block *sb, unsigned long ino)
{
 struct inode *inode = iget_locked(sb, ino);

 if (inode && (inode->i_state & 64)) {
  sb->s_op->read_inode(inode);
  unlock_new_inode(inode);
 }

 return inode;
}

extern void __iget(struct inode * inode);
extern void clear_inode(struct inode *);
extern void destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern int remove_suid(struct dentry *);
extern void remove_dquot_ref(struct super_block *, int, struct list_head *);

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline  __attribute__((always_inline)) void insert_inode_hash(struct inode *inode) {
 __insert_inode_hash(inode, inode->i_ino);
}

extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern void file_kill(struct file *f);
struct bio;
extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);
extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern int file_send_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern ssize_t generic_file_read(struct file *, char *, size_t, loff_t *);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t generic_file_aio_read(struct kiocb *, char *, size_t, loff_t);
extern ssize_t __generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t *);
extern ssize_t generic_file_aio_write(struct kiocb *, const char *, size_t, loff_t);
extern ssize_t generic_file_aio_write_nolock(struct kiocb *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char *buf, size_t len, loff_t *ppos);
ssize_t generic_file_write_nolock(struct file *file, const struct iovec *iov,
    unsigned long nr_segs, loff_t *ppos);
extern ssize_t generic_file_sendfile(struct file *, loff_t *, size_t, read_actor_t, void *);
extern void do_generic_mapping_read(struct address_space *mapping,
        struct file_ra_state *, struct file *,
        loff_t *, read_descriptor_t *, read_actor_t);


extern ssize_t generic_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
  struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
  size_t len, unsigned int flags);

extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern ssize_t generic_file_readv(struct file *filp, const struct iovec *iov,
 unsigned long nr_segs, loff_t *ppos);
ssize_t generic_file_writev(struct file *filp, const struct iovec *iov,
   unsigned long nr_segs, loff_t *ppos);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t remote_llseek(struct file *file, loff_t offset, int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
# 1697 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) int xip_truncate_page(struct address_space *mapping, loff_t from)
{
 return 0;
}


static inline  __attribute__((always_inline)) void do_generic_file_read(struct file * filp, loff_t *ppos,
     read_descriptor_t * desc,
     read_actor_t actor)
{
 do_generic_mapping_read(filp->f_mapping,
    &filp->f_ra,
    filp,
    ppos,
    desc,
    actor);
}

ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
 struct block_device *bdev, const struct iovec *iov, loff_t offset,
 unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io,
 int lock_type);

enum {
 DIO_LOCKING = 1,
 DIO_NO_LOCKING,
 DIO_OWN_LOCKING,
};

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_LOCKING);
}

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO_no_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_NO_LOCKING);
}

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO_own_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_OWN_LOCKING);
}

typedef  const struct file_operations    _GLOBAL_163_T; extern  _GLOBAL_163_T  global_generic_ro_fops[NUM_STACKS];     



extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, const char *symname, int len,
  gfp_t gfp_mask);
extern int page_symlink(struct inode *inode, const char *symname, int len);
typedef  struct inode_operations   _GLOBAL_164_T; extern  _GLOBAL_164_T  global_page_symlink_inode_operations[NUM_STACKS];    
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);

extern int vfs_stat(char *, struct kstat *);
extern int vfs_lstat(char *, struct kstat *);
extern int vfs_stat_fd(int dfd, char *, struct kstat *);
extern int vfs_lstat_fd(int dfd, char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);

extern int vfs_ioctl(struct file *, unsigned int, unsigned int, unsigned long);

extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *user_get_super(dev_t);
extern void drop_super(struct super_block *sb);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct dentry *, struct kstatfs *);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int simple_sync_file(struct file *, struct dentry *, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_prepare_write(struct file *file, struct page *page,
   unsigned offset, unsigned to);
extern int simple_commit_write(struct file *file, struct page *page,
    unsigned offset, unsigned to);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
typedef  const struct file_operations    _GLOBAL_165_T; extern  _GLOBAL_165_T  global_simple_dir_operations[NUM_STACKS];     
typedef  struct inode_operations   _GLOBAL_166_T; extern  _GLOBAL_166_T  global_simple_dir_inode_operations[NUM_STACKS];    
struct tree_descr { char *name; const struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, int, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *, size_t, loff_t *, const void *, size_t);
# 1826 "linux-2.6.18/include/linux/fs.h"
extern int inode_change_ok(struct inode *, struct iattr *);
extern int  __attribute__((warn_unused_result)) inode_setattr(struct inode *, struct iattr *);

extern void file_update_time(struct file *file);

static inline  __attribute__((always_inline)) ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;

 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 res = dentry->d_parent->d_inode->i_ino;
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return res;
}


extern int unshare_files(void);







struct simple_transaction_argresp {
 ssize_t size;
 char data[0];
};



char *simple_transaction_get(struct file *file, const char *buf,
    size_t size);
ssize_t simple_transaction_read(struct file *file, char *buf,
    size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);

static inline  __attribute__((always_inline)) void simple_transaction_set(struct file *file, size_t n)
{
 struct simple_transaction_argresp *ar = file->private_data;

 do { if (n > ((1UL << 12) - sizeof(struct simple_transaction_argresp))) ; } while(0);





 __asm__ __volatile__("": : :"memory");
 ar->size = n;
}
# 1907 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) void 
__attribute__((format(printf, 1, 2))) __simple_attr_check_format(const char *fmt, ...)
{

}

int simple_attr_open(struct inode *inode, struct file *file,
       u64 (*get)(void *), void (*set)(void *, u64),
       const char *fmt);
int simple_attr_close(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char *buf,
    size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, const char *buf,
     size_t len, loff_t *ppos);
# 1934 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) char *alloc_secdata(void)
{
 return (char *)1;
}

static inline  __attribute__((always_inline)) void free_secdata(void *secdata)
{ }
# 16 "linux-2.6.18/include/linux/mm.h" 2



struct mempolicy;
struct anon_vma;


typedef  unsigned long   _GLOBAL_167_T; extern  _GLOBAL_167_T  global_max_mapnr[NUM_STACKS];    


typedef  unsigned long   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_num_physpages[NUM_STACKS];    
typedef  void  _GLOBAL_169_T; extern  _GLOBAL_169_T  * global_high_memory[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_170_T; extern  _GLOBAL_170_T  global_vmalloc_earlyreserve[NUM_STACKS];    
typedef  int  _GLOBAL_171_T; extern  _GLOBAL_171_T  global_page_cluster[NUM_STACKS];   


typedef  int  _GLOBAL_172_T; extern  _GLOBAL_172_T  global_sysctl_legacy_va_layout[NUM_STACKS];   





# 1 "linux-2.6.18/include/asm/pgtable.h" 1
# 16 "linux-2.6.18/include/asm/pgtable.h"
# 1 "linux-2.6.18/include/asm/fixmap.h" 1
# 26 "linux-2.6.18/include/asm/fixmap.h"
# 1 "linux-2.6.18/include/asm/acpi.h" 1
# 31 "linux-2.6.18/include/asm/acpi.h"
# 1 "linux-2.6.18/include/acpi/pdc_intel.h" 1
# 32 "linux-2.6.18/include/asm/acpi.h" 2
# 60 "linux-2.6.18/include/asm/acpi.h"
static inline  __attribute__((always_inline)) int
__acpi_acquire_global_lock (unsigned int *lock)
{
 unsigned int old, new, val;
 do {
  old = *lock;
  new = (((old & ~0x3) + 2) + ((old >> 1) & 0x1));
  val = ((__typeof__(*(lock)))__cmpxchg((lock),(unsigned long)(old), (unsigned long)(new),sizeof(*(lock))));
 } while (__builtin_expect(!!(val != old), 0));
 return (new < 3) ? -1 : 0;
}

static inline  __attribute__((always_inline)) int
__acpi_release_global_lock (unsigned int *lock)
{
 unsigned int old, new, val;
 do {
  old = *lock;
  new = old & ~0x3;
  val = ((__typeof__(*(lock)))__cmpxchg((lock),(unsigned long)(old), (unsigned long)(new),sizeof(*(lock))));
 } while (__builtin_expect(!!(val != old), 0));
 return old & 0x1;
}
# 107 "linux-2.6.18/include/asm/acpi.h"
extern void check_acpi_pci(void);





typedef  int  _GLOBAL_173_T; extern  _GLOBAL_173_T  global_acpi_lapic[NUM_STACKS];   
typedef  int  _GLOBAL_174_T; extern  _GLOBAL_174_T  global_acpi_ioapic[NUM_STACKS];   
typedef  int  _GLOBAL_175_T; extern  _GLOBAL_175_T  global_acpi_noirq[NUM_STACKS];   
typedef  int  _GLOBAL_176_T; extern  _GLOBAL_176_T  global_acpi_strict[NUM_STACKS];   
typedef  int  _GLOBAL_177_T; extern  _GLOBAL_177_T  global_acpi_disabled[NUM_STACKS];   
typedef  int  _GLOBAL_178_T; extern  _GLOBAL_178_T  global_acpi_ht[NUM_STACKS];   
typedef  int  _GLOBAL_179_T; extern  _GLOBAL_179_T  global_acpi_pci_disabled[NUM_STACKS];   
static inline  __attribute__((always_inline)) void disable_acpi(void)
{
 global_acpi_disabled[get_stack_id()] = 1;
 global_acpi_ht[get_stack_id()] = 0;
 global_acpi_pci_disabled[get_stack_id()] = 1;
 global_acpi_noirq[get_stack_id()] = 1;
}




extern int acpi_gsi_to_irq(u32 gsi, unsigned int *irq);


typedef  int  _GLOBAL_180_T; extern  _GLOBAL_180_T  global_skip_ioapic_setup[NUM_STACKS];   
typedef  int  _GLOBAL_181_T; extern  _GLOBAL_181_T  global_acpi_skip_timer_override[NUM_STACKS];   

static inline  __attribute__((always_inline)) void disable_ioapic_setup(void)
{
 global_skip_ioapic_setup[get_stack_id()] = 1;
}

static inline  __attribute__((always_inline)) int ioapic_setup_disabled(void)
{
 return global_skip_ioapic_setup[get_stack_id()];
}





static inline  __attribute__((always_inline)) void acpi_noirq_set(void) { global_acpi_noirq[get_stack_id()] = 1; }
static inline  __attribute__((always_inline)) void acpi_disable_pci(void)
{
 global_acpi_pci_disabled[get_stack_id()] = 1;
 acpi_noirq_set();
}
extern int acpi_irq_balance_set(char *str);
# 172 "linux-2.6.18/include/asm/acpi.h"
extern int acpi_save_state_mem(void);
extern void acpi_restore_state_mem(void);

typedef  unsigned long   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_acpi_wakeup_address[NUM_STACKS];    


extern void acpi_reserve_bootmem(void);



typedef  u8  _GLOBAL_183_T; extern  _GLOBAL_183_T  _GLOBAL_0_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_1_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_2_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_3_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_4_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_5_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_6_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_7_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_8_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_9_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_10_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_11_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_12_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_13_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_14_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_15_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_16_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_17_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_18_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_19_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_20_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_21_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_22_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_23_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_24_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_25_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_26_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_27_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_28_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_29_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_30_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_31_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_32_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_33_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_34_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_35_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_36_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_37_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_38_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_39_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_40_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_41_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_42_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_43_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_44_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_45_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_46_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_47_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_48_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_49_x86_acpiid_to_apicid_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_x86_acpiid_to_apicid_I) *_GLOBAL_x86_acpiid_to_apicid_44_A[NUM_STACKS];  
# 27 "linux-2.6.18/include/asm/fixmap.h" 2
# 1 "linux-2.6.18/include/asm/apicdef.h" 1
# 125 "linux-2.6.18/include/asm/apicdef.h"
struct local_apic {

        struct { unsigned int __reserved[4]; } __reserved_01;

        struct { unsigned int __reserved[4]; } __reserved_02;

        struct {
  unsigned int __reserved_1 : 24,
   phys_apic_id : 4,
   __reserved_2 : 4;
  unsigned int __reserved[3];
 } id;

        const
 struct {
  unsigned int version : 8,
   __reserved_1 : 8,
   max_lvt : 8,
   __reserved_2 : 8;
  unsigned int __reserved[3];
 } version;

        struct { unsigned int __reserved[4]; } __reserved_03;

        struct { unsigned int __reserved[4]; } __reserved_04;

        struct { unsigned int __reserved[4]; } __reserved_05;

        struct { unsigned int __reserved[4]; } __reserved_06;

        struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } tpr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } apr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } ppr;

        struct {
  unsigned int eoi;
  unsigned int __reserved[3];
 } eoi;

        struct { unsigned int __reserved[4]; } __reserved_07;

        struct {
  unsigned int __reserved_1 : 24,
   logical_dest : 8;
  unsigned int __reserved_2[3];
 } ldr;

        struct {
  unsigned int __reserved_1 : 28,
   model : 4;
  unsigned int __reserved_2[3];
 } dfr;

        struct {
  unsigned int spurious_vector : 8,
   apic_enabled : 1,
   focus_cpu : 1,
   __reserved_2 : 22;
  unsigned int __reserved_3[3];
 } svr;

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } isr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } tmr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } irr [8];

        union {
  struct {
   unsigned int send_cs_error : 1,
    receive_cs_error : 1,
    send_accept_error : 1,
    receive_accept_error : 1,
    __reserved_1 : 1,
    send_illegal_vector : 1,
    receive_illegal_vector : 1,
    illegal_register_address : 1,
    __reserved_2 : 24;
   unsigned int __reserved_3[3];
  } error_bits;
  struct {
   unsigned int errors;
   unsigned int __reserved_3[3];
  } all_errors;
 } esr;

        struct { unsigned int __reserved[4]; } __reserved_08;

        struct { unsigned int __reserved[4]; } __reserved_09;

        struct { unsigned int __reserved[4]; } __reserved_10;

        struct { unsigned int __reserved[4]; } __reserved_11;

        struct { unsigned int __reserved[4]; } __reserved_12;

        struct { unsigned int __reserved[4]; } __reserved_13;

        struct { unsigned int __reserved[4]; } __reserved_14;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   destination_mode : 1,
   delivery_status : 1,
   __reserved_1 : 1,
   level : 1,
   trigger : 1,
   __reserved_2 : 2,
   shorthand : 2,
   __reserved_3 : 12;
  unsigned int __reserved_4[3];
 } icr1;

        struct {
  union {
   unsigned int __reserved_1 : 24,
    phys_dest : 4,
    __reserved_2 : 4;
   unsigned int __reserved_3 : 24,
    logical_dest : 8;
  } dest;
  unsigned int __reserved_4[3];
 } icr2;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   timer_mode : 1,
   __reserved_3 : 14;
  unsigned int __reserved_4[3];
 } lvt_timer;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_thermal;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_pc;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint0;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint1;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_error;

        struct {
  unsigned int initial_count;
  unsigned int __reserved_2[3];
 } timer_icr;

        const
 struct {
  unsigned int curr_count;
  unsigned int __reserved_2[3];
 } timer_ccr;

        struct { unsigned int __reserved[4]; } __reserved_16;

        struct { unsigned int __reserved[4]; } __reserved_17;

        struct { unsigned int __reserved[4]; } __reserved_18;

        struct { unsigned int __reserved[4]; } __reserved_19;

        struct {
  unsigned int divisor : 4,
   __reserved_1 : 28;
  unsigned int __reserved_2[3];
 } timer_dcr;

        struct { unsigned int __reserved[4]; } __reserved_20;

} __attribute__ ((packed)) ;
# 28 "linux-2.6.18/include/asm/fixmap.h" 2
# 52 "linux-2.6.18/include/asm/fixmap.h"
enum fixed_addresses {
 FIX_HOLE,
 FIX_VDSO,

 FIX_APIC_BASE,


 FIX_IO_APIC_BASE_0,
 FIX_IO_APIC_BASE_END = FIX_IO_APIC_BASE_0 + 64 -1,
# 79 "linux-2.6.18/include/asm/fixmap.h"
 FIX_ACPI_BEGIN,
 FIX_ACPI_END = FIX_ACPI_BEGIN + 4 - 1,


 FIX_PCIE_MCFG,

 __end_of_permanent_fixed_addresses,


 FIX_BTMAP_END = __end_of_permanent_fixed_addresses,
 FIX_BTMAP_BEGIN = FIX_BTMAP_END + 16 - 1,
 FIX_WP_TEST,
 __end_of_fixed_addresses
};

extern void __set_fixmap (enum fixed_addresses idx,
     unsigned long phys, pgprot_t flags);
# 118 "linux-2.6.18/include/asm/fixmap.h"
extern void __this_fixmap_does_not_exist(void);






static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long fix_to_virt(const unsigned int idx)
{
# 136 "linux-2.6.18/include/asm/fixmap.h"
 if (idx >= __end_of_fixed_addresses)
  __this_fixmap_does_not_exist();

        return (((unsigned long)0xfffff000) - ((idx) << 12));
}

static inline  __attribute__((always_inline)) unsigned long virt_to_fix(const unsigned long vaddr)
{
 do { if (vaddr >= ((unsigned long)0xfffff000) || vaddr < (((unsigned long)0xfffff000) - (__end_of_permanent_fixed_addresses << 12))) ; } while(0);
 return ((((unsigned long)0xfffff000) - ((vaddr)&(~((1UL << 12)-1)))) >> 12);
}
# 17 "linux-2.6.18/include/asm/pgtable.h" 2
# 27 "linux-2.6.18/include/asm/pgtable.h"
struct mm_struct;
struct vm_area_struct;






typedef  unsigned long   _GLOBAL_184_T; extern  _GLOBAL_184_T  _GLOBAL_0_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_1_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_2_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_3_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_4_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_5_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_6_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_7_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_8_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_9_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_10_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_11_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_12_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_13_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_14_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_15_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_16_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_17_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_18_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_19_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_20_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_21_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_22_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_23_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_24_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_25_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_26_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_27_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_28_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_29_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_30_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_31_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_32_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_33_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_34_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_35_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_36_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_37_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_38_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_39_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_40_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_41_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_42_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_43_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_44_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_45_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_46_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_47_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_48_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_184_T  _GLOBAL_49_empty_zero_page_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_empty_zero_page_I) *_GLOBAL_empty_zero_page_45_A[NUM_STACKS];   
typedef  pgd_t  _GLOBAL_185_T; extern  _GLOBAL_185_T  _GLOBAL_0_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_1_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_2_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_3_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_4_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_5_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_6_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_7_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_8_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_9_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_10_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_11_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_12_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_13_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_14_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_15_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_16_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_17_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_18_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_19_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_20_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_21_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_22_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_23_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_24_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_25_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_26_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_27_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_28_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_29_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_30_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_31_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_32_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_33_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_34_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_35_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_36_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_37_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_38_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_39_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_40_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_41_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_42_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_43_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_44_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_45_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_46_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_47_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_48_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_185_T  _GLOBAL_49_swapper_pg_dir_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_swapper_pg_dir_I) *_GLOBAL_swapper_pg_dir_46_A[NUM_STACKS];  
typedef  kmem_cache_t  _GLOBAL_186_T; extern  _GLOBAL_186_T  * global_pgd_cache[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_187_T; extern  _GLOBAL_187_T  * global_pmd_cache[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_188_T; extern  _GLOBAL_188_T  global_pgd_lock[NUM_STACKS];   
typedef  struct page   _GLOBAL_189_T; extern  _GLOBAL_189_T  * global_pgd_list[NUM_STACKS];    

void pmd_ctor(void *, kmem_cache_t *, unsigned long);
void pgd_ctor(void *, kmem_cache_t *, unsigned long);
void pgd_dtor(void *, kmem_cache_t *, unsigned long);
void pgtable_cache_init(void);
void paging_init(void);
# 58 "linux-2.6.18/include/asm/pgtable.h"
# 1 "linux-2.6.18/include/asm/pgtable-2level-defs.h" 1
# 59 "linux-2.6.18/include/asm/pgtable.h" 2
# 159 "linux-2.6.18/include/asm/pgtable.h"
typedef  unsigned long long    _GLOBAL_190_T; extern  _GLOBAL_190_T  global___PAGE_KERNEL[NUM_STACKS]; extern  _GLOBAL_190_T  global___PAGE_KERNEL_EXEC[NUM_STACKS];      
# 203 "linux-2.6.18/include/asm/pgtable.h"
typedef  unsigned long   _GLOBAL_191_T; extern  _GLOBAL_191_T  _GLOBAL_0_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_1_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_2_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_3_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_4_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_5_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_6_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_7_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_8_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_9_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_10_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_11_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_12_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_13_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_14_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_15_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_16_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_17_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_18_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_19_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_20_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_21_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_22_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_23_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_24_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_25_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_26_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_27_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_28_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_29_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_30_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_31_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_32_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_33_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_34_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_35_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_36_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_37_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_38_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_39_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_40_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_41_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_42_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_43_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_44_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_45_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_46_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_47_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_48_pg0_I [ ] ; extern  _GLOBAL_191_T  _GLOBAL_49_pg0_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pg0_I) *_GLOBAL_pg0_47_A[NUM_STACKS];   
# 219 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) int pte_user(pte_t pte) { return (pte).pte_low & 0x004; }
static inline  __attribute__((always_inline)) int pte_read(pte_t pte) { return (pte).pte_low & 0x004; }
static inline  __attribute__((always_inline)) int pte_dirty(pte_t pte) { return (pte).pte_low & 0x040; }
static inline  __attribute__((always_inline)) int pte_young(pte_t pte) { return (pte).pte_low & 0x020; }
static inline  __attribute__((always_inline)) int pte_write(pte_t pte) { return (pte).pte_low & 0x002; }
static inline  __attribute__((always_inline)) int pte_huge(pte_t pte) { return (pte).pte_low & 0x080; }




static inline  __attribute__((always_inline)) int pte_file(pte_t pte) { return (pte).pte_low & 0x040; }

static inline  __attribute__((always_inline)) pte_t pte_rdprotect(pte_t pte) { (pte).pte_low &= ~0x004; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_exprotect(pte_t pte) { (pte).pte_low &= ~0x004; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkclean(pte_t pte) { (pte).pte_low &= ~0x040; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkold(pte_t pte) { (pte).pte_low &= ~0x020; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_wrprotect(pte_t pte) { (pte).pte_low &= ~0x002; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkread(pte_t pte) { (pte).pte_low |= 0x004; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkexec(pte_t pte) { (pte).pte_low |= 0x004; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkdirty(pte_t pte) { (pte).pte_low |= 0x040; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkyoung(pte_t pte) { (pte).pte_low |= 0x020; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkwrite(pte_t pte) { (pte).pte_low |= 0x002; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkhuge(pte_t pte) { (pte).pte_low |= 0x080; return pte; }




# 1 "linux-2.6.18/include/asm/pgtable-2level.h" 1



# 1 "linux-2.6.18/include/asm-generic/pgtable-nopmd.h" 1





# 1 "linux-2.6.18/include/asm-generic/pgtable-nopud.h" 1
# 13 "linux-2.6.18/include/asm-generic/pgtable-nopud.h"
typedef struct { pgd_t pgd; } pud_t;
# 25 "linux-2.6.18/include/asm-generic/pgtable-nopud.h"
static inline  __attribute__((always_inline)) int pgd_none(pgd_t pgd) { return 0; }
static inline  __attribute__((always_inline)) int pgd_bad(pgd_t pgd) { return 0; }
static inline  __attribute__((always_inline)) int pgd_present(pgd_t pgd) { return 1; }
static inline  __attribute__((always_inline)) void pgd_clear(pgd_t *pgd) { }
# 38 "linux-2.6.18/include/asm-generic/pgtable-nopud.h"
static inline  __attribute__((always_inline)) pud_t * pud_offset(pgd_t * pgd, unsigned long address)
{
 return (pud_t *)pgd;
}
# 7 "linux-2.6.18/include/asm-generic/pgtable-nopmd.h" 2
# 15 "linux-2.6.18/include/asm-generic/pgtable-nopmd.h"
typedef struct { pud_t pud; } pmd_t;
# 27 "linux-2.6.18/include/asm-generic/pgtable-nopmd.h"
static inline  __attribute__((always_inline)) int pud_none(pud_t pud) { return 0; }
static inline  __attribute__((always_inline)) int pud_bad(pud_t pud) { return 0; }
static inline  __attribute__((always_inline)) int pud_present(pud_t pud) { return 1; }
static inline  __attribute__((always_inline)) void pud_clear(pud_t *pud) { }
# 41 "linux-2.6.18/include/asm-generic/pgtable-nopmd.h"
static inline  __attribute__((always_inline)) pmd_t * pmd_offset(pud_t * pud, unsigned long address)
{
 return (pmd_t *)pud;
}
# 5 "linux-2.6.18/include/asm/pgtable-2level.h" 2
# 35 "linux-2.6.18/include/asm/pgtable-2level.h"
static inline  __attribute__((always_inline)) int pte_exec(pte_t pte)
{
 return pte_user(pte);
}




static inline  __attribute__((always_inline)) int pte_exec_kernel(pte_t pte)
{
 return 1;
}
# 67 "linux-2.6.18/include/asm/pgtable-2level.h"
void vmalloc_sync_all(void);
# 247 "linux-2.6.18/include/asm/pgtable.h" 2


static inline  __attribute__((always_inline)) int ptep_test_and_clear_dirty(struct vm_area_struct *vma, unsigned long addr, pte_t *ptep)
{
 if (!pte_dirty(*ptep))
  return 0;
 return test_and_clear_bit(6, &ptep->pte_low);
}

static inline  __attribute__((always_inline)) int ptep_test_and_clear_young(struct vm_area_struct *vma, unsigned long addr, pte_t *ptep)
{
 if (!pte_young(*ptep))
  return 0;
 return test_and_clear_bit(5, &ptep->pte_low);
}

static inline  __attribute__((always_inline)) pte_t ptep_get_and_clear_full(struct mm_struct *mm, unsigned long addr, pte_t *ptep, int full)
{
 pte_t pte;
 if (full) {
  pte = *ptep;
  do { (*(ptep) = ((pte_t) { (0) } )); } while (0);
 } else {
  pte = ((pte_t) { (((__typeof__(*(&(ptep)->pte_low)))__xchg((unsigned long)(0),(&(ptep)->pte_low),sizeof(*(&(ptep)->pte_low))))) } );
 }
 return pte;
}

static inline  __attribute__((always_inline)) void ptep_set_wrprotect(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
{
 clear_bit(1, &ptep->pte_low);
}
# 290 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) void clone_pgd_range(pgd_t *dst, pgd_t *src, int count)
{
       (__builtin_constant_p(count * sizeof(pgd_t)) ? __constant_memcpy((dst),(src),(count * sizeof(pgd_t))) : __memcpy((dst),(src),(count * sizeof(pgd_t))));
}
# 309 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 pte.pte_low &= ((~((1UL << 12)-1)) | 0x020 | 0x040);
 pte.pte_low |= ((newprot).pgprot);
# 322 "linux-2.6.18/include/asm/pgtable.h"
 return pte;
}
# 380 "linux-2.6.18/include/asm/pgtable.h"
extern pte_t *lookup_address(unsigned long address);
# 391 "linux-2.6.18/include/asm/pgtable.h"
 static inline  __attribute__((always_inline)) int set_kernel_exec(unsigned long vaddr, int enable) { return 0;}


extern void noexec_setup(const char *str);
# 450 "linux-2.6.18/include/asm/pgtable.h"
# 1 "linux-2.6.18/include/asm-generic/pgtable.h" 1
# 197 "linux-2.6.18/include/asm-generic/pgtable.h"
void pgd_clear_bad(pgd_t *);
void pud_clear_bad(pud_t *);
void pmd_clear_bad(pmd_t *);

static inline  __attribute__((always_inline)) int pgd_none_or_clear_bad(pgd_t *pgd)
{
 if (pgd_none(*pgd))
  return 1;
 if (__builtin_expect(!!(pgd_bad(*pgd)), 0)) {
  pgd_clear_bad(pgd);
  return 1;
 }
 return 0;
}

static inline  __attribute__((always_inline)) int pud_none_or_clear_bad(pud_t *pud)
{
 if (pud_none(*pud))
  return 1;
 if (__builtin_expect(!!(pud_bad(*pud)), 0)) {
  pud_clear_bad(pud);
  return 1;
 }
 return 0;
}

static inline  __attribute__((always_inline)) int pmd_none_or_clear_bad(pmd_t *pmd)
{
 if ((!(unsigned long)((((((*pmd).pud).pgd).pgd)))))
  return 1;
 if (__builtin_expect(!!(((((((((*pmd).pud).pgd).pgd))) & (~(~((1UL << 12)-1)) & ~0x004)) != (0x001 | 0x002 | 0x020 | 0x040))), 0)) {
  pmd_clear_bad(pmd);
  return 1;
 }
 return 0;
}
# 451 "linux-2.6.18/include/asm/pgtable.h" 2
# 39 "linux-2.6.18/include/linux/mm.h" 2
# 58 "linux-2.6.18/include/linux/mm.h"
struct vm_area_struct {
 struct mm_struct * vm_mm;
 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next;

 pgprot_t vm_page_prot;
 unsigned long vm_flags;

 struct rb_node vm_rb;







 union {
  struct {
   struct list_head list;
   void *parent;
   struct vm_area_struct *head;
  } vm_set;

  struct raw_prio_tree_node prio_tree_node;
 } shared;







 struct list_head anon_vma_node;
 struct anon_vma *anon_vma;


 struct vm_operations_struct * vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 void * vm_private_data;
 unsigned long vm_truncate_count;







};






struct vm_list_struct {
 struct vm_list_struct *next;
 struct vm_area_struct *vma;
};
# 188 "linux-2.6.18/include/linux/mm.h"
typedef  pgprot_t  _GLOBAL_192_T; extern  _GLOBAL_192_T  _GLOBAL_0_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_1_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_2_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_3_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_4_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_5_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_6_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_7_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_8_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_9_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_10_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_11_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_12_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_13_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_14_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_15_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_16_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_17_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_18_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_19_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_20_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_21_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_22_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_23_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_24_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_25_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_26_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_27_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_28_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_29_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_30_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_31_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_32_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_33_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_34_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_35_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_36_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_37_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_38_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_39_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_40_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_41_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_42_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_43_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_44_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_45_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_46_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_47_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_48_protection_map_I [ 16 ] ; extern  _GLOBAL_192_T  _GLOBAL_49_protection_map_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_protection_map_I) *_GLOBAL_protection_map_48_A[NUM_STACKS];  







struct vm_operations_struct {
 void (*open)(struct vm_area_struct * area);
 void (*close)(struct vm_area_struct * area);
 struct page * (*nopage)(struct vm_area_struct * area, unsigned long address, int *type);
 int (*populate)(struct vm_area_struct * area, unsigned long address, unsigned long len, pgprot_t prot, unsigned long pgoff, int nonblock);



 int (*page_mkwrite)(struct vm_area_struct *vma, struct page *page);







};

struct mmu_gather;
struct inode;







struct page {
 unsigned long flags;

 atomic_t _count;
 atomic_t _mapcount;



 union {
     struct {
  unsigned long private;






  struct address_space *mapping;






     };

     spinlock_t ptl;

 };
 unsigned long index;
 struct list_head lru;
# 270 "linux-2.6.18/include/linux/mm.h"
};
# 279 "linux-2.6.18/include/linux/mm.h"
# 1 "linux-2.6.18/include/linux/page-flags.h" 1
# 250 "linux-2.6.18/include/linux/page-flags.h"
struct page;

int test_clear_page_dirty(struct page *page);
int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);

static inline  __attribute__((always_inline)) void clear_page_dirty(struct page *page)
{
 test_clear_page_dirty(page);
}

static inline  __attribute__((always_inline)) void set_page_writeback(struct page *page)
{
 test_set_page_writeback(page);
}
# 280 "linux-2.6.18/include/linux/mm.h" 2
# 298 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) int put_page_testzero(struct page *page)
{
 do { if (((&page->_count)->counter) == 0) ; } while(0);
 return atomic_dec_and_test(&page->_count);
}





static inline  __attribute__((always_inline)) int get_page_unless_zero(struct page *page)
{
 return ({ int c, old; c = (((&page->_count))->counter); for (;;) { if (__builtin_expect(!!(c == (0)), 0)) break; old = ((int)((__typeof__(*(&((((&page->_count)))->counter))))__cmpxchg((&((((&page->_count)))->counter)),(unsigned long)(c), (unsigned long)(c + (1)),sizeof(*(&((((&page->_count)))->counter)))))); if (__builtin_expect(!!(old == c), 1)) break; c = old; } c != (0); });
}

extern void __page_cache_release(struct page *) __attribute__((regparm(3))) ;

static inline  __attribute__((always_inline)) int page_count(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(14) ? constant_test_bit((14),(&(page)->flags)) : variable_test_bit((14),(&(page)->flags)))), 0))
  page = (struct page *)((page)->private);
 return ((&page->_count)->counter);
}

static inline  __attribute__((always_inline)) void get_page(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(14) ? constant_test_bit((14),(&(page)->flags)) : variable_test_bit((14),(&(page)->flags)))), 0))
  page = (struct page *)((page)->private);
 atomic_inc(&page->_count);
}





static inline  __attribute__((always_inline)) void init_page_count(struct page *page)
{
 (((&page->_count)->counter) = (1));
}

void put_page(struct page *page);
void put_pages_list(struct list_head *pages);

void split_page(struct page *page, unsigned int order);
# 466 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) unsigned long page_zonenum(struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0))) & ((1UL << 2) - 1);
}

struct zone;
extern struct zone *zone_table[];

static inline  __attribute__((always_inline)) int page_zone_id(struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0))) & ((1UL << (0 + 2)) - 1);
}
static inline  __attribute__((always_inline)) struct zone *page_zone(struct page *page)
{
 return zone_table[page_zone_id(page)];
}

static inline  __attribute__((always_inline)) unsigned long page_to_nid(struct page *page)
{
 if ((0 > 0 || 0 == 0))
  return (page->flags >> ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0))) & ((1UL << 0) - 1);
 else
  return page_zone(page)->zone_pgdat->node_id;
}
static inline  __attribute__((always_inline)) unsigned long page_to_section(struct page *page)
{
 return (page->flags >> (((sizeof(unsigned long)*8) - 0) * (0 != 0))) & ((1UL << 0) - 1);
}

static inline  __attribute__((always_inline)) void set_page_zone(struct page *page, unsigned long zone)
{
 page->flags &= ~(((1UL << 2) - 1) << (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0)));
 page->flags |= (zone & ((1UL << 2) - 1)) << (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0));
}
static inline  __attribute__((always_inline)) void set_page_node(struct page *page, unsigned long node)
{
 page->flags &= ~(((1UL << 0) - 1) << ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0)));
 page->flags |= (node & ((1UL << 0) - 1)) << ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0));
}
static inline  __attribute__((always_inline)) void set_page_section(struct page *page, unsigned long section)
{
 page->flags &= ~(((1UL << 0) - 1) << (((sizeof(unsigned long)*8) - 0) * (0 != 0)));
 page->flags |= (section & ((1UL << 0) - 1)) << (((sizeof(unsigned long)*8) - 0) * (0 != 0));
}

static inline  __attribute__((always_inline)) void set_page_links(struct page *page, unsigned long zone,
 unsigned long node, unsigned long pfn)
{
 set_page_zone(page, zone);
 set_page_node(page, node);
 set_page_section(page, ((pfn) >> 0));
}




# 1 "linux-2.6.18/include/linux/vmstat.h" 1
# 85 "linux-2.6.18/include/linux/vmstat.h"
typedef  atomic_long_t  _GLOBAL_193_T; extern  _GLOBAL_193_T  vm_stat [ NR_VM_ZONE_STAT_ITEMS ] ;   

static inline  __attribute__((always_inline)) void zone_page_state_add(long x, struct zone *zone,
     enum zone_stat_item item)
{
 atomic_long_add(x, &zone->vm_stat[item]);
 atomic_long_add(x, &vm_stat[item]);
}

static inline  __attribute__((always_inline)) unsigned long global_page_state(enum zone_stat_item item)
{
 long x = atomic_long_read(&vm_stat[item]);




 return x;
}

static inline  __attribute__((always_inline)) unsigned long zone_page_state(struct zone *zone,
     enum zone_stat_item item)
{
 long x = atomic_long_read(&zone->vm_stat[item]);




 return x;
}
# 156 "linux-2.6.18/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void zap_zone_vm_stats(struct zone *zone)
{
 (__builtin_constant_p(0) ? (__builtin_constant_p((sizeof(zone->vm_stat))) ? __constant_c_and_count_memset(((zone->vm_stat)),((0x01010101UL*(unsigned char)(0))),((sizeof(zone->vm_stat)))) : __constant_c_memset(((zone->vm_stat)),((0x01010101UL*(unsigned char)(0))),((sizeof(zone->vm_stat))))) : (__builtin_constant_p((sizeof(zone->vm_stat))) ? __memset_generic((((zone->vm_stat))),(((0))),(((sizeof(zone->vm_stat))))) : __memset_generic(((zone->vm_stat)),((0)),((sizeof(zone->vm_stat))))));
}

extern void inc_zone_state(struct zone *, enum zone_stat_item);
# 183 "linux-2.6.18/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void __mod_zone_page_state(struct zone *zone,
   enum zone_stat_item item, int delta)
{
 zone_page_state_add(delta, zone, item);
}

static inline  __attribute__((always_inline)) void __inc_zone_state(struct zone *zone, enum zone_stat_item item)
{
 atomic_long_inc(&zone->vm_stat[item]);
 atomic_long_inc(&vm_stat[item]);
}

static inline  __attribute__((always_inline)) void __inc_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 __inc_zone_state(page_zone(page), item);
}

static inline  __attribute__((always_inline)) void __dec_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 atomic_long_dec(&page_zone(page)->vm_stat[item]);
 atomic_long_dec(&vm_stat[item]);
}
# 216 "linux-2.6.18/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void refresh_cpu_vm_stats(int cpu) { }
static inline  __attribute__((always_inline)) void refresh_vm_stats(void) { }
# 523 "linux-2.6.18/include/linux/mm.h" 2



typedef  struct page   _GLOBAL_194_T; extern  _GLOBAL_194_T  * global_mem_map[NUM_STACKS];    


static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *lowmem_page_address(struct page *page)
{
 return ((void *)((unsigned long)(((unsigned long)((page) - global_mem_map[get_stack_id()]) + (0UL)) << 12)+((unsigned long)((unsigned long)(0xC0000000)))));
}
# 570 "linux-2.6.18/include/linux/mm.h"
typedef  struct address_space   _GLOBAL_195_T; extern  _GLOBAL_195_T  global_swapper_space[NUM_STACKS];    
static inline  __attribute__((always_inline)) struct address_space *page_mapping(struct page *page)
{
 struct address_space *mapping = page->mapping;

 if (__builtin_expect(!!((__builtin_constant_p(15) ? constant_test_bit((15),(&(page)->flags)) : variable_test_bit((15),(&(page)->flags)))), 0))
  mapping = &global_swapper_space[get_stack_id()];
 else if (__builtin_expect(!!((unsigned long)mapping & 1), 0))
  mapping = ((void *)0);
 return mapping;
}

static inline  __attribute__((always_inline)) int PageAnon(struct page *page)
{
 return ((unsigned long)page->mapping & 1) != 0;
}





static inline  __attribute__((always_inline)) unsigned long page_index(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(15) ? constant_test_bit((15),(&(page)->flags)) : variable_test_bit((15),(&(page)->flags)))), 0))
  return ((page)->private);
 return page->index;
}






static inline  __attribute__((always_inline)) void reset_page_mapcount(struct page *page)
{
 (((&(page)->_mapcount)->counter) = (-1));
}

static inline  __attribute__((always_inline)) int page_mapcount(struct page *page)
{
 return ((&(page)->_mapcount)->counter) + 1;
}




static inline  __attribute__((always_inline)) int page_mapped(struct page *page)
{
 return ((&(page)->_mapcount)->counter) >= 0;
}
# 645 "linux-2.6.18/include/linux/mm.h"
extern void show_free_areas(void);


struct page *shmem_nopage(struct vm_area_struct *vma,
   unsigned long address, int *type);
int shmem_set_policy(struct vm_area_struct *vma, struct mempolicy *new);
struct mempolicy *shmem_get_policy(struct vm_area_struct *vma,
     unsigned long addr);
int shmem_lock(struct file *file, int lock, struct user_struct *user);
# 675 "linux-2.6.18/include/linux/mm.h"
struct file *shmem_file_setup(char *name, loff_t size, unsigned long flags);
extern int shmem_mmap(struct file *file, struct vm_area_struct *vma);

int shmem_zero_setup(struct vm_area_struct *);
# 688 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) int can_do_mlock(void)
{
 if (capable(14))
  return 1;
 if (get_nsc_task()->signal->rlim[8].rlim_cur != 0)
  return 1;
 return 0;
}
extern int user_shm_lock(size_t, struct user_struct *);
extern void user_shm_unlock(size_t, struct user_struct *);




struct zap_details {
 struct vm_area_struct *nonlinear_vma;
 struct address_space *check_mapping;
 unsigned long first_index;
 unsigned long last_index;
 spinlock_t *i_mmap_lock;
 unsigned long truncate_count;
};

struct page *vm_normal_page(struct vm_area_struct *, unsigned long, pte_t);
unsigned long zap_page_range(struct vm_area_struct *vma, unsigned long address,
  unsigned long size, struct zap_details *);
unsigned long unmap_vmas(struct mmu_gather **tlb,
  struct vm_area_struct *start_vma, unsigned long start_addr,
  unsigned long end_addr, unsigned long *nr_accounted,
  struct zap_details *);
void free_pgd_range(struct mmu_gather **tlb, unsigned long addr,
  unsigned long end, unsigned long floor, unsigned long ceiling);
void free_pgtables(struct mmu_gather **tlb, struct vm_area_struct *start_vma,
  unsigned long floor, unsigned long ceiling);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
   struct vm_area_struct *vma);
int zeromap_page_range(struct vm_area_struct *vma, unsigned long from,
   unsigned long size, pgprot_t prot);
void unmap_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen, int even_cows);

static inline  __attribute__((always_inline)) void unmap_shared_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen)
{
 unmap_mapping_range(mapping, holebegin, holelen, 0);
}

extern int vmtruncate(struct inode * inode, loff_t offset);
extern int vmtruncate_range(struct inode * inode, loff_t offset, loff_t end);
extern int install_page(struct mm_struct *mm, struct vm_area_struct *vma, unsigned long addr, struct page *page, pgprot_t prot);
extern int install_file_pte(struct mm_struct *mm, struct vm_area_struct *vma, unsigned long addr, unsigned long pgoff, pgprot_t prot);


extern int __handle_mm_fault(struct mm_struct *mm,struct vm_area_struct *vma,
   unsigned long address, int write_access);

static inline  __attribute__((always_inline)) int handle_mm_fault(struct mm_struct *mm,
   struct vm_area_struct *vma, unsigned long address,
   int write_access)
{
 return __handle_mm_fault(mm, vma, address, write_access) &
    (~0x10);
}
# 762 "linux-2.6.18/include/linux/mm.h"
extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);
void install_arg_page(struct vm_area_struct *, struct page *, unsigned long);

int get_user_pages(struct task_struct *tsk, struct mm_struct *mm, unsigned long start,
  int len, int write, int force, struct page **pages, struct vm_area_struct **vmas);
void print_bad_pte(struct vm_area_struct *, pte_t, unsigned long);

int __set_page_dirty_buffers(struct page *page);
int __set_page_dirty_nobuffers(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
    struct page *page);
int set_page_dirty(struct page *page) __attribute__((regparm(3))) ;
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);

extern unsigned long do_mremap(unsigned long addr,
          unsigned long old_len, unsigned long new_len,
          unsigned long flags, unsigned long new_addr);
# 793 "linux-2.6.18/include/linux/mm.h"
typedef int (*shrinker_t)(int nr_to_scan, gfp_t gfp_mask);







struct shrinker;
extern struct shrinker *set_shrinker(int, shrinker_t);
extern void remove_shrinker(struct shrinker *shrinker);

extern pte_t *get_locked_pte(struct mm_struct *mm, unsigned long addr, spinlock_t **ptl) __attribute__((regparm(3))) ;

int __pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address);
int __pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address);
int __pte_alloc(struct mm_struct *mm, pmd_t *pmd, unsigned long address);
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address);






static inline  __attribute__((always_inline)) pud_t *pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address)
{
 return (__builtin_expect(!!(pgd_none(*pgd)), 0) && __pud_alloc(mm, pgd, address))?
  ((void *)0): pud_offset(pgd, address);
}

static inline  __attribute__((always_inline)) pmd_t *pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address)
{
 return (__builtin_expect(!!(pud_none(*pud)), 0) && __pmd_alloc(mm, pud, address))?
  ((void *)0): pmd_offset(pud, address);
}
# 878 "linux-2.6.18/include/linux/mm.h"
extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, pg_data_t *pgdat,
 unsigned long * zones_size, unsigned long zone_start_pfn,
 unsigned long *zholes_size);
extern void memmap_init_zone(unsigned long, int, unsigned long, unsigned long);
extern void setup_per_zone_pages_min(void);
extern void mem_init(void);
extern void show_mem(void);
extern void si_meminfo(struct sysinfo * val);
extern void si_meminfo_node(struct sysinfo *val, int nid);




static inline  __attribute__((always_inline)) void setup_per_cpu_pageset(void) {}



void vma_prio_tree_add(struct vm_area_struct *, struct vm_area_struct *old);
void vma_prio_tree_insert(struct vm_area_struct *, struct prio_tree_root *);
void vma_prio_tree_remove(struct vm_area_struct *, struct prio_tree_root *);
struct vm_area_struct *vma_prio_tree_next(struct vm_area_struct *vma,
 struct prio_tree_iter *iter);





static inline  __attribute__((always_inline)) void vma_nonlinear_insert(struct vm_area_struct *vma,
     struct list_head *list)
{
 vma->shared.vm_set.parent = ((void *)0);
 list_add_tail(&vma->shared.vm_set.list, list);
}


extern int __vm_enough_memory(long pages, int cap_sys_admin);
extern void vma_adjust(struct vm_area_struct *vma, unsigned long start,
 unsigned long end, unsigned long pgoff, struct vm_area_struct *insert);
extern struct vm_area_struct *vma_merge(struct mm_struct *,
 struct vm_area_struct *prev, unsigned long addr, unsigned long end,
 unsigned long vm_flags, struct anon_vma *, struct file *, unsigned long,
 struct mempolicy *);
extern struct anon_vma *find_mergeable_anon_vma(struct vm_area_struct *);
extern int split_vma(struct mm_struct *,
 struct vm_area_struct *, unsigned long addr, int new_below);
extern int insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void __vma_link_rb(struct mm_struct *, struct vm_area_struct *,
 struct rb_node **, struct rb_node *);
extern void unlink_file_vma(struct vm_area_struct *);
extern struct vm_area_struct *copy_vma(struct vm_area_struct **,
 unsigned long addr, unsigned long len, unsigned long pgoff);
extern void exit_mmap(struct mm_struct *);
extern int may_expand_vm(struct mm_struct *mm, unsigned long npages);

extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);

extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long pgoff);

static inline  __attribute__((always_inline)) unsigned long do_mmap(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long offset)
{
 unsigned long ret = -22;
 if ((offset + (((len)+(1UL << 12)-1)&(~((1UL << 12)-1)))) < offset)
  goto out;
 if (!(offset & ~(~((1UL << 12)-1))))
  ret = do_mmap_pgoff(file, addr, len, prot, flag, offset >> 12);
out:
 return ret;
}

extern int do_munmap(struct mm_struct *, unsigned long, size_t);

extern unsigned long do_brk(unsigned long, unsigned long);


extern unsigned long page_unuse(struct page *);
extern void truncate_inode_pages(struct address_space *, loff_t);
extern void truncate_inode_pages_range(struct address_space *,
           loff_t lstart, loff_t lend);


extern struct page *filemap_nopage(struct vm_area_struct *, unsigned long, int *);
extern int filemap_populate(struct vm_area_struct *, unsigned long,
  unsigned long, pgprot_t, unsigned long, int);


int write_one_page(struct page *page, int wait);







int do_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
unsigned long page_cache_readahead(struct address_space *mapping,
     struct file_ra_state *ra,
     struct file *filp,
     unsigned long offset,
     unsigned long size);
void handle_ra_miss(struct address_space *mapping,
      struct file_ra_state *ra, unsigned long offset);
unsigned long max_sane_readahead(unsigned long nr);


extern int expand_stack(struct vm_area_struct *vma, unsigned long address);





extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
          struct vm_area_struct **pprev);



static inline  __attribute__((always_inline)) struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
{
 struct vm_area_struct * vma = find_vma(mm,start_addr);

 if (vma && end_addr <= vma->vm_start)
  vma = ((void *)0);
 return vma;
}

static inline  __attribute__((always_inline)) unsigned long vma_pages(struct vm_area_struct *vma)
{
 return (vma->vm_end - vma->vm_start) >> 12;
}

struct vm_area_struct *find_extend_vma(struct mm_struct *, unsigned long addr);
struct page *vmalloc_to_page(void *addr);
unsigned long vmalloc_to_pfn(void *addr);
int remap_pfn_range(struct vm_area_struct *, unsigned long addr,
   unsigned long pfn, unsigned long size, pgprot_t);
int vm_insert_page(struct vm_area_struct *, unsigned long addr, struct page *);

struct page *follow_page(struct vm_area_struct *, unsigned long address,
   unsigned int foll_flags);






void vm_stat_account(struct mm_struct *, unsigned long, struct file *, long);
# 1040 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) void
kernel_map_pages(struct page *page, int numpages, int enable)
{
 if (!0 && !enable)
  debug_check_no_locks_freed(lowmem_page_address(page),
        numpages * (1UL << 12));
}


extern struct vm_area_struct *get_gate_vma(struct task_struct *tsk);

int in_gate_area_no_task(unsigned long addr);
int in_gate_area(struct task_struct *task, unsigned long addr);
# 1061 "linux-2.6.18/include/linux/mm.h"
int drop_caches_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
unsigned long shrink_slab(unsigned long scanned, gfp_t gfp_mask,
   unsigned long lru_pages);
void drop_pagecache(void);
void drop_slab(void);




typedef  int  _GLOBAL_196_T; extern  _GLOBAL_196_T  global_randomize_va_space[NUM_STACKS];   


const char *arch_vma_name(struct vm_area_struct *vma);
# 28 "linux-2.6.18/kernel/timer.c" 2
# 1 "linux-2.6.18/include/linux/swap.h" 1
# 17 "linux-2.6.18/include/linux/swap.h"
static inline  __attribute__((always_inline)) int current_is_kswapd(void)
{
 return get_nsc_task()->flags & 0x00040000;
}
# 52 "linux-2.6.18/include/linux/swap.h"
union swap_header {
 struct {
  char reserved[(1UL << 12) - 10];
  char magic[10];
 } magic;
 struct {
  char bootbits[1024];
  __u32 version;
  __u32 last_page;
  __u32 nr_badpages;
  unsigned char sws_uuid[16];
  unsigned char sws_volume[16];
  __u32 padding[117];
  __u32 badpages[1];
 } info;
};





typedef struct {
 unsigned long val;
} swp_entry_t;





struct reclaim_state {
 unsigned long reclaimed_slab;
};



struct address_space;
struct sysinfo;
struct writeback_control;
struct zone;
# 100 "linux-2.6.18/include/linux/swap.h"
struct swap_extent {
 struct list_head list;
 unsigned long start_page;
 unsigned long nr_pages;
 sector_t start_block;
};
# 114 "linux-2.6.18/include/linux/swap.h"
enum {
 SWP_USED = (1 << 0),
 SWP_WRITEOK = (1 << 1),
 SWP_ACTIVE = (SWP_USED | SWP_WRITEOK),

 SWP_SCANNING = (1 << 8),
};
# 130 "linux-2.6.18/include/linux/swap.h"
struct swap_info_struct {
 unsigned int flags;
 int prio;
 struct file *swap_file;
 struct block_device *bdev;
 struct list_head extent_list;
 struct swap_extent *curr_swap_extent;
 unsigned old_block_size;
 unsigned short * swap_map;
 unsigned int lowest_bit;
 unsigned int highest_bit;
 unsigned int cluster_next;
 unsigned int cluster_nr;
 unsigned int pages;
 unsigned int max;
 unsigned int inuse_pages;
 int next;
};

struct swap_list_t {
 int head;
 int next;
};





extern void out_of_memory(struct zonelist *zonelist, gfp_t gfp_mask, int order);


extern void swapin_readahead(swp_entry_t, unsigned long, struct vm_area_struct *);


typedef  unsigned long   _GLOBAL_197_T; extern  _GLOBAL_197_T  global_totalram_pages[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_198_T; extern  _GLOBAL_198_T  global_totalhigh_pages[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_totalreserve_pages[NUM_STACKS];    
typedef  long  _GLOBAL_200_T; extern  _GLOBAL_200_T  global_nr_swap_pages[NUM_STACKS];   
extern unsigned int nr_free_pages(void);
extern unsigned int nr_free_pages_pgdat(pg_data_t *pgdat);
extern unsigned int nr_free_buffer_pages(void);
extern unsigned int nr_free_pagecache_pages(void);


extern void lru_cache_add(struct page *) __attribute__((regparm(3))) ;
extern void lru_cache_add_active(struct page *) __attribute__((regparm(3))) ;
extern void activate_page(struct page *) __attribute__((regparm(3))) ;
extern void mark_page_accessed(struct page *) __attribute__((regparm(3))) ;
extern void lru_add_drain(void);
extern int lru_add_drain_all(void);
extern int rotate_reclaimable_page(struct page *page);
extern void swap_setup(void);


extern unsigned long try_to_free_pages(struct zone **, gfp_t);
extern unsigned long shrink_all_memory(unsigned long nr_pages);
typedef  int  _GLOBAL_201_T; extern  _GLOBAL_201_T  global_vm_swappiness[NUM_STACKS];   
extern int remove_mapping(struct address_space *mapping, struct page *page);
typedef  long  _GLOBAL_202_T; extern  _GLOBAL_202_T  global_vm_total_pages[NUM_STACKS];   







static inline  __attribute__((always_inline)) int zone_reclaim(struct zone *z, gfp_t mask, unsigned int order)
{
 return 0;
}


extern int kswapd_run(int nid);



extern int shmem_unuse(swp_entry_t entry, struct page *page);


extern void swap_unplug_io_fn(struct backing_dev_info *, struct page *);



extern int swap_readpage(struct file *, struct page *);
extern int swap_writepage(struct page *page, struct writeback_control *wbc);
extern int rw_swap_page_sync(int, swp_entry_t, struct page *);


typedef  struct address_space   _GLOBAL_203_T; extern  _GLOBAL_203_T  global_swapper_space[NUM_STACKS];    

extern void show_swap_cache_info(void);
extern int add_to_swap(struct page *, gfp_t);
extern void __delete_from_swap_cache(struct page *);
extern void delete_from_swap_cache(struct page *);
extern int move_to_swap_cache(struct page *, swp_entry_t);
extern int move_from_swap_cache(struct page *, unsigned long,
  struct address_space *);
extern void free_page_and_swap_cache(struct page *);
extern void free_pages_and_swap_cache(struct page **, int);
extern struct page * lookup_swap_cache(swp_entry_t);
extern struct page * read_swap_cache_async(swp_entry_t, struct vm_area_struct *vma,
        unsigned long addr);

typedef  long  _GLOBAL_204_T; extern  _GLOBAL_204_T  global_total_swap_pages[NUM_STACKS];   
typedef  unsigned int   _GLOBAL_205_T; extern  _GLOBAL_205_T  global_nr_swapfiles[NUM_STACKS];    
extern void si_swapinfo(struct sysinfo *);
extern swp_entry_t get_swap_page(void);
extern swp_entry_t get_swap_page_of_type(int);
extern int swap_duplicate(swp_entry_t);
extern int valid_swaphandles(swp_entry_t, unsigned long *);
extern void swap_free(swp_entry_t);
extern void free_swap_and_cache(swp_entry_t);
extern int swap_type_of(dev_t);
extern unsigned int count_swap_pages(int, int);
extern sector_t map_swap_page(struct swap_info_struct *, unsigned long);
extern struct swap_info_struct *get_swap_info_struct(unsigned);
extern int can_share_swap_page(struct page *);
extern int remove_exclusive_swap_page(struct page *);
struct backing_dev_info;

typedef  spinlock_t  _GLOBAL_206_T; extern  _GLOBAL_206_T  global_swap_lock[NUM_STACKS];   


typedef  struct mm_struct   _GLOBAL_207_T; extern  _GLOBAL_207_T  * global_swap_token_mm[NUM_STACKS];     
typedef  unsigned long   _GLOBAL_208_T; extern  _GLOBAL_208_T  global_swap_token_default_timeout[NUM_STACKS];    
extern void grab_swap_token(void);
extern void __put_swap_token(struct mm_struct *);

static inline  __attribute__((always_inline)) int has_swap_token(struct mm_struct *mm)
{
 return (mm == global_swap_token_mm[get_stack_id()]);
}

static inline  __attribute__((always_inline)) void put_swap_token(struct mm_struct *mm)
{
 if (has_swap_token(mm))
  __put_swap_token(mm);
}

static inline  __attribute__((always_inline)) void disable_swap_token(void)
{
 put_swap_token(global_swap_token_mm[get_stack_id()]);
}
# 29 "linux-2.6.18/kernel/timer.c" 2




# 1 "linux-2.6.18/include/linux/posix-timers.h" 1







union cpu_time_count {
 cputime_t cpu;
 unsigned long long sched;
};

struct cpu_timer_list {
 struct list_head entry;
 union cpu_time_count expires, incr;
 struct task_struct *task;
 int firing;
};
# 38 "linux-2.6.18/include/linux/posix-timers.h"
struct k_itimer {
 struct list_head list;
 spinlock_t it_lock;
 clockid_t it_clock;
 timer_t it_id;
 int it_overrun;
 int it_overrun_last;
 int it_requeue_pending;

 int it_sigev_notify;
 int it_sigev_signo;
 sigval_t it_sigev_value;
 struct task_struct *it_process;
 struct sigqueue *sigq;
 union {
  struct {
   struct hrtimer timer;
   ktime_t interval;
  } real;
  struct cpu_timer_list cpu;
  struct {
   unsigned int clock;
   unsigned int node;
   unsigned long incr;
   unsigned long expires;
  } mmtimer;
 } it;
};

struct k_clock {
 int res;
 int (*clock_getres) (const clockid_t which_clock, struct timespec *tp);
 int (*clock_set) (const clockid_t which_clock, struct timespec * tp);
 int (*clock_get) (const clockid_t which_clock, struct timespec * tp);
 int (*timer_create) (struct k_itimer *timer);
 int (*nsleep) (const clockid_t which_clock, int flags,
         struct timespec *, struct timespec *);
 int (*timer_set) (struct k_itimer * timr, int flags,
     struct itimerspec * new_setting,
     struct itimerspec * old_setting);
 int (*timer_del) (struct k_itimer * timr);

 void (*timer_get) (struct k_itimer * timr,
      struct itimerspec * cur_setting);
};

void register_posix_clock(const clockid_t clock_id, struct k_clock *new_clock);


int do_posix_clock_nonanosleep(const clockid_t, int flags, struct timespec *,
          struct timespec *);
int do_posix_clock_nosettime(const clockid_t, struct timespec *tp);


int posix_timer_event(struct k_itimer *timr, int si_private);

int posix_cpu_clock_getres(const clockid_t which_clock, struct timespec *ts);
int posix_cpu_clock_get(const clockid_t which_clock, struct timespec *ts);
int posix_cpu_clock_set(const clockid_t which_clock, const struct timespec *ts);
int posix_cpu_timer_create(struct k_itimer *timer);
int posix_cpu_nsleep(const clockid_t which_clock, int flags,
       struct timespec *rqtp, struct timespec *rmtp);
int posix_cpu_timer_set(struct k_itimer *timer, int flags,
   struct itimerspec *new, struct itimerspec *old);
int posix_cpu_timer_del(struct k_itimer *timer);
void posix_cpu_timer_get(struct k_itimer *timer, struct itimerspec *itp);

void posix_cpu_timer_schedule(struct k_itimer *timer);

void run_posix_cpu_timers(struct task_struct *task);
void posix_cpu_timers_exit(struct task_struct *task);
void posix_cpu_timers_exit_group(struct task_struct *task);

void set_process_cpu_timer(struct task_struct *task, unsigned int clock_idx,
      cputime_t *newval, cputime_t *oldval);
# 34 "linux-2.6.18/kernel/timer.c" 2
# 1 "linux-2.6.18/include/linux/cpu.h" 1
# 23 "linux-2.6.18/include/linux/cpu.h"
# 1 "linux-2.6.18/include/linux/node.h" 1
# 25 "linux-2.6.18/include/linux/node.h"
struct node {
 struct sys_device sysdev;
};

typedef  struct node   _GLOBAL_209_T; extern  _GLOBAL_209_T  _GLOBAL_0_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_1_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_2_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_3_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_4_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_5_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_6_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_7_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_8_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_9_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_10_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_11_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_12_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_13_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_14_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_15_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_16_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_17_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_18_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_19_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_20_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_21_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_22_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_23_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_24_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_25_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_26_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_27_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_28_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_29_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_30_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_31_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_32_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_33_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_34_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_35_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_36_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_37_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_38_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_39_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_40_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_41_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_42_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_43_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_44_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_45_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_46_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_47_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_48_node_devices_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_49_node_devices_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_node_devices_I) *_GLOBAL_node_devices_49_A[NUM_STACKS];   

extern int register_node(struct node *, int, struct node *);
extern void unregister_node(struct node *node);






static inline  __attribute__((always_inline)) int register_one_node(int nid)
{
 return 0;
}
static inline  __attribute__((always_inline)) int unregister_one_node(int nid)
{
 return 0;
}
static inline  __attribute__((always_inline)) int register_cpu_under_node(unsigned int cpu, unsigned int nid)
{
 return 0;
}
static inline  __attribute__((always_inline)) int unregister_cpu_under_node(unsigned int cpu, unsigned int nid)
{
 return 0;
}
# 24 "linux-2.6.18/include/linux/cpu.h" 2




struct cpu {
 int node_id;
 int no_control;
 struct sys_device sysdev;
};

extern int register_cpu(struct cpu *cpu, int num);
extern struct sys_device *get_cpu_sysdev(unsigned cpu);



struct notifier_block;
# 56 "linux-2.6.18/include/linux/cpu.h"
static inline  __attribute__((always_inline)) int register_cpu_notifier(struct notifier_block *nb)
{
 return 0;
}
static inline  __attribute__((always_inline)) void unregister_cpu_notifier(struct notifier_block *nb)
{
}


typedef  struct sysdev_class   _GLOBAL_210_T; extern  _GLOBAL_210_T  global_cpu_sysdev_class[NUM_STACKS];    
# 89 "linux-2.6.18/include/linux/cpu.h"
static inline  __attribute__((always_inline)) int cpu_is_offline(int cpu) { return 0; }
# 35 "linux-2.6.18/kernel/timer.c" 2
# 1 "linux-2.6.18/include/linux/syscalls.h" 1
# 14 "linux-2.6.18/include/linux/syscalls.h"
struct epoll_event;
struct iattr;
struct inode;
struct iocb;
struct io_event;
struct iovec;
struct itimerspec;
struct itimerval;
struct kexec_segment;
struct linux_dirent;
struct linux_dirent64;
struct list_head;
struct msgbuf;
struct msghdr;
struct msqid_ds;
struct new_utsname;
struct nfsctl_arg;
struct __old_kernel_stat;
struct pollfd;
struct rlimit;
struct rusage;
struct sched_param;
struct semaphore;
struct sembuf;
struct shmid_ds;
struct sockaddr;
struct stat;
struct stat64;
struct statfs;
struct statfs64;
struct __sysctl_args;
struct sysinfo;
struct timespec;
struct timeval;
struct timex;
struct timezone;
struct tms;
struct utimbuf;
struct mq_attr;
struct compat_stat;
struct compat_timeval;
struct robust_list_head;
# 66 "linux-2.6.18/include/linux/syscalls.h"
# 1 "linux-2.6.18/include/linux/key.h" 1
# 27 "linux-2.6.18/include/linux/key.h"
typedef int32_t key_serial_t;


typedef uint32_t key_perm_t;

struct key;
# 381 "linux-2.6.18/include/linux/key.h"
typedef  struct key   _GLOBAL_211_T; extern  _GLOBAL_211_T  _GLOBAL_0_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_1_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_2_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_3_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_4_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_5_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_6_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_7_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_8_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_9_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_10_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_11_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_12_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_13_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_14_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_15_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_16_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_17_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_18_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_19_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_20_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_21_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_22_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_23_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_24_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_25_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_26_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_27_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_28_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_29_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_30_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_31_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_32_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_33_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_34_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_35_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_36_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_37_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_38_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_39_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_40_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_41_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_42_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_43_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_44_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_45_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_46_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_47_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_48_root_user_keyring_I; extern  _GLOBAL_211_T  _GLOBAL_49_root_user_keyring_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_root_user_keyring_I) *_GLOBAL_root_user_keyring_50_A[NUM_STACKS];   
typedef  struct key   _GLOBAL_212_T; extern  _GLOBAL_212_T  _GLOBAL_0_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_1_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_2_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_3_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_4_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_5_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_6_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_7_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_8_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_9_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_10_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_11_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_12_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_13_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_14_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_15_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_16_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_17_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_18_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_19_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_20_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_21_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_22_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_23_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_24_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_25_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_26_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_27_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_28_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_29_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_30_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_31_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_32_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_33_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_34_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_35_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_36_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_37_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_38_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_39_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_40_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_41_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_42_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_43_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_44_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_45_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_46_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_47_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_48_root_session_keyring_I; extern  _GLOBAL_212_T  _GLOBAL_49_root_session_keyring_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_root_session_keyring_I) *_GLOBAL_root_session_keyring_51_A[NUM_STACKS];   
# 67 "linux-2.6.18/include/linux/syscalls.h" 2

  long sys_time(time_t *tloc);
  __attribute__((regparm(0))) long sys_stime(time_t *tptr);
  __attribute__((regparm(0))) long sys_gettimeofday(struct timeval *tv,
    struct timezone *tz);
  __attribute__((regparm(0))) long sys_settimeofday(struct timeval *tv,
    struct timezone *tz);
  __attribute__((regparm(0))) long sys_adjtimex(struct timex *txc_p);

  __attribute__((regparm(0))) long sys_times(struct tms *tbuf);

  __attribute__((regparm(0))) long sys_gettid(void);
  __attribute__((regparm(0))) long sys_nanosleep(struct timespec *rqtp, struct timespec *rmtp);
  __attribute__((regparm(0))) unsigned long sys_alarm(unsigned int seconds);
  __attribute__((regparm(0))) long sys_getpid(void);
  __attribute__((regparm(0))) long sys_getppid(void);
  __attribute__((regparm(0))) long sys_getuid(void);
  __attribute__((regparm(0))) long sys_geteuid(void);
  __attribute__((regparm(0))) long sys_getgid(void);
  __attribute__((regparm(0))) long sys_getegid(void);
  __attribute__((regparm(0))) long sys_getresuid(uid_t *ruid, uid_t *euid, uid_t *suid);
  __attribute__((regparm(0))) long sys_getresgid(gid_t *rgid, gid_t *egid, gid_t *sgid);
  __attribute__((regparm(0))) long sys_getpgid(pid_t pid);
  __attribute__((regparm(0))) long sys_getpgrp(void);
  __attribute__((regparm(0))) long sys_getsid(pid_t pid);
  __attribute__((regparm(0))) long sys_getgroups(int gidsetsize, gid_t *grouplist);

  __attribute__((regparm(0))) long sys_setregid(gid_t rgid, gid_t egid);
  __attribute__((regparm(0))) long sys_setgid(gid_t gid);
  __attribute__((regparm(0))) long sys_setreuid(uid_t ruid, uid_t euid);
  __attribute__((regparm(0))) long sys_setuid(uid_t uid);
  __attribute__((regparm(0))) long sys_setresuid(uid_t ruid, uid_t euid, uid_t suid);
  __attribute__((regparm(0))) long sys_setresgid(gid_t rgid, gid_t egid, gid_t sgid);
  __attribute__((regparm(0))) long sys_setfsuid(uid_t uid);
  __attribute__((regparm(0))) long sys_setfsgid(gid_t gid);
  __attribute__((regparm(0))) long sys_setpgid(pid_t pid, pid_t pgid);
  __attribute__((regparm(0))) long sys_setsid(void);
  __attribute__((regparm(0))) long sys_setgroups(int gidsetsize, gid_t *grouplist);

  __attribute__((regparm(0))) long sys_acct(const char *name);
  __attribute__((regparm(0))) long sys_capget(cap_user_header_t header,
    cap_user_data_t dataptr);
  __attribute__((regparm(0))) long sys_capset(cap_user_header_t header,
    const cap_user_data_t data);
  __attribute__((regparm(0))) long sys_personality(u_long personality);

  __attribute__((regparm(0))) long sys_sigpending(old_sigset_t *set);
  __attribute__((regparm(0))) long sys_sigprocmask(int how, old_sigset_t *set,
    old_sigset_t *oset);
  __attribute__((regparm(0))) long sys_getitimer(int which, struct itimerval *value);
  __attribute__((regparm(0))) long sys_setitimer(int which,
    struct itimerval *value,
    struct itimerval *ovalue);
  __attribute__((regparm(0))) long sys_timer_create(clockid_t which_clock,
     struct sigevent *timer_event_spec,
     timer_t * created_timer_id);
  __attribute__((regparm(0))) long sys_timer_gettime(timer_t timer_id,
    struct itimerspec *setting);
  __attribute__((regparm(0))) long sys_timer_getoverrun(timer_t timer_id);
  __attribute__((regparm(0))) long sys_timer_settime(timer_t timer_id, int flags,
    const struct itimerspec *new_setting,
    struct itimerspec *old_setting);
  __attribute__((regparm(0))) long sys_timer_delete(timer_t timer_id);
  __attribute__((regparm(0))) long sys_clock_settime(clockid_t which_clock,
    const struct timespec *tp);
  __attribute__((regparm(0))) long sys_clock_gettime(clockid_t which_clock,
    struct timespec *tp);
  __attribute__((regparm(0))) long sys_clock_getres(clockid_t which_clock,
    struct timespec *tp);
  __attribute__((regparm(0))) long sys_clock_nanosleep(clockid_t which_clock, int flags,
    const struct timespec *rqtp,
    struct timespec *rmtp);

  __attribute__((regparm(0))) long sys_nice(int increment);
  __attribute__((regparm(0))) long sys_sched_setscheduler(pid_t pid, int policy,
     struct sched_param *param);
  __attribute__((regparm(0))) long sys_sched_setparam(pid_t pid,
     struct sched_param *param);
  __attribute__((regparm(0))) long sys_sched_getscheduler(pid_t pid);
  __attribute__((regparm(0))) long sys_sched_getparam(pid_t pid,
     struct sched_param *param);
  __attribute__((regparm(0))) long sys_sched_setaffinity(pid_t pid, unsigned int len,
     unsigned long *user_mask_ptr);
  __attribute__((regparm(0))) long sys_sched_getaffinity(pid_t pid, unsigned int len,
     unsigned long *user_mask_ptr);
  __attribute__((regparm(0))) long sys_sched_yield(void);
  __attribute__((regparm(0))) long sys_sched_get_priority_max(int policy);
  __attribute__((regparm(0))) long sys_sched_get_priority_min(int policy);
  __attribute__((regparm(0))) long sys_sched_rr_get_interval(pid_t pid,
     struct timespec *interval);
  __attribute__((regparm(0))) long sys_setpriority(int which, int who, int niceval);
  __attribute__((regparm(0))) long sys_getpriority(int which, int who);

  __attribute__((regparm(0))) long sys_shutdown(int, int);
  __attribute__((regparm(0))) long sys_reboot(int magic1, int magic2, unsigned int cmd,
    void *arg);
  __attribute__((regparm(0))) long sys_restart_syscall(void);
  __attribute__((regparm(0))) long sys_kexec_load(unsigned long entry, unsigned long nr_segments,
    struct kexec_segment *segments,
    unsigned long flags);

  __attribute__((regparm(0))) long sys_exit(int error_code);
  __attribute__((regparm(0))) void sys_exit_group(int error_code);
  __attribute__((regparm(0))) long sys_wait4(pid_t pid, int *stat_addr,
    int options, struct rusage *ru);
  __attribute__((regparm(0))) long sys_waitid(int which, pid_t pid,
      struct siginfo *infop,
      int options, struct rusage *ru);
  __attribute__((regparm(0))) long sys_waitpid(pid_t pid, int *stat_addr, int options);
  __attribute__((regparm(0))) long sys_set_tid_address(int *tidptr);
  __attribute__((regparm(0))) long sys_futex(u32 *uaddr, int op, u32 val,
   struct timespec *utime, u32 *uaddr2,
   u32 val3);

  __attribute__((regparm(0))) long sys_init_module(void *umod, unsigned long len,
    const char *uargs);
  __attribute__((regparm(0))) long sys_delete_module(const char *name_user,
    unsigned int flags);

  __attribute__((regparm(0))) long sys_rt_sigprocmask(int how, sigset_t *set,
    sigset_t *oset, size_t sigsetsize);
  __attribute__((regparm(0))) long sys_rt_sigpending(sigset_t *set, size_t sigsetsize);
  __attribute__((regparm(0))) long sys_rt_sigtimedwait(const sigset_t *uthese,
    siginfo_t *uinfo,
    const struct timespec *uts,
    size_t sigsetsize);
  __attribute__((regparm(0))) long sys_kill(int pid, int sig);
  __attribute__((regparm(0))) long sys_tgkill(int tgid, int pid, int sig);
  __attribute__((regparm(0))) long sys_tkill(int pid, int sig);
  __attribute__((regparm(0))) long sys_rt_sigqueueinfo(int pid, int sig, siginfo_t *uinfo);
  __attribute__((regparm(0))) long sys_sgetmask(void);
  __attribute__((regparm(0))) long sys_ssetmask(int newmask);
  __attribute__((regparm(0))) unsigned long sys_signal(int sig, __sighandler_t handler);
  __attribute__((regparm(0))) long sys_pause(void);

  __attribute__((regparm(0))) long sys_sync(void);
  __attribute__((regparm(0))) long sys_fsync(unsigned int fd);
  __attribute__((regparm(0))) long sys_fdatasync(unsigned int fd);
  __attribute__((regparm(0))) long sys_bdflush(int func, long data);
  __attribute__((regparm(0))) long sys_mount(char *dev_name, char *dir_name,
    char *type, unsigned long flags,
    void *data);
  __attribute__((regparm(0))) long sys_umount(char *name, int flags);
  __attribute__((regparm(0))) long sys_oldumount(char *name);
  __attribute__((regparm(0))) long sys_truncate(const char *path,
    unsigned long length);
  __attribute__((regparm(0))) long sys_ftruncate(unsigned int fd, unsigned long length);
  __attribute__((regparm(0))) long sys_stat(char *filename,
   struct __old_kernel_stat *statbuf);
  __attribute__((regparm(0))) long sys_statfs(const char * path,
    struct statfs *buf);
  __attribute__((regparm(0))) long sys_statfs64(const char *path, size_t sz,
    struct statfs64 *buf);
  __attribute__((regparm(0))) long sys_fstatfs(unsigned int fd, struct statfs *buf);
  __attribute__((regparm(0))) long sys_fstatfs64(unsigned int fd, size_t sz,
    struct statfs64 *buf);
  __attribute__((regparm(0))) long sys_lstat(char *filename,
   struct __old_kernel_stat *statbuf);
  __attribute__((regparm(0))) long sys_fstat(unsigned int fd,
   struct __old_kernel_stat *statbuf);
  __attribute__((regparm(0))) long sys_newstat(char *filename,
    struct stat *statbuf);
  __attribute__((regparm(0))) long sys_newlstat(char *filename,
    struct stat *statbuf);
  __attribute__((regparm(0))) long sys_newfstat(unsigned int fd, struct stat *statbuf);
  __attribute__((regparm(0))) long sys_ustat(unsigned dev, struct ustat *ubuf);

  __attribute__((regparm(0))) long sys_stat64(char *filename,
    struct stat64 *statbuf);
  __attribute__((regparm(0))) long sys_fstat64(unsigned long fd, struct stat64 *statbuf);
  __attribute__((regparm(0))) long sys_lstat64(char *filename,
    struct stat64 *statbuf);
  __attribute__((regparm(0))) long sys_truncate64(const char *path, loff_t length);
  __attribute__((regparm(0))) long sys_ftruncate64(unsigned int fd, loff_t length);


  __attribute__((regparm(0))) long sys_setxattr(char *path, char *name,
    void *value, size_t size, int flags);
  __attribute__((regparm(0))) long sys_lsetxattr(char *path, char *name,
    void *value, size_t size, int flags);
  __attribute__((regparm(0))) long sys_fsetxattr(int fd, char *name, void *value,
    size_t size, int flags);
  __attribute__((regparm(0))) ssize_t sys_getxattr(char *path, char *name,
    void *value, size_t size);
  __attribute__((regparm(0))) ssize_t sys_lgetxattr(char *path, char *name,
    void *value, size_t size);
  __attribute__((regparm(0))) ssize_t sys_fgetxattr(int fd, char *name,
    void *value, size_t size);
  __attribute__((regparm(0))) ssize_t sys_listxattr(char *path, char *list,
    size_t size);
  __attribute__((regparm(0))) ssize_t sys_llistxattr(char *path, char *list,
    size_t size);
  __attribute__((regparm(0))) ssize_t sys_flistxattr(int fd, char *list, size_t size);
  __attribute__((regparm(0))) long sys_removexattr(char *path, char *name);
  __attribute__((regparm(0))) long sys_lremovexattr(char *path, char *name);
  __attribute__((regparm(0))) long sys_fremovexattr(int fd, char *name);

  __attribute__((regparm(0))) unsigned long sys_brk(unsigned long brk);
  __attribute__((regparm(0))) long sys_mprotect(unsigned long start, size_t len,
    unsigned long prot);
  __attribute__((regparm(0))) unsigned long sys_mremap(unsigned long addr,
    unsigned long old_len, unsigned long new_len,
    unsigned long flags, unsigned long new_addr);
  __attribute__((regparm(0))) long sys_remap_file_pages(unsigned long start, unsigned long size,
   unsigned long prot, unsigned long pgoff,
   unsigned long flags);
  __attribute__((regparm(0))) long sys_msync(unsigned long start, size_t len, int flags);
  __attribute__((regparm(0))) long sys_fadvise64(int fd, loff_t offset, size_t len, int advice);
  __attribute__((regparm(0))) long sys_fadvise64_64(int fd, loff_t offset, loff_t len, int advice);
  __attribute__((regparm(0))) long sys_munmap(unsigned long addr, size_t len);
  __attribute__((regparm(0))) long sys_mlock(unsigned long start, size_t len);
  __attribute__((regparm(0))) long sys_munlock(unsigned long start, size_t len);
  __attribute__((regparm(0))) long sys_mlockall(int flags);
  __attribute__((regparm(0))) long sys_munlockall(void);
  __attribute__((regparm(0))) long sys_madvise(unsigned long start, size_t len, int behavior);
  __attribute__((regparm(0))) long sys_mincore(unsigned long start, size_t len,
    unsigned char * vec);

  __attribute__((regparm(0))) long sys_pivot_root(const char *new_root,
    const char *put_old);
  __attribute__((regparm(0))) long sys_chroot(const char *filename);
  __attribute__((regparm(0))) long sys_mknod(const char *filename, int mode,
    unsigned dev);
  __attribute__((regparm(0))) long sys_link(const char *oldname,
    const char *newname);
  __attribute__((regparm(0))) long sys_symlink(const char *old, const char *new);
  __attribute__((regparm(0))) long sys_unlink(const char *pathname);
  __attribute__((regparm(0))) long sys_rename(const char *oldname,
    const char *newname);
  __attribute__((regparm(0))) long sys_chmod(const char *filename, mode_t mode);
  __attribute__((regparm(0))) long sys_fchmod(unsigned int fd, mode_t mode);

  __attribute__((regparm(0))) long sys_fcntl(unsigned int fd, unsigned int cmd, unsigned long arg);

  __attribute__((regparm(0))) long sys_fcntl64(unsigned int fd,
    unsigned int cmd, unsigned long arg);

  __attribute__((regparm(0))) long sys_dup(unsigned int fildes);
  __attribute__((regparm(0))) long sys_dup2(unsigned int oldfd, unsigned int newfd);
  __attribute__((regparm(0))) long sys_ioperm(unsigned long from, unsigned long num, int on);
  __attribute__((regparm(0))) long sys_ioctl(unsigned int fd, unsigned int cmd,
    unsigned long arg);
  __attribute__((regparm(0))) long sys_flock(unsigned int fd, unsigned int cmd);
  __attribute__((regparm(0))) long sys_io_setup(unsigned nr_reqs, aio_context_t *ctx);
  __attribute__((regparm(0))) long sys_io_destroy(aio_context_t ctx);
  __attribute__((regparm(0))) long sys_io_getevents(aio_context_t ctx_id,
    long min_nr,
    long nr,
    struct io_event *events,
    struct timespec *timeout);
  __attribute__((regparm(0))) long sys_io_submit(aio_context_t, long,
    struct iocb * *);
  __attribute__((regparm(0))) long sys_io_cancel(aio_context_t ctx_id, struct iocb *iocb,
         struct io_event *result);
  __attribute__((regparm(0))) ssize_t sys_sendfile(int out_fd, int in_fd,
    off_t *offset, size_t count);
  __attribute__((regparm(0))) ssize_t sys_sendfile64(int out_fd, int in_fd,
    loff_t *offset, size_t count);
  __attribute__((regparm(0))) long sys_readlink(const char *path,
    char *buf, int bufsiz);
  __attribute__((regparm(0))) long sys_creat(const char *pathname, int mode);
  __attribute__((regparm(0))) long sys_open(const char *filename,
    int flags, int mode);
  __attribute__((regparm(0))) long sys_close(unsigned int fd);
  __attribute__((regparm(0))) long sys_access(const char *filename, int mode);
  __attribute__((regparm(0))) long sys_vhangup(void);
  __attribute__((regparm(0))) long sys_chown(const char *filename,
    uid_t user, gid_t group);
  __attribute__((regparm(0))) long sys_lchown(const char *filename,
    uid_t user, gid_t group);
  __attribute__((regparm(0))) long sys_fchown(unsigned int fd, uid_t user, gid_t group);
# 364 "linux-2.6.18/include/linux/syscalls.h"
  __attribute__((regparm(0))) long sys_utime(char *filename,
    struct utimbuf *times);
  __attribute__((regparm(0))) long sys_utimes(char *filename,
    struct timeval *utimes);
  __attribute__((regparm(0))) off_t sys_lseek(unsigned int fd, off_t offset,
    unsigned int origin);
  __attribute__((regparm(0))) long sys_llseek(unsigned int fd, unsigned long offset_high,
   unsigned long offset_low, loff_t *result,
   unsigned int origin);
  __attribute__((regparm(0))) ssize_t sys_read(unsigned int fd, char *buf,
    size_t count);
  __attribute__((regparm(0))) ssize_t sys_readahead(int fd, loff_t offset, size_t count);
  __attribute__((regparm(0))) ssize_t sys_readv(unsigned long fd,
    const struct iovec *vec,
    unsigned long vlen);
  __attribute__((regparm(0))) ssize_t sys_write(unsigned int fd, const char *buf,
    size_t count);
  __attribute__((regparm(0))) ssize_t sys_writev(unsigned long fd,
    const struct iovec *vec,
    unsigned long vlen);
  __attribute__((regparm(0))) ssize_t sys_pread64(unsigned int fd, char *buf,
    size_t count, loff_t pos);
  __attribute__((regparm(0))) ssize_t sys_pwrite64(unsigned int fd, const char *buf,
    size_t count, loff_t pos);
  __attribute__((regparm(0))) long sys_getcwd(char *buf, unsigned long size);
  __attribute__((regparm(0))) long sys_mkdir(const char *pathname, int mode);
  __attribute__((regparm(0))) long sys_chdir(const char *filename);
  __attribute__((regparm(0))) long sys_fchdir(unsigned int fd);
  __attribute__((regparm(0))) long sys_rmdir(const char *pathname);
  __attribute__((regparm(0))) long sys_lookup_dcookie(u64 cookie64, char *buf, size_t len);
  __attribute__((regparm(0))) long sys_quotactl(unsigned int cmd, const char *special,
    qid_t id, void *addr);
  __attribute__((regparm(0))) long sys_getdents(unsigned int fd,
    struct linux_dirent *dirent,
    unsigned int count);
  __attribute__((regparm(0))) long sys_getdents64(unsigned int fd,
    struct linux_dirent64 *dirent,
    unsigned int count);

  __attribute__((regparm(0))) long sys_setsockopt(int fd, int level, int optname,
    char *optval, int optlen);
  __attribute__((regparm(0))) long sys_getsockopt(int fd, int level, int optname,
    char *optval, int *optlen);
  __attribute__((regparm(0))) long sys_bind(int, struct sockaddr *, int);
  __attribute__((regparm(0))) long sys_connect(int, struct sockaddr *, int);
  __attribute__((regparm(0))) long sys_accept(int, struct sockaddr *, int *);
  __attribute__((regparm(0))) long sys_getsockname(int, struct sockaddr *, int *);
  __attribute__((regparm(0))) long sys_getpeername(int, struct sockaddr *, int *);
  __attribute__((regparm(0))) long sys_send(int, void *, size_t, unsigned);
  __attribute__((regparm(0))) long sys_sendto(int, void *, size_t, unsigned,
    struct sockaddr *, int);
  __attribute__((regparm(0))) long sys_sendmsg(int fd, struct msghdr *msg, unsigned flags);
  __attribute__((regparm(0))) long sys_recv(int, void *, size_t, unsigned);
  __attribute__((regparm(0))) long sys_recvfrom(int, void *, size_t, unsigned,
    struct sockaddr *, int *);
  __attribute__((regparm(0))) long sys_recvmsg(int fd, struct msghdr *msg, unsigned flags);
  __attribute__((regparm(0))) long sys_socket(int, int, int);
  __attribute__((regparm(0))) long sys_socketpair(int, int, int, int *);
  __attribute__((regparm(0))) long sys_socketcall(int call, unsigned long *args);
  __attribute__((regparm(0))) long sys_listen(int, int);
  __attribute__((regparm(0))) long sys_poll(struct pollfd *ufds, unsigned int nfds,
    long timeout);
  __attribute__((regparm(0))) long sys_select(int n, fd_set *inp, fd_set *outp,
   fd_set *exp, struct timeval *tvp);
  __attribute__((regparm(0))) long sys_epoll_create(int size);
  __attribute__((regparm(0))) long sys_epoll_ctl(int epfd, int op, int fd,
    struct epoll_event *event);
  __attribute__((regparm(0))) long sys_epoll_wait(int epfd, struct epoll_event *events,
    int maxevents, int timeout);
  __attribute__((regparm(0))) long sys_gethostname(char *name, int len);
  __attribute__((regparm(0))) long sys_sethostname(char *name, int len);
  __attribute__((regparm(0))) long sys_setdomainname(char *name, int len);
  __attribute__((regparm(0))) long sys_newuname(struct new_utsname *name);

  __attribute__((regparm(0))) long sys_getrlimit(unsigned int resource,
    struct rlimit *rlim);

  __attribute__((regparm(0))) long sys_old_getrlimit(unsigned int resource, struct rlimit *rlim);

  __attribute__((regparm(0))) long sys_setrlimit(unsigned int resource,
    struct rlimit *rlim);
  __attribute__((regparm(0))) long sys_getrusage(int who, struct rusage *ru);
  __attribute__((regparm(0))) long sys_umask(int mask);

  __attribute__((regparm(0))) long sys_msgget(key_t key, int msgflg);
  __attribute__((regparm(0))) long sys_msgsnd(int msqid, struct msgbuf *msgp,
    size_t msgsz, int msgflg);
  __attribute__((regparm(0))) long sys_msgrcv(int msqid, struct msgbuf *msgp,
    size_t msgsz, long msgtyp, int msgflg);
  __attribute__((regparm(0))) long sys_msgctl(int msqid, int cmd, struct msqid_ds *buf);

  __attribute__((regparm(0))) long sys_semget(key_t key, int nsems, int semflg);
  __attribute__((regparm(0))) long sys_semop(int semid, struct sembuf *sops,
    unsigned nsops);
  __attribute__((regparm(0))) long sys_semctl(int semid, int semnum, int cmd, union semun arg);
  __attribute__((regparm(0))) long sys_semtimedop(int semid, struct sembuf *sops,
    unsigned nsops,
    const struct timespec *timeout);
  __attribute__((regparm(0))) long sys_shmat(int shmid, char *shmaddr, int shmflg);
  __attribute__((regparm(0))) long sys_shmget(key_t key, size_t size, int flag);
  __attribute__((regparm(0))) long sys_shmdt(char *shmaddr);
  __attribute__((regparm(0))) long sys_shmctl(int shmid, int cmd, struct shmid_ds *buf);

  __attribute__((regparm(0))) long sys_mq_open(const char *name, int oflag, mode_t mode, struct mq_attr *attr);
  __attribute__((regparm(0))) long sys_mq_unlink(const char *name);
  __attribute__((regparm(0))) long sys_mq_timedsend(mqd_t mqdes, const char *msg_ptr, size_t msg_len, unsigned int msg_prio, const struct timespec *abs_timeout);
  __attribute__((regparm(0))) ssize_t sys_mq_timedreceive(mqd_t mqdes, char *msg_ptr, size_t msg_len, unsigned int *msg_prio, const struct timespec *abs_timeout);
  __attribute__((regparm(0))) long sys_mq_notify(mqd_t mqdes, const struct sigevent *notification);
  __attribute__((regparm(0))) long sys_mq_getsetattr(mqd_t mqdes, const struct mq_attr *mqstat, struct mq_attr *omqstat);

  __attribute__((regparm(0))) long sys_pciconfig_iobase(long which, unsigned long bus, unsigned long devfn);
  __attribute__((regparm(0))) long sys_pciconfig_read(unsigned long bus, unsigned long dfn,
    unsigned long off, unsigned long len,
    void *buf);
  __attribute__((regparm(0))) long sys_pciconfig_write(unsigned long bus, unsigned long dfn,
    unsigned long off, unsigned long len,
    void *buf);

  __attribute__((regparm(0))) long sys_prctl(int option, unsigned long arg2, unsigned long arg3,
   unsigned long arg4, unsigned long arg5);
  __attribute__((regparm(0))) long sys_swapon(const char *specialfile, int swap_flags);
  __attribute__((regparm(0))) long sys_swapoff(const char *specialfile);
  __attribute__((regparm(0))) long sys_sysctl(struct __sysctl_args *args);
  __attribute__((regparm(0))) long sys_sysinfo(struct sysinfo *info);
  __attribute__((regparm(0))) long sys_sysfs(int option,
    unsigned long arg1, unsigned long arg2);
  __attribute__((regparm(0))) long sys_nfsservctl(int cmd,
    struct nfsctl_arg *arg,
    void *res);
  __attribute__((regparm(0))) long sys_syslog(int type, char *buf, int len);
  __attribute__((regparm(0))) long sys_uselib(const char *library);
  __attribute__((regparm(0))) long sys_ni_syscall(void);
  __attribute__((regparm(0))) long sys_ptrace(long request, long pid, long addr, long data);

  __attribute__((regparm(0))) long sys_add_key(const char *_type,
       const char *_description,
       const void *_payload,
       size_t plen,
       key_serial_t destringid);

  __attribute__((regparm(0))) long sys_request_key(const char *_type,
    const char *_description,
    const char *_callout_info,
    key_serial_t destringid);

  __attribute__((regparm(0))) long sys_keyctl(int cmd, unsigned long arg2, unsigned long arg3,
      unsigned long arg4, unsigned long arg5);

  __attribute__((regparm(0))) long sys_ioprio_set(int which, int who, int ioprio);
  __attribute__((regparm(0))) long sys_ioprio_get(int which, int who);
  __attribute__((regparm(0))) long sys_set_mempolicy(int mode, unsigned long *nmask,
    unsigned long maxnode);
  __attribute__((regparm(0))) long sys_migrate_pages(pid_t pid, unsigned long maxnode,
    const unsigned long *from,
    const unsigned long *to);
  __attribute__((regparm(0))) long sys_move_pages(pid_t pid, unsigned long nr_pages,
    const void * *pages,
    const int *nodes,
    int *status,
    int flags);
  __attribute__((regparm(0))) long compat_sys_move_pages(pid_t pid, unsigned long nr_page,
    __u32 *pages,
    const int *nodes,
    int *status,
    int flags);
  __attribute__((regparm(0))) long sys_mbind(unsigned long start, unsigned long len,
    unsigned long mode,
    unsigned long *nmask,
    unsigned long maxnode,
    unsigned flags);
  __attribute__((regparm(0))) long sys_get_mempolicy(int *policy,
    unsigned long *nmask,
    unsigned long maxnode,
    unsigned long addr, unsigned long flags);

  __attribute__((regparm(0))) long sys_inotify_init(void);
  __attribute__((regparm(0))) long sys_inotify_add_watch(int fd, const char *path,
     u32 mask);
  __attribute__((regparm(0))) long sys_inotify_rm_watch(int fd, u32 wd);

  __attribute__((regparm(0))) long sys_spu_run(int fd, __u32 *unpc,
     __u32 *ustatus);
  __attribute__((regparm(0))) long sys_spu_create(const char *name,
  unsigned int flags, mode_t mode);

  __attribute__((regparm(0))) long sys_mknodat(int dfd, const char * filename, int mode,
       unsigned dev);
  __attribute__((regparm(0))) long sys_mkdirat(int dfd, const char * pathname, int mode);
  __attribute__((regparm(0))) long sys_unlinkat(int dfd, const char * pathname, int flag);
  __attribute__((regparm(0))) long sys_symlinkat(const char * oldname,
         int newdfd, const char * newname);
  __attribute__((regparm(0))) long sys_linkat(int olddfd, const char *oldname,
      int newdfd, const char *newname, int flags);
  __attribute__((regparm(0))) long sys_renameat(int olddfd, const char * oldname,
        int newdfd, const char * newname);
  __attribute__((regparm(0))) long sys_futimesat(int dfd, char *filename,
         struct timeval *utimes);
  __attribute__((regparm(0))) long sys_faccessat(int dfd, const char *filename, int mode);
  __attribute__((regparm(0))) long sys_fchmodat(int dfd, const char * filename,
        mode_t mode);
  __attribute__((regparm(0))) long sys_fchownat(int dfd, const char *filename, uid_t user,
        gid_t group, int flag);
  __attribute__((regparm(0))) long sys_openat(int dfd, const char *filename, int flags,
      int mode);
  __attribute__((regparm(0))) long sys_newfstatat(int dfd, char *filename,
          struct stat *statbuf, int flag);
  __attribute__((regparm(0))) long sys_fstatat64(int dfd, char *filename,
          struct stat64 *statbuf, int flag);
  __attribute__((regparm(0))) long sys_readlinkat(int dfd, const char *path, char *buf,
          int bufsiz);
  __attribute__((regparm(0))) long compat_sys_futimesat(unsigned int dfd, char *filename,
         struct compat_timeval *t);
  __attribute__((regparm(0))) long compat_sys_newfstatat(unsigned int dfd, char * filename,
          struct compat_stat *statbuf,
          int flag);
  __attribute__((regparm(0))) long compat_sys_openat(unsigned int dfd, const char *filename,
       int flags, int mode);
  __attribute__((regparm(0))) long sys_unshare(unsigned long unshare_flags);

  __attribute__((regparm(0))) long sys_splice(int fd_in, loff_t *off_in,
      int fd_out, loff_t *off_out,
      size_t len, unsigned int flags);

  __attribute__((regparm(0))) long sys_vmsplice(int fd, const struct iovec *iov,
        unsigned long nr_segs, unsigned int flags);

  __attribute__((regparm(0))) long sys_tee(int fdin, int fdout, size_t len, unsigned int flags);

  __attribute__((regparm(0))) long sys_sync_file_range(int fd, loff_t offset, loff_t nbytes,
     unsigned int flags);
  __attribute__((regparm(0))) long sys_get_robust_list(int pid,
        struct robust_list_head **head_ptr,
        size_t *len_ptr);
  __attribute__((regparm(0))) long sys_set_robust_list(struct robust_list_head *head,
        size_t len);
# 36 "linux-2.6.18/kernel/timer.c" 2
# 1 "linux-2.6.18/include/linux/delay.h" 1
# 10 "linux-2.6.18/include/linux/delay.h"
typedef  unsigned long   _GLOBAL_213_T; extern  _GLOBAL_213_T  global_loops_per_jiffy[NUM_STACKS];    

# 1 "linux-2.6.18/include/asm/delay.h" 1
# 10 "linux-2.6.18/include/asm/delay.h"
extern void __bad_udelay(void);
extern void __bad_ndelay(void);

extern void __udelay(unsigned long usecs);
extern void __ndelay(unsigned long nsecs);
extern void __const_udelay(unsigned long usecs);
extern void __delay(unsigned long loops);
# 26 "linux-2.6.18/include/asm/delay.h"
void use_tsc_delay(void);
# 13 "linux-2.6.18/include/linux/delay.h" 2
# 38 "linux-2.6.18/include/linux/delay.h"
void calibrate_delay(void);
void msleep(unsigned int msecs);
unsigned long msleep_interruptible(unsigned int msecs);

static inline  __attribute__((always_inline)) void ssleep(unsigned int seconds)
{
 msleep(seconds * 1000);
}
# 37 "linux-2.6.18/kernel/timer.c" 2

# 1 "linux-2.6.18/include/asm/uaccess.h" 1
# 40 "linux-2.6.18/include/asm/uaccess.h"
typedef  struct movsl_mask { int  mask ;  }   _GLOBAL_214_T; extern  _GLOBAL_214_T  global_movsl_mask[NUM_STACKS];    
  
 
# 98 "linux-2.6.18/include/asm/uaccess.h"
struct exception_table_entry
{
 unsigned long insn, fixup;
};

extern int fixup_exception(struct pt_regs *regs);
# 120 "linux-2.6.18/include/asm/uaccess.h"
extern void __get_user_1(void);
extern void __get_user_2(void);
extern void __get_user_4(void);
# 162 "linux-2.6.18/include/asm/uaccess.h"
extern void __put_user_bad(void);





extern void __put_user_1(void);
extern void __put_user_2(void);
extern void __put_user_4(void);
extern void __put_user_8(void);
# 325 "linux-2.6.18/include/asm/uaccess.h"
struct __large_struct { unsigned long buf[100]; };
# 358 "linux-2.6.18/include/asm/uaccess.h"
extern long __get_user_bad(void);
# 389 "linux-2.6.18/include/asm/uaccess.h"
unsigned long  __attribute__((warn_unused_result)) __copy_to_user_ll(void *to,
    const void *from, unsigned long n);
unsigned long  __attribute__((warn_unused_result)) __copy_from_user_ll(void *to,
    const void *from, unsigned long n);
unsigned long  __attribute__((warn_unused_result)) __copy_from_user_ll_nozero(void *to,
    const void *from, unsigned long n);
unsigned long  __attribute__((warn_unused_result)) __copy_from_user_ll_nocache(void *to,
    const void *from, unsigned long n);
unsigned long  __attribute__((warn_unused_result)) __copy_from_user_ll_nocache_nozero(void *to,
    const void *from, unsigned long n);
# 421 "linux-2.6.18/include/asm/uaccess.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long 
__attribute__((warn_unused_result)) __copy_to_user_inatomic(void *to, const void *from, unsigned long n)
{
 if (__builtin_constant_p(n)) {
  unsigned long ret;

  switch (n) {
  case 1:
   do { __typeof__(*((u8 *)to)) __pus_tmp = *(u8 *)from; ret = 0; if(__builtin_expect(!!(__copy_to_user_ll((u8 *)to, &__pus_tmp, 1) != 0), 0)) ret = 1; } while (0);
   return ret;
  case 2:
   do { __typeof__(*((u16 *)to)) __pus_tmp = *(u16 *)from; ret = 0; if(__builtin_expect(!!(__copy_to_user_ll((u16 *)to, &__pus_tmp, 2) != 0), 0)) ret = 2; } while (0);
   return ret;
  case 4:
   do { __typeof__(*((u32 *)to)) __pus_tmp = *(u32 *)from; ret = 0; if(__builtin_expect(!!(__copy_to_user_ll((u32 *)to, &__pus_tmp, 4) != 0), 0)) ret = 4; } while (0);
   return ret;
  }
 }
 return __copy_to_user_ll(to, from, n);
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long 
__attribute__((warn_unused_result)) __copy_to_user(void *to, const void *from, unsigned long n)
{
       do { do { } while (0); } while (0);
       return __copy_to_user_inatomic(to, from, n);
}
# 471 "linux-2.6.18/include/asm/uaccess.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long
__copy_from_user_inatomic(void *to, const void *from, unsigned long n)
{





 if (__builtin_constant_p(n)) {
  unsigned long ret;

  switch (n) {
  case 1:
   do { ret = 0; (void)0; switch (1) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u8 *)to) : "m"((*(struct __large_struct *)(from))), "i"(1), "0"(ret));break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u8 *)to) : "m"((*(struct __large_struct *)(from))), "i"(1), "0"(ret));break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""l"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u8 *)to) : "m"((*(struct __large_struct *)(from))), "i"(1), "0"(ret));break; default: (*(u8 *)to) = __get_user_bad(); } } while (0);
   return ret;
  case 2:
   do { ret = 0; (void)0; switch (2) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u16 *)to) : "m"((*(struct __large_struct *)(from))), "i"(2), "0"(ret));break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16 *)to) : "m"((*(struct __large_struct *)(from))), "i"(2), "0"(ret));break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""l"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16 *)to) : "m"((*(struct __large_struct *)(from))), "i"(2), "0"(ret));break; default: (*(u16 *)to) = __get_user_bad(); } } while (0);
   return ret;
  case 4:
   do { ret = 0; (void)0; switch (4) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u32 *)to) : "m"((*(struct __large_struct *)(from))), "i"(4), "0"(ret));break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u32 *)to) : "m"((*(struct __large_struct *)(from))), "i"(4), "0"(ret));break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""l"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u32 *)to) : "m"((*(struct __large_struct *)(from))), "i"(4), "0"(ret));break; default: (*(u32 *)to) = __get_user_bad(); } } while (0);
   return ret;
  }
 }
 return __copy_from_user_ll_nozero(to, from, n);
}
static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long
__copy_from_user(void *to, const void *from, unsigned long n)
{
 do { do { } while (0); } while (0);
 if (__builtin_constant_p(n)) {
  unsigned long ret;

  switch (n) {
  case 1:
   do { ret = 0; (void)0; switch (1) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u8 *)to) : "m"((*(struct __large_struct *)(from))), "i"(1), "0"(ret));break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u8 *)to) : "m"((*(struct __large_struct *)(from))), "i"(1), "0"(ret));break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""l"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u8 *)to) : "m"((*(struct __large_struct *)(from))), "i"(1), "0"(ret));break; default: (*(u8 *)to) = __get_user_bad(); } } while (0);
   return ret;
  case 2:
   do { ret = 0; (void)0; switch (2) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u16 *)to) : "m"((*(struct __large_struct *)(from))), "i"(2), "0"(ret));break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16 *)to) : "m"((*(struct __large_struct *)(from))), "i"(2), "0"(ret));break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""l"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16 *)to) : "m"((*(struct __large_struct *)(from))), "i"(2), "0"(ret));break; default: (*(u16 *)to) = __get_user_bad(); } } while (0);
   return ret;
  case 4:
   do { ret = 0; (void)0; switch (4) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u32 *)to) : "m"((*(struct __large_struct *)(from))), "i"(4), "0"(ret));break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u32 *)to) : "m"((*(struct __large_struct *)(from))), "i"(4), "0"(ret));break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""l"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u32 *)to) : "m"((*(struct __large_struct *)(from))), "i"(4), "0"(ret));break; default: (*(u32 *)to) = __get_user_bad(); } } while (0);
   return ret;
  }
 }
 return __copy_from_user_ll(to, from, n);
}



static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long __copy_from_user_nocache(void *to,
    const void *from, unsigned long n)
{
 do { do { } while (0); } while (0);
 if (__builtin_constant_p(n)) {
  unsigned long ret;

  switch (n) {
  case 1:
   do { ret = 0; (void)0; switch (1) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u8 *)to) : "m"((*(struct __large_struct *)(from))), "i"(1), "0"(ret));break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u8 *)to) : "m"((*(struct __large_struct *)(from))), "i"(1), "0"(ret));break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""l"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u8 *)to) : "m"((*(struct __large_struct *)(from))), "i"(1), "0"(ret));break; default: (*(u8 *)to) = __get_user_bad(); } } while (0);
   return ret;
  case 2:
   do { ret = 0; (void)0; switch (2) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u16 *)to) : "m"((*(struct __large_struct *)(from))), "i"(2), "0"(ret));break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16 *)to) : "m"((*(struct __large_struct *)(from))), "i"(2), "0"(ret));break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""l"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16 *)to) : "m"((*(struct __large_struct *)(from))), "i"(2), "0"(ret));break; default: (*(u16 *)to) = __get_user_bad(); } } while (0);
   return ret;
  case 4:
   do { ret = 0; (void)0; switch (4) { case 1: __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u32 *)to) : "m"((*(struct __large_struct *)(from))), "i"(4), "0"(ret));break; case 2: __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u32 *)to) : "m"((*(struct __large_struct *)(from))), "i"(4), "0"(ret));break; case 4: __asm__ __volatile__( "1:	mov""l"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	movl %3,%0\n" "	xor""l"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 4\n" "	.long 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u32 *)to) : "m"((*(struct __large_struct *)(from))), "i"(4), "0"(ret));break; default: (*(u32 *)to) = __get_user_bad(); } } while (0);
   return ret;
  }
 }
 return __copy_from_user_ll_nocache(to, from, n);
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long
__copy_from_user_inatomic_nocache(void *to, const void *from, unsigned long n)
{
       return __copy_from_user_ll_nocache_nozero(to, from, n);
}

unsigned long  __attribute__((warn_unused_result)) copy_to_user(void *to,
    const void *from, unsigned long n);
unsigned long  __attribute__((warn_unused_result)) copy_from_user(void *to,
    const void *from, unsigned long n);
long  __attribute__((warn_unused_result)) strncpy_from_user(char *dst, const char *src,
    long count);
long  __attribute__((warn_unused_result)) __strncpy_from_user(char *dst,
    const char *src, long count);
# 573 "linux-2.6.18/include/asm/uaccess.h"
long strnlen_user(const char *str, long n);
unsigned long  __attribute__((warn_unused_result)) clear_user(void *mem, unsigned long len);
unsigned long  __attribute__((warn_unused_result)) __clear_user(void *mem, unsigned long len);
# 39 "linux-2.6.18/kernel/timer.c" 2
# 1 "linux-2.6.18/include/asm/unistd.h" 1
# 40 "linux-2.6.18/kernel/timer.c" 2


# 1 "linux-2.6.18/include/asm/io.h" 1
# 47 "linux-2.6.18/include/asm/io.h"
# 1 "linux-2.6.18/include/asm-generic/iomap.h" 1
# 28 "linux-2.6.18/include/asm-generic/iomap.h"
extern unsigned int  __attribute__((regparm(3))) ioread8(void *);
extern unsigned int  __attribute__((regparm(3))) ioread16(void *);
extern unsigned int  __attribute__((regparm(3))) ioread16be(void *);
extern unsigned int  __attribute__((regparm(3))) ioread32(void *);
extern unsigned int  __attribute__((regparm(3))) ioread32be(void *);

extern void  __attribute__((regparm(3))) iowrite8(u8, void *);
extern void  __attribute__((regparm(3))) iowrite16(u16, void *);
extern void  __attribute__((regparm(3))) iowrite16be(u16, void *);
extern void  __attribute__((regparm(3))) iowrite32(u32, void *);
extern void  __attribute__((regparm(3))) iowrite32be(u32, void *);
# 51 "linux-2.6.18/include/asm-generic/iomap.h"
extern void  __attribute__((regparm(3))) ioread8_rep(void *port, void *buf, unsigned long count);
extern void  __attribute__((regparm(3))) ioread16_rep(void *port, void *buf, unsigned long count);
extern void  __attribute__((regparm(3))) ioread32_rep(void *port, void *buf, unsigned long count);

extern void  __attribute__((regparm(3))) iowrite8_rep(void *port, const void *buf, unsigned long count);
extern void  __attribute__((regparm(3))) iowrite16_rep(void *port, const void *buf, unsigned long count);
extern void  __attribute__((regparm(3))) iowrite32_rep(void *port, const void *buf, unsigned long count);


extern void *ioport_map(unsigned long port, unsigned int nr);
extern void ioport_unmap(void *);


struct pci_dev;
extern void *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);
extern void pci_iounmap(struct pci_dev *dev, void *);
# 48 "linux-2.6.18/include/asm/io.h" 2

# 1 "linux-2.6.18/include/linux/vmalloc.h" 1






struct vm_area_struct;
# 25 "linux-2.6.18/include/linux/vmalloc.h"
struct vm_struct {
 void *addr;
 unsigned long size;
 unsigned long flags;
 struct page **pages;
 unsigned int nr_pages;
 unsigned long phys_addr;
 struct vm_struct *next;
};




extern void *vmalloc(unsigned long size);
extern void *vmalloc_user(unsigned long size);
extern void *vmalloc_node(unsigned long size, int node);
extern void *vmalloc_exec(unsigned long size);
extern void *vmalloc_32(unsigned long size);
extern void *vmalloc_32_user(unsigned long size);
extern void *__vmalloc(unsigned long size, gfp_t gfp_mask, pgprot_t prot);
extern void *__vmalloc_area(struct vm_struct *area, gfp_t gfp_mask,
    pgprot_t prot);
extern void *__vmalloc_node(unsigned long size, gfp_t gfp_mask,
    pgprot_t prot, int node);
extern void vfree(void *addr);

extern void *vmap(struct page **pages, unsigned int count,
   unsigned long flags, pgprot_t prot);
extern void vunmap(void *addr);

extern int remap_vmalloc_range(struct vm_area_struct *vma, void *addr,
       unsigned long pgoff);




extern struct vm_struct *get_vm_area(unsigned long size, unsigned long flags);
extern struct vm_struct *__get_vm_area(unsigned long size, unsigned long flags,
     unsigned long start, unsigned long end);
extern struct vm_struct *get_vm_area_node(unsigned long size,
     unsigned long flags, int node);
extern struct vm_struct *remove_vm_area(void *addr);
extern struct vm_struct *__remove_vm_area(void *addr);
extern int map_vm_area(struct vm_struct *area, pgprot_t prot,
   struct page ***pages);
extern void unmap_vm_area(struct vm_struct *area);




typedef  rwlock_t  _GLOBAL_215_T; extern  _GLOBAL_215_T  global_vmlist_lock[NUM_STACKS];   
typedef  struct vm_struct   _GLOBAL_216_T; extern  _GLOBAL_216_T  * global_vmlist[NUM_STACKS];    
# 50 "linux-2.6.18/include/asm/io.h" 2
# 75 "linux-2.6.18/include/asm/io.h"
static inline  __attribute__((always_inline)) unsigned long virt_to_phys(volatile void * address)
{
 return ((unsigned long)(address)-((unsigned long)((unsigned long)(0xC0000000))));
}
# 93 "linux-2.6.18/include/asm/io.h"
static inline  __attribute__((always_inline)) void * phys_to_virt(unsigned long address)
{
 return ((void *)((unsigned long)(address)+((unsigned long)((unsigned long)(0xC0000000)))));
}






extern void * __ioremap(unsigned long offset, unsigned long size, unsigned long flags);
# 117 "linux-2.6.18/include/asm/io.h"
static inline  __attribute__((always_inline)) void * ioremap(unsigned long offset, unsigned long size)
{
 return __ioremap(offset, size, 0);
}

extern void * ioremap_nocache(unsigned long offset, unsigned long size);
extern void iounmap(volatile void *addr);






extern void *bt_ioremap(unsigned long offset, unsigned long size);
extern void bt_iounmap(void *addr, unsigned long size);
# 161 "linux-2.6.18/include/asm/io.h"
static inline  __attribute__((always_inline)) unsigned char readb(const volatile void *addr)
{
 return *(volatile unsigned char *) addr;
}
static inline  __attribute__((always_inline)) unsigned short readw(const volatile void *addr)
{
 return *(volatile unsigned short *) addr;
}
static inline  __attribute__((always_inline)) unsigned int readl(const volatile void *addr)
{
 return *(volatile unsigned int *) addr;
}







static inline  __attribute__((always_inline)) void writeb(unsigned char b, volatile void *addr)
{
 *(volatile unsigned char *) addr = b;
}
static inline  __attribute__((always_inline)) void writew(unsigned short b, volatile void *addr)
{
 *(volatile unsigned short *) addr = b;
}
static inline  __attribute__((always_inline)) void writel(unsigned int b, volatile void *addr)
{
 *(volatile unsigned int *) addr = b;
}






static inline  __attribute__((always_inline)) void memset_io(volatile void *addr, unsigned char val, int count)
{
 (__builtin_constant_p(val) ? (__builtin_constant_p((count)) ? __constant_c_and_count_memset((((void *) addr)),((0x01010101UL*(unsigned char)(val))),((count))) : __constant_c_memset((((void *) addr)),((0x01010101UL*(unsigned char)(val))),((count)))) : (__builtin_constant_p((count)) ? __memset_generic(((((void *) addr))),(((val))),(((count)))) : __memset_generic((((void *) addr)),((val)),((count)))));
}
static inline  __attribute__((always_inline)) void memcpy_fromio(void *dst, const volatile void *src, int count)
{
 __memcpy(dst, (void *) src, count);
}
static inline  __attribute__((always_inline)) void memcpy_toio(volatile void *dst, const void *src, int count)
{
 __memcpy((void *) dst, src, count);
}
# 238 "linux-2.6.18/include/asm/io.h"
static inline  __attribute__((always_inline)) int check_signature(volatile void * io_addr,
 const unsigned char *signature, int length)
{
 int retval = 0;
 do {
  if (readb(io_addr) != *signature)
   goto out;
  io_addr++;
  signature++;
  length--;
 } while (length);
 retval = 1;
out:
 return retval;
}
# 292 "linux-2.6.18/include/asm/io.h"
static inline  __attribute__((always_inline)) void slow_down_io(void) {
 __asm__ __volatile__(
  "outb %%al,$0x80;"



  : : );
}
# 369 "linux-2.6.18/include/asm/io.h"
static inline  __attribute__((always_inline)) void outb_local(unsigned char value, int port) { __asm__ __volatile__("out" "b" " %" "b" "0, %w1" : : "a"(value), "Nd"(port)); } static inline  __attribute__((always_inline)) unsigned char inb_local(int port) { unsigned char value; __asm__ __volatile__("in" "b" " %w1, %" "b" "0" : "=a"(value) : "Nd"(port)); return value; } static inline  __attribute__((always_inline)) void outb_local_p(unsigned char value, int port) { outb_local(value, port); slow_down_io(); } static inline  __attribute__((always_inline)) unsigned char inb_local_p(int port) { unsigned char value = inb_local(port); slow_down_io(); return value; } static inline  __attribute__((always_inline)) void outb(unsigned char value, int port) { outb_local(value, port); } static inline  __attribute__((always_inline)) unsigned char inb(int port) { return inb_local(port); } static inline  __attribute__((always_inline)) void outb_p(unsigned char value, int port) { outb(value, port); slow_down_io(); } static inline  __attribute__((always_inline)) unsigned char inb_p(int port) { unsigned char value = inb(port); slow_down_io(); return value; } static inline  __attribute__((always_inline)) void outsb(int port, const void *addr, unsigned long count) { __asm__ __volatile__("rep; outs" "b" : "+S"(addr), "+c"(count) : "d"(port)); } static inline  __attribute__((always_inline)) void insb(int port, void *addr, unsigned long count) { __asm__ __volatile__("rep; ins" "b" : "+D"(addr), "+c"(count) : "d"(port)); }
static inline  __attribute__((always_inline)) void outw_local(unsigned short value, int port) { __asm__ __volatile__("out" "w" " %" "w" "0, %w1" : : "a"(value), "Nd"(port)); } static inline  __attribute__((always_inline)) unsigned short inw_local(int port) { unsigned short value; __asm__ __volatile__("in" "w" " %w1, %" "w" "0" : "=a"(value) : "Nd"(port)); return value; } static inline  __attribute__((always_inline)) void outw_local_p(unsigned short value, int port) { outw_local(value, port); slow_down_io(); } static inline  __attribute__((always_inline)) unsigned short inw_local_p(int port) { unsigned short value = inw_local(port); slow_down_io(); return value; } static inline  __attribute__((always_inline)) void outw(unsigned short value, int port) { outw_local(value, port); } static inline  __attribute__((always_inline)) unsigned short inw(int port) { return inw_local(port); } static inline  __attribute__((always_inline)) void outw_p(unsigned short value, int port) { outw(value, port); slow_down_io(); } static inline  __attribute__((always_inline)) unsigned short inw_p(int port) { unsigned short value = inw(port); slow_down_io(); return value; } static inline  __attribute__((always_inline)) void outsw(int port, const void *addr, unsigned long count) { __asm__ __volatile__("rep; outs" "w" : "+S"(addr), "+c"(count) : "d"(port)); } static inline  __attribute__((always_inline)) void insw(int port, void *addr, unsigned long count) { __asm__ __volatile__("rep; ins" "w" : "+D"(addr), "+c"(count) : "d"(port)); }
static inline  __attribute__((always_inline)) void outl_local(unsigned int value, int port) { __asm__ __volatile__("out" "l" " %" "" "0, %w1" : : "a"(value), "Nd"(port)); } static inline  __attribute__((always_inline)) unsigned int inl_local(int port) { unsigned int value; __asm__ __volatile__("in" "l" " %w1, %" "" "0" : "=a"(value) : "Nd"(port)); return value; } static inline  __attribute__((always_inline)) void outl_local_p(unsigned int value, int port) { outl_local(value, port); slow_down_io(); } static inline  __attribute__((always_inline)) unsigned int inl_local_p(int port) { unsigned int value = inl_local(port); slow_down_io(); return value; } static inline  __attribute__((always_inline)) void outl(unsigned int value, int port) { outl_local(value, port); } static inline  __attribute__((always_inline)) unsigned int inl(int port) { return inl_local(port); } static inline  __attribute__((always_inline)) void outl_p(unsigned int value, int port) { outl(value, port); slow_down_io(); } static inline  __attribute__((always_inline)) unsigned int inl_p(int port) { unsigned int value = inl(port); slow_down_io(); return value; } static inline  __attribute__((always_inline)) void outsl(int port, const void *addr, unsigned long count) { __asm__ __volatile__("rep; outs" "l" : "+S"(addr), "+c"(count) : "d"(port)); } static inline  __attribute__((always_inline)) void insl(int port, void *addr, unsigned long count) { __asm__ __volatile__("rep; ins" "l" : "+D"(addr), "+c"(count) : "d"(port)); }
# 43 "linux-2.6.18/kernel/timer.c" 2







typedef  u64 _GLOBAL_217_T;  _GLOBAL_217_T  global_jiffies_64[NUM_STACKS] = {  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  };       

;
# 64 "linux-2.6.18/kernel/timer.c"
typedef struct tvec_s {
 struct list_head vec[(1 << (0 ? 4 : 6))];
} tvec_t;

typedef struct tvec_root_s {
 struct list_head vec[(1 << (0 ? 6 : 8))];
} tvec_root_t;

struct tvec_t_base_s {
 spinlock_t lock;
 struct timer_list *running_timer;
 unsigned long timer_jiffies;
 tvec_root_t tv1;
 tvec_t tv2;
 tvec_t tv3;
 tvec_t tv4;
 tvec_t tv5;
} ;

typedef struct tvec_t_base_s tvec_base_t;

typedef  tvec_base_t _GLOBAL_218_T;  _GLOBAL_218_T  _GLOBAL_0_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_1_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_2_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_3_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_4_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_5_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_6_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_7_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_8_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_9_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_10_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_11_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_12_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_13_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_14_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_15_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_16_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_17_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_18_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_19_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_20_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_21_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_22_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_23_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_24_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_25_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_26_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_27_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_28_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_29_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_30_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_31_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_32_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_33_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_34_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_35_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_36_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_37_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_38_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_39_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_40_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_41_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_42_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_43_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_44_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_45_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_46_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_47_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_48_boot_tvec_bases_I;  _GLOBAL_218_T  _GLOBAL_49_boot_tvec_bases_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_tvec_bases_I) *_GLOBAL_boot_tvec_bases_52_A[NUM_STACKS] = { &_GLOBAL_0_boot_tvec_bases_I, &_GLOBAL_1_boot_tvec_bases_I, &_GLOBAL_2_boot_tvec_bases_I, &_GLOBAL_3_boot_tvec_bases_I, &_GLOBAL_4_boot_tvec_bases_I, &_GLOBAL_5_boot_tvec_bases_I, &_GLOBAL_6_boot_tvec_bases_I, &_GLOBAL_7_boot_tvec_bases_I, &_GLOBAL_8_boot_tvec_bases_I, &_GLOBAL_9_boot_tvec_bases_I, &_GLOBAL_10_boot_tvec_bases_I, &_GLOBAL_11_boot_tvec_bases_I, &_GLOBAL_12_boot_tvec_bases_I, &_GLOBAL_13_boot_tvec_bases_I, &_GLOBAL_14_boot_tvec_bases_I, &_GLOBAL_15_boot_tvec_bases_I, &_GLOBAL_16_boot_tvec_bases_I, &_GLOBAL_17_boot_tvec_bases_I, &_GLOBAL_18_boot_tvec_bases_I, &_GLOBAL_19_boot_tvec_bases_I, &_GLOBAL_20_boot_tvec_bases_I, &_GLOBAL_21_boot_tvec_bases_I, &_GLOBAL_22_boot_tvec_bases_I, &_GLOBAL_23_boot_tvec_bases_I, &_GLOBAL_24_boot_tvec_bases_I, &_GLOBAL_25_boot_tvec_bases_I, &_GLOBAL_26_boot_tvec_bases_I, &_GLOBAL_27_boot_tvec_bases_I, &_GLOBAL_28_boot_tvec_bases_I, &_GLOBAL_29_boot_tvec_bases_I, &_GLOBAL_30_boot_tvec_bases_I, &_GLOBAL_31_boot_tvec_bases_I, &_GLOBAL_32_boot_tvec_bases_I, &_GLOBAL_33_boot_tvec_bases_I, &_GLOBAL_34_boot_tvec_bases_I, &_GLOBAL_35_boot_tvec_bases_I, &_GLOBAL_36_boot_tvec_bases_I, &_GLOBAL_37_boot_tvec_bases_I, &_GLOBAL_38_boot_tvec_bases_I, &_GLOBAL_39_boot_tvec_bases_I, &_GLOBAL_40_boot_tvec_bases_I, &_GLOBAL_41_boot_tvec_bases_I, &_GLOBAL_42_boot_tvec_bases_I, &_GLOBAL_43_boot_tvec_bases_I, &_GLOBAL_44_boot_tvec_bases_I, &_GLOBAL_45_boot_tvec_bases_I, &_GLOBAL_46_boot_tvec_bases_I, &_GLOBAL_47_boot_tvec_bases_I, &_GLOBAL_48_boot_tvec_bases_I, &_GLOBAL_49_boot_tvec_bases_I, }; 
;
typedef  __typeof__ ( tvec_base_t *  )   _GLOBAL_219_T; static  _GLOBAL_219_T  global_per_cpu__tvec_bases[NUM_STACKS] = {  & _GLOBAL_0_boot_tvec_bases_I ,  & _GLOBAL_1_boot_tvec_bases_I ,  & _GLOBAL_2_boot_tvec_bases_I ,  & _GLOBAL_3_boot_tvec_bases_I ,  & _GLOBAL_4_boot_tvec_bases_I ,  & _GLOBAL_5_boot_tvec_bases_I ,  & _GLOBAL_6_boot_tvec_bases_I ,  & _GLOBAL_7_boot_tvec_bases_I ,  & _GLOBAL_8_boot_tvec_bases_I ,  & _GLOBAL_9_boot_tvec_bases_I ,  & _GLOBAL_10_boot_tvec_bases_I ,  & _GLOBAL_11_boot_tvec_bases_I ,  & _GLOBAL_12_boot_tvec_bases_I ,  & _GLOBAL_13_boot_tvec_bases_I ,  & _GLOBAL_14_boot_tvec_bases_I ,  & _GLOBAL_15_boot_tvec_bases_I ,  & _GLOBAL_16_boot_tvec_bases_I ,  & _GLOBAL_17_boot_tvec_bases_I ,  & _GLOBAL_18_boot_tvec_bases_I ,  & _GLOBAL_19_boot_tvec_bases_I ,  & _GLOBAL_20_boot_tvec_bases_I ,  & _GLOBAL_21_boot_tvec_bases_I ,  & _GLOBAL_22_boot_tvec_bases_I ,  & _GLOBAL_23_boot_tvec_bases_I ,  & _GLOBAL_24_boot_tvec_bases_I ,  & _GLOBAL_25_boot_tvec_bases_I ,  & _GLOBAL_26_boot_tvec_bases_I ,  & _GLOBAL_27_boot_tvec_bases_I ,  & _GLOBAL_28_boot_tvec_bases_I ,  & _GLOBAL_29_boot_tvec_bases_I ,  & _GLOBAL_30_boot_tvec_bases_I ,  & _GLOBAL_31_boot_tvec_bases_I ,  & _GLOBAL_32_boot_tvec_bases_I ,  & _GLOBAL_33_boot_tvec_bases_I ,  & _GLOBAL_34_boot_tvec_bases_I ,  & _GLOBAL_35_boot_tvec_bases_I ,  & _GLOBAL_36_boot_tvec_bases_I ,  & _GLOBAL_37_boot_tvec_bases_I ,  & _GLOBAL_38_boot_tvec_bases_I ,  & _GLOBAL_39_boot_tvec_bases_I ,  & _GLOBAL_40_boot_tvec_bases_I ,  & _GLOBAL_41_boot_tvec_bases_I ,  & _GLOBAL_42_boot_tvec_bases_I ,  & _GLOBAL_43_boot_tvec_bases_I ,  & _GLOBAL_44_boot_tvec_bases_I ,  & _GLOBAL_45_boot_tvec_bases_I ,  & _GLOBAL_46_boot_tvec_bases_I ,  & _GLOBAL_47_boot_tvec_bases_I ,  & _GLOBAL_48_boot_tvec_bases_I ,  & _GLOBAL_49_boot_tvec_bases_I ,  };      

static inline  __attribute__((always_inline)) void set_running_timer(tvec_base_t *base,
     struct timer_list *timer)
{



}

static void internal_add_timer(tvec_base_t *base, struct timer_list *timer)
{
 unsigned long expires = timer->expires;
 unsigned long idx = expires - base->timer_jiffies;
 struct list_head *vec;

 if (idx < (1 << (0 ? 6 : 8))) {
  int i = expires & ((1 << (0 ? 6 : 8)) - 1);
  vec = base->tv1.vec + i;
 } else if (idx < 1 << ((0 ? 6 : 8) + (0 ? 4 : 6))) {
  int i = (expires >> (0 ? 6 : 8)) & ((1 << (0 ? 4 : 6)) - 1);
  vec = base->tv2.vec + i;
 } else if (idx < 1 << ((0 ? 6 : 8) + 2 * (0 ? 4 : 6))) {
  int i = (expires >> ((0 ? 6 : 8) + (0 ? 4 : 6))) & ((1 << (0 ? 4 : 6)) - 1);
  vec = base->tv3.vec + i;
 } else if (idx < 1 << ((0 ? 6 : 8) + 3 * (0 ? 4 : 6))) {
  int i = (expires >> ((0 ? 6 : 8) + 2 * (0 ? 4 : 6))) & ((1 << (0 ? 4 : 6)) - 1);
  vec = base->tv4.vec + i;
 } else if ((signed long) idx < 0) {




  vec = base->tv1.vec + (base->timer_jiffies & ((1 << (0 ? 6 : 8)) - 1));
 } else {
  int i;



  if (idx > 0xffffffffUL) {
   idx = 0xffffffffUL;
   expires = idx + base->timer_jiffies;
  }
  i = (expires >> ((0 ? 6 : 8) + 3 * (0 ? 4 : 6))) & ((1 << (0 ? 4 : 6)) - 1);
  vec = base->tv5.vec + i;
 }



 list_add_tail(&timer->entry, vec);
}
# 146 "linux-2.6.18/kernel/timer.c"
void  __attribute__((regparm(3))) init_timer(struct timer_list *timer)
{
 timer->entry.next = ((void *)0);
 timer->base = global_per_cpu__tvec_bases[get_stack_id()];
}
;

static inline  __attribute__((always_inline)) void detach_timer(struct timer_list *timer,
     int clear_pending)
{
 struct list_head *entry = &timer->entry;

 __list_del(entry->prev, entry->next);
 if (clear_pending)
  entry->next = ((void *)0);
 entry->prev = ((void *) 0x00200200);
}
# 176 "linux-2.6.18/kernel/timer.c"
static tvec_base_t *lock_timer_base(struct timer_list *timer,
     unsigned long *flags)
{
 tvec_base_t *base;

 for (;;) {
  base = timer->base;
  if (__builtin_expect(!!(base != ((void *)0)), 1)) {
   do { (void)(*flags); do { do { } while (0); (void)0; (void)(&base->lock); } while (0); } while (0);
   if (__builtin_expect(!!(base == timer->base), 1))
    return base;

   do { (void)(*flags); do { do { } while (0); (void)0; (void)(&base->lock); } while (0); } while (0);
  }
  rep_nop();
 }
}

int __mod_timer(struct timer_list *timer, unsigned long expires)
{
 tvec_base_t *base, *new_base;
 unsigned long flags;
 int ret = 0;

 do { if (!timer->function) ; } while(0);

 base = lock_timer_base(timer, &flags);

 if (timer_pending(timer)) {
  detach_timer(timer, 0);
  ret = 1;
 }

 new_base = global_per_cpu__tvec_bases[get_stack_id()];

 if (base != new_base) {







  if (__builtin_expect(!!(base->running_timer != timer), 1)) {

   timer->base = ((void *)0);
   do { do { } while (0); (void)0; (void)(&base->lock); } while (0);
   base = new_base;
   do { do { } while (0); (void)0; (void)(&base->lock); } while (0);
   timer->base = base;
  }
 }

 timer->expires = expires;
 internal_add_timer(base, timer);
 do { (void)(flags); do { do { } while (0); (void)0; (void)(&base->lock); } while (0); } while (0);

 return ret;
}

;
# 245 "linux-2.6.18/kernel/timer.c"
void add_timer_on(struct timer_list *timer, int cpu)
{
 tvec_base_t *base = (*((void)(cpu), &global_per_cpu__tvec_bases[get_stack_id()]));
   unsigned long flags;

   do { if (timer_pending(timer) || !timer->function) ; } while(0);
 do { (void)(flags); do { do { } while (0); (void)0; (void)(&base->lock); } while (0); } while (0);
 timer->base = base;
 internal_add_timer(base, timer);
 do { (void)(flags); do { do { } while (0); (void)0; (void)(&base->lock); } while (0); } while (0);
}
# 277 "linux-2.6.18/kernel/timer.c"
int mod_timer(struct timer_list *timer, unsigned long expires)
{
 do { if (!timer->function) ; } while(0);






 if (timer->expires == expires && timer_pending(timer))
  return 1;

 return __mod_timer(timer, expires);
}

;
# 305 "linux-2.6.18/kernel/timer.c"
int del_timer(struct timer_list *timer)
{
 tvec_base_t *base;
 unsigned long flags;
 int ret = 0;

 if (timer_pending(timer)) {
  base = lock_timer_base(timer, &flags);
  if (timer_pending(timer)) {
   detach_timer(timer, 1);
   ret = 1;
  }
  do { (void)(flags); do { do { } while (0); (void)0; (void)(&base->lock); } while (0); } while (0);
 }

 return ret;
}

;
# 384 "linux-2.6.18/kernel/timer.c"
static int cascade(tvec_base_t *base, tvec_t *tv, int index)
{

 struct timer_list *timer, *tmp;
 struct list_head tv_list;

 list_replace_init(tv->vec + index, &tv_list);





 for (timer = ({ const typeof( ((typeof(*timer) *)0)->entry ) *__mptr = ((&tv_list)->next); (typeof(*timer) *)( (char *)__mptr - __builtin_offsetof(typeof(*timer),entry) );}), tmp = ({ const typeof( ((typeof(*timer) *)0)->entry ) *__mptr = (timer->entry.next); (typeof(*timer) *)( (char *)__mptr - __builtin_offsetof(typeof(*timer),entry) );}); &timer->entry != (&tv_list); timer = tmp, tmp = ({ const typeof( ((typeof(*tmp) *)0)->entry ) *__mptr = (tmp->entry.next); (typeof(*tmp) *)( (char *)__mptr - __builtin_offsetof(typeof(*tmp),entry) );})) {
  do { if (timer->base != base) ; } while(0);
  internal_add_timer(base, timer);
 }

 return index;
}
# 413 "linux-2.6.18/kernel/timer.c"
static inline  __attribute__((always_inline)) void __run_timers(tvec_base_t *base)
{
 struct timer_list *timer;

 do { ; do { do { } while (0); (void)0; (void)(&base->lock); } while (0); } while (0);
 while ((({ unsigned long __dummy; typeof(global_jiffies[get_stack_id()]) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ({ unsigned long __dummy; typeof(base->timer_jiffies) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ((long)(global_jiffies[get_stack_id()]) - (long)(base->timer_jiffies) >= 0))) {
  struct list_head work_list;
  struct list_head *head = &work_list;
   int index = base->timer_jiffies & ((1 << (0 ? 6 : 8)) - 1);




  if (!index &&
   (!cascade(base, &base->tv2, ((base->timer_jiffies >> ((0 ? 6 : 8) + (0) * (0 ? 4 : 6))) & ((1 << (0 ? 4 : 6)) - 1)))) &&
    (!cascade(base, &base->tv3, ((base->timer_jiffies >> ((0 ? 6 : 8) + (1) * (0 ? 4 : 6))) & ((1 << (0 ? 4 : 6)) - 1)))) &&
     !cascade(base, &base->tv4, ((base->timer_jiffies >> ((0 ? 6 : 8) + (2) * (0 ? 4 : 6))) & ((1 << (0 ? 4 : 6)) - 1))))
   cascade(base, &base->tv5, ((base->timer_jiffies >> ((0 ? 6 : 8) + (3) * (0 ? 4 : 6))) & ((1 << (0 ? 4 : 6)) - 1)));
  ++base->timer_jiffies;
  list_replace_init(base->tv1.vec + index, &work_list);
  while (!list_empty(head)) {
   void (*fn)(unsigned long);
   unsigned long data;

   timer = ({ const typeof( ((struct timer_list *)0)->entry ) *__mptr = (head->next); (struct timer_list *)( (char *)__mptr - __builtin_offsetof(struct timer_list,entry) );});
    fn = timer->function;
    data = timer->data;

   set_running_timer(base, timer);
   detach_timer(timer, 1);
   do { ; do { do { } while (0); (void)0; (void)(&base->lock); } while (0); } while (0);
   {
    int preempt_count = (current_thread_info()->preempt_count);
    fn(data);
    if (preempt_count != (current_thread_info()->preempt_count)) {
     printk("<4>" "huh, entered %p "
            "with preempt_count %08x, exited"
            " with %08x?\n",
            fn, preempt_count,
            (current_thread_info()->preempt_count));
     ;
    }
   }
   do { ; do { do { } while (0); (void)0; (void)(&base->lock); } while (0); } while (0);
  }
 }
 set_running_timer(base, ((void *)0));
 do { ; do { do { } while (0); (void)0; (void)(&base->lock); } while (0); } while (0);
}
# 569 "linux-2.6.18/kernel/timer.c"
typedef  unsigned long  _GLOBAL_220_T;  _GLOBAL_220_T  global_tick_usec[NUM_STACKS] = {  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  ( ( 1000000UL + 100 / 2   )  / 100  ) ,  };         
typedef  unsigned long  _GLOBAL_221_T;  _GLOBAL_221_T  global_tick_nsec[NUM_STACKS] = {  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  ( ( ( ( ( 1000000UL * 1000  )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( 1000000UL * 1000  )  % ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )   )  << ( 8 )   )  + ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )  / 2   )  / ( ( ( ( ( ( 1193182 )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( ( 1193182 )  % ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )   )  << ( 8 )   )  + ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )  / 2   )  / ( ( ( 1193182 + 1000 / 2   )  / 1000  )  )    )  )  )    )  ) ,  };                                                                                                                                                              
# 580 "linux-2.6.18/kernel/timer.c"
typedef  struct timespec  _GLOBAL_222_T;  _GLOBAL_222_T  global_xtime[NUM_STACKS] __attribute__ ((aligned (16)))  ;    
typedef  struct timespec  _GLOBAL_223_T;  _GLOBAL_223_T  global_wall_to_monotonic[NUM_STACKS] __attribute__ ((aligned (16)))  ;    

;


typedef  int _GLOBAL_224_T;  _GLOBAL_224_T  global_tickadj[NUM_STACKS] = {  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  500 / 1000  ? : 1 ,  };       






typedef  int _GLOBAL_225_T;  _GLOBAL_225_T  global_time_state[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  int _GLOBAL_226_T;  _GLOBAL_226_T  global_time_status[NUM_STACKS] = {  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  };    
typedef  long _GLOBAL_227_T;  _GLOBAL_227_T  global_time_offset[NUM_STACKS];  
typedef  long _GLOBAL_228_T;  _GLOBAL_228_T  global_time_constant[NUM_STACKS] = {  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  };    
typedef  long _GLOBAL_229_T;  _GLOBAL_229_T  global_time_tolerance[NUM_STACKS] = {  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  ( 512L << 16  ) ,  };      
typedef  long _GLOBAL_230_T;  _GLOBAL_230_T  global_time_precision[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };    
typedef  long _GLOBAL_231_T;  _GLOBAL_231_T  global_time_maxerror[NUM_STACKS] = {  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  };      
typedef  long _GLOBAL_232_T;  _GLOBAL_232_T  global_time_esterror[NUM_STACKS] = {  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  ( 512000L << 5  ) ,  };      
typedef  long _GLOBAL_233_T;  _GLOBAL_233_T  global_time_freq[NUM_STACKS] = {  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  ( ( ( 1000000000L + 1000 / 2   )  % 1000  - 1000 / 2   )  << 16  )  / 1000L ,  };              

typedef  long  _GLOBAL_234_T; static  _GLOBAL_234_T  global_time_adj[NUM_STACKS];   
typedef  long _GLOBAL_235_T;  _GLOBAL_235_T  global_time_reftime[NUM_STACKS];  
typedef  long _GLOBAL_236_T;  _GLOBAL_236_T  global_time_adjust[NUM_STACKS];  
typedef  long _GLOBAL_237_T;  _GLOBAL_237_T  global_time_next_adjust[NUM_STACKS];  
# 617 "linux-2.6.18/kernel/timer.c"
static void second_overflow(void)
{
 long ltemp;


 global_time_maxerror[get_stack_id()] += global_time_tolerance[get_stack_id()] >> 16;
 if (global_time_maxerror[get_stack_id()] > (512000L << 5)) {
  global_time_maxerror[get_stack_id()] = (512000L << 5);
  global_time_status[get_stack_id()] |= 0x0040;
 }
# 635 "linux-2.6.18/kernel/timer.c"
 switch (global_time_state[get_stack_id()]) {
 case 0:
  if (global_time_status[get_stack_id()] & 0x0010)
   global_time_state[get_stack_id()] = 1;
  else if (global_time_status[get_stack_id()] & 0x0020)
   global_time_state[get_stack_id()] = 2;
  break;
 case 1:
  if (global_xtime[get_stack_id()].tv_sec % 86400 == 0) {
   global_xtime[get_stack_id()].tv_sec--;
   global_wall_to_monotonic[get_stack_id()].tv_sec++;




   ;
   global_time_state[get_stack_id()] = 3;
   do { } while (0);
   printk("<5>" "Clock: inserting leap second "
     "23:59:60 UTC\n");
  }
  break;
 case 2:
  if ((global_xtime[get_stack_id()].tv_sec + 1) % 86400 == 0) {
   global_xtime[get_stack_id()].tv_sec++;
   global_wall_to_monotonic[get_stack_id()].tv_sec--;




   ;
   global_time_state[get_stack_id()] = 4;
   do { } while (0);
   printk("<5>" "Clock: deleting leap second "
     "23:59:59 UTC\n");
  }
  break;
 case 3:
  global_time_state[get_stack_id()] = 4;
  break;
 case 4:
  if (!(global_time_status[get_stack_id()] & (0x0010 | 0x0020)))
  global_time_state[get_stack_id()] = 0;
 }
# 687 "linux-2.6.18/kernel/timer.c"
 ltemp = global_time_offset[get_stack_id()];
 if (!(global_time_status[get_stack_id()] & 0x0008))
  ltemp = ({ __typeof__(ltemp) __x = (ltemp); __typeof__(6 + global_time_constant[get_stack_id()]) __s = (6 + global_time_constant[get_stack_id()]); __x < 0 ? -(-__x >> __s) : __x >> __s; });
 ltemp = ({ typeof(ltemp) _x = (ltemp); typeof((512000L / 16L) << (6 + 6)) _y = ((512000L / 16L) << (6 + 6)); (void) (&_x == &_y); _x < _y ? _x : _y; });
 ltemp = ({ typeof(ltemp) _x = (ltemp); typeof(-(512000L / 16L) << (6 + 6)) _y = (-(512000L / 16L) << (6 + 6)); (void) (&_x == &_y); _x > _y ? _x : _y; });
 global_time_offset[get_stack_id()] -= ltemp;
 global_time_adj[get_stack_id()] = ltemp << (22 - 10 - (6 + 6));





 ltemp = global_time_freq[get_stack_id()];
 global_time_adj[get_stack_id()] += ({ __typeof__(ltemp) __x = (ltemp); __typeof__((16 + 10 - 22)) __s = ((16 + 10 - 22)); __x < 0 ? -(-__x >> __s) : __x >> __s; });
# 721 "linux-2.6.18/kernel/timer.c"
 global_time_adj[get_stack_id()] += ({ __typeof__(global_time_adj[get_stack_id()]) __x = (global_time_adj[get_stack_id()]); __typeof__(6) __s = (6); __x < 0 ? -(-__x >> __s) : __x >> __s; }) + ({ __typeof__(global_time_adj[get_stack_id()]) __x = (global_time_adj[get_stack_id()]); __typeof__(7) __s = (7); __x < 0 ? -(-__x >> __s) : __x >> __s; });

}





static long adjtime_adjustment(void)
{
 long time_adjust_step;

 time_adjust_step = global_time_adjust[get_stack_id()];
 if (time_adjust_step) {
# 743 "linux-2.6.18/kernel/timer.c"
  time_adjust_step = ({ typeof(time_adjust_step) _x = (time_adjust_step); typeof((long)global_tickadj[get_stack_id()]) _y = ((long)global_tickadj[get_stack_id()]); (void) (&_x == &_y); _x < _y ? _x : _y; });
  time_adjust_step = ({ typeof(time_adjust_step) _x = (time_adjust_step); typeof((long)-global_tickadj[get_stack_id()]) _y = ((long)-global_tickadj[get_stack_id()]); (void) (&_x == &_y); _x > _y ? _x : _y; });
 }
 return time_adjust_step;
}


static void update_ntp_one_tick(void)
{
 long time_adjust_step;

 time_adjust_step = adjtime_adjustment();
 if (time_adjust_step)

  global_time_adjust[get_stack_id()] -= time_adjust_step;


 if (global_time_next_adjust[get_stack_id()] != 0) {
  global_time_adjust[get_stack_id()] = global_time_next_adjust[get_stack_id()];
  global_time_next_adjust[get_stack_id()] = 0;
 }
}
# 774 "linux-2.6.18/kernel/timer.c"
u64 current_tick_length(void)
{
 long delta_nsec;
 u64 ret;




 delta_nsec = global_tick_nsec[get_stack_id()] + adjtime_adjustment() * 1000;
 ret = (u64)delta_nsec << 32;
 ret += (s64)global_time_adj[get_stack_id()] << (32 - (22 - 10));

 return ret;
}


# 1 "linux-2.6.18/include/linux/clocksource.h" 1
# 19 "linux-2.6.18/include/linux/clocksource.h"
typedef u64 cycle_t;
# 52 "linux-2.6.18/include/linux/clocksource.h"
struct clocksource {
 char *name;
 struct list_head list;
 int rating;
 cycle_t (*read)(void);
 cycle_t mask;
 u32 mult;
 u32 shift;
 int (*update_callback)(void);
 int is_continuous;


 cycle_t cycle_last, cycle_interval;
 u64 xtime_nsec, xtime_interval;
 s64 error;
};
# 80 "linux-2.6.18/include/linux/clocksource.h"
static inline  __attribute__((always_inline)) u32 clocksource_khz2mult(u32 khz, u32 shift_constant)
{







 u64 tmp = ((u64)1000000) << shift_constant;

 tmp += khz/2;
 ({ unsigned long __upper, __low, __high, __mod, __base; __base = (khz); asm("":"=a" (__low), "=d" (__high):"A" (tmp)); __upper = __high; if (__high) { __upper = __high % (__base); __high = __high / (__base); } asm("divl %2":"=a" (__low), "=d" (__mod):"rm" (__base), "0" (__low), "1" (__upper)); asm("":"=A" (tmp):"a" (__low),"d" (__high)); __mod; });

 return (u32)tmp;
}
# 106 "linux-2.6.18/include/linux/clocksource.h"
static inline  __attribute__((always_inline)) u32 clocksource_hz2mult(u32 hz, u32 shift_constant)
{







 u64 tmp = ((u64)1000000000) << shift_constant;

 tmp += hz/2;
 ({ unsigned long __upper, __low, __high, __mod, __base; __base = (hz); asm("":"=a" (__low), "=d" (__high):"A" (tmp)); __upper = __high; if (__high) { __upper = __high % (__base); __high = __high / (__base); } asm("divl %2":"=a" (__low), "=d" (__mod):"rm" (__base), "0" (__low), "1" (__upper)); asm("":"=A" (tmp):"a" (__low),"d" (__high)); __mod; });

 return (u32)tmp;
}







static inline  __attribute__((always_inline)) cycle_t clocksource_read(struct clocksource *cs)
{
 return cs->read();
}
# 143 "linux-2.6.18/include/linux/clocksource.h"
static inline  __attribute__((always_inline)) s64 cyc2ns(struct clocksource *cs, cycle_t cycles)
{
 u64 ret = (u64)cycles;
 ret = (ret * cs->mult) >> cs->shift;
 return ret;
}
# 161 "linux-2.6.18/include/linux/clocksource.h"
static inline  __attribute__((always_inline)) void clocksource_calculate_interval(struct clocksource *c,
      unsigned long length_nsec)
{
 u64 tmp;


 tmp = length_nsec;
 tmp <<= c->shift;
 tmp += c->mult/2;
 ({ unsigned long __upper, __low, __high, __mod, __base; __base = (c->mult); asm("":"=a" (__low), "=d" (__high):"A" (tmp)); __upper = __high; if (__high) { __upper = __high % (__base); __high = __high / (__base); } asm("divl %2":"=a" (__low), "=d" (__mod):"rm" (__base), "0" (__low), "1" (__upper)); asm("":"=A" (tmp):"a" (__low),"d" (__high)); __mod; });

 c->cycle_interval = (cycle_t)tmp;
 if (c->cycle_interval == 0)
  c->cycle_interval = 1;

 c->xtime_interval = (u64)c->cycle_interval * c->mult;
}



int clocksource_register(struct clocksource*);
void clocksource_reselect(void);
struct clocksource* clocksource_get_next(void);
# 791 "linux-2.6.18/kernel/timer.c" 2
typedef  struct clocksource   _GLOBAL_238_T; static  _GLOBAL_238_T  * global_clock[NUM_STACKS];    
# 941 "linux-2.6.18/kernel/timer.c"
int timekeeping_is_continuous(void)
{
 unsigned long seq;
 int ret;

 do {
  seq = read_seqbegin(&global_xtime_lock[get_stack_id()]);

  ret = global_clock[get_stack_id()]->is_continuous;

 } while (read_seqretry(&global_xtime_lock[get_stack_id()], seq));

 return ret;
}




void  __attribute__ ((__section__ (".init.text"))) timekeeping_init(void)
{
 unsigned long flags;

 do { (void)(flags); write_seqlock(&global_xtime_lock[get_stack_id()]); } while (0);
 global_clock[get_stack_id()] = clocksource_get_next();
 clocksource_calculate_interval(global_clock[get_stack_id()], global_tick_nsec[get_stack_id()]);
 global_clock[get_stack_id()]->cycle_last = clocksource_read(global_clock[get_stack_id()]);
 ntp_clear();
 do { write_sequnlock(&global_xtime_lock[get_stack_id()]); (void)(flags); } while(0);
}


typedef  int  _GLOBAL_239_T; static  _GLOBAL_239_T  global_timekeeping_suspended[NUM_STACKS];   
# 981 "linux-2.6.18/kernel/timer.c"
static int timekeeping_resume(struct sys_device *dev)
{
 unsigned long flags;

 do { (void)(flags); write_seqlock(&global_xtime_lock[get_stack_id()]); } while (0);

 global_clock[get_stack_id()]->cycle_last = clocksource_read(global_clock[get_stack_id()]);
 global_clock[get_stack_id()]->error = 0;
 global_timekeeping_suspended[get_stack_id()] = 0;
 do { write_sequnlock(&global_xtime_lock[get_stack_id()]); (void)(flags); } while(0);
 return 0;
}

static int timekeeping_suspend(struct sys_device *dev, pm_message_t state)
{
 unsigned long flags;

 do { (void)(flags); write_seqlock(&global_xtime_lock[get_stack_id()]); } while (0);
 global_timekeeping_suspended[get_stack_id()] = 1;
 do { write_sequnlock(&global_xtime_lock[get_stack_id()]); (void)(flags); } while(0);
 return 0;
}


typedef  struct sysdev_class   _GLOBAL_240_T; static  _GLOBAL_240_T  global_timekeeping_sysclass[NUM_STACKS] = {  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  { . resume  = timekeeping_resume  , . suspend  = timekeeping_suspend   , . kset  = { . kobj  = { . name  = "timekeeping"  }   }    , } ,  };      
   
   
           


typedef  struct sys_device   _GLOBAL_241_T; static  _GLOBAL_241_T  global_device_timer[NUM_STACKS] = {  { . id  = 0  , . cls  = & global_timekeeping_sysclass[0]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[1]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[2]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[3]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[4]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[5]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[6]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[7]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[8]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[9]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[10]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[11]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[12]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[13]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[14]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[15]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[16]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[17]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[18]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[19]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[20]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[21]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[22]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[23]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[24]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[25]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[26]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[27]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[28]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[29]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[30]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[31]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[32]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[33]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[34]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[35]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[36]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[37]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[38]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[39]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[40]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[41]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[42]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[43]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[44]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[45]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[46]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[47]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[48]    , } ,  { . id  = 0  , . cls  = & global_timekeeping_sysclass[49]    , } ,  };      
   
   


static int  __attribute__ ((__section__ (".init.text"))) timekeeping_init_device(void)
{
 int error = sysdev_class_register(&global_timekeeping_sysclass[get_stack_id()]);
 if (!error)
  error = sysdev_register(&global_device_timer[get_stack_id()]);
 return error;
}

typedef  initcall_t  _GLOBAL_242_T; static  _GLOBAL_242_T  __initcall_timekeeping_init_device __attribute__((__used__)) __attribute__((__section__(".initcall" "6" ".init")))  = timekeeping_init_device ;       





static inline   __attribute__((always_inline)) __attribute__((always_inline)) int clocksource_bigadjust(s64 error, s64 *interval, s64 *offset)
{
 s64 tick_error, i;
 u32 look_ahead, adj;
 s32 error2, mult;
# 1045 "linux-2.6.18/kernel/timer.c"
 error2 = global_clock[get_stack_id()]->error >> (32 + 22 - 2 * 10);
 error2 = ({ int __x = (error2); (__x < 0) ? -__x : __x; });
 for (look_ahead = 0; error2 > 0; look_ahead++)
  error2 >>= 2;





 tick_error = current_tick_length() >> (32 - global_clock[get_stack_id()]->shift + 1);
 tick_error -= global_clock[get_stack_id()]->xtime_interval >> 1;
 error = ((error - tick_error) >> look_ahead) + tick_error;


 i = *interval;
 mult = 1;
 if (error < 0) {
  error = -error;
  *interval = -*interval;
  *offset = -*offset;
  mult = -1;
 }
 for (adj = 0; error > i; adj++)
  error >>= 1;

 *interval <<= adj;
 *offset <<= adj;
 return mult << adj;
}






static void clocksource_adjust(struct clocksource *clock, s64 offset)
{
 s64 error, interval = clock->cycle_interval;
 int adj;

 error = clock->error >> (32 - clock->shift - 1);
 if (error > interval) {
  error >>= 2;
  if (__builtin_expect(!!(error <= interval), 1))
   adj = 1;
  else
   adj = clocksource_bigadjust(error, &interval, &offset);
 } else if (error < -interval) {
  error >>= 2;
  if (__builtin_expect(!!(error >= -interval), 1)) {
   adj = -1;
   interval = -interval;
   offset = -offset;
  } else
   adj = clocksource_bigadjust(error, &interval, &offset);
 } else
  return;

 clock->mult += adj;
 clock->xtime_interval += interval;
 clock->xtime_nsec -= offset;
 clock->error -= (interval - offset) << (32 - clock->shift);
}






static void update_wall_time(void)
{
 cycle_t offset;


 if (__builtin_expect(!!(global_timekeeping_suspended[get_stack_id()]), 0))
  return;




 offset = global_clock[get_stack_id()]->cycle_interval;

 global_clock[get_stack_id()]->xtime_nsec += (s64)global_xtime[get_stack_id()].tv_nsec << global_clock[get_stack_id()]->shift;




 while (offset >= global_clock[get_stack_id()]->cycle_interval) {

  global_clock[get_stack_id()]->xtime_nsec += global_clock[get_stack_id()]->xtime_interval;
  global_clock[get_stack_id()]->cycle_last += global_clock[get_stack_id()]->cycle_interval;
  offset -= global_clock[get_stack_id()]->cycle_interval;

  if (global_clock[get_stack_id()]->xtime_nsec >= (u64)1000000000L << global_clock[get_stack_id()]->shift) {
   global_clock[get_stack_id()]->xtime_nsec -= (u64)1000000000L << global_clock[get_stack_id()]->shift;
   global_xtime[get_stack_id()].tv_sec++;
   second_overflow();
  }


  ;


  update_ntp_one_tick();


  global_clock[get_stack_id()]->error += current_tick_length();
  global_clock[get_stack_id()]->error -= global_clock[get_stack_id()]->xtime_interval << (32 - global_clock[get_stack_id()]->shift);
 }


 clocksource_adjust(global_clock[get_stack_id()], offset);


 global_xtime[get_stack_id()].tv_nsec = (s64)global_clock[get_stack_id()]->xtime_nsec >> global_clock[get_stack_id()]->shift;
 global_clock[get_stack_id()]->xtime_nsec -= (s64)global_xtime[get_stack_id()].tv_nsec << global_clock[get_stack_id()]->shift;


 if ((0)) {
  global_clock[get_stack_id()]->error = 0;
  global_clock[get_stack_id()]->xtime_nsec = 0;
  clocksource_calculate_interval(global_clock[get_stack_id()], global_tick_nsec[get_stack_id()]);
 }
}





void update_process_times(int user_tick)
{
 struct task_struct *p = get_nsc_task();
 int cpu = 0;


 if (user_tick)
  account_user_time(p, (1));
 else
  account_system_time(p, (1UL << ((0 + 8) + 8)), (1));
 run_local_timers();
 if (rcu_pending(cpu))
  rcu_check_callbacks(cpu, user_tick);
 scheduler_tick();
  run_posix_cpu_timers(p);
}




static unsigned long count_active_tasks(void)
{
 return nr_active() * (1<<11);
}
# 1207 "linux-2.6.18/kernel/timer.c"
typedef  unsigned long  _GLOBAL_243_T;  _GLOBAL_243_T  _GLOBAL_0_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_1_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_2_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_3_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_4_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_5_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_6_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_7_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_8_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_9_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_10_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_11_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_12_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_13_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_14_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_15_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_16_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_17_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_18_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_19_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_20_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_21_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_22_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_23_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_24_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_25_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_26_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_27_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_28_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_29_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_30_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_31_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_32_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_33_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_34_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_35_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_36_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_37_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_38_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_39_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_40_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_41_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_42_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_43_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_44_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_45_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_46_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_47_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_48_avenrun_I [ 3 ] ;  _GLOBAL_243_T  _GLOBAL_49_avenrun_I [ 3 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_avenrun_I) *_GLOBAL_avenrun_53_A[NUM_STACKS] = { &_GLOBAL_0_avenrun_I, &_GLOBAL_1_avenrun_I, &_GLOBAL_2_avenrun_I, &_GLOBAL_3_avenrun_I, &_GLOBAL_4_avenrun_I, &_GLOBAL_5_avenrun_I, &_GLOBAL_6_avenrun_I, &_GLOBAL_7_avenrun_I, &_GLOBAL_8_avenrun_I, &_GLOBAL_9_avenrun_I, &_GLOBAL_10_avenrun_I, &_GLOBAL_11_avenrun_I, &_GLOBAL_12_avenrun_I, &_GLOBAL_13_avenrun_I, &_GLOBAL_14_avenrun_I, &_GLOBAL_15_avenrun_I, &_GLOBAL_16_avenrun_I, &_GLOBAL_17_avenrun_I, &_GLOBAL_18_avenrun_I, &_GLOBAL_19_avenrun_I, &_GLOBAL_20_avenrun_I, &_GLOBAL_21_avenrun_I, &_GLOBAL_22_avenrun_I, &_GLOBAL_23_avenrun_I, &_GLOBAL_24_avenrun_I, &_GLOBAL_25_avenrun_I, &_GLOBAL_26_avenrun_I, &_GLOBAL_27_avenrun_I, &_GLOBAL_28_avenrun_I, &_GLOBAL_29_avenrun_I, &_GLOBAL_30_avenrun_I, &_GLOBAL_31_avenrun_I, &_GLOBAL_32_avenrun_I, &_GLOBAL_33_avenrun_I, &_GLOBAL_34_avenrun_I, &_GLOBAL_35_avenrun_I, &_GLOBAL_36_avenrun_I, &_GLOBAL_37_avenrun_I, &_GLOBAL_38_avenrun_I, &_GLOBAL_39_avenrun_I, &_GLOBAL_40_avenrun_I, &_GLOBAL_41_avenrun_I, &_GLOBAL_42_avenrun_I, &_GLOBAL_43_avenrun_I, &_GLOBAL_44_avenrun_I, &_GLOBAL_45_avenrun_I, &_GLOBAL_46_avenrun_I, &_GLOBAL_47_avenrun_I, &_GLOBAL_48_avenrun_I, &_GLOBAL_49_avenrun_I, };  

;





static inline  __attribute__((always_inline)) void calc_load(unsigned long ticks)
{
 unsigned long active_tasks;
 typedef  int  _GLOBAL_244_T; static  _GLOBAL_244_T  global_count[NUM_STACKS] = {  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  ( 5 * 1000  ) ,  };     

 global_count[get_stack_id()] -= ticks;
 if (global_count[get_stack_id()] < 0) {
  global_count[get_stack_id()] += (5*1000);
  active_tasks = count_active_tasks();
  (*_GLOBAL_avenrun_53_A[get_stack_id()])[0] *= 1884; (*_GLOBAL_avenrun_53_A[get_stack_id()])[0] += active_tasks*((1<<11)-1884); (*_GLOBAL_avenrun_53_A[get_stack_id()])[0] >>= 11;;
  (*_GLOBAL_avenrun_53_A[get_stack_id()])[1] *= 2014; (*_GLOBAL_avenrun_53_A[get_stack_id()])[1] += active_tasks*((1<<11)-2014); (*_GLOBAL_avenrun_53_A[get_stack_id()])[1] >>= 11;;
  (*_GLOBAL_avenrun_53_A[get_stack_id()])[2] *= 2037; (*_GLOBAL_avenrun_53_A[get_stack_id()])[2] += active_tasks*((1<<11)-2037); (*_GLOBAL_avenrun_53_A[get_stack_id()])[2] >>= 11;;
 }
}


typedef  unsigned long  _GLOBAL_245_T;  _GLOBAL_245_T  global_wall_jiffies[NUM_STACKS] = {  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  ( ( unsigned long  ) ( unsigned int  ) ( - 300  * 1000  )    ) ,  };        






 typedef  seqlock_t _GLOBAL_246_T;  _GLOBAL_246_T  global_xtime_lock[NUM_STACKS] = {  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  { 0 , ( spinlock_t ) { . raw_lock  = { }   , }   } ,  };             

;





static void run_timer_softirq(struct softirq_action *h)
{
 tvec_base_t *base = global_per_cpu__tvec_bases[get_stack_id()];

  hrtimer_run_queues();
 if ((({ unsigned long __dummy; typeof(global_jiffies[get_stack_id()]) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ({ unsigned long __dummy; typeof(base->timer_jiffies) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ((long)(global_jiffies[get_stack_id()]) - (long)(base->timer_jiffies) >= 0)))
  __run_timers(base);
}




void run_local_timers(void)
{
 raise_softirq(TIMER_SOFTIRQ);
 softlockup_tick();
}





static inline  __attribute__((always_inline)) void update_times(void)
{
 unsigned long ticks;

 ticks = global_jiffies[get_stack_id()] - global_wall_jiffies[get_stack_id()];
 global_wall_jiffies[get_stack_id()] += ticks;
 update_wall_time();
 calc_load(ticks);
}







void do_timer(struct pt_regs *regs)
{
 global_jiffies_64[get_stack_id()]++;

 __asm__ __volatile__("": : :"memory");
 update_times();
}







  __attribute__((regparm(0))) unsigned long sys_alarm(unsigned int seconds)
{
 return alarm_setitimer(seconds);
}
# 1321 "linux-2.6.18/kernel/timer.c"
  __attribute__((regparm(0))) long sys_getpid(void)
{
 return get_nsc_task()->tgid;
}







  __attribute__((regparm(0))) long sys_getppid(void)
{
 int pid;

 do { do { } while (0); (void)0; } while(0);
 pid = ({ typeof(get_nsc_task()->real_parent) _________p1 = get_nsc_task()->real_parent; do { } while(0); (_________p1); })->tgid;
 do { (void)0; do { } while (0); } while(0);

 return pid;
}

  __attribute__((regparm(0))) long sys_getuid(void)
{

 return get_nsc_task()->uid;
}

  __attribute__((regparm(0))) long sys_geteuid(void)
{

 return get_nsc_task()->euid;
}

  __attribute__((regparm(0))) long sys_getgid(void)
{

 return get_nsc_task()->gid;
}

  __attribute__((regparm(0))) long sys_getegid(void)
{

 return get_nsc_task()->egid;
}



static void process_timeout(unsigned long __data)
{
 wake_up_process((struct task_struct *)__data);
}
# 1400 "linux-2.6.18/kernel/timer.c"
 __attribute__((regparm(3))) signed long  __attribute__((__section__(".sched.text"))) schedule_timeout(signed long timeout)
{
 struct timer_list timer;
 unsigned long expire;

 switch (timeout)
 {
 case ((long)(~0UL>>1)):







  schedule();
  goto out;
 default:







  if (timeout < 0)
  {
   printk("<3>" "schedule_timeout: wrong timeout "
    "value %lx from %p\n", timeout,
    __builtin_return_address(0));
   get_nsc_task()->state = 0;
   goto out;
  }
 }

 expire = timeout + global_jiffies[get_stack_id()];

 setup_timer(&timer, process_timeout, (unsigned long)get_nsc_task());
 __mod_timer(&timer, expire);
 schedule();
 del_timer(&timer);

 timeout = expire - global_jiffies[get_stack_id()];

 out:
 return timeout < 0 ? 0 : timeout;
}
;





signed long  __attribute__((__section__(".sched.text"))) schedule_timeout_interruptible(signed long timeout)
{
 do { get_nsc_task()->state = (1); } while (0);
 return schedule_timeout(timeout);
}
;

signed long  __attribute__((__section__(".sched.text"))) schedule_timeout_uninterruptible(signed long timeout)
{
 do { get_nsc_task()->state = (2); } while (0);
 return schedule_timeout(timeout);
}
;


  __attribute__((regparm(0))) long sys_gettid(void)
{
 return get_nsc_task()->pid;
}




  __attribute__((regparm(0))) long sys_sysinfo(struct sysinfo *info)
{
 struct sysinfo val;
 unsigned long mem_total, sav_total;
 unsigned int mem_unit, bitcount;
 unsigned long seq;

 (__builtin_constant_p(0) ? (__builtin_constant_p((sizeof(struct sysinfo))) ? __constant_c_and_count_memset((((char *)&val)),((0x01010101UL*(unsigned char)(0))),((sizeof(struct sysinfo)))) : __constant_c_memset((((char *)&val)),((0x01010101UL*(unsigned char)(0))),((sizeof(struct sysinfo))))) : (__builtin_constant_p((sizeof(struct sysinfo))) ? __memset_generic(((((char *)&val))),(((0))),(((sizeof(struct sysinfo))))) : __memset_generic((((char *)&val)),((0)),((sizeof(struct sysinfo))))));

 do {
  struct timespec tp;
  seq = read_seqbegin(&global_xtime_lock[get_stack_id()]);
# 1496 "linux-2.6.18/kernel/timer.c"
  getnstimeofday(&tp);
  tp.tv_sec += global_wall_to_monotonic[get_stack_id()].tv_sec;
  tp.tv_nsec += global_wall_to_monotonic[get_stack_id()].tv_nsec;
  if (tp.tv_nsec - 1000000000L >= 0) {
   tp.tv_nsec = tp.tv_nsec - 1000000000L;
   tp.tv_sec++;
  }
  val.uptime = tp.tv_sec + (tp.tv_nsec ? 1 : 0);

  val.loads[0] = (*_GLOBAL_avenrun_53_A[get_stack_id()])[0] << (16 - 11);
  val.loads[1] = (*_GLOBAL_avenrun_53_A[get_stack_id()])[1] << (16 - 11);
  val.loads[2] = (*_GLOBAL_avenrun_53_A[get_stack_id()])[2] << (16 - 11);

  val.procs = global_nr_threads[get_stack_id()];
 } while (read_seqretry(&global_xtime_lock[get_stack_id()], seq));

 si_meminfo(&val);
 si_swapinfo(&val);
# 1524 "linux-2.6.18/kernel/timer.c"
 mem_total = val.totalram + val.totalswap;
 if (mem_total < val.totalram || mem_total < val.totalswap)
  goto out;
 bitcount = 0;
 mem_unit = val.mem_unit;
 while (mem_unit > 1) {
  bitcount++;
  mem_unit >>= 1;
  sav_total = mem_total;
  mem_total <<= 1;
  if (mem_total < sav_total)
   goto out;
 }
# 1545 "linux-2.6.18/kernel/timer.c"
 val.mem_unit = 1;
 val.totalram <<= bitcount;
 val.freeram <<= bitcount;
 val.sharedram <<= bitcount;
 val.bufferram <<= bitcount;
 val.totalswap <<= bitcount;
 val.freeswap <<= bitcount;
 val.totalhigh <<= bitcount;
 val.freehigh <<= bitcount;

 out:
 if (copy_to_user(info, &val, sizeof(struct sysinfo)))
  return -14;

 return 0;
}






typedef  struct lock_class_key   _GLOBAL_247_T; static  _GLOBAL_247_T  _GLOBAL_0_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_1_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_2_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_3_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_4_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_5_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_6_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_7_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_8_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_9_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_10_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_11_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_12_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_13_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_14_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_15_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_16_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_17_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_18_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_19_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_20_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_21_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_22_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_23_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_24_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_25_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_26_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_27_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_28_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_29_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_30_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_31_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_32_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_33_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_34_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_35_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_36_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_37_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_38_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_39_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_40_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_41_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_42_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_43_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_44_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_45_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_46_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_47_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_48_base_lock_keys_I [ 1 ] ; static  _GLOBAL_247_T  _GLOBAL_49_base_lock_keys_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_base_lock_keys_I) *_GLOBAL_base_lock_keys_54_A[NUM_STACKS] = { &_GLOBAL_0_base_lock_keys_I, &_GLOBAL_1_base_lock_keys_I, &_GLOBAL_2_base_lock_keys_I, &_GLOBAL_3_base_lock_keys_I, &_GLOBAL_4_base_lock_keys_I, &_GLOBAL_5_base_lock_keys_I, &_GLOBAL_6_base_lock_keys_I, &_GLOBAL_7_base_lock_keys_I, &_GLOBAL_8_base_lock_keys_I, &_GLOBAL_9_base_lock_keys_I, &_GLOBAL_10_base_lock_keys_I, &_GLOBAL_11_base_lock_keys_I, &_GLOBAL_12_base_lock_keys_I, &_GLOBAL_13_base_lock_keys_I, &_GLOBAL_14_base_lock_keys_I, &_GLOBAL_15_base_lock_keys_I, &_GLOBAL_16_base_lock_keys_I, &_GLOBAL_17_base_lock_keys_I, &_GLOBAL_18_base_lock_keys_I, &_GLOBAL_19_base_lock_keys_I, &_GLOBAL_20_base_lock_keys_I, &_GLOBAL_21_base_lock_keys_I, &_GLOBAL_22_base_lock_keys_I, &_GLOBAL_23_base_lock_keys_I, &_GLOBAL_24_base_lock_keys_I, &_GLOBAL_25_base_lock_keys_I, &_GLOBAL_26_base_lock_keys_I, &_GLOBAL_27_base_lock_keys_I, &_GLOBAL_28_base_lock_keys_I, &_GLOBAL_29_base_lock_keys_I, &_GLOBAL_30_base_lock_keys_I, &_GLOBAL_31_base_lock_keys_I, &_GLOBAL_32_base_lock_keys_I, &_GLOBAL_33_base_lock_keys_I, &_GLOBAL_34_base_lock_keys_I, &_GLOBAL_35_base_lock_keys_I, &_GLOBAL_36_base_lock_keys_I, &_GLOBAL_37_base_lock_keys_I, &_GLOBAL_38_base_lock_keys_I, &_GLOBAL_39_base_lock_keys_I, &_GLOBAL_40_base_lock_keys_I, &_GLOBAL_41_base_lock_keys_I, &_GLOBAL_42_base_lock_keys_I, &_GLOBAL_43_base_lock_keys_I, &_GLOBAL_44_base_lock_keys_I, &_GLOBAL_45_base_lock_keys_I, &_GLOBAL_46_base_lock_keys_I, &_GLOBAL_47_base_lock_keys_I, &_GLOBAL_48_base_lock_keys_I, &_GLOBAL_49_base_lock_keys_I, };   

static int init_timers_cpu(int cpu)
{
 int j;
 tvec_base_t *base;
 typedef  char  _GLOBAL_248_T; static  _GLOBAL_248_T  _GLOBAL_0_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_1_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_2_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_3_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_4_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_5_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_6_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_7_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_8_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_9_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_10_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_11_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_12_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_13_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_14_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_15_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_16_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_17_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_18_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_19_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_20_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_21_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_22_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_23_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_24_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_25_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_26_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_27_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_28_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_29_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_30_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_31_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_32_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_33_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_34_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_35_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_36_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_37_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_38_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_39_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_40_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_41_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_42_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_43_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_44_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_45_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_46_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_47_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_48_tvec_base_done_I [ 1 ] ; static  _GLOBAL_248_T  _GLOBAL_49_tvec_base_done_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tvec_base_done_I) *_GLOBAL_tvec_base_done_55_A[NUM_STACKS] = { &_GLOBAL_0_tvec_base_done_I, &_GLOBAL_1_tvec_base_done_I, &_GLOBAL_2_tvec_base_done_I, &_GLOBAL_3_tvec_base_done_I, &_GLOBAL_4_tvec_base_done_I, &_GLOBAL_5_tvec_base_done_I, &_GLOBAL_6_tvec_base_done_I, &_GLOBAL_7_tvec_base_done_I, &_GLOBAL_8_tvec_base_done_I, &_GLOBAL_9_tvec_base_done_I, &_GLOBAL_10_tvec_base_done_I, &_GLOBAL_11_tvec_base_done_I, &_GLOBAL_12_tvec_base_done_I, &_GLOBAL_13_tvec_base_done_I, &_GLOBAL_14_tvec_base_done_I, &_GLOBAL_15_tvec_base_done_I, &_GLOBAL_16_tvec_base_done_I, &_GLOBAL_17_tvec_base_done_I, &_GLOBAL_18_tvec_base_done_I, &_GLOBAL_19_tvec_base_done_I, &_GLOBAL_20_tvec_base_done_I, &_GLOBAL_21_tvec_base_done_I, &_GLOBAL_22_tvec_base_done_I, &_GLOBAL_23_tvec_base_done_I, &_GLOBAL_24_tvec_base_done_I, &_GLOBAL_25_tvec_base_done_I, &_GLOBAL_26_tvec_base_done_I, &_GLOBAL_27_tvec_base_done_I, &_GLOBAL_28_tvec_base_done_I, &_GLOBAL_29_tvec_base_done_I, &_GLOBAL_30_tvec_base_done_I, &_GLOBAL_31_tvec_base_done_I, &_GLOBAL_32_tvec_base_done_I, &_GLOBAL_33_tvec_base_done_I, &_GLOBAL_34_tvec_base_done_I, &_GLOBAL_35_tvec_base_done_I, &_GLOBAL_36_tvec_base_done_I, &_GLOBAL_37_tvec_base_done_I, &_GLOBAL_38_tvec_base_done_I, &_GLOBAL_39_tvec_base_done_I, &_GLOBAL_40_tvec_base_done_I, &_GLOBAL_41_tvec_base_done_I, &_GLOBAL_42_tvec_base_done_I, &_GLOBAL_43_tvec_base_done_I, &_GLOBAL_44_tvec_base_done_I, &_GLOBAL_45_tvec_base_done_I, &_GLOBAL_46_tvec_base_done_I, &_GLOBAL_47_tvec_base_done_I, &_GLOBAL_48_tvec_base_done_I, &_GLOBAL_49_tvec_base_done_I, };  

 if (!(*_GLOBAL_tvec_base_done_55_A[get_stack_id()])[cpu]) {
  typedef  char  _GLOBAL_249_T; static  _GLOBAL_249_T  global_boot_done[NUM_STACKS];   

  if (global_boot_done[get_stack_id()]) {



   base = kmalloc_node(sizeof(*base), ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)),
      (0));
   if (!base)
    return -12;
   (__builtin_constant_p(0) ? (__builtin_constant_p((sizeof(*base))) ? __constant_c_and_count_memset(((base)),((0x01010101UL*(unsigned char)(0))),((sizeof(*base)))) : __constant_c_memset(((base)),((0x01010101UL*(unsigned char)(0))),((sizeof(*base))))) : (__builtin_constant_p((sizeof(*base))) ? __memset_generic((((base))),(((0))),(((sizeof(*base))))) : __memset_generic(((base)),((0)),((sizeof(*base))))));
   (*((void)(cpu), &global_per_cpu__tvec_bases[get_stack_id()])) = base;
  } else {






   global_boot_done[get_stack_id()] = 1;
   base = &(*_GLOBAL_boot_tvec_bases_52_A[get_stack_id()]);
  }
  (*_GLOBAL_tvec_base_done_55_A[get_stack_id()])[cpu] = 1;
 } else {
  base = (*((void)(cpu), &global_per_cpu__tvec_bases[get_stack_id()]));
 }

 do { *(&base->lock) = (spinlock_t) { .raw_lock = { }, }; } while (0);
 do { (void)((*_GLOBAL_base_lock_keys_54_A[get_stack_id()]) + cpu); } while (0);

 for (j = 0; j < (1 << (0 ? 4 : 6)); j++) {
  INIT_LIST_HEAD(base->tv5.vec + j);
  INIT_LIST_HEAD(base->tv4.vec + j);
  INIT_LIST_HEAD(base->tv3.vec + j);
  INIT_LIST_HEAD(base->tv2.vec + j);
 }
 for (j = 0; j < (1 << (0 ? 6 : 8)); j++)
  INIT_LIST_HEAD(base->tv1.vec + j);

 base->timer_jiffies = global_jiffies[get_stack_id()];
 return 0;
}
# 1664 "linux-2.6.18/kernel/timer.c"
static int  __attribute__ ((__section__ (".init.text"))) timer_cpu_notify(struct notifier_block *self,
    unsigned long action, void *hcpu)
{
 long cpu = (long)hcpu;
 switch(action) {
 case 0x0003:
  if (init_timers_cpu(cpu) < 0)
   return (0x8000|0x0002);
  break;





 default:
  break;
 }
 return 0x0001;
}

typedef  struct notifier_block    _GLOBAL_250_T; static  __attribute__ ((__section__ (".init.data")))   _GLOBAL_250_T  global_timers_nb[NUM_STACKS] = {  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  { . notifier_call  = timer_cpu_notify  , } ,  };       
   



void  __attribute__ ((__section__ (".init.text"))) init_timers(void)
{
 timer_cpu_notify(&global_timers_nb[get_stack_id()], (unsigned long)0x0003,
    (void *)(long)0);
 register_cpu_notifier(&global_timers_nb[get_stack_id()]);
 open_softirq(TIMER_SOFTIRQ, run_timer_softirq, ((void *)0));
}
# 1889 "linux-2.6.18/kernel/timer.c"
void msleep(unsigned int msecs)
{
 unsigned long timeout = msecs_to_jiffies(msecs) + 1;

 while (timeout)
  timeout = schedule_timeout_uninterruptible(timeout);
}

;





unsigned long msleep_interruptible(unsigned int msecs)
{
 unsigned long timeout = msecs_to_jiffies(msecs) + 1;

 while (timeout && !signal_pending(get_nsc_task()))
  timeout = schedule_timeout_interruptible(timeout);
 return jiffies_to_msecs(timeout);
}

;

