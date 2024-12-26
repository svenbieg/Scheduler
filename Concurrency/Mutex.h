//=========
// Mutex.h
//=========

#pragma once


//=======
// Using
//=======

#include "SpinLock.h"
#include "TypeHelper.h"


//===========
// Namespace
//===========

namespace Concurrency {


//======================
// Forward-Declarations
//======================

class ScopedLock;
class SharedLock;
class Task;


//=======
// Mutex
//=======

class Mutex
{
public:
	// Friends
	friend ScopedLock;
	friend SharedLock;

	// Con-/Destructors
	Mutex(): m_Owner(nullptr) {}

	// Common
	VOID Lock();
	VOID LockBlocking();
	VOID LockShared();
	BOOL TryLock();
	BOOL TryLockBlocking();
	BOOL TryLockShared();
	VOID Unlock();
	VOID UnlockBlocking();
	VOID UnlockShared();

protected:
	// Common
	Task* m_Owner;

private:
	// Common
	VOID Yield(SpinLock& Lock);
	VOID YieldShared(SpinLock& Lock);
};

}