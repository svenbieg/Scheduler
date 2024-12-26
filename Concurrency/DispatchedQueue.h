//===================
// DispatchedQueue.h
//===================

#pragma once


//=======
// Using
//=======

#include "DispatchedHandler.h"
#include "Signal.h"


//===========
// Namespace
//===========

namespace Concurrency {


//==================
// Dispatched-Queue
//==================

class DispatchedQueue
{
public:
	// Common
	static VOID Append(DispatchedHandler* Handler);
	static VOID Enter();
	static VOID Exit();

private:
	// Common
	static VOID Run();
	static BOOL Wait();
	static Handle<DispatchedHandler> s_First;
	static Mutex s_Mutex;
	static Signal s_Signal;
	static BOOL s_Waiting;
};

}