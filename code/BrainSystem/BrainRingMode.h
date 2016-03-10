#pragma once
#include "GameMode.h"

#define FIRST_TIMER 20
#define SECOND_TIMER 10
class BrainRingMode : public GameMode{
private: 
	int setPushes;
	int firstTimer;
	int seconedTimer;
public:
	BrainRingMode();
	~BrainRingMode();

	virtual void Set();
	virtual void Reset();
	virtual void SetTimer();
	void CheckTimeLeft(int timeLeft);
};