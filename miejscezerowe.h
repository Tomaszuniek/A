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



