

void GanadorGatosMedios(char Tab[], char &Ganador_1_1, char &Ganador_1_2,char &Ganador_1_3,char &Ganador_2_1,char &Ganador_2_2,char &Ganador_2_3,char &Ganador_3_1,char &Ganador_3_2,char &Ganador_3_3)
{
	
	int Gana1, Gana2;
	for(int i = 0 ; i < 3;i++){
		Gana1=0;
		Gana2=0;
		for(int j = i*9 ; j < i*9+3 ; j ++ ){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		
		if(Gana1==3) Ganador_1_1='1';
		if(Gana2==3) Ganador_1_1='2';
		
	}
	
	//Verifica a lo largo
	
	for(int i = 0 ; i < 3 ; i++){
		Gana1=0;
		Gana2=0;
		for(int j = i; j < 21 ; j+=9){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		if(Gana1==3) Ganador_1_1='1';
		if(Gana2==3) Ganador_1_1='2';
	}
	
	
	//Verifica diagonal izq derecha
	Gana1=0;
	Gana2=0;
	for(int j = 0; j < 21 ; j+=10){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_1_1='1';
	if(Gana2==3) Ganador_1_1='2';
	
	//Verifica diagonal der izq
	Gana1=0;
	Gana2=0;
	for(int j = 2; j < 21 ; j+=8){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) {
		Ganador_1_1='1';
	}
	if(Gana2==3) {
		Ganador_1_1='2';	
	}
	
	
	/*¨GATO 2 **************************************************************************************
	**********************************************************************************************
	*/
	
	
	//Verifica a lo Alto
	
	Gana1=0;
	Gana2=0;
		
	for(int i = 27 ; i < 47 ;i+=9){
		Gana1=0;
		Gana2=0;
		for(int j = i ; j < i+3 ; j ++ ){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		
		if(Gana1==3) Ganador_1_2='1';
		if(Gana2==3) Ganador_1_2='2';
		
	}
	
	//Verifica a lo largo
	
	for(int i = 27 ; i < 30 ; i++){
		Gana1=0;
		Gana2=0;
		for(int j = i; j < 48 ; j+=9){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		if(Gana1==3) Ganador_1_2='1';
		if(Gana2==3) Ganador_1_2='2';
	}
	
	
	//Verifica diagonal izq derecha
	Gana1=0;
	Gana2=0;
	for(int j = 27; j < 48 ; j+=10){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_1_2='1';
	if(Gana2==3) Ganador_1_2='2';
	
	//Verifica diagonal der izq
	Gana1=0;
	Gana2=0;
	for(int j = 29; j < 46 ; j+=8){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_1_2='1';
	if(Gana2==3) Ganador_1_2='2';
	
	/*¨GATO 3 **************************************************************************************
	**********************************************************************************************
	*/
	
	
	//Verifica a lo Alto
	
	Gana1=0;
	Gana2=0;
		
	for(int i = 54 ; i < 75 ;i+=9){
		Gana1=0;
		Gana2=0;
		for(int j = i ; j < i+3 ; j ++ ){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		
		if(Gana1==3) Ganador_1_3='1';
		if(Gana2==3) Ganador_1_3='2';
		
	}
	
	//Verifica a lo largo
	
	for(int i = 54 ; i < 57 ; i++){
		Gana1=0;
		Gana2=0;
		for(int j = i; j < 75 ; j+=9){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		if(Gana1==3) Ganador_1_3='1';
		if(Gana2==3) Ganador_1_3='2';
	}
	
	
	//Verifica diagonal izq derecha
	Gana1=0;
	Gana2=0;
	for(int j = 54; j < 75 ; j+=10){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_1_3='1';
	if(Gana2==3) Ganador_1_3='2';
	
	//Verifica diagonal der izq
	Gana1=0;
	Gana2=0;
	for(int j = 56; j < 73 ; j+=8){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_1_3='1';
	if(Gana2==3) Ganador_1_3='2';
	
	/*¨GATO 4 **************************************************************************************
	**********************************************************************************************
	*/
	
	
	//Verifica a lo Alto
	
	Gana1=0;
	Gana2=0;
	
	for(int i = 3 ; i < 23 ;i+=9){
		Gana1=0;
		Gana2=0;
		for(int j = i ; j < i+3 ; j ++ ){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		
		if(Gana1==3) Ganador_2_1='1';
		if(Gana2==3) Ganador_2_1='2';
		
	}
	
	//Verifica a lo largo
	
	for(int i = 3 ; i < 6 ; i++){
		Gana1=0;
		Gana2=0;
		for(int j = i; j < 24 ; j+=9){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		if(Gana1==3) Ganador_2_1='1';
		if(Gana2==3) Ganador_2_1='2';
	}
	
	
	//Verifica diagonal izq derecha
	Gana1=0;
	Gana2=0;
	for(int j = 3; j < 24 ; j+=10){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_2_1='1';
	if(Gana2==3) Ganador_2_1='2';
	
	//Verifica diagonal der izq
	Gana1=0;
	Gana2=0;
	for(int j = 5; j < 22 ; j+=8){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_2_1='1';
	if(Gana2==3) Ganador_2_1='2';
	
	/*¨GATO 5 **************************************************************************************
	**********************************************************************************************
	*/
	
	
	//Verifica a lo Alto
	
	Gana1=0;
	Gana2=0;
	
	for(int i = 30 ; i < 50 ;i+=9){
		Gana1=0;
		Gana2=0;
		for(int j = i ; j < i+3 ; j ++ ){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		
		if(Gana1==3) Ganador_2_2='1';
		if(Gana2==3) Ganador_2_2='2';
		
	}
	
	//Verifica a lo largo
	
	for(int i = 30 ; i < 33 ; i++){
		Gana1=0;
		Gana2=0;
		for(int j = i; j < 51 ; j+=9){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		if(Gana1==3) Ganador_2_2='1';
		if(Gana2==3) Ganador_2_2='2';
	}
	
	
	//Verifica diagonal izq derecha
	Gana1=0;
	Gana2=0;
	for(int j = 30; j < 51 ; j+=10){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_2_2='1';
	if(Gana2==3) Ganador_2_2='2';
	
	//Verifica diagonal der izq
	Gana1=0;
	Gana2=0;
	for(int j = 32; j < 49 ; j+=8){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_2_2='1';
	if(Gana2==3) Ganador_2_2='2';
	
	/*¨GATO 6 **************************************************************************************
	**********************************************************************************************
	*/
	
	
	//Verifica a lo Alto
	
	Gana1=0;
	Gana2=0;
	
	for(int i = 57 ; i < 77 ;i+=9){
		Gana1=0;
		Gana2=0;
		for(int j = i ; j < i+3 ; j ++ ){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		
		if(Gana1==3) Ganador_2_3='1';
		if(Gana2==3) Ganador_2_3='2';
		
	}
	
	//Verifica a lo largo
	
	for(int i = 57 ; i < 60 ; i++){
		Gana1=0;
		Gana2=0;
		for(int j = i; j < 78 ; j+=9){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		if(Gana1==3) Ganador_2_3='1';
		if(Gana2==3) Ganador_2_3='2';
	}
	
	
	//Verifica diagonal izq derecha
	Gana1=0;
	Gana2=0;
	for(int j = 57; j < 78 ; j+=10){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_2_3='1';
	if(Gana2==3) Ganador_2_3='2';
	
	//Verifica diagonal der izq
	Gana1=0;
	Gana2=0;
	for(int j = 59; j < 76 ; j+=8){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_2_3='1';
	if(Gana2==3) Ganador_2_3='2';
	
	/*¨GATO 7 **************************************************************************************
	**********************************************************************************************
	*/
	
	
	//Verifica a lo Alto
	
	Gana1=0;
	Gana2=0;
	
	for(int i = 6 ; i < 26 ;i+=9){
		Gana1=0;
		Gana2=0;
		for(int j = i ; j < i+3 ; j ++ ){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		
		if(Gana1==3) Ganador_3_1='1';
		if(Gana2==3) Ganador_3_1='2';
		
	}
	
	//Verifica a lo largo
	
	for(int i = 6 ; i < 9 ; i++){
		Gana1=0;
		Gana2=0;
		for(int j = i; j < 27 ; j+=9){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		if(Gana1==3) Ganador_3_1='1';
		if(Gana2==3) Ganador_3_1='2';
	}
	
	
	//Verifica diagonal izq derecha
	Gana1=0;
	Gana2=0;
	for(int j = 6; j < 27 ; j+=10){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_3_1='1';
	if(Gana2==3) Ganador_3_1='2';
	
	//Verifica diagonal der izq
	Gana1=0;
	Gana2=0;
	for(int j = 8; j < 25 ; j+=8){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_3_1='1';
	if(Gana2==3) Ganador_3_1='2';
	
	/*¨GATO 8 **************************************************************************************
	**********************************************************************************************
	*/
	
	
	//Verifica a lo Alto
	
	Gana1=0;
	Gana2=0;
	
	for(int i = 33 ; i < 53 ;i+=9){
		Gana1=0;
		Gana2=0;
		for(int j = i ; j < i+3 ; j ++ ){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		
		if(Gana1==3) Ganador_3_2='1';
		if(Gana2==3) Ganador_3_2='2';
		
	}
	
	//Verifica a lo largo
	
	for(int i = 33 ; i < 36 ; i++){
		Gana1=0;
		Gana2=0;
		for(int j = i; j < 54 ; j+=9){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		if(Gana1==3) Ganador_3_2='1';
		if(Gana2==3) Ganador_3_2='2';
	}
	
	
	//Verifica diagonal izq derecha
	Gana1=0;
	Gana2=0;
	for(int j = 33; j < 54 ; j+=10){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_3_2='1';
	if(Gana2==3) Ganador_3_2='2';
	
	//Verifica diagonal der izq
	Gana1=0;
	Gana2=0;
	for(int j = 35; j < 52 ; j+=8){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_3_2='1';
	if(Gana2==3) Ganador_3_2='2';
	
	/*¨GATO 9 **************************************************************************************
	**********************************************************************************************
	*/
	
	
	//Verifica a lo Alto
	
	Gana1=0;
	Gana2=0;
	
	for(int i = 60 ; i < 80 ;i+=9){
		Gana1=0;
		Gana2=0;
		for(int j = i ; j < i+3 ; j ++ ){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		
		if(Gana1==3) Ganador_3_3='1';
		if(Gana2==3) Ganador_3_3='2';
		
	}
	
	//Verifica a lo largo
	
	for(int i = 60 ; i < 63 ; i++){
		Gana1=0;
		Gana2=0;
		for(int j = i; j < 81 ; j+=9){
			if(Tab[j]=='1') Gana1++;
			if(Tab[j]=='2') Gana2++;
		}
		if(Gana1==3) Ganador_3_3='1';
		if(Gana2==3) Ganador_3_3='2';
	}
	
	
	//Verifica diagonal izq derecha
	Gana1=0;
	Gana2=0;
	for(int j = 60; j < 81 ; j+=10){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_3_3='1';
	if(Gana2==3) Ganador_3_3='2';
	
	//Verifica diagonal der izq
	Gana1=0;
	Gana2=0;
	for(int j = 62; j < 79 ; j+=8){
		if(Tab[j]=='1') Gana1++;
		if(Tab[j]=='2') Gana2++;
	}
	if(Gana1==3) Ganador_3_3='1';
	if(Gana2==3) Ganador_3_3='2';
	
}
