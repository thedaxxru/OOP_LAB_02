#include "Rect.h"
void Rect::SetWidth(int w) {
	if (w < 0) {
		cout << "Ширина не может быть отрицательной!" << endl;

	}
	else {

		width = w;
	}
}
int Rect::GetWidth() {
	return width;
}
void Rect::SetHeight(int h) {
	if (h < 0) {
		cout << "Высота не может быть отрицательной!" << endl;
	}
	else {
		height = h;
	}

}
int Rect::GetHeight() {
	return height;
}
int Rect::S(){
	
	return width * height;
}
int Rect::P() {

	return (width + height) * 2;
}
Rect::Rect(int h, int w) {
	SetHeight(h);
	SetWidth (w);
}
