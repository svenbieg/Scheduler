//=============
// Scheduler.h
//=============

#pragma once


//=======
// Using
//=======

#include <config.h>
#include "Concurrency/CriticalSection.h"
#include "Concurrency/Mutex.h"


//===========
// Namespace
//===========

namespace Concurrency {


//======================
// Forward-Declarations
//======================

class Signal;
class Task;


//===========
// Scheduler
//===========

class Scheduler
{
public:
	// Friends
	friend Mutex;
	friend Signal;

	// Common
	static VOID AddTask(Task* Task);
	static VOID Begin();
	static VOID ExitTask();
	static Handle<Task> GetCurrentTask();
	static VOID Initialize();
	static BOOL IsMainTask();
	static VOID Schedule();
	static VOID SuspendCurrentTask(UINT MilliSeconds);

private:
	// Common
	static Handle<Task> AddParallelTask(Handle<Task> First, Handle<Task> Parallel);
	static Handle<Task> AddWaitingTask(Handle<Task> First, Handle<Task> Suspend);
	static Handle<Task> GetWaitingTask();
	static VOID HandleTaskSwitch(VOID* Parameter);
	static VOID IdleTask();
	static VOID MainTask();
	static UINT NextCore();
	static Handle<Task> RemoveParallelTask(Handle<Task> First, Handle<Task> Remove);
	static Handle<Task> RemoveWaitingTask(Handle<Task> First, Handle<Task> Remove);
	static VOID ResumeTask(Handle<Task> Resume);
	static Handle<Task> SuspendCurrentTask(Handle<Task> Owner);
	static UINT s_CoreCount;
	static CriticalSection s_CriticalSection;
	static UINT s_CurrentCore;
	static Handle<Task> s_CurrentTask[CPU_COUNT];
	static Handle<Task> s_IdleTask[CPU_COUNT];
	static Task* s_MainTask;
	static Handle<Task> s_WaitingTask;
};

}