#include <bits/stdc++.h> 

using namespace std;

class IntegerSequence{
	public:
		virtual ~IntegerSequence() = default;
		virtual vector<int> Numbers()=0;
};
class VectorSequence : public IntegerSequence{
	private:
		unique_ptr<IntegerSequence> seq;
	public:
		VectorSequence(unique_ptr<IntegerSequence> newseq) : seq(move(newseq)) {}
		vector<int> Numbers() override
		{
			vector<int> correctSeq = seq->Numbers();
			for(auto i : correctSeq)
				cout<<i<<" "; 
			cout<<"v"<<endl;
			return correctSeq;
		}
};
class positiveSequence : public IntegerSequence{
	private:
		vector<int>  * seq;
	public:
		positiveSequence(vector<int>* newseq) : seq(newseq) {}
		vector<int> Numbers() override
		{
			vector<int> correctSeq = *seq;
			correctSeq.erase( remove_if(correctSeq.begin(),correctSeq.end(), [](int i) {return i<0;}), correctSeq.end());
			for(auto i : correctSeq)
				cout<<i<<" ";
			cout<<"p"<<endl;
			return correctSeq;
		}
};

class evenSequence : public IntegerSequence{
	private:
		unique_ptr<IntegerSequence> seq;
	public:
		evenSequence(unique_ptr<IntegerSequence> newseq) : seq(move(newseq)) {}
		vector<int> Numbers() override
		{
			vector<int> correctSeq = seq->Numbers();
			correctSeq.erase( remove_if(correctSeq.begin(),correctSeq.end(), [](int i) {return i%2==1;}),correctSeq.end());
			for(auto i : correctSeq)
				cout<<i<<" ";
			cout<<"e"<<endl;
			return correctSeq;
		}
};

class sortedSequence : public IntegerSequence{
	private:
		unique_ptr<IntegerSequence> seq;
	public:
		sortedSequence(unique_ptr<IntegerSequence> newseq) : seq(move(newseq)) {}
		vector<int> Numbers() override
		{
			vector<int> correctSeq = seq->Numbers();
			sort(correctSeq.begin(),correctSeq.end());
			for(auto i : correctSeq)
				cout<<i<<" ";
			cout<<"s"<<endl;
			return correctSeq;
		}
};



int main()
{
	vector<int> a{-2,-1,7,6,5,4,3,2,1,0};
	unique_ptr<IntegerSequence> sth = make_unique<VectorSequence>(make_unique<sortedSequence>(make_unique<evenSequence>(make_unique<positiveSequence>(&a))));
	sth->Numbers();
}
