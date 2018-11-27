#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;


class myexception: public exception
{
  public:
  unsigned int i;
  string ss;
  void setYourI(unsigned int d){
      this->i=d;
      ss = "Nie ma miejsca " + to_string(i);
  }


  virtual const char* what() const throw()
  {
    return ss.c_str();
  }
};

class Kwadrat{



int a;
int b;
int c;

public:
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


double miejscezerowe(unsigned int ktore){

double delta=(b*b)-(4*a*c);
double m1;
double m2;
myexception myex;
myex.setYourI(ktore);

if(delta>0){

	m1 =  ( (-b) +( pow(delta,0.5)) )  / (2*a);
	m2 =  ( (-b) -( pow(delta,0.5)) )  / (2*a);

	if(ktore==1){
		     return m1;
	}

	else{
		if(ktore==2){
		     return m2;
		}
		else{
		     throw myex;
		}
	}

}

else if(delta==0){
	if(ktore==1){
	   return m1 = (-b)/(2*a);
	}
	else{
	   throw myex;	
	}
}

else{
	 throw myex;
}

}
};



int main(){


Kwadrat kw(1,10,1);

unsigned int a=3;


try{
cout<<kw.miejscezerowe(a);
}catch(exception& e){
cout<<e.what();

}
return 0;
}
