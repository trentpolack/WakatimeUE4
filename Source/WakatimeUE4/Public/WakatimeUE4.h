// Copyright 2015-2018 Joy Machine, LLC. All rights reserved.

#pragma once

#include "EngineMinimal.h"

#include "ModuleManager.h"

class FWakatimeUE4 : public IModuleInterface
{
public:
	/*
	 *	IModuleInterface Overrides.
	*/
	virtual void StartupModule( ) override;
	virtual void ShutdownModule( ) override;
};

/*
 *	Log Declarations.
*/
DECLARE_LOG_CATEGORY_EXTERN( WakatimeUE4Log, Log, All );