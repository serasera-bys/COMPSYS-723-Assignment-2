/* sscc : C CODE OF SORTED EQUATIONS AccelCheck - INLINE MODE */

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
#define __AccelCheck_GENERIC_TEST(TEST) return TEST;
typedef void (*__AccelCheck_APF)();
static __AccelCheck_APF *__AccelCheck_PActionArray;

                        
/* EXTERN DECLARATIONS */

#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static boolean __AccelCheck_V0;


/* INPUT FUNCTIONS */

void AccelCheck_I_AccelPressed () {
__AccelCheck_V0 = _true;
}

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

#define __AccelCheck_A1 \
__AccelCheck_V0

/* OUTPUT ACTIONS */

#define __AccelCheck_A2 \
AccelCheck_O_AccelEvent()

/* ASSIGNMENTS */

#define __AccelCheck_A3 \
__AccelCheck_V0 = _false

/* PROCEDURE CALLS */

/* CONDITIONS */

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

/* ACTION SEQUENCES */

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int AccelCheck_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */



static void __AccelCheck__reset_input () {
__AccelCheck_V0 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __AccelCheck_R[1] = {_true};

/* AUTOMATON ENGINE */

int AccelCheck () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[3];
E[0] = __AccelCheck_R[0]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__AccelCheck_A1);
if (E[0]) {
__AccelCheck_A2;
#ifdef TRACE_ACTION
fprintf(stderr, "__AccelCheck_A2\n");
#endif
}
E[1] = __AccelCheck_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__AccelCheck_A1));
E[1] = E[0]||E[1];
E[2] = !(_true);
__AccelCheck_R[0] = !(_true);
__AccelCheck__reset_input();
return E[2];
}

/* AUTOMATON RESET */

int AccelCheck_reset () {
__AccelCheck_R[0] = _true;
__AccelCheck__reset_input();
return 0;
}
