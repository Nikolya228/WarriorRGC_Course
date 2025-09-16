// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriorTypes/WarriorCoundDownAction.h"

void FWarriorCoundDownAction::CancelAction()
{
	bNeedToCancel = true;
}

void FWarriorCoundDownAction::UpdateOperation(FLatentResponse& Response)
{
	if (bNeedToCancel)
	{
		CountDownOutput = EWarriorCountDownActionOutput::Canceled;

		Response.FinishAndTriggerIf(true, ExecutionFunction, OutputLink, CallbackTarget);
		
		return;
	}

	if (ElapsedTimeSinceStart >= TotalCoundDownTime)
	{
		CountDownOutput = EWarriorCountDownActionOutput::Completed;

		Response.FinishAndTriggerIf(true, ExecutionFunction, OutputLink, CallbackTarget);

		return;
	}

	if (ElapsedInterval < UpdateInterval)
	{
		ElapsedInterval += Response.ElapsedTime();
	}
	else
	{
		ElapsedTimeSinceStart += UpdateInterval > 0.f ? UpdateInterval : Response.ElapsedTime();
		
		OutRemainingTime = TotalCoundDownTime - ElapsedTimeSinceStart;

		CountDownOutput = EWarriorCountDownActionOutput::Updated;

		Response.TriggerLink(ExecutionFunction, OutputLink, CallbackTarget);

		ElapsedInterval = 0.f;
	}
}
