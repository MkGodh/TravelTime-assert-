#include <iostream>
#include <cassert>

using namespace std;

float travelTime(float distance, float speed) {

	assert(speed > 0.0f);
	assert(distance > 0.0f);
	return distance / speed;

}

int main() {
	float distance;
	float speed;

	cout << "Please, input distance: "; cin >> distance;
	cout << "Please, input speed: "; cin >> speed;

	float time = travelTime(distance, speed);

	cout << "Travel time: " << time << " hours" << endl;

	return 0;

}
