#include<iostream>
#define MAX2(a,b) (a)>(b)?(a):(b)
using namespace std;

class Neuron {
public:
	double weight;  //In neural networks, weight will be array
	double bias;   //bias 

	double activation(const double &x) {
		// identity func
		return x;
		//ReLU func
		//return MAX2(0.0.x);
	}

	double feedforword(const double& input) {		
		const double sigma = weight*input + bias;

		return activation(sigma);
	}
};

void main() {
	Neuron my_neuron;

	my_neuron.weight = 2.0;
	my_neuron.bias = 1.0;

	cout << "INPUT=0.0 " << my_neuron.feedforword(0.0) << endl;
	cout << "INPUT=1.0 " <<my_neuron.feedforword(1.0)<< endl;
	cout << "INPUT=2.0 " << my_neuron.feedforword(2.0) << endl;
	cout << "INPUT=3.0 " << my_neuron.feedforword(3.0) << endl;
}