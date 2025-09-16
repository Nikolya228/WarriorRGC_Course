// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warior/WarriorTypes/WarriorEnumTypes.h"

class FWarriorCoundDownAction : public FPendingLatentAction
{
public:
	FWarriorCoundDownAction(float InTotalCountTime, float InUpdateInterval, float& InOutRemainingTime, EWarriorCountDownActionOutput& InCountDownOutput,  const FLatentActionInfo LatentInfo) 
		: bNeedToCancel(false)
		, TotalCoundDownTime(InTotalCountTime)
		, UpdateInterval(InUpdateInterval)
		, OutRemainingTime(InOutRemainingTime)
		, CountDownOutput(InCountDownOutput)
		, ExecutionFunction(LatentInfo.ExecutionFunction)
		, OutputLink(LatentInfo.Linkage)
		, CallbackTarget(LatentInfo.CallbackTarget)
		, ElapsedInterval(0.f)
		, ElapsedTimeSinceStart(0.f)
	{
	}

private:
	bool bNeedToCancel;
	float TotalCoundDownTime;;
	float UpdateInterval;
	float& OutRemainingTime;
	EWarriorCountDownActionOutput& CountDownOutput;
	FName ExecutionFunction;
	int32 OutputLink;
	FWeakObjectPtr CallbackTarget;
	float ElapsedInterval;
	float ElapsedTimeSinceStart;
};
