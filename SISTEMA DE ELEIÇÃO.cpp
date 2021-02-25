#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
		setlocale(LC_ALL, "Portuguese");
			
			
	int votos=0, voto, cand1=0, cand2=0, cand3=0, qtdEleitores, cont;
	float candp1, candp2, candp3, pEleitores;
		printf("Quantos eleitores irão votar? ");
			scanf("%d",&qtdEleitores);
				system("CLS");
				
		for (votos=0; votos<qtdEleitores; votos++)
		{
			printf("Escolha seu candidato: José(1) | Maria(2) | Carlos(3)\n");
				scanf("%d",&voto);
				
			switch(voto)
			{
				case 1: cand1++;break;
				case 2: cand2++;break;
				case 3: cand3++;break;
				default: do{
				printf("Número inválido, digite 1, 2 ou 3 para votar corretamente: ");
					scanf("%d",&cont);
				}while(cont != 1 && cont != 2 && cont != 3);
			}
			system("CLS");
		}
		
	candp1 = (cand1*100)/qtdEleitores;
	candp2 = (cand2*100)/qtdEleitores;
	candp3 = (cand3*100)/qtdEleitores;
	
	if (cand1 > cand2)                                           
        	if (cand2 > cand3) 
			printf("Vencedor(José): %.1f por cento dos votos\nSegundo Lugar(Maria): %.1f por cento dos votos\nTerceiro Lugar(Carlos): %.1f por cento dos votos\n", candp1, candp2, candp3);       
            else                                             
            if (cand1 > cand3) 
			printf("Vencedor(José): %.1f por cento dos votos\nSegundo Lugar(Carlos): %.1f por cento dos votos Votos\nTerceiro Lugar(Maria): %.1f por cento dos votos\n", candp1, candp3, candp2);   
            else
			printf("Vencedor(Carlos): %.1f por cento dos votos\nSegundo Lugar(José): %.1f por cento dos votos\nTerceiro Lugar(Maria): %.1f por cento dos votos\n", candp3, candp1, candp2);         
    else         
	                                         
    if (cand2 > cand3)                                       
            if (cand1 > cand3) 
			printf("Vencedor(Maria): %.1f por cento dos votos\nSegundo Lugar(José): %.1f por cento dos votos\nTerceiro Lugar(Carlos): %.1f por cento dos votos\n", candp2, candp1, candp3);  
            else 
			printf("Vencedor(Maria): %.1f por cento dos votos\nSegundo Lugar(Carlos): %.1f por cento dos votos\nTerceiro Lugar(José): %.1f por cento dos votos\n", candp2, candp3, candp1);         
    		else 
			printf("Vencedor(Carlos): %.1f por cento dos votos\nSegundo Lugar(Maria): %.1f por cento dos votos\nTerceiro Lugar(José): %.1f por cento dos votos\n", candp3 ,candp2, candp1);             
			
			return 0;
		
}	
