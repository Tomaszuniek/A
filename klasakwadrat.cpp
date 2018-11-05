#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "Delta mniejsza od zera";
  }
};

class Kwadrat{


public:
int a;
int b;
int c;


Kwadrat(int aa, int bb, int cc){
	a=aa;
	b=bb;
	c=cc;
}

Kwadrat(){
	a=0;
	b=0;
	c=0;
}


double miejscezerowe(unsigned int ktore, myexception myex){

double delta=(b*b)-(4*a*c);
double m1;
double m2;
if(delta>0){

	m1 =  ( (-b) +( pow(delta,0.5)) )  / (2*a);
	m2 =  ( (-b) -( pow(delta,0.5)) )  / (2*a);

	if(ktore==0){
		return (m1<m2)?m1:m2;
	}

	else{
		return (m1>m2)?m1:m2;
	}

}

else if(delta==0){
	return m1 = (-b)/(2*a);
}

else{
	 throw myex;	
}

}
};



int main(){

myexception myex;

Kwadrat kw(1,2,1);

unsigned int a=1;


try{
cout<<kw.miejscezerowe(a, myex);
}catch(exception& e){
cout<<e.what();
}
return 0;
}
