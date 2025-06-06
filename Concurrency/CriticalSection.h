//===================
// CriticalSection.h
//===================

#pragma once


//===========
// Namespace
//===========

namespace Concurrency {


//==================
// Critical-Section
//==================

class CriticalSection
{
public:
	// Con-/Destructors
	CriticalSection();

	// Common
	VOID Lock();
	BOOL TryLock();
	VOID Unlock();
	VOID Yield();

private:
	// Common
	volatile UINT m_Core;
};

}