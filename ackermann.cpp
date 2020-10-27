#include <iostream>
#include <string>
#include <ostream>

int Ackerman(int m, int n){
	if (m == 0){
		return n+1;
	}
	else{
	
		for(int r=1; r++; r<=n+1){
			r=r+Ackerman(m-1,r);
			return r;
		}
	}
}


int Acker(int m,int n){
	if (m==0){
		return n+1;
	}
	else{
		if (n == 0){
			return Acker(m-1,1);
		}
		else{
			return Acker(m-1,Acker(m,n-1));
		}
	}
}

int main(){
    std::cout<<Ackerman(1,2);
    Acker(1,2);
}
