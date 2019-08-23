class Question {
public:
	Question(int index, String question, String answer, int score) {
		_index = index;
		_q = question;
		_a = answer;
		_score = score;
	}

    String getQuestion(){
        return _q;
    }

    String getAnswer(){
        return _a;
    }

    int getScore(){
        return _score;
    }

    void setQuestion(String question){
        _q = question;
    }

    void setAnswer(String answer){
        _a = answer;
    }

    void setScore(int score){
        _score = score;
    }

    int _index;

private:
	String _q;
	String _a;
	int _score;
};