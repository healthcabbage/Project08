#include "RabbitGameStateBase.h"

ARabbitGameStateBase::ARabbitGameStateBase()
{
	Score = 0;
}

int32 ARabbitGameStateBase::GetScore() const
{
	return Score;
}

void ARabbitGameStateBase::AddScore(int32 Amount)
{
	Score += Amount;
	UE_LOG(LogTemp, Warning, TEXT("Score: %d"), Score);
}
