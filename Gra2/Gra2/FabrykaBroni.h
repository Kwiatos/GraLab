#pragma once
#include "Bron.h"

class FabrykaBroni
{
private:
	FabrykaBroni();
public:
	static FabrykaBroni& getFabryka() {
		static FabrykaBroni fabryka;
		return fabryka;
	}

	~FabrykaBroni();
};

