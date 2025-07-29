#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;



vector<int> solution(vector<int> answers) {
	vector<int> answer;
	vector<int> temp;

	vector <int> person1 = { 1,2,3,4,5};
	vector <int> person2 = { 2,1,2,3,2,4,2,5 };
	vector <int > person3 = { 3,3,1,1,2,2,4,4,5,5 };
	
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;

	
	for (int i = 0; i < answers.size(); i++)
	{
		if (answers[i] == person1[i % 5]) cnt1 +=1 ;
		if (answers[i] == person2[i % 8]) cnt2 += 1;
		if (answers[i] == person3[i % 10])  cnt3 += 1;
	}

	temp.push_back(cnt1);
	temp.push_back(cnt2);
	temp.push_back(cnt3);

	int max_val = *std::max_element(temp.begin(), temp.end());

	for (int i = 0; i < temp.size(); ++i) {
		if (temp[i] == max_val) {
			answer.push_back(i+1);
		}
	}
	std::sort(answer.begin(), answer.end());

	return answer;
}


int main()
{
	vector<int> answer;
	int count;
	cout << "문제개수: ";
	cin >> count;


	vector<int> answers(count);

	for (int i = 0; i < count; ++i) {
		cin >> answers[i];
	}

	answer= solution(answers);
	for (int i = 0; i < answer.size(); ++i) {
		cout<< answer[i]<< " ";
	}
	cout << endl;
	return 0;
}

