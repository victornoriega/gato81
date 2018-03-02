

bool BuscaGanadores2(char Ganador_1_1,char Ganador_1_2,char Ganador_1_3,char Ganador_2_1,char Ganador_2_2,char Ganador_2_3,char Ganador_3_1,char Ganador_3_2,char Ganador_3_3)
{
	/////********************Ganadores**************************************************/
	
	// BUSCA GANADOR PRIMER RENGLON
	if(Ganador_1_1=='2' && Ganador_1_2=='2' && Ganador_1_3=='2'){
		return true;
	}
	// BUSCA GANADOR SEGUNDO RENGLON
	if(Ganador_2_1=='2' && Ganador_2_2=='2' && Ganador_2_3=='2'){
		return true;
	}
	// BUSCA GANADOR TERCER RENGLON
	if(Ganador_3_1=='2' && Ganador_3_2=='2' && Ganador_3_3=='2'){
		return true;
	}
	
	// BUSCA GANADOR PRIMER COLUMNA
	if(Ganador_1_1=='2' && Ganador_2_1=='2' && Ganador_3_1=='2'){
		return true;
	}
	// BUSCA GANADOR SEGUNDA COLUMNA
	if(Ganador_1_2=='2' && Ganador_2_2=='2' && Ganador_3_2=='2'){
		return true;
	}
	// BUSCA GANADOR TERCERA COLUMNA
	if(Ganador_1_3=='2' && Ganador_2_3=='2' && Ganador_3_3=='2'){
		return true;
	}
	// BUSCA GANADOR DIAGONAL IZQ-DERECHA 
	if(Ganador_1_1=='2' && Ganador_2_2=='2' && Ganador_3_3=='2'){
		return true;
	}

	// BUSCA GANADOR DIAGONAL  
	if(Ganador_3_1=='2' && Ganador_2_2=='2' && Ganador_1_3=='2'){
		return true;
	}
	return false;
}
