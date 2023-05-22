#include <bits/stdc++.h> 

using namespace std;

class IntegerSequence{
	public:
		virtual ~IntegerSequence() = default;
		virtual vector<int> Numbers()=0;
};
class VectorSequence : public IntegerSequence{
	private:
		IntegerSequence * seq;
	public:
		VectorSequence(IntegerSequence * newseq) : seq(newseq) {}
		vector<int> Numbers() override
		{
			for(auto i : seq->Numbers())
			{cout<<i<<" "; }
			return seq->Numbers();
		}
		void other(IntegerSequence * myseq)
		{
			for(auto i : myseq->Numbers())
				cout<<i<<" ";
			cout<<endl;
		}
};
class positiveSequence : public IntegerSequence{
	private:
		vector<int> * seq;
	public:
		positiveSequence(vector<int>* newseq) : seq(newseq) {}
		vector<int> Numbers() override
		{
			vector<int> correctSeq;
			for(auto i : *seq)
				if(i >=0) correctSeq.push_back(i);
			return correctSeq;
		}
};

class evenSequence : public IntegerSequence{
	private:
		vector<int> * seq;
	public:
		evenSequence(vector<int> * newseq) : seq(newseq) {}
		vector<int> Numbers() override
		{
			vector<int> correctSeq;
			for(auto i : *seq)
				if(i%2 == 0) correctSeq.push_back(i);
			return correctSeq;
		}
};

class sortedSequence : public IntegerSequence{
	private:
		vector<int> * seq;
	public:
		sortedSequence(vector<int> * newseq) : seq(newseq) {}
		vector<int> Numbers() override
		{
			vector<int> correctSeq = *seq;
			sort(correctSeq.begin(),correctSeq.end());
			return correctSeq;
		}
};

int main()
{
	vector<int> a{-2,-1,7,6,5,4,3,2,1,0};
	positiveSequence pos(&a);
	evenSequence even(&a);
	sortedSequence sorted(&a);
	VectorSequence seq(&pos);
	VectorSequence seq1(&even);
	VectorSequence seq2(&sorted);
	seq.Numbers();
	cout<<"\n";
	seq1.Numbers();
	cout<<"\n";
	seq2.Numbers();
	cout<<"\n"<<"\n";

	VectorSequence myseq(&even);
	myseq.other(&pos);
	myseq.other(&even);
	myseq.other(&sorted);
}
