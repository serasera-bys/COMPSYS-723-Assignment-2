/* sscc : C CODE OF SORTED EQUATIONS CruiseStateController - INLINE MODE */

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
#define __CruiseStateController_GENERIC_TEST(TEST) return TEST;
typedef void (*__CruiseStateController_APF)();
static __CruiseStateController_APF *__CruiseStateController_PActionArray;

                                   
/* EXTERN DECLARATIONS */

#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static boolean __CruiseStateController_V0;
static integer __CruiseStateController_V1;


/* INPUT FUNCTIONS */

void CruiseStateController_I_On () {
__CruiseStateController_V0 = _true;
}

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

#define __CruiseStateController_A1 \
__CruiseStateController_V0

/* OUTPUT ACTIONS */

/* ASSIGNMENTS */

#define __CruiseStateController_A2 \
__CruiseStateController_V0 = _false
#define __CruiseStateController_A3 \
__CruiseStateController_V1 = 1

/* PROCEDURE CALLS */

/* CONDITIONS */

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

#define __CruiseStateController_A4 \


/* ACTION SEQUENCES */

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int CruiseStateController_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */



static void __CruiseStateController__reset_input () {
__CruiseStateController_V0 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __CruiseStateController_R[2] = {_true,
 _false};

/* AUTOMATON ENGINE */

int CruiseStateController () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[2];
if (__CruiseStateController_R[0]) {
__CruiseStateController_A4;
#ifdef TRACE_ACTION
fprintf(stderr, "__CruiseStateController_A4\n");
#endif
}
__CruiseStateController_R[1] = __CruiseStateController_R[0]||(__CruiseStateController_R[1]&&!(__CruiseStateController_R[0]));
if (__CruiseStateController_R[1]) {
__CruiseStateController_A3;
#ifdef TRACE_ACTION
fprintf(stderr, "__CruiseStateController_A3\n");
#endif
}
E[0] = !(_true);
E[1] = __CruiseStateController_R[1];
__CruiseStateController_R[0] = !(_true);
__CruiseStateController__reset_input();
return E[1];
}

/* AUTOMATON RESET */

int CruiseStateController_reset () {
__CruiseStateController_R[0] = _true;
__CruiseStateController_R[1] = _false;
__CruiseStateController__reset_input();
return 0;
}
