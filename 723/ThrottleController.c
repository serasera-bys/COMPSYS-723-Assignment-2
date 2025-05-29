/* sscc : C CODE OF SORTED EQUATIONS ThrottleController - INLINE MODE */

/* AUXILIARY DECLARATIONS */

#ifndef STRLEN
#define STRLEN 81
#endif
#define _COND(A,B,C) ((A)?(B):(C))
#ifdef TRACE_ACTION
#include <stdio.h>
#endif
#ifndef NULL
#define NULL ((char*)0)
#endif

#ifndef __EXEC_STATUS_H_LOADED
#define __EXEC_STATUS_H_LOADED

typedef struct {
unsigned int start:1;
unsigned int kill:1;
unsigned int active:1;
unsigned int suspended:1;
unsigned int prev_active:1;
unsigned int prev_suspended:1;
unsigned int exec_index;
unsigned int task_exec_index;
void (*pStart)();
void (*pRet)();
} __ExecStatus;

#endif
#define __ResetExecStatus(status) {\
   status.prev_active = status.active; \
   status.prev_suspended = status.suspended; \
   status.start = status.kill = status.active = status.suspended = 0; }
#define __DSZ(V) (--(V)<=0)
#define BASIC_TYPES_DEFINED
typedef int boolean;
typedef int integer;
typedef char* string;
#define _true 1
#define _false 0
#define __ThrottleController_GENERIC_TEST(TEST) return TEST;
typedef void (*__ThrottleController_APF)();
static __ThrottleController_APF *__ThrottleController_PActionArray;

                                
/* EXTERN DECLARATIONS */

#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static integer __ThrottleController_V0;
static boolean __ThrottleController_V1;
static integer __ThrottleController_V2;
static boolean __ThrottleController_V3;
static integer __ThrottleController_V4;


/* INPUT FUNCTIONS */

void ThrottleController_I_CruiseState_s (integer __V) {
__ThrottleController_V0 = __V;
__ThrottleController_V1 = _true;
}
void ThrottleController_I_CruiseSpeed_s (integer __V) {
__ThrottleController_V2 = __V;
__ThrottleController_V3 = _true;
}

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

#define __ThrottleController_A1 \
__ThrottleController_V1
#define __ThrottleController_A2 \
__ThrottleController_V3

/* OUTPUT ACTIONS */

/* ASSIGNMENTS */

#define __ThrottleController_A3 \
__ThrottleController_V1 = _false
#define __ThrottleController_A4 \
__ThrottleController_V3 = _false
#define __ThrottleController_A5 \
__ThrottleController_V4 = 0

/* PROCEDURE CALLS */

/* CONDITIONS */

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

#define __ThrottleController_A6 \

#define __ThrottleController_A7 \

#define __ThrottleController_A8 \


/* ACTION SEQUENCES */

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int ThrottleController_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */



static void __ThrottleController__reset_input () {
__ThrottleController_V1 = _false;
__ThrottleController_V3 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __ThrottleController_R[2] = {_true,
 _false};

/* AUTOMATON ENGINE */

int ThrottleController () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[4];
E[0] = __ThrottleController_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__ThrottleController_A1));
if (E[0]) {
__ThrottleController_A6;
#ifdef TRACE_ACTION
fprintf(stderr, "__ThrottleController_A6\n");
#endif
}
E[1] = __ThrottleController_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__ThrottleController_A2));
if (E[1]) {
__ThrottleController_A7;
#ifdef TRACE_ACTION
fprintf(stderr, "__ThrottleController_A7\n");
#endif
}
if (__ThrottleController_R[0]) {
__ThrottleController_A8;
#ifdef TRACE_ACTION
fprintf(stderr, "__ThrottleController_A8\n");
#endif
}
__ThrottleController_R[1] = __ThrottleController_R[0]||(__ThrottleController_R[1]&&!(__ThrottleController_R[0]));
if (__ThrottleController_R[1]) {
__ThrottleController_A5;
#ifdef TRACE_ACTION
fprintf(stderr, "__ThrottleController_A5\n");
#endif
}
E[2] = !(_true);
E[3] = __ThrottleController_R[1];
__ThrottleController_R[0] = !(_true);
__ThrottleController__reset_input();
return E[3];
}

/* AUTOMATON RESET */

int ThrottleController_reset () {
__ThrottleController_R[0] = _true;
__ThrottleController_R[1] = _false;
__ThrottleController__reset_input();
return 0;
}
