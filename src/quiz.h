#include <vector>
#include "question.h"

class Quiz {
public:
	Quiz();
	void setQuestion(Question question) {
		questionVector.push_back(question);

	}
	double scoreCal() {
        vector<Question* >::iterator it;
		double totalScore;
		double temp = 0;
		for (it = questionVector.begin(); it != questionVector.end(); ++it)
		{
			if (it.index % 2 == 0)
			{
				temp = (*it)->getScore()*2.5;
			}
			else
			{
				temp = (*it)->getScore();
			}
			totalScore += temp;
		}
		return totalScore;
	}

	void changeQuestionScore(Question q, String  score)
	{
		q.setScore(score);
	}

private:
	vector<Question* > questionVector;
};