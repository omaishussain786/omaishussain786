#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float real1,real2,img1,img2,mag1,mag2;
	cout<<"Enter the real and imaginary part of first complex number: "<<endl;
	cin>>real1>>img1;
	cout<<"Enter the real and imaginary part of 2nd complex number: "<<endl;
	cin>>real2>>img2;
	mag1 = sqrt(real1*real1 + img1*img1);
	mag2 = sqrt(real2*real2 + img2*img2);
	cout<<"Values are as follows:"<<endl;
	cout<<mag1<<endl<<mag2<<endl;
	if(mag1>mag2){
		cout<<"First number is greater";
		
	}
	else if(mag1<mag2){
		cout<<"2nd number is greater";
		
	}
	else{
		cout<<"They are equal";
	}
}
