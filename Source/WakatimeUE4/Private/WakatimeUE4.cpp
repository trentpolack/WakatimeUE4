// Copyright 2015-2018 Joy Machine, LLC. All rights reserved.

#include "WakatimeUE4.h"

//#include "LogDisplaySettings.h"
#include "ISettingsModule.h"

IMPLEMENT_MODULE( FWakatimeUE4, WakatimeUE4 );

// Log definition.
DEFINE_LOG_CATEGORY( WakatimeUE4Log );

#define LOCTEXT_NAMESPACE "WakatimeUE4"

//----------------------------------------------------------------------------------------------------
void FWakatimeUE4::StartupModule()
{
	// Spew out the successful load of this module.
	UE_LOG( WakatimeUE4Log, Log, TEXT( "[Wakatime] Plugin module loaded." ) );
}

//----------------------------------------------------------------------------------------------------
void FWakatimeUE4::ShutdownModule()
{
	// Spew out the unloading of this module.
	UE_LOG( WakatimeUE4Log, Log, TEXT( "[Wakatime] Plugin module unloaded." ) );
}

#undef LOCTEXT_NAMESPACE    // "WakatimeUE4"