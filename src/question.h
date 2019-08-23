class Question{
public:
Question(int index, String question, String answer, int score ){
    _index = index;
    _q = question;
    _a = answer;
    _score = score;
}
int _index;
private:
String _q;
String _a;
int _score;
};