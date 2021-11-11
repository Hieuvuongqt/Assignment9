#include <stdio.h>
#include <math.h>
bool CheckPrimeNumber(int n){
	if(n <2) return false;
	if(n<4) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}

int NextPrimeNumber(int n){
	for(int i=n+1; true ; i++ ){
		if(CheckPrimeNumber(i)) return i;
	}
	return NULL;
}

int SumOfDigits(int n){
	int total = 0;
	for( ; n!=0;n/=10){
		total+= abs(n%10);
	}
	return total;
}

int Perimeter(int a,int b, int c){
	if(a+b>c && a+c >b && b+c>a)
		return a+b+c;
	return 0;	
}

double Area(int a,int b, int c){
	int cv = Perimeter(a,b,c);
	if(cv == 0) return 0;
	double cv2 = (double)cv/2;
	return sqrt(cv2*(cv2-a)*(cv2-b)*(cv2-c));
}

int CommonDivisor(int a,int b){
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0)
			return i;
	}
}

int CommonMultiple(int a,int b){
	for(int i=a; true ;i++){
		if(i%a==0&&i%b==0)
			return i;
	}
}

int main(){
	printf("total: %d\n",TongCacChuSo(-246));
}