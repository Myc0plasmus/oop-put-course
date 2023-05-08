#include <iostream>
#include <cmath>

using namespace std;

class logarithmException : public runtime_error {
	public:
		explicit logarithmException(const string message) : runtime_error(message) {}
};

class Logarithm{
 public:
  Logarithm(double base, double number) {
      base_ = base;
      number_ = number;
  }
 
  double Calculate() const {
      if(base_<=0){
          throw logarithmException("base lower than zero");
      }
      if(base_ == 1){
          throw logarithmException("base equal one");
      }
      if(number_ <=0){
          throw logarithmException("number is lower than zero");
      }
      else{
          return log(number_) / log(base_);
      }
  }
 private:
  double number_;
  double base_;
};

int main()
{
    double base, number;
    cin>>base;
    cin>>number;
	try {
    Logarithm a(base,number);
    cout<<a.Calculate();
	}
	catch(logarithmException& e)
	{
		cout<<"Error: "<<e.what()<<endl;
	}
    
}
