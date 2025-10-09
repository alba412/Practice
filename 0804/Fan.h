#pragma once

class Fan
{
public:
	enum Speed
	{
		kLow,
		kMedium,
		kHigh,
	};

	void TurnOn();
	void TurnOff();
	void ChangeSpeed();

private:
	Speed speed_;
	bool on_;
};