
void CompletaGanadores(char Tab[], char g11, char g12, char g13, char g21, char g22, char g23, char g31, char g32, char g33)
{
	if(g11=='1'){
		for(int i = 0 ; i < 3;i++){	
			for(int j = i*9 ; j < i*9+3 ; j ++ ) Tab[j]='1';	
		}
	}
	
	if(g11=='2'){
		for(int i = 0 ; i < 3;i++){	
			for(int j = i*9 ; j < i*9+3 ; j ++ ) Tab[j]='2';	
		}
	}
	
	if(g12=='1'){
		for(int i = 27 ; i < 47 ;i+=9){

			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='1';
		}
	}
	
	if(g12=='2'){
		for(int i = 27 ; i < 47 ;i+=9){

			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='2';
		}
	}
	
	if(g13=='1'){
		for(int i = 54 ; i < 75 ;i+=9){

			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='1';
		}
	}
	
	if(g13=='2'){
		for(int i = 54 ; i < 75 ;i+=9){

			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='2';
		}
	}
	
	if(g21=='1'){
		for(int i = 3 ; i < 23 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='1';
		}
	}
	if(g21=='2'){
		for(int i = 3 ; i < 23 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='2';
		}
	}
	
	if(g22=='1'){
		for(int i = 30 ; i < 50 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='1';
		}
	}
	
	if(g22=='2'){
		for(int i = 30 ; i < 50 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='2';
		}
	}
	
	if(g23=='1'){
		for(int i = 57 ; i < 77 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='1';
		}
	}
	if(g23=='2'){
		for(int i = 57 ; i < 77 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='2';
		}
	}
	
	if(g31=='1'){
		for(int i = 6 ; i < 26 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='1';
		}
	}
	if(g31=='2'){
		for(int i = 6 ; i < 26 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='2';
		}
	}
	if(g32=='1'){
		for(int i = 33 ; i < 53 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='1';	
		}
	}
	if(g32=='2'){
		for(int i = 33 ; i < 53 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='2';	
		}
	}
	
	if(g33=='1'){
		for(int i = 60 ; i < 80 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='1';	
		}
	}
	if(g33=='2'){
		for(int i = 60 ; i < 80 ;i+=9){
			for(int j = i ; j < i+3 ; j ++ ) Tab[j]='2';	
		}
	}
	
}
