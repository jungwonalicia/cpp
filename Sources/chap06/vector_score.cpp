#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> scores;	// int ���� �迭�� �����Ѵ�. 
	int i, sum = 0;

	while (true) {
		int score;
		cout << "������ �Է��Ͻÿ�(����� -1) : ";
		cin >> score;
		if (score == -1) break;
		scores.push_back(score);
	}

	// ���� for ���� ���
	for (auto& value : scores) {
		sum += value;
	}
	double avg = (double)sum / scores.size();
	cout << "���� ���=" << avg << endl;

	return 0;
}