#include<stdio.h>
#include<math.h>
int main(){
	float real1,real2,img1,img2,mag1,mag2;
	printf("Enter the real and imaginary part of first complex number: ");
	scanf("%f %f",&real1,&img1);
	printf("Enter the real and imaginary part of 2nd complex number: ");
	scanf("%f %f",&real2,&img2);
	mag1 = sqrt(real1*real1 + img1*img1);
	mag2 = sqrt(real2*real2 + img2*img2);
	if(mag1>mag2){
		printf("First complex number is greater");
	}
	else if(mag1==mag2){
		printf("They are equal");
	}
	else if(mag1<mag2){
		printf("2nd complex number is greater");
	}
}
