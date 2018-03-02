

bool VerificaLibreAlbedrio(char Ganador_1_1,char Ganador_1_2,char Ganador_1_3,char Ganador_2_1,char Ganador_2_2,char Ganador_2_3,char Ganador_3_1,char Ganador_3_2,char Ganador_3_3, int cont_1_1, int cont_1_2,int cont_1_3, int cont_2_1,int cont_2_2,int cont_2_3,int cont_3_1,int cont_3_2,int cont_3_3, int GatoMedioX,int GatoMedioY)
{
	if((Ganador_1_1!='0' || cont_1_1==9) && GatoMedioX==0 && GatoMedioY==0) return true;
	
	if((Ganador_1_2!='0' || cont_1_2==9) && GatoMedioX==1 && GatoMedioY==0) return true;
	
	if((Ganador_1_3!='0' || cont_1_3==9) && GatoMedioX==2 && GatoMedioY==0) return true;
	
	if((Ganador_2_1!='0' || cont_2_1==9) && GatoMedioX==0 && GatoMedioY==1) return true;
	
	if((Ganador_2_2!='0' || cont_2_2==9) && GatoMedioX==1 && GatoMedioY==1) return true;
	
	if((Ganador_2_3!='0' || cont_2_3==9) && GatoMedioX==2 && GatoMedioY==1) return true;
	
	if((Ganador_3_1!='0' || cont_3_1==9) && GatoMedioX==0 && GatoMedioY==2) return true;
	
	if((Ganador_3_2!='0' || cont_3_2==9) && GatoMedioX==1 && GatoMedioY==2) return true;
	
	if( (Ganador_3_3!='0' || cont_3_3==9) && GatoMedioX==2 && GatoMedioY==2) return true;
	
	return false;
	
}
