#pragma once

class CupNoodle
{
public:
	enum NoodleState
	{
		kNone,
		kCooking,
		kDone,
	};

	void Cook();

private:
	NoodleState noodle_state_ = kNone;
	int count_ = 3;
};