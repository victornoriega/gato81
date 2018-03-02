

void VerificaEmpates(char Tab[], int &cont_1_1,int &cont_1_2,int &cont_1_3,int &cont_2_1,int &cont_2_2,int &cont_2_3,int &cont_3_1,int &cont_3_2,int &cont_3_3)
{
	for(int i = 0 ; i <21 ;i+=9){
		for(int j = i ; j < i+3; j++){
			if(Tab[j]!='0') cont_1_1++;
		}
	}
	for(int i = 27 ; i <48 ;i+=9){
		for(int j = i ; j < i+3; j++){
			if(Tab[j]!='0') cont_1_2++;
		}
	}
	for(int i = 54 ; i <75 ;i+=9){
		for(int j = i ; j < i+3; j++){
			if(Tab[j]!='0') cont_1_3++;
		}
	}
	for(int i = 3 ; i <24 ;i+=9){
		for(int j = i ; j < i+3; j++){
			if(Tab[j]!='0') cont_2_1++;
		}
	}
	for(int i = 30 ; i <51 ;i+=9){
		for(int j = i ; j < i+3; j++){
			if(Tab[j]!='0') cont_2_2++;
		}
	}
	for(int i = 6 ; i <27 ;i+=9){
		for(int j = i ; j < i+3; j++){
			if(Tab[j]!='0') cont_3_1++;
		}
	}
	for(int i = 57 ; i <78 ;i+=9){
		for(int j = i ; j < i+3; j++){
			if(Tab[j]!='0') cont_2_3++;
		}
	}
	for(int i = 33 ; i <54 ;i+=9){
		for(int j = i ; j < i+3; j++){
			if(Tab[j]!='0') cont_3_2++;
		}
	}
	
	for(int i = 60 ; i <81 ;i+=9){
		for(int j = i ; j < i+3; j++){
			if(Tab[j]!='0') cont_3_3++;
		}
	}	
}
