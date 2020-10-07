#pragma once
#include <iostream>
using namespace std;
class Rect
{
private:

	int width = 0;
	int height = 0;
public:
	void SetWidth(int w);
	int GetWidth();
	void SetHeight(int h);
	int GetHeight();

	Rect(int height, int weight);
	int S();
	int P();
};

