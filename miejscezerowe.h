
#inlcude <klasakwadrat.h>

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
