#pragma once
namespace eat
{
	enum NoodleState
	{
		kNone,
		kCooking,
		kDone,
	};

	struct CupNoodle
	{
		NoodleState noodle_state;
		int count;
	}; 

	bool MakeCupNoodle(CupNoodle& cup_noodle);
}
