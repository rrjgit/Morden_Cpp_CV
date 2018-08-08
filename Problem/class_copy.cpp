#include <iostream>

using std::endl; using std::cout; using std::cerr;

class Hmm
{
 public:

	Hmm(int a): num_{a} { cout << "default" << endl; }

	Hmm(const Hmm& other) { cout << "copy" << endl; }

	Hmm(Hmm&& other) { cout << "move" << endl; }

	Hmm& operator=(const Hmm& other){
		cout << "copy operator" <<endl;
		return *this;
	}

	Hmm& operator=(Hmm&& other){
		cout << "move operator" << endl;
		return *this;
	}

	int get_num() { return num; }


 private: 
 	int num_ = 10; // private variable should be named as NAME_



};

int main()
{
	Hmm a(2);
	cerr << a.get_num() << endl;

	Hmm b = a;
	cout << b.get_num() << endl;// Here b.get_num() is 10 not 2

	a = b;
	cout << a.get_num() << endl;// Here a.get_num() is 2

	Hmm a_(3);
	a_ = a;
	cout << a_.get_num() << endl;

	Hmm c = std::move(a);
	cout << c.get_num() << endl;

	c = std::move(b);



	return 0;
}