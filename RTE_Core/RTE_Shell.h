#ifndef __RTE_SHELL_H
#define __RTE_SHELL_H
#ifdef __cplusplus
extern "C" {
#endif
	#include "RTE_Config.h"
	#if RTE_USE_SHELL
	#include <stdbool.h>
	#include "RTE_Vec.h"
	typedef enum
	{
		SHELL_NOERR = 0,
		SHELL_NOMODULE = 1,
		SHELL_NOSPACEFORNEW = 2,
		SHELL_ALREADYEXIST = 3,
		SHELL_NOSUCHCMD = 4,
		SHELL_TOOMANYARGS = 5,
		SHELL_NOVALIDCMD = 6,
		SHELL_ARGSERROR = 7,
	}RTE_Shell_Err_e;
	typedef struct
	{
		//! A pointer to a string containing the name of the command.
		const char *pcCmd;
		//! A function pointer to the implementation of the command.
		RTE_Shell_Err_e (*pfnCmdLine)(int argc, char *argv[]);
		//! A pointer to a string of brief help text for the command.
		const char *pcHelp;
	}RTE_Shell_t;
	typedef vec_t(RTE_Shell_t) sh_vec_t;
	typedef struct
	{
        uint8_t ShellModuleID;
        const char *ShellModuleName;
        sh_vec_t ModuleFucTable;
	}RTE_Shell_Module_t;

	typedef struct
	{
	    uint8_t ShellModuleCnt;
		char *g_ppcArgv[SHELL_MAX_ARGS + 2];
		RTE_Shell_Module_t *ShellModule;
	}RTE_Shell_Control_t;

	extern RTE_Shell_Err_e RTE_Shell_CreateModule(const char *module);
	extern RTE_Shell_Err_e RTE_Shell_AddCommand(const char *module,const char *cmd,RTE_Shell_Err_e (*func)(int argc, char *argv[]),const char *help);
	extern RTE_Shell_Err_e RTE_Shell_DeleteCommand(const char *module,const char *cmd);
	extern void RTE_Shell_Init(void);
    extern void RTE_Shell_Poll(void *Params);
	extern void RTE_Shell_Input(uint8_t *Data,uint16_t Length);
	#endif
#ifdef __cplusplus
}
#endif
#endif
