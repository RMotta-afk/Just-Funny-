#include<stdio.h>

#include<stdlib.h>
#include<windows.h>
#include<conio.h>

#define MAXLETRAS 15

#define MAXLETRASLET 30



int random_number (int min_num, int max_num);



typedef struct
{

  char nomeObjeto[MAXLETRAS];

  int atributosObjeto[6];

} Dados;



typedef struct
{

  int Elixir;

  int Pontuacao;

} DataPlayer;





typedef struct
{

  int TipodeObjetoOferecido;

  int Utilizado;		// 1 - carta utilizada; 2 - carta nao utilizada ainda

  char nomedoObjeto[MAXLETRAS];

} DataCarta;


void DesenharTabuleiro (int TabuleiroTemp[3][14][16][9])
{

  //Inicia o lado do Jogador com as torres

  int j = 1;

  int k = 1;


  printf ("\n\n Tabuleiro do Jogador \n\n");

  for (k = 1; k < 16; k++)

    {

      for (j = 1; j < 14; j++)

	{

	  if (k == 8)

	    {
	      if ((TabuleiroTemp[1][j][k][8] == 4)
		  && (TabuleiroTemp[2][j][k][8] == 4))
		{

		  printf ("%*s", -3, "---");


		}

	    }



	  if ((TabuleiroTemp[1][j][k][8] == 4) && (k < 8))

	    {

	      if ((TabuleiroTemp[2][j][k][8] != 1))
		{

	      printf ("%*s", -3, "j");

}



	    }
	  else if ((TabuleiroTemp[2][j][k][8] == 4) && (8 < k))
	    {

	      if ((TabuleiroTemp[1][j][k][8] != 1))
		{

		  printf ("%*s", -3, "c");

		}

	    }

	  if ((TabuleiroTemp[1][j][k][8] == 2) && (k < 8))

	    {

	      printf ("%*s", -3, "T");



	    }
	  else if ((TabuleiroTemp[2][j][k][8] == 2) && (8 < k))
	    {





	      printf ("%*s", -3, "T");



	    }

	  if ((TabuleiroTemp[1][j][k][8] == 3) && (k < 8))

	    {

	      printf ("%*s", -3, "R");

	    }
	  else if ((TabuleiroTemp[2][j][k][8] == 3) && (8 < k))
	    {



	      printf ("%*s", -3, "R");





	    }

	  if ((TabuleiroTemp[1][j][k][8] == 1))

	  {
	  {
	  if (TabuleiroTemp[1][j][k][3] == 10)
	  {
	    printf ("%*s", -3, "G");  
	  }
	  else if (TabuleiroTemp[1][j][k][3] == 8)
      {
	    printf ("%*s", -3, "B");  
	  }
	  else if (TabuleiroTemp[1][j][k][3] == 6)
      {
	    printf ("%*s", -3, "V");  
	  }
	  else if (TabuleiroTemp[1][j][k][3] == 2)
      {
	    printf ("%*s", -3, "Q");  
	  }
	  else if (TabuleiroTemp[1][j][k][3] == 4)
      {
	    printf ("%*s", -3, "A");
	    
	  }
	  else if (TabuleiroTemp[1][j][k][3] == 12)
      {
	    printf ("%*s", -3, "M");  
	  }

	  else if (TabuleiroTemp[1][j][k][3] == 14)
      {
	    printf ("%*s", -3, "X");  
	  }
	  	  else if (TabuleiroTemp[1][j][k][3] == 16)
      {
	    printf ("%*s", -3, "F");  
	  }
	  	  else if (TabuleiroTemp[1][j][k][3] == 3)
      {
	    printf ("%*s", -3, "T");  
	  }
	  	  else if (TabuleiroTemp[1][j][k][3] == 5)
      {
	    printf ("%*s", -3, "R");  
	  }
	  }      
	    }

	  if ((TabuleiroTemp[2][j][k][8] == 1))
	  {
	  if (TabuleiroTemp[2][j][k][3] == 10)
	  {
	    printf ("%*s", -3, "G");  
	  }
	  else if (TabuleiroTemp[2][j][k][3] == 8)
      {
	    printf ("%*s", -3, "B");  
	  }
	  else if (TabuleiroTemp[2][j][k][3] == 6)
      {
	    printf ("%*s", -3, "V");  
	  }
	  else if (TabuleiroTemp[2][j][k][3] == 2)
      {
	    printf ("%*s", -3, "Q");  
	  }
	  else if (TabuleiroTemp[2][j][k][3] == 4)
      {
	    printf ("%*s", -3, "A");
	    
	  }
	  else if (TabuleiroTemp[2][j][k][3] == 12)
      {
	    printf ("%*s", -3, "M");  
	  }

	  else if (TabuleiroTemp[2][j][k][3] == 14)
      {
	    printf ("%*s", -3, "X");  
	  }
	  	  else if (TabuleiroTemp[2][j][k][3] == 16)
      {
	    printf ("%*s", -3, "F");  
	  }
	  	  else if (TabuleiroTemp[2][j][k][3] == 3)
      {
	    printf ("%*s", -3, "T");  
	  }
	  	  else if (TabuleiroTemp[2][j][k][3] == 5)
      {
	    printf ("%*s", -3, "R");  
	  }
	  }


	    			  /*

				     if (Tabuleiro[2][g][h][3] = 10) - Gigante - G

				     if (Tabuleiro[2][g][h][3] = 8) - EsqueletoB - B

				     if (Tabuleiro[2][g][h][3] = 6) - Cavaleiro  - V

				     if (Tabuleiro[2][g][h][3] = 2) - ExercEsqueleto - Q

				     if (Tabuleiro[2][g][h][3] = 4) - Arqueiras - A

				     if (Tabuleiro[2][g][h][3] = 12) - Mago - M

				     if (Tabuleiro[2][g][h][3] = 14) - XBesta - X

				     if (Tabuleiro[2][g][h][3] = 16) - BoladeFogo - F

				     if (Tabuleiro[2][g][h][3] = 3) - Torre - T

				     if (Tabuleiro[2][g][h][3] = 5) - Torre com Rei - R



				   */



	}



      printf ("\n");



    }
        
        printf ("%*s", -20, "Jogador      Vida do Rei    :");
      
        printf ("%40d", TabuleiroTemp[1][7][1][4]);
        printf ("\n");
        
        printf ("%*s", -20, "             Vida da Torre1 :");
      
        printf ("%40d", TabuleiroTemp[1][4][2][4]);
        printf ("\n");
        
        printf ("%*s", -20, "             Vida da Torre2 :");
      
        printf ("%40d", TabuleiroTemp[1][10][2][4]);
        printf ("\n");


        printf ("\n");
               printf ("%*s", -20, "Computador      Vida do Rei :");
      
        printf ("%40d", TabuleiroTemp[2][7][15][4]);
        printf ("\n");
        
        printf ("%*s", -20, "             Vida da Torre1 :");
      
        printf ("%40d", TabuleiroTemp[2][4][14][4]);
        printf ("\n");
        
        printf ("%*s", -20, "             Vida da Torre2 :");
      
        printf ("%40d", TabuleiroTemp[2][10][14][4]);
        printf ("\n");

        printf ("\n");
        



}




int jogo (void)
{







  /* Inicializacao dos Objetos do Jogo, atribuindo para cada objeto caracteristicas como

     tipo de inimigo atacavel, Mobilidade, Capacidade de Dano, Vida, e o alcance ou distancia

     que eh possivel causar dano */

  int u, t;

  Dados ObjetoDoJogo[9] = {

    {{"Nulo"}, {0, 0, 0, 0, 0}},

    {{"Gigante"}, {1, 1, 10, 30, 1}},

    {{"EsqueletoB"}, {1, 1, 8, 7, 1}},

    {{"Cavaleiro"}, {3, 1, 6, 15, 1}},

    {{"ExercEsqueleto"}, {2, 1, 2, 8, 1}},

    {{"Arqueiras"}, {3, 1, 4, 12, 4}},

    {{"Mago"}, {3, 1, 12, 25, 4}},

    {{"XBesta"}, {3, 2, 14, 40, 4}},

    {{"BoladeFogo"}, {3, 2, 16, 1000, 1000}}

  };



  Dados ObjetoDoJogoTemp[9] = {

    {{"Nulo"}, {0, 0, 0, 0, 0}},

    {{"Gigante"}, {1, 1, 10, 30, 1}},

    {{"EsqueletoB"}, {1, 1, 8, 7, 1}},

    {{"Cavaleiro"}, {3, 1, 6, 15, 1}},

    {{"ExercEsqueleto"}, {2, 1, 2, 8, 1}},

    {{"Arqueiras"}, {3, 1, 4, 12, 4}},

    {{"Mago"}, {3, 1, 12, 25, 4}},

    {{"XBesta"}, {3, 2, 14, 40, 4}},

    {{"BoladeFogo"}, {3, 2, 16, 1000, 1000}}

  };



  printf ("%*s%20s%20s%20s%20s%20s\n", -MAXLETRAS, "Carta do Jogo",
	  "Inimigo Atacavel", "Mobilidade", "Dano", "Vida", "Alcance");







  for (u = 0; u < 9; u++)

    {

      printf ("%*s", -MAXLETRAS, ObjetoDoJogo[u].nomeObjeto);

      for (t = 0; t < 5; t++)

	{

	  printf ("%20.d", ObjetoDoJogo[u].atributosObjeto[t]);

	}

      printf ("\n");

    }



  /* Inicializacao do Tabuleiro, no qual o jogador e o computador se enfrentarcao, quardando

     caracteristicas como tipo de Player, ordenada y, ordenada z, e atributo de cada posicao,

     seja espaco vazio, seja uma torre com ou sem rei, seja um objeto do jogo ou carta */



  int Tabuleiro[3][14][16][9], i, j, k, l;

  int TabuleiroAcerto[3][14][16][9];
  

              for (i = 1; i < 3; i++)
            
                {
            
                  for (j = 1; j < 14; j++)
            
            	{
            
            	  for (k = 1; k < 16; k++)
            
            	    {
            	      for (l = 1; l < 9; l++)
            
            		    {





		  switch (l)

		    {
		    case 1:



		      Tabuleiro[i][j][k][l] = 0;

		      break;



		    case 2:



		      Tabuleiro[i][j][k][l] = 0;

		      break;

		    case 3:



		      Tabuleiro[i][j][k][l] = 0;

		      break;



		    case 4:



		      Tabuleiro[i][j][k][l] = 0;

		      break;



		    case 5:



		      Tabuleiro[i][j][k][l] = 0;

		      break;

		    case 6:



		      Tabuleiro[i][j][k][l] = j;

		      break;



		    case 7:



		      Tabuleiro[i][j][k][l] = k;

		      break;



		    case 8:



		      Tabuleiro[i][j][k][l] = 4;

		      break;



		    default:

		      break;



		    }

		}



	    }

	}

    }



  int b;



//***

//printf("Pausar: digite um inteiro");

//scanf("%d", &b); //recebe um inteiro e armazena na variC!vel b

//***







//Inicia o lado do Computador



  printf ("\n\n Tabuleiro do Jogador \n\n");

  for (k = 1; k < 8; k++)

    {

      for (j = 1; j < 14; j++)

	{



	  if ((Tabuleiro[1][j][k][8] == 4))

	    {

	      printf ("%*s", -3, "j");

	    }

	  printf ("%10.d", Tabuleiro[1][j][k][1]);
	  printf ("%10.d", Tabuleiro[1][j][k][2]);
	  printf ("%10.d", Tabuleiro[1][j][k][3]);
	  printf ("%10.d", Tabuleiro[1][j][k][4]);
	  printf ("%10.d", Tabuleiro[1][j][k][5]);
	  printf ("%10.d", Tabuleiro[1][j][k][6]);
	  printf ("%10.d", Tabuleiro[1][j][k][7]);
	  printf ("%10.d", Tabuleiro[1][j][k][8]);
	  printf ("\n");


	}

      printf ("\n");



    }



  //Inicia o lado do Computador

  for (k = 8; k < 16; k++)

    {

      for (j = 1; j < 14; j++)

	{



	  if ((Tabuleiro[2][j][k][8] == 4) && (k != 8))

	    {

	      printf ("%*s", -3, "c");

	    }

	  if (k == 8)

	    {

	      printf ("%*s", -3, "---");

	    }
	  printf ("%10.d", Tabuleiro[2][j][k][1]);
	  printf ("%10.d", Tabuleiro[2][j][k][2]);
	  printf ("%10.d", Tabuleiro[2][j][k][3]);
	  printf ("%10.d", Tabuleiro[2][j][k][4]);
	  printf ("%10.d", Tabuleiro[2][j][k][5]);
	  printf ("%10.d", Tabuleiro[2][j][k][6]);
	  printf ("%10.d", Tabuleiro[2][j][k][7]);
	  printf ("%10.d", Tabuleiro[2][j][k][8]);
	  printf ("\n");
	}

      printf ("\n");

    }



  printf ("\n\n Tabuleiro do Computador \n\n");





//***

//printf("Pausar: digite um inteiro");

//scanf("%d", &b); //recebe um inteiro e armazena na variC!vel b

//***



  //Inicia as torres no lado do jogador

  //Torre 1

  Tabuleiro[1][4][2][1] = 3;

  Tabuleiro[1][4][2][2] = 2;

  Tabuleiro[1][4][2][3] = 3;

  Tabuleiro[1][4][2][4] = 40;

  Tabuleiro[1][4][2][5] = 4;

  Tabuleiro[1][4][2][6] = 4;

  Tabuleiro[1][4][2][7] = 2;

  Tabuleiro[1][4][2][8] = 2;

  //Torre 2

  Tabuleiro[1][10][2][1] = 3;

  Tabuleiro[1][10][2][2] = 2;

  Tabuleiro[1][10][2][3] = 3;

  Tabuleiro[1][10][2][4] = 40;

  Tabuleiro[1][10][2][5] = 4;

  Tabuleiro[1][10][2][6] = 10;

  Tabuleiro[1][10][2][7] = 2;

  Tabuleiro[1][10][2][8] = 2;

  //Torre c/ Rei

  Tabuleiro[1][7][1][1] = 3;

  Tabuleiro[1][7][1][2] = 2;

  Tabuleiro[1][7][1][3] = 5;

  Tabuleiro[1][7][1][4] = 40;

  Tabuleiro[1][7][1][5] = 4;

  Tabuleiro[1][7][1][6] = 7;

  Tabuleiro[1][7][1][7] = 1;

  Tabuleiro[1][7][1][8] = 3;

  //Inicia as torres no lado do computador

  //Torre 1

  Tabuleiro[2][4][14][1] = 3;

  Tabuleiro[2][4][14][2] = 2;

  Tabuleiro[2][4][14][3] = 3;

  Tabuleiro[2][4][14][4] = 40;

  Tabuleiro[2][4][14][5] = 4;

  Tabuleiro[2][4][14][6] = 4;

  Tabuleiro[2][4][14][7] = 14;

  Tabuleiro[2][4][14][8] = 2;

  //Torre 2

  Tabuleiro[2][10][14][1] = 3;

  Tabuleiro[2][10][14][2] = 2;

  Tabuleiro[2][10][14][3] = 3;

  Tabuleiro[2][10][14][4] = 40;

  Tabuleiro[2][10][14][5] = 4;

  Tabuleiro[2][10][14][6] = 10;

  Tabuleiro[2][10][14][7] = 14;

  Tabuleiro[2][10][14][8] = 2;

  //Torre c/ Rei

  Tabuleiro[2][7][15][1] = 3;

  Tabuleiro[2][7][15][2] = 2;

  Tabuleiro[2][7][15][3] = 5;

  Tabuleiro[2][7][15][4] = 40;

  Tabuleiro[2][7][15][5] = 4;

  Tabuleiro[2][7][15][6] = 7;

  Tabuleiro[2][7][15][7] = 15;

  Tabuleiro[2][7][15][8] = 3;







//Inicia o lado do Jogador com as torres

  j = 1;

  k = 1;

  printf ("\n\n Tabuleiro do Jogador \n\n");

  for (k = 1; k < 8; k++)

    {

      for (j = 1; j < 14; j++)

	{



	  if ((Tabuleiro[1][j][k][8] == 4))

	    {

	      printf ("%*s", -3, "j");

	    }

	  if ((Tabuleiro[1][j][k][8] == 2))

	    {

	      printf ("%*s", -3, "T");



	    }

	  if ((Tabuleiro[1][j][k][8] == 3))

	    {

	      printf ("%*s", -3, "R");

	    }

	}

      printf ("\n");



    }



  //Inicia o lado do Computador com as torres

  for (k = 8; k < 16; k++)

    {

      for (j = 1; j < 14; j++)

	{



	  if ((Tabuleiro[2][j][k][8] == 4) && (k != 8))

	    {

	      printf ("%*s", -3, "c");



	    }

	  if ((Tabuleiro[2][j][k][8] == 2) && (k != 8))

	    {

	      printf ("%*s", -3, "T");

	    }

	  if ((Tabuleiro[2][j][k][8] == 3) && (k != 8))

	    {

	      printf ("%*s", -3, "R");



	    }

	  if (k == 8)

	    {

	      printf ("%*s", -3, "---");

	    }

	}

      printf ("\n");

    }

  printf ("\n\n Tabuleiro do Computador \n\n");







//***

//printf("Pausar: digite um inteiro");

//scanf("%d", &b); //recebe um inteiro e armazena na variC!vel b

//***





/* Inicializacao dos Jogadores, atribuindo para cada jogador (computador ou pessoa), a quantidade de elixir e a pontuacao numa determinada rodada*/

  int m, n;

  DataPlayer Player[51][2];



  for (m = 1; m < 52; m++)

    {

      for (n = 1; n < 3; n++)

	{

	  Player[m][n].Elixir = 10;

	  Player[m][n].Pontuacao = 1;

	  printf ("%10.d", m);

	  printf ("%10.d", n);

	  printf ("%10.d", Player[m][n].Elixir);

	  printf ("%10.d", Player[m][n].Pontuacao);

	  printf ("\n");

	}



    }





/* Inicializacao das Cartas, atribuindo para cada jogador (computador ou pessoa), o tipo do Objeto de Jogo, se foi utilizado ou nao*/







  



  DataCarta Carta[4][2];
  
  int o, p, q;

  printf ("\n");

  for (o = 1; o < 5; o++)

    {

      for (p = 1; p < 3; p++)

	{

	  if (p == 1)
	    {
	      Carta[o][p].TipodeObjetoOferecido = random_number (1, 7);
	    }
	  else if (p == 2)
	    {
	      Carta[o][p].TipodeObjetoOferecido = random_number (1, 7);
	    }


	  Carta[o][p].Utilizado = 2;

	  sprintf (Carta[o][p].nomedoObjeto, "%s",
		   ObjetoDoJogo[Carta[o][p].
				TipodeObjetoOferecido].nomeObjeto);

	  printf ("%10.d", Carta[o][p].TipodeObjetoOferecido);

	  printf ("%10.d", Carta[o][p].Utilizado);

	  printf ("%10.d", 0);

	  printf ("%*s", -MAXLETRAS, Carta[o][p].nomedoObjeto);

	  printf ("\n");

	}

    }







/* Aqui iniciam as rodadas*/

 








 

    printf ("\n");
    printf ("%*s%90s%20s%30s%30s\n", -MAXLETRASLET, "","Elixir(es) do Jogador: ","E de Coroa(s): ", "Elixir(es) do Computador: ","E de Coroa(s): ");

    
    printf ("%105.d", Player[1][1].Elixir);

    printf ("%27.d", Player[1][1].Pontuacao);

    printf ("%23.d", Player[1][2].Elixir);

    printf ("%35.d", Player[1][2].Pontuacao);

    printf ("\n");





// As quatro cartas do Jogador



  printf ("As quatro cartas do Jogador sao:");

  printf ("\n");

  for (o = 1; o < 5; o++)

    {

      printf ("%10.d", Carta[o][1].TipodeObjetoOferecido);

      printf ("%10.d", Carta[o][1].Utilizado);

      printf ("%10.d", 0);

      printf ("%*s", -MAXLETRAS, Carta[o][1].nomedoObjeto);

      printf ("\n");

    }







// As quatro cartas do Computador



  printf ("As quatro cartas do Computador sao:");

  printf ("\n");

  for (o = 1; o < 5; o++)

    {

      printf ("%10.d", Carta[o][2].TipodeObjetoOferecido);

      printf ("%10.d", Carta[o][2].Utilizado);

      printf ("%10.d", 0);

      printf ("%*s", -MAXLETRAS, Carta[o][2].nomedoObjeto);

      printf ("\n");

    }





//Inicio das rodadas

l=1;
int QueroSairDoJogo=2;
int JogadorMatouORei=1;
int ComputadorMatouORei=1;
int DecQuerOutroJogo=1;
int contElixirComputador=10;
int contElixirJogador=10;
int contPontuacaoComputador=1;
int contPontuacaoJogador=1;

  while ((l < 52 )&&(QueroSairDoJogo==2))

    //< 51; l++)

    {
        if (l>1){
            
          //  contElixirJogador  = Player[l-1][1].Elixir;
        //    contElixirComputador  = Player[l-1][2].Elixir;
          //  contPontuacaoJogador = Player[l-1][1].Pontuacao;
        //    contPontuacaoComputador = Player[l-1][1].Pontuacao;
        
            
        }

    if (JogadorMatouORei==2){
          printf ("O JOGADOR GANHOU!!!!!!!!!!. Quer Jogar de Novo? 1 - Sim; 2 - Nao");
    
    	  printf ("\n");
    
    	  scanf ("%d", &DecQuerOutroJogo);
    	  if (DecQuerOutroJogo==1){
    /* Inicializacao dos Jogadores, atribuindo para cada jogador (computador ou pessoa), a quantidade de elixir e a pontuacao numa determinada rodada*/
    
     
    
      for (m = 1; m < 52; m++)
    
        {
    
          for (n = 1; n < 3; n++)
    
    	{
    
    	  Player[m][n].Elixir = 10;
    
    	  Player[m][n].Pontuacao = 1;
    
    	  printf ("%10.d", m);
    
    	  printf ("%10.d", n);
    
    	  printf ("%10.d", Player[m][n].Elixir);
    
    	  printf ("%10.d", Player[m][n].Pontuacao);
    
    	  printf ("\n");
    
    	}
    
    
    
        }
    
contElixirComputador=10;
contElixirJogador=10;
contPontuacaoComputador=1;
contPontuacaoJogador=1;

    
    
    
    /* Inicializacao das Cartas, atribuindo para cada jogador (computador ou pessoa), o tipo do Objeto de Jogo, se foi utilizado ou nao*/
    
    
    
    
      printf ("\n");
    
      for (o = 1; o < 5; o++)
    
        {
    
          for (p = 1; p < 3; p++)
    
    	{
    
    	  if (p == 1)
    	    {
    	      Carta[o][p].TipodeObjetoOferecido = random_number (1, 7);
    	    }
    	  else if (p == 2)
    	    {
    	      Carta[o][p].TipodeObjetoOferecido = random_number (1, 7);
    	    }
    
    
    	  Carta[o][p].Utilizado = 2;
    
    	  sprintf (Carta[o][p].nomedoObjeto, "%s",
    		   ObjetoDoJogo[Carta[o][p].
    				TipodeObjetoOferecido].nomeObjeto);
    
    	  printf ("%10.d", Carta[o][p].TipodeObjetoOferecido);
    
    	  printf ("%10.d", Carta[o][p].Utilizado);
    
    	  printf ("%10.d", 0);
    
    	  printf ("%*s", -MAXLETRAS, Carta[o][p].nomedoObjeto);
    
    	  printf ("\n");
    
    	}
    
        }
    
    
    
    
    
    
    
    /* Aqui iniciam as rodadas*/
    
     
    
    
     
    
        printf ("\n");
        printf ("%*s%90s%20s%30s%30s\n", -MAXLETRASLET, "","O Jogador Elixir(es): ","E de Coroa(s): ", "O Computador Elixir(es): ","E de Coroa(s): ");
    
        
        printf ("%105.d", contElixirJogador);
    
        printf ("%27.d", contPontuacaoJogador);
    
        printf ("%23.d", contElixirComputador);
    
        printf ("%35.d", contPontuacaoComputador);
    
        printf ("\n");
    
    

    
    
    // As quatro cartas do Jogador
    
    
    
      printf ("As quatro cartas do Jogador sao:");
    
      printf ("\n");
    
      for (o = 1; o < 5; o++)
    
        {
    
          printf ("%10.d", Carta[o][1].TipodeObjetoOferecido);
    
          printf ("%10.d", Carta[o][1].Utilizado);
    
          printf ("%10.d", 0);
    
          printf ("%*s", -MAXLETRAS, Carta[o][1].nomedoObjeto);
    
          printf ("\n");
    
        }
    
    
    
    
    
    
    
    // As quatro cartas do Computador
    
    
    
      printf ("As quatro cartas do Computador sao:");
    
      printf ("\n");
    
      for (o = 1; o < 5; o++)
    
        {
    
          printf ("%10.d", Carta[o][2].TipodeObjetoOferecido);
    
          printf ("%10.d", Carta[o][2].Utilizado);
    
          printf ("%10.d", 0);
    
          printf ("%*s", -MAXLETRAS, Carta[o][2].nomedoObjeto);
    
          printf ("\n");
    
        }
    	      
    	  }else if (DecQuerOutroJogo==2){
    	      
    	      getch ();
              return (0);
    	  }
        
    
        
    
        JogadorMatouORei=1;
         l=1;
    } else   if (ComputadorMatouORei==2){
          printf ("O COMPUTADOR GANHOU!!!!!!!!!!. Quer Jogar de Novo? 1 - Sim; 2 - Nao");
    
    	  printf ("\n");
    
    	  scanf ("%d", &DecQuerOutroJogo);
    	  if (DecQuerOutroJogo==1){
    /* Inicializacao dos Jogadores, atribuindo para cada jogador (computador ou pessoa), a quantidade de elixir e a pontuacao numa determinada rodada*/
    
     
    
      for (m = 1; m < 52; m++)
    
        {
    
          for (n = 1; n < 3; n++)
    
    	{
    
    	  Player[m][n].Elixir = 10;
    	  
    
    	  Player[m][n].Pontuacao = 1;
    
    	  printf ("%10.d", m);
    
    	  printf ("%10.d", n);
    
    	  printf ("%10.d", Player[m][n].Elixir);
    
    	  printf ("%10.d", Player[m][n].Pontuacao);
    
    	  printf ("\n");
    
    	}
    
    
    
        }
    contElixirComputador=10;
    contElixirJogador=10;
    contPontuacaoComputador=1;
    contPontuacaoJogador=1;

    
    
    
    
    /* Inicializacao das Cartas, atribuindo para cada jogador (computador ou pessoa), o tipo do Objeto de Jogo, se foi utilizado ou nao*/
    
    
    
    
      printf ("\n");
    
      for (o = 1; o < 5; o++)
    
        {
    
          for (p = 1; p < 3; p++)
    
    	{
    
    	  if (p == 1)
    	    {
    	      Carta[o][p].TipodeObjetoOferecido = random_number (1, 7);
    	    }
    	  else if (p == 2)
    	    {
    	      Carta[o][p].TipodeObjetoOferecido = random_number (1, 7);
    	    }
    
    
    	  Carta[o][p].Utilizado = 2;
    
    	  sprintf (Carta[o][p].nomedoObjeto, "%s",
    		   ObjetoDoJogo[Carta[o][p].
    				TipodeObjetoOferecido].nomeObjeto);
    
    	  printf ("%10.d", Carta[o][p].TipodeObjetoOferecido);
    
    	  printf ("%10.d", Carta[o][p].Utilizado);
    
    	  printf ("%10.d", 0);
    
    	  printf ("%*s", -MAXLETRAS, Carta[o][p].nomedoObjeto);
    
    	  printf ("\n");
    
    	}
    
        }
    
    
    
    
    
    
    
    /* Aqui iniciam as rodadas*/
    
     
    
    
     
    
        printf ("\n");
        printf ("%*s%90s%20s%30s%30s\n", -MAXLETRASLET, "","O Jogador Elixir(es): ","E de Coroa(s): ", "O Computador Elixir(es): ","E de Coroa(s): ");
    
        
        printf ("%105.d", contElixirJogador);
    
        printf ("%27.d", contPontuacaoJogador);
    
        printf ("%23.d", contElixirComputador);
    
        printf ("%35.d", contPontuacaoComputador);
    
        printf ("\n");
    
    
    


    
    // As quatro cartas do Jogador
    
    
    
      printf ("As quatro cartas do Jogador sao:");
    
      printf ("\n");
    
      for (o = 1; o < 5; o++)
    
        {
    
          printf ("%10.d", Carta[o][1].TipodeObjetoOferecido);
    
          printf ("%10.d", Carta[o][1].Utilizado);
    
          printf ("%10.d", 0);
    
          printf ("%*s", -MAXLETRAS, Carta[o][1].nomedoObjeto);
    
          printf ("\n");
    
        }
    
    
    
    
    
    
    
    // As quatro cartas do Computador
    
    
    
      printf ("As quatro cartas do Computador sao:");
    
      printf ("\n");
    
      for (o = 1; o < 5; o++)
    
        {
    
          printf ("%10.d", Carta[o][2].TipodeObjetoOferecido);
    
          printf ("%10.d", Carta[o][2].Utilizado);
    
          printf ("%10.d", 0);
    
          printf ("%*s", -MAXLETRAS, Carta[o][2].nomedoObjeto);
    
          printf ("\n");
    
        }
    	      
    	  }else if (DecQuerOutroJogo==2){
    	      
    	      getch ();
              return (0);
    	  }
        
    
        
    
        ComputadorMatouORei=1;
        l=1;
    }



//Escrevo o Menu

      printf ("%*s%16s%16s%16s%16s%16s%16s\n", -MAXLETRAS, "Carta do Jogo",
	      "Inimigo Atacavel", "Mobilidade", "Dano", "Vida", "Alcance",
	      "Id do Objeto");





      for (u = 1; u < 9; u++)

	{

	  printf ("%*s", -MAXLETRAS, ObjetoDoJogoTemp[u].nomeObjeto);

	  for (t = 0; t < 5; t++)

	    {

	      printf ("%16.d", ObjetoDoJogoTemp[u].atributosObjeto[t]);

	    }

	  printf ("%16.d", u);

	  printf ("\n");

	}

// As quatro cartas do Jogador



  printf ("As quatro cartas do Jogador sao:");

  printf ("\n");

  for (o = 1; o < 5; o++)

    {

      printf ("%10.d", Carta[o][1].TipodeObjetoOferecido);

      printf ("%10.d", Carta[o][1].Utilizado);

      printf ("%10.d", 0);

      printf ("%*s", -MAXLETRAS, Carta[o][1].nomedoObjeto);

      printf ("\n");

    }





      int DecQuerOutra = 1;

      //Inicia a possibilidade de se escolher novas cartas pelo Jogador, desde que haja elixir       

      while ((DecQuerOutra != 2) && (contElixirJogador > 1))



	{

	  printf ("Quer escolher outras Cartas? 1 - Sim; 2 - Nao");

	  printf ("\n");

	  scanf ("%d", &DecQuerOutra);
	  int ETemp;

	  if (DecQuerOutra == 1)

	    {

	      contElixirJogador=contElixirJogador-1;


	      printf ("As quatro cartas do Jogador sao:");

	      printf ("\n");

	      for (o = 1; o < 5; o++)

		{



		  Carta[o][1].TipodeObjetoOferecido = random_number (1, 7);

		  Carta[o][1].Utilizado = 2;

		  sprintf (Carta[o][1].nomedoObjeto, "%s",
			   ObjetoDoJogo[Carta[o][1].
					TipodeObjetoOferecido].nomeObjeto);

		  printf ("%10.d", Carta[o][1].TipodeObjetoOferecido);

		  printf ("%10.d", Carta[o][1].Utilizado);

		  printf ("%10.d", 0);

		  printf ("%*s", -MAXLETRAS, Carta[o][1].nomedoObjeto);

		  printf ("\n");









		}

	    }



	}


// As quatro cartas do Computador



  printf ("As quatro cartas do Computador sao:");

  printf ("\n");

  for (o = 1; o < 5; o++)

    {

      printf ("%10.d", Carta[o][2].TipodeObjetoOferecido);

      printf ("%10.d", Carta[o][2].Utilizado);

      printf ("%10.d", 0);

      printf ("%*s", -MAXLETRAS, Carta[o][2].nomedoObjeto);

      printf ("\n");

    }


      //Inicia a escolha da carta dentre vC!rias Cartas





      int EscolhoUma = 0;

      int JaEscolhido = 0;

      while ((contElixirJogador > 0) && (JaEscolhido == 0))




	{

	  printf
	    ("Escolha a Carta: 1 - Primeira Carta; 2 - Segunda Carta; 3 - Terceira Carta; e 4 - Quarta Carta");

	  printf ("\n");

	  scanf ("%d", &EscolhoUma);
        int ETemp;

	  if (Carta[EscolhoUma][1].Utilizado != 1)

	    {

	      Carta[EscolhoUma][1].Utilizado = 1;
	      
	      contElixirJogador=contElixirJogador-1;



	      JaEscolhido = 1;

	    }

	  else if (Carta[EscolhoUma][1].Utilizado == 1)

	    {

	      printf ("A carta ja foi utilizada. Escolha outra!");

	      printf ("\n");
	      int JaEscolhido = 0;

	    }



	}



      //Agora posicionar a carta esolhida pelo Jogador

      int OrdenadaY = 0;

      int AbiscissaZ = 0;

      int TenteOutraVez = 1;



      while (TenteOutraVez == 1)

	{

	  printf
	    ("Posicione a Carta: Escolha primeiro as abscissas (x) que vao de 1 a 13:");

	  //printf ("%10.d", EscolhoUma);

	  printf ("\n");

	  //printf ("%*s", -MAXLETRAS, ObjetoDoJogoTemp[Carta[EscolhoUma][1].TipodeObjetoOferecido].nomeObjeto);





	  scanf ("%d", &OrdenadaY);

	  if ((OrdenadaY < 1) || (OrdenadaY > 13))

	    {

	      printf ("Ordenada fora do campo de atuacao");

	      TenteOutraVez = 1;

	    }

	  else

	    TenteOutraVez = 2;



	}



      while (TenteOutraVez == 2)

	{

	  printf
	    ("Posicione a Carta: Escolha agora as ordenadas para o jogador vao de 1 a 7.");

	  //printf ("%10.d", EscolhoUma);

	  printf ("\n");

	  //printf ("%*s", -MAXLETRAS, ObjetoDoJogoTemp[Carta[EscolhoUma][1].TipodeObjetoOferecido].nomeObjeto);



	  scanf ("%d", &AbiscissaZ);

	  if ((AbiscissaZ < 1) || (AbiscissaZ > 7))

	    {

	      printf ("Abscissa fora do campo de atuacao");

	      TenteOutraVez = 2;

	    }

	  else if (Tabuleiro[1][OrdenadaY][AbiscissaZ][8] == 4)

	    {

	      for (k = 1; k < 6; k++)

		{



		  Tabuleiro[1][OrdenadaY][AbiscissaZ][k] =
		    ObjetoDoJogoTemp[Carta[EscolhoUma]
				     [1].TipodeObjetoOferecido].atributosObjeto
		    [k - 1];



		}

	      Tabuleiro[1][OrdenadaY][AbiscissaZ][6] = OrdenadaY;

	      Tabuleiro[1][OrdenadaY][AbiscissaZ][7] = AbiscissaZ;

	      Tabuleiro[1][OrdenadaY][AbiscissaZ][8] = 1;

	      TenteOutraVez = 1;

	    }

	  else

	    TenteOutraVez = 2;



	}







      //Aqui Iniciaria a possibilidade de se escolher novas cartas pelo Compuador. Contudo, nao vou considerar esta nova possibilidade

      Dados ObjetoDoJogo[9] = {

	{{"Nulo"}

	 , {0, 0, 0, 0, 0}

	 }

	,

	{{"Gigante"}

	 , {1, 1, 10, 30, 1}

	 }

	,

	{{"EsqueletoB"}

	 , {1, 1, 8, 7, 1}

	 }

	,

	{{"Cavaleiro"}

	 , {3, 1, 6, 15, 1}

	 }

	,

	{{"ExercEsqueleto"}

	 , {2, 1, 2, 8, 1}

	 }

	,

	{{"Arqueiras"}

	 , {3, 1, 4, 12, 4}

	 }

	,

	{{"Mago"}

	 , {3, 1, 12, 25, 4}

	 }

	,

	{{"XBesta"}

	 , {3, 2, 14, 40, 4}

	 }

	,

	{{"BoladeFogo"}

	 , {3, 2, 16, 1000, 1000}

	 }

      };

      printf ("As quatro cartas do Computador sao:");

      printf ("\n");

      for (o = 1; o < 5; o++)

	{

	  printf ("%10.d", Carta[o][2].TipodeObjetoOferecido);

	  printf ("%10.d", Carta[o][2].Utilizado);

	  printf ("%10.d", 0);

	  printf ("%*s", -MAXLETRAS, Carta[o][2].nomedoObjeto);

	  printf ("\n");



	}

//*********************Escolher uma carta aleatória***************//
 //Inicia a escolha da carta dentre vC!rias Cartas

      EscolhoUma = 0;

      JaEscolhido = 0;

      while ((contElixirJogador > 0) && (JaEscolhido == 0))


	{

	  printf
	    ("Computador escolha a Carta!!! 1 - Primeira Carta; 2 - Segunda Carta; 3 - Terceira Carta; e 4 - Quarta Carta");

	  printf ("\n");

	  EscolhoUma=random_number(1,4);
     int ETemp;

	  if (Carta[EscolhoUma][2].Utilizado != 1)

	    {

	      Carta[EscolhoUma][2].Utilizado = 1;
	      
	      contElixirComputador=contElixirComputador-1;

	      


	      JaEscolhido = 1;

	    }

	  else if (Carta[EscolhoUma][2].Utilizado == 1)

	    {

	      
	      if ((Carta[1][2].Utilizado == 1)&&(Carta[2][2].Utilizado == 1)&&(Carta[3][2].Utilizado == 1)&&(Carta[4][2].Utilizado == 1)){
	          
	          
	          	  int o1, p1;

                  printf ("\n");
                  printf ("Esta foi a ultima carta. Tentaremos outras 4!!");

	              printf ("\n");
                
                  for (o1 = 1; o1 < 5; o1++)
                
                    {
                
                      for (p1 = 1; p1 < 3; p1++)
                
                	{
                
                	  if (p1 == 1)
                	    {
                	      Carta[o1][p1].TipodeObjetoOferecido = random_number (1, 7);
                	    }
                	  else if (p1 == 2)
                	    {
                	      Carta[o1][p1].TipodeObjetoOferecido = random_number (1, 7);
                	    }
                
                
                	  Carta[o1][p1].Utilizado = 2;
                
                	  sprintf (Carta[o1][p1].nomedoObjeto, "%s",
                		   ObjetoDoJogo[Carta[o1][p1].
                				TipodeObjetoOferecido].nomeObjeto);
                
                	  printf ("%10.d", Carta[o1][p1].TipodeObjetoOferecido);
                
                	  printf ("%10.d", Carta[o1][p1].Utilizado);
                
                	  printf ("%10.d", 0);
                
                	  printf ("%*s", -MAXLETRAS, Carta[o1][p1].nomedoObjeto);
                
                	  printf ("\n");
                
                	}
                
    }
	          
	          
	                 } else {
	                     printf ("A carta ja foi utilizada. Escolha outra!");

	                     printf ("\n");
	                 }
	      JaEscolhido = 0;

	    }



	}
	

//**********************************//



      //Agora posicionar a carta escolhida pelo Computador


      OrdenadaY = 0;

      AbiscissaZ = 0;

      TenteOutraVez = 1;
      char CartadoComputador;



      while (TenteOutraVez == 1)

	{

	  printf
	    ("Posicione a Carta: Escolha primeiro as abscissas que vao de 1 a 13:");

	  //printf ("%10.d", EscolhoUma);

	  printf ("\n");

	  //printf ("%*s", -MAXLETRAS, ObjetoDoJogoTemp[Carta[EscolhoUma][1].TipodeObjetoOferecido].nomeObjeto);





	  OrdenadaY = random_number (1, 13);

	  if ((OrdenadaY < 1) || (OrdenadaY > 13))

	    {

	      printf ("Ordenada fora do campo de atuacao");

	      TenteOutraVez = 1;

	    }

	  else

	    TenteOutraVez = 2;



	}



      while (TenteOutraVez == 2)

	{

	  printf
	    ("Posicione a Carta: Escolha agora  as ordenadas para o jogador vao de 9 a 15.");

	  //printf ("%10.d", EscolhoUma);

	  printf ("\n");

	  //printf ("%*s", -MAXLETRAS, ObjetoDoJogoTemp[Carta[EscolhoUma][1].TipodeObjetoOferecido].nomeObjeto);



	  AbiscissaZ = random_number (9, 15);

	  if ((AbiscissaZ < 9) || (AbiscissaZ > 15))

	    {

	      printf ("Abscissa fora do campo de atuacao");

	      TenteOutraVez = 2;

	    }

	  else if (Tabuleiro[2][OrdenadaY][AbiscissaZ][8] == 4)

	    {

	      for (k = 1; k < 6; k++)

		{



		  Tabuleiro[2][OrdenadaY][AbiscissaZ][k] =
		    ObjetoDoJogoTemp[Carta[EscolhoUma]
				     [1].TipodeObjetoOferecido].atributosObjeto
		    [k - 1];

		}

	      Tabuleiro[2][OrdenadaY][AbiscissaZ][6] = OrdenadaY;

	      Tabuleiro[2][OrdenadaY][AbiscissaZ][7] = AbiscissaZ;

	      Tabuleiro[2][OrdenadaY][AbiscissaZ][8] = 1;





	      TenteOutraVez = 1;
	      // printf ("%10.d", Tabuleiro[2][OrdenadaY][AbiscissaZ][8]);
	      //           printf ("%10.d", CartadoComputador);
	      //         printf ("%10.d", AbiscissaZ);

	      //         printf("Pausar: digite um inteiro parei aqui debugando");

	      //       scanf("%d", &b); //recebe um inteiro e armazena na variC!vel b


	    }

	  else

	    TenteOutraVez = 2;



	}




      //    while ((Tabuleiro[1][7][1][4] > 0) && (Tabuleiro[2][7][15][4] > 0))         {



//printf("Pausar: digite um inteiro");

//scanf("%d", &b); //recebe um inteiro e armazena na variavel b



      //int g = 1;

      int j = 1;

      int k = 1;

      //printf ("\n\n Tabuleiro do Jogador \n\n");





                
            
            
            







      for (k = 1; k < 16; k++)

	{

	  for (j = 1; j < 14; j++)

	    {




	      if (Tabuleiro[1][j][k][8] == 1)	//&&(Tabuleiro[1][j][k][5] =! 1000))//**(Tabuleiro[1][j][k][5] == 1000)***Bola de Fogo precisa de um tratamento especial

		{
		                  
		  int g;

	      int h;

	      int maxY;

	      int minY;

	      int maxZ;

	      int minZ;


		  if ((j - Tabuleiro[1][j][k][5]) < 1)

		    {

		      minY = 1;

		    }

		  else

		    {

		      minY = j - Tabuleiro[1][j][k][5];


		    }



		  if ((j + Tabuleiro[1][j][k][5]) > 13)

		    {

		      maxY = 13;

		    }

		  else

		    {

		      maxY = j + Tabuleiro[1][j][k][5];

		    }



		  if ((k - Tabuleiro[1][j][k][5]) < 1)

		    {

		      minZ = 1;

		    }

		  else

		    {

		      minZ = k - Tabuleiro[1][j][k][5];

		    }



		  if ((k + Tabuleiro[1][j][k][5]) > 15)

		    {

		      maxZ = 15;

		    }

		  else

		    {

		      maxZ = k + Tabuleiro[1][j][k][5];

		    }





		  /*Sou o Jogador, aqui inicia a descoberta de quem eh meu inimigo, verifico meu alcance, faC'o uma varredura de acordo com esse alcance

		     causo dano nestes inimigos */

		  int PossoAndar = 1;


		  for ((g = minY); (g <= maxY); g++)

		    {

		      for ((h = minZ); (h <= maxZ); h++)

			{
			    			    /////////////////////////////Refresh do Tabuleiro
			    
			    			        for (int i1 = 1; i1 < 3; i1++)
            
                                        {
                                    
                                          for (int j1 = 1; j1 < 14; j1++)
                                    
                                    	{
                                    
                                    	  for (int k1 = 1; k1 < 16; k1++)
                                    
                                    	    {
                                    	      for (int l1 = 1; l1 < 9; l1++)
                                    
                                    		    {
                                    	        
                                        	        TabuleiroAcerto[i1][j1][k1][l1]=Tabuleiro[i1][j1][k1][l1];
                                    		    }
                                    	 
                                    	 
                                    	    }
                                    	  
                                    	  
                                    	}
                                        }
                        			    
			    ///////////////////////////Fim do Refresh do Tabuleiro
			    
			


			  if ((Tabuleiro[2][g][h][8] ==2)||(Tabuleiro[2][g][h][8] ==1)||(Tabuleiro[2][g][h][8] ==3))
			    {

			      
			      //Inimigo atacavel Somente Torre
			      int contDano1;

			      if ((Tabuleiro[1][j][k][1] == 1)
				  && ((Tabuleiro[2][g][h][8] == 2) || (Tabuleiro[2][g][h][8] == 3)|| (Tabuleiro[2][g][h][3] == 14)))
				{

				  contDano1=Tabuleiro[2][g][h][4] -
				    Tabuleiro[1][j][k][3];
				  Tabuleiro[2][g][h][4] =contDano1;
				    



				  if (Tabuleiro[2][g][h][4] < 1)
				    {

				      Tabuleiro[2][g][h][1] = 0;

				      Tabuleiro[2][g][h][2] = 0;

				      Tabuleiro[2][g][h][3] = 0;

				      Tabuleiro[2][g][h][4] = 0;

				      Tabuleiro[2][g][h][5] = 0;

				      Tabuleiro[2][g][h][6] = g;

				      Tabuleiro[2][g][h][7] = h;

				      Tabuleiro[2][g][h][8] = 4;
				      int PTemp;
				      				
                	     
                	  if ((Tabuleiro[2][g][h][8] == 2)||(Tabuleiro[2][g][h][8] == 3)){
                	      
					     
                	      contPontuacaoJogador=contPontuacaoJogador+1;
                	      if (Tabuleiro[2][g][h][8] == 3){
                	          JogadorMatouORei=2;
                	      }
                            

					  }

				      PossoAndar = PossoAndar - 1;

				      if (Tabuleiro[1][j][k][3] = 10)

					{	//Gigante, pois apos destruir a Torre, pode partir para outra torre

					  PossoAndar = 1;

					}

				    }
				  else
				    {

				      PossoAndar = PossoAndar + 1;

				    }

				  if (Tabuleiro[1][j][k][3] = 8)
				    {	// Esqueleto Bomba que precisa desaparecer, pois explodiu

				      Tabuleiro[1][j][k][1] = 0;

				      Tabuleiro[1][j][k][2] = 0;

				      Tabuleiro[1][j][k][3] = 0;

				      Tabuleiro[1][j][k][4] = 0;

				      Tabuleiro[1][j][k][5] = 0;

				      Tabuleiro[1][j][k][6] = j;

				      Tabuleiro[1][j][k][7] = k;

				      Tabuleiro[1][j][k][8] = 4;

				      PossoAndar = 1;



				    }
				}

			      //Inimigo atacavel Somente Tropa

			      if ((Tabuleiro[1][j][k][1] == 2)
				  && ((Tabuleiro[2][g][h][8] == 1)))
				{

				  if ((Tabuleiro[2][g][h][3] == 10)||(Tabuleiro[2][g][h][3] == 8)||(Tabuleiro[2][g][h][3] == 6)||(Tabuleiro[2][g][h][3] == 2)||(Tabuleiro[2][g][h][3] == 4)||(Tabuleiro[2][g][h][3] == 12))

				    {

				        	//Nao ataca construcoes - torres

					  Tabuleiro[2][g][h][4] =
					    Tabuleiro[2][g][h][4] -
					    Tabuleiro[1][j][k][3];



					  if (Tabuleiro[2][g][h][4] < 1)
					    {

					      Tabuleiro[2][g][h][1] = 0;

					      Tabuleiro[2][g][h][2] = 0;

					      Tabuleiro[2][g][h][3] = 0;

					      Tabuleiro[2][g][h][4] = 0;

					      Tabuleiro[2][g][h][5] = 0;

					      Tabuleiro[2][g][h][6] = g;

					      Tabuleiro[2][g][h][7] = h;

					      Tabuleiro[2][g][h][8] = 4;



					      //Exercito pode partir para a proxima tropa

					      PossoAndar = PossoAndar - 1;



					    }
					  else
					    PossoAndar + 1;

					

				    }
				  else if (Tabuleiro[2][g][h][3] == 16)
				    {

				      Tabuleiro[2][g][h][1] = 0;

				      Tabuleiro[2][g][h][2] = 0;

				      Tabuleiro[2][g][h][3] = 0;

				      Tabuleiro[2][g][h][4] = 0;

				      Tabuleiro[2][g][h][5] = 0;

				      Tabuleiro[2][g][h][6] = g;

				      Tabuleiro[2][g][h][7] = h;

				      Tabuleiro[2][g][h][8] = 4;

				    }



				  /*

				     if (Tabuleiro[2][g][h][3] = 10) - Gigante

				     if (Tabuleiro[2][g][h][3] = 8) - EsqueletoB

				     if (Tabuleiro[2][g][h][3] = 6) - Cavaleiro

				     if (Tabuleiro[2][g][h][3] = 2) - ExercEsqueleto

				     if (Tabuleiro[2][g][h][3] = 4) - Arqueiras

				     if (Tabuleiro[2][g][h][3] = 12) - Mago

				     if (Tabuleiro[2][g][h][3] = 14) - XBesta

				     if (Tabuleiro[2][g][h][3] = 16) - BoladeFogo

				     if (Tabuleiro[2][g][h][3] = 3) - Torre

				     if (Tabuleiro[2][g][h][3] = 5) - Torre com Rei



				   */
				}



			      //Inimigo atacavel Tropa ou Construcoes

			      if ((Tabuleiro[1][j][k][1] == 3)
				  && ((Tabuleiro[2][g][h][8] == 1)||(Tabuleiro[2][g][h][8] == 2)||(Tabuleiro[2][g][h][8] == 3)))
				{

				  int contDano2;
				  if ((Tabuleiro[2][g][h][3] == 10)||(Tabuleiro[2][g][h][3] == 8)||(Tabuleiro[2][g][h][3] == 6)||(Tabuleiro[2][g][h][3] == 2)||(Tabuleiro[2][g][h][3] == 4)||(Tabuleiro[2][g][h][3] == 12)||(Tabuleiro[2][g][h][3] == 14)||(Tabuleiro[2][g][h][8] == 2)||(Tabuleiro[2][g][h][8] == 3))
				    {

				      // ataca tropa e construcoes - torres

				      //torres com rei e xbesta

				  contDano2=Tabuleiro[2][g][h][4] -
					Tabuleiro[1][j][k][3];
				  Tabuleiro[2][g][h][4] =contDano2;


			


				     /* printf ("%10.d",
					      (Tabuleiro[1][j][k][1]));
				      printf ("%10.d", Tabuleiro[2][g][h][8]);
				      printf ("%10.d", Tabuleiro[2][g][h][4]);
				      printf ("%10.d", g);
				      printf ("%10.d", h);
				      printf
					("Pausar: digite um inteiro pos ifs");

				      scanf ("%d", &b);	//recebe um inteiro e armazena na variC!vel b*/

				      if (Tabuleiro[2][g][h][4] < 1)
					{

					  Tabuleiro[2][g][h][1] = 0;

					  Tabuleiro[2][g][h][2] = 0;

					  Tabuleiro[2][g][h][3] = 0;

					  Tabuleiro[2][g][h][4] = 0;

					  Tabuleiro[2][g][h][5] = 0;

					  Tabuleiro[2][g][h][6] = g;

					  Tabuleiro[2][g][h][7] = h;

					  Tabuleiro[2][g][h][8] = 4;
					        int PTemp;
				  
					  if ((Tabuleiro[2][g][h][8] == 2)||(Tabuleiro[2][g][h][8] == 3)){

                	      contPontuacaoJogador=contPontuacaoJogador+1;
                	      
                	      if (Tabuleiro[2][g][h][8] == 3){
                	          JogadorMatouORei=2;
                	      }

                	      
                	      
                	      
					  }
					  



					  //Tropa pode avanC'ar, objetos fixos ficam parados

					  //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

					  PossoAndar = PossoAndar - 1;



					}
				      else
					PossoAndar = PossoAndar + 1;



				    }
				  else if (Tabuleiro[2][g][h][3] == 16)
				    {



				      Tabuleiro[2][g][h][1] = 0;

				      Tabuleiro[2][g][h][2] = 0;

				      Tabuleiro[2][g][h][3] = 0;

				      Tabuleiro[2][g][h][4] = 0;

				      Tabuleiro[2][g][h][5] = 0;

				      Tabuleiro[2][g][h][6] = g;

				      Tabuleiro[2][g][h][7] = h;

				      Tabuleiro[2][g][h][8] = 4;

				    }
				}
				
				 //Eu sou Torre e posso causar dano 

			      if ((Tabuleiro[1][j][k][3] == 3)
				  && ((Tabuleiro[2][g][h][8] == 1)||(Tabuleiro[2][g][h][8] == 2)||(Tabuleiro[2][g][h][8] == 3)))
				{

				  if ((Tabuleiro[2][g][h][3] == 10)||(Tabuleiro[2][g][h][3] == 8)||(Tabuleiro[2][g][h][3] == 6)||(Tabuleiro[2][g][h][3] == 2)||(Tabuleiro[2][g][h][3] == 4)||(Tabuleiro[2][g][h][3] == 12))
				    {

				      // Torre ataca tropa e construcoes - 




				    Tabuleiro[2][g][h][4] =
					Tabuleiro[2][g][h][4] -
					Tabuleiro[1][j][k][3];



				      if (Tabuleiro[2][g][h][4] < 1)
					{

					  Tabuleiro[2][g][h][1] = 0;

					  Tabuleiro[2][g][h][2] = 0;

					  Tabuleiro[2][g][h][3] = 0;

					  Tabuleiro[2][g][h][4] = 0;

					  Tabuleiro[2][g][h][5] = 0;

					  Tabuleiro[2][g][h][6] = g;

					  Tabuleiro[2][g][h][7] = h;

					  Tabuleiro[2][g][h][8] = 4;

					 
					  




					}
				      else
					PossoAndar = PossoAndar + 1;

				    }

				}

				 //Eu sou Rei e posso causar dano 

			      if ((Tabuleiro[1][j][k][3] == 5)
				  && ((Tabuleiro[2][g][h][8] == 1)||(Tabuleiro[2][g][h][8] == 2)||(Tabuleiro[2][g][h][8] == 3)))
				{

				  if ((Tabuleiro[2][g][h][3] == 10)||(Tabuleiro[2][g][h][3] == 8)||(Tabuleiro[2][g][h][3] == 6)||(Tabuleiro[2][g][h][3] == 2)||(Tabuleiro[2][g][h][3] == 4)||(Tabuleiro[2][g][h][3] == 12))
				    {

				      // Torre ataca tropa e construcoes - 




				    Tabuleiro[2][g][h][4] =
					Tabuleiro[2][g][h][4] -
					Tabuleiro[1][j][k][3];



				      if (Tabuleiro[2][g][h][4] < 1)
					{

					  Tabuleiro[2][g][h][1] = 0;

					  Tabuleiro[2][g][h][2] = 0;

					  Tabuleiro[2][g][h][3] = 0;

					  Tabuleiro[2][g][h][4] = 0;

					  Tabuleiro[2][g][h][5] = 0;

					  Tabuleiro[2][g][h][6] = g;

					  Tabuleiro[2][g][h][7] = h;

					  Tabuleiro[2][g][h][8] = 4;

					 
					  




					}
				      else
					PossoAndar = PossoAndar + 1;



				    }

				}

			    }else {


	                for (int i1 = 1; i1 < 3; i1++)
            
                {
            
                  for (int j1 = 1; j1 < 14; j1++)
            
            	{
            
            	  for (int k1 = 1; k1 < 16; k1++)
            
            	    {
            	      for (int l1 = 1; l1 < 9; l1++)
            
            		    {
            	        
                	        Tabuleiro[i1][j1][k1][l1]=TabuleiroAcerto[i1][j1][k1][l1];
            		    }
            	 
            	 
            	    }
            	  
            	  
            	}
                }

			    }






			}	//Fim do for h
		    }		//Fim do for g




		  /*Sou o Jogador, aqui finalizo a descoberta de quem eh meu inimigo, verifiquei meu alcance, fiz uma varredura de acordo com esse alcance,

		     causando dano nestes inimigos */

		  // Aqui a carta do Jogador se movimenta




		  int jTemp = j;

		  int kTemp = k;
		  int ob1 = 0;
		  int ob2 = 0;
		  int ob3 = 0;
		  int ob4 = 0;
		  int ob5 = 0;
		  int ob6 = 0;
		  int ob7 = 0;
		  int ob8 = 4;
		  int zAlea;
		  int yAlea;
		  int MeuAlvoFixo;
		        if (k<9){   
                MeuAlvoFixo=random_number (1, 3);
                }
		               
                    
                if(MeuAlvoFixo==1){ // Meu alvo fixo é a Torre com Rei
                    yAlea=7;
                    zAlea=15;
                    
                }
                
                if(MeuAlvoFixo==2){ // Meu alvo fixo é a Torre 1
                    yAlea=4;
                    zAlea=14;
                    
                }
                
                if(MeuAlvoFixo==3){ // Meu alvo fixo é a Torre 2
                    yAlea=4;
                    zAlea=10;
                    
                }


		  if (PossoAndar == 1)
		    {

		      if (Tabuleiro[1][j][k][2] != 2)
			{

			  if (Tabuleiro[1][j][k][1] != 2)
			    {



			      if (j - yAlea < 1)
				{

				  if (j - yAlea == 0)
				    {

				      jTemp = j;

				    }
				  else
				    jTemp = j + 1;

				}
			      else
				jTemp = j - 1;



			      if (k - zAlea < 1)
				{

				  if (k - zAlea == 0)
				    {

				      kTemp = k;

				    }
				  else
				    kTemp = k + 1;

				}
			      else
				kTemp = k + 1;



			    }

		      if  ((Tabuleiro[1][jTemp][kTemp][8] != 4)||(Tabuleiro[2][jTemp][kTemp][8] != 4)){
		          if ((jTemp==j)&&(Tabuleiro[1][j-1][kTemp][8] != 4)&& (Tabuleiro[2][j-1][kTemp][8] != 4)){
		              jTemp=j-1;
		          } else if((jTemp<j)&&(Tabuleiro[1][j+1][kTemp][8] != 4)&& (Tabuleiro[2][j+1][kTemp][8] != 4)){
		              jTemp=j+1;
		          } else if((jTemp>j)&&(Tabuleiro[1][j][kTemp][8] != 4)&& (Tabuleiro[2][j][kTemp][8] != 4)){
		              jTemp=j;
		          }
		      }
			  if ((Tabuleiro[1][jTemp][kTemp][8] == 4)&&(Tabuleiro[2][jTemp][kTemp][8] == 4))
			{


			  ob1 = Tabuleiro[1][j][k][1];

			  ob2 = Tabuleiro[1][j][k][2];

			  ob3 = Tabuleiro[1][j][k][3];

			  ob4 = Tabuleiro[1][j][k][4];

			  ob5 = Tabuleiro[1][j][k][5];

			  ob6 = jTemp;

			  ob7 = kTemp;

			  ob8 = Tabuleiro[1][j][k][8];


			  Tabuleiro[1][jTemp][kTemp][1] = ob1;

			  Tabuleiro[1][jTemp][kTemp][2] = ob2;

			  Tabuleiro[1][jTemp][kTemp][3] = ob3;

			  Tabuleiro[1][jTemp][kTemp][4] = ob4;

			  Tabuleiro[1][jTemp][kTemp][5] = ob5;

			  Tabuleiro[1][jTemp][kTemp][6] = ob6;

			  Tabuleiro[1][jTemp][kTemp][7] = ob7;

			  Tabuleiro[1][jTemp][kTemp][8] = ob8;


			  Tabuleiro[1][j][k][1] = 0;

			  Tabuleiro[1][j][k][2] = 0;

			  Tabuleiro[1][j][k][3] = 0;

			  Tabuleiro[1][j][k][4] = 0;

			  Tabuleiro[1][j][k][5] = 0;

			  Tabuleiro[1][j][k][6] = j;

			  Tabuleiro[1][j][k][7] = k;

			  Tabuleiro[1][j][k][8] = 4;







			}


			}

			
			





		    }



		  // Aqui a carta do Jogador se movimentou uma casa ou ficou parado, pois ainda hC! inimigo, ou esta C) sua caracterC-stica



		}

	      /*Sou o Computador, aqui inicia a descoberta de quem eh o inimigo, no caso o Jogador, verifico o alcance, faC'o uma varredura de acordo com esse alcance

	         causo dano nestes inimigos, cartas do Jogador */




	      if (Tabuleiro[2][14 - j][16 - k][8] == 1)	//&&(Tabuleiro[1][j][k][5] =! 1000))//**(Tabuleiro[1][j][k][5] == 1000)***Bola de Fogo precisa de um tratamento especial

		{
          int g;

	      int h;

	      int maxY;

	      int minY;

	      int maxZ;

	      int minZ;

		  //  printf ("%10.d", j);
		  // printf ("%10.d", k);
		  //printf ("\n");
		  //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%PAREI AQUI DEBUGANDO
		  //printf ("%10.d", Tabuleiro[2][j][k][1]);
		  // printf ("%10.d", Tabuleiro[2][j][k][2]);
		  //printf ("%10.d", Tabuleiro[2][j][k][3]);
		  // printf ("%10.d", Tabuleiro[2][j][k][4]);
		  //  printf ("%10.d", Tabuleiro[2][j][k][5]);
		  //  printf ("%10.d", Tabuleiro[2][j][k][6]);
		  //  printf ("%10.d", Tabuleiro[2][j][k][7]);
		  //  printf ("%10.d", Tabuleiro[2][j][k][8]);
		  //  printf ("\n");

		  //  printf("Pausar: digite um inteiro");

		  //  scanf("%d", &b); //recebe um inteiro e armazena na variC!vel b
		  //printf ("%10.d", j);
		  //printf ("%10.d", k);

		  //printf ("%10.d", Tabuleiro[2][j][k][8]);

		  //printf("Pausar: digite um inteiro parei aqui debugando");

		  //scanf("%d", &b); //recebe um inteiro e armazena na variC!vel b
		  //        printf ("%10.d", Tabuleiro[1][j][k][5]);



		  //          printf("Pausar: digite um inteiro");

		  //scanf("%d", &b); //recebe um inteiro e armazena na variC!vel b



		  if ((j - Tabuleiro[2][14 - j][16 - k][5]) < 1)

		    {

		      minY = 1;



		    }

		  else

		    {

		      minY = 14 - j - Tabuleiro[2][14 - j][16 - k][5];



		    }



		  if ((j + Tabuleiro[2][14 - j][16 - k][5]) > 13)

		    {

		      maxY = 13;

		    }

		  else

		    {

		      maxY = 14 - j + Tabuleiro[2][14 - j][16 - k][5];

		      //    printf ("%10.d", maxY);


		      // printf("Pausar: digite um inteiro");

		      //  scanf("%d", &b); //recebe um inteiro e armazena na variC!vel b


		    }



		  if ((k - Tabuleiro[2][14 - j][16 - k][5]) < 1)

		    {

		      minZ = 1;

		    }

		  else

		    {

		      minZ = 16 - k - Tabuleiro[2][14 - j][16 - k][5];

		    }



		  if ((k + Tabuleiro[2][14 - j][16 - k][5]) > 15)

		    {

		      maxZ = 15;

		    }

		  else

		    {

		      maxZ = 16 - k + Tabuleiro[2][14 - j][16 - k][5];

		    }




		  //printf ("%10.d", 14-j);
		  //printf ("%10.d", 16-k);
		  //printf ("\n");
		  //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%PAREI AQUI DEBUGANDO
		  //printf ("%10.d", Tabuleiro[2][j][k][1]);
		  //printf ("%10.d", Tabuleiro[2][j][k][2]);
		  //printf ("%10.d", Tabuleiro[2][j][k][3]);
		  //printf ("%10.d", Tabuleiro[2][j][k][4]);
		  //printf ("%10.d", Tabuleiro[2][j][k][5]);
		  //printf ("%10.d", Tabuleiro[2][j][k][6]);
		  //printf ("%10.d", Tabuleiro[2][j][k][7]);
		  //printf ("%10.d", Tabuleiro[2][j][k][8]);
		  //printf ("\n");

		  //printf ("%10.d", minY);
		  //printf ("%10.d", maxY);
		  //printf ("%10.d", minZ);
		  //printf ("%10.d", maxZ);
		  // printf("Pausar: digite um inteiro pos ifs");

		  //scanf("%d", &b); //recebe um inteiro e armazena na variC!vel b


		  int PossoAndar = 1;



		  for ((g = minY); (g <= maxY); g++)

		    {

		      for ((h = minZ); (h <= maxZ); h++)

			{
			    
			    
			    /////////////////////////////Refresh do Tabuleiro
			    
			    			        for (int i1 = 1; i1 < 3; i1++)
            
                                        {
                                    
                                          for (int j1 = 1; j1 < 14; j1++)
                                    
                                    	{
                                    
                                    	  for (int k1 = 1; k1 < 16; k1++)
                                    
                                    	    {
                                    	      for (int l1 = 1; l1 < 9; l1++)
                                    
                                    		    {
                                    	        
                                        	        TabuleiroAcerto[i1][j1][k1][l1]=Tabuleiro[i1][j1][k1][l1];
                                    		    }
                                    	 
                                    	 
                                    	    }
                                    	  
                                    	  
                                    	}
                                        }
                        			    
			    ///////////////////////////Fim do Refresh do Tabuleiro
			    
			    
			    

			  if ((Tabuleiro[1][g][h][8] ==2)||(Tabuleiro[1][g][h][8] ==1)||(Tabuleiro[1][g][h][8] ==3))
			    {


			    /*  if ((g > 6) && (h > 6))
				{
				  printf ("%10.d", Tabuleiro[1][g][h][1]);
				  printf ("%10.d", Tabuleiro[1][g][h][2]);
				  printf ("%10.d", Tabuleiro[1][g][h][3]);
				  printf ("%10.d", Tabuleiro[1][g][h][4]);
				  printf ("%10.d", Tabuleiro[1][g][h][5]);
				  printf ("%10.d", Tabuleiro[1][g][h][6]);
				  printf ("%10.d", Tabuleiro[1][g][h][7]);
				  printf ("%10.d", Tabuleiro[1][g][h][8]);

				  printf ("%20.d", g);
				  printf ("%20.d", h);

				  printf ("%20.d", j);
				  printf ("%20.d", k);
				  printf ("\n");
				  printf
				    ("Pausar: digite um inteiro pos ifs");

				  scanf ("%d", &b);	//recebe um inteiro e armazena na variC!vel b
				}*/
			      //Inimigo atacavel Somente Torre

			      int contDano3;
			      if ((Tabuleiro[2][14 - j][16 - k][1] == 1)
				  && ((Tabuleiro[1][g][h][8] == 2)
				      || (Tabuleiro[1][g][h][8] == 3)|| (Tabuleiro[1][g][h][3] == 14)))
				{

				  contDano3=Tabuleiro[1][g][h][4] - Tabuleiro[2][14 -j][16-k][3];
				  Tabuleiro[1][g][h][4] =contDano3;
				  
				  if (Tabuleiro[1][g][h][4] < 1)
				    {

				      Tabuleiro[1][g][h][1] = 0;

				      Tabuleiro[1][g][h][2] = 0;

				      Tabuleiro[1][g][h][3] = 0;

				      Tabuleiro[1][g][h][4] = 0;

				      Tabuleiro[1][g][h][5] = 0;

				      Tabuleiro[1][g][h][6] = g;

				      Tabuleiro[1][g][h][7] = h;

				      Tabuleiro[1][g][h][8] = 4;
				      int PTemp;
			
				      
				      if ((Tabuleiro[1][g][h][8] == 2)||(Tabuleiro[1][g][h][8] == 3)){
					      
					      
                	      contPontuacaoComputador=contPontuacaoComputador+1;
                	      
                	      if (Tabuleiro[1][g][h][8] == 3){
                	          ComputadorMatouORei=2;
                	      }
                	      
         
					  
					      
					  }

				      PossoAndar = PossoAndar - 1;

				      if (Tabuleiro[2][14 - j][16 - k][3] =
					  10)

					{	//Gigante, pois apC3s destruir a Torre, pode partir para outra torre

					  PossoAndar = 1;

					}

				    }
				  else
				    {

				      PossoAndar = PossoAndar + 1;

				    }

				  if (Tabuleiro[2][14 - j][16 - k][3] = 8)
				    {	// Esqueleto Bomba que precisa desaparecer, pois explodiu

				      Tabuleiro[2][14 - j][16 - k][1] = 0;

				      Tabuleiro[2][14 - j][16 - k][2] = 0;

				      Tabuleiro[2][14 - j][16 - k][3] = 0;

				      Tabuleiro[2][14 - j][16 - k][4] = 0;

				      Tabuleiro[2][14 - j][16 - k][5] = 0;

				      Tabuleiro[2][14 - j][16 - k][6] =
					14 - j;

				      Tabuleiro[2][14 - j][16 - k][7] =
					16 - k;

				      Tabuleiro[2][14 - j][16 - k][8] = 4;

				      PossoAndar = 1;



				    }
				}

			      //Inimigo atacavel Somente Tropa

			      if ((Tabuleiro[2][14 - j][16 - k][1] == 2)
				  && ((Tabuleiro[1][g][h][8] == 1)))
				{

				  if ((Tabuleiro[1][g][h][3] == 10)||(Tabuleiro[1][g][h][3] == 8)||(Tabuleiro[1][g][h][3] == 6)||(Tabuleiro[1][g][h][3] == 2)||(Tabuleiro[1][g][h][3] == 4)||(Tabuleiro[1][g][h][3] == 12))

				    {

				     	//Nao ataca construcoes - torres

					  //torres com rei e xbesta



					  Tabuleiro[1][g][h][4] =
					    Tabuleiro[1][g][h][4] -
					    Tabuleiro[2][14 - j][16 - k][3];



					  if (Tabuleiro[1][g][h][4] < 1)
					    {

					      Tabuleiro[1][g][h][1] = 0;

					      Tabuleiro[1][g][h][2] = 0;

					      Tabuleiro[1][g][h][3] = 0;

					      Tabuleiro[1][g][h][4] = 0;

					      Tabuleiro[1][g][h][5] = 0;

					      Tabuleiro[1][g][h][6] = g;

					      Tabuleiro[1][g][h][7] = h;

					      Tabuleiro[1][g][h][8] = 4;



					      //Exercito pode partir para a proxima tropa

					      PossoAndar = PossoAndar - 1;



					    }
					  else
					    PossoAndar + 1;

					

				    }
				  else if (Tabuleiro[1][g][h][3] == 16)
				    {

				      Tabuleiro[1][g][h][1] = 0;

				      Tabuleiro[1][g][h][2] = 0;

				      Tabuleiro[1][g][h][3] = 0;

				      Tabuleiro[1][g][h][4] = 0;

				      Tabuleiro[1][g][h][5] = 0;

				      Tabuleiro[1][g][h][6] = g;

				      Tabuleiro[1][g][h][7] = h;

				      Tabuleiro[1][g][h][8] = 4;

				    }



				  /*

				     if (Tabuleiro[2][g][h][3] = 10) - Gigante

				     if (Tabuleiro[2][g][h][3] = 8) - EsqueletoB

				     if (Tabuleiro[2][g][h][3] = 6) - Cavaleiro

				     if (Tabuleiro[2][g][h][3] = 2) - ExercEsqueleto

				     if (Tabuleiro[2][g][h][3] = 4) - Arqueiras

				     if (Tabuleiro[2][g][h][3] = 12) - Mago

				     if (Tabuleiro[2][g][h][3] = 14) - XBesta

				     if (Tabuleiro[2][g][h][3] = 16) - BoladeFogo

				     if (Tabuleiro[2][g][h][3] = 3) - Torre

				     if (Tabuleiro[2][g][h][3] = 5) - Torre com Rei



				   */







				}

			      //Inimigo atacavel Tropa ou Construcoes

			      if ((Tabuleiro[2][14 - j][16 - k][1] == 3)
				  && ((Tabuleiro[1][g][h][8] == 1)||(Tabuleiro[1][g][h][8] == 2)||(Tabuleiro[1][g][h][8] == 3)))
				{

				  int contDano4;
				  if ((Tabuleiro[1][g][h][3] == 10)||(Tabuleiro[1][g][h][3] == 8)||(Tabuleiro[1][g][h][3] == 6)||(Tabuleiro[1][g][h][3] == 2)||(Tabuleiro[1][g][h][3] == 4)||(Tabuleiro[1][g][h][3] == 12)||(Tabuleiro[1][g][h][3] == 14)||(Tabuleiro[1][g][h][8] == 2)||(Tabuleiro[1][g][h][8] == 3))
				    {

				      // ataca tropa e construcoes - torres

				      //torres com rei e xbesta



				      
				  contDano4=Tabuleiro[1][g][h][4] -	Tabuleiro[2][14 - j][16 - k][3];
				  Tabuleiro[1][g][h][4] =contDano4;
				      


				      if (Tabuleiro[1][g][h][4] < 1)
					{

					  Tabuleiro[1][g][h][1] = 0;

					  Tabuleiro[1][g][h][2] = 0;

					  Tabuleiro[1][g][h][3] = 0;

					  Tabuleiro[1][g][h][4] = 0;

					  Tabuleiro[1][g][h][5] = 0;

					  Tabuleiro[1][g][h][6] = g;

					  Tabuleiro[1][g][h][7] = h;

					  Tabuleiro[1][g][h][8] = 4;
					  int PTemp;

					  
					  if ((Tabuleiro[1][g][h][8] == 2)||(Tabuleiro[1][g][h][8] == 3)){
					      

                	    contPontuacaoComputador=contPontuacaoComputador+1;
                	    
                	    if (Tabuleiro[1][g][h][8] == 3){
                	        ComputadorMatouORei=2;
                	    }
					  
			
					  }

                    


					  //Tropa pode avanC'ar, objetos fixos ficam parados

					  //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

					  PossoAndar = PossoAndar - 1;



					}
				      else
					PossoAndar = PossoAndar + 1;



				    }
				  else if (Tabuleiro[1][g][h][3] == 16)
				    {



				      Tabuleiro[1][g][h][1] = 0;

				      Tabuleiro[1][g][h][2] = 0;

				      Tabuleiro[1][g][h][3] = 0;

				      Tabuleiro[1][g][h][4] = 0;

				      Tabuleiro[1][g][h][5] = 0;

				      Tabuleiro[1][g][h][6] = g;

				      Tabuleiro[1][g][h][7] = h;

				      Tabuleiro[1][g][h][8] = 4;

				    }



				  /*

				     if (Tabuleiro[2][g][h][3] = 10) - Gigante

				     if (Tabuleiro[2][g][h][3] = 8) - EsqueletoB

				     if (Tabuleiro[2][g][h][3] = 6) - Cavaleiro

				     if (Tabuleiro[2][g][h][3] = 2) - ExercEsqueleto

				     if (Tabuleiro[2][g][h][3] = 4) - Arqueiras

				     if (Tabuleiro[2][g][h][3] = 12) - Mago

				     if (Tabuleiro[2][g][h][3] = 14) - XBesta

				     if (Tabuleiro[2][g][h][3] = 16) - BoladeFogo

				     if (Tabuleiro[2][g][h][3] = 3) - Torre

				     if (Tabuleiro[2][g][h][3] = 5) - Torre com Rei



				   */







				}
				
				//Eu sou Torre e posso causar dano 

			      if ((Tabuleiro[2][14 - j][16 - k][3] == 3)
				  && ((Tabuleiro[1][g][h][8] == 1)||(Tabuleiro[1][g][h][8] == 2)||(Tabuleiro[1][g][h][8] == 3)))
				{

				  if ((Tabuleiro[1][g][h][3] == 10)||(Tabuleiro[1][g][h][3] == 8)||(Tabuleiro[1][g][h][3] == 6)||(Tabuleiro[1][g][h][3] == 2)||(Tabuleiro[1][g][h][3] == 4)||(Tabuleiro[1][g][h][3] == 12))
				    {

				      // Torre ataca tropa e construcoes - 




				    Tabuleiro[1][g][h][4] =
					Tabuleiro[1][g][h][4] -
					Tabuleiro[2][14 - j][16 - k][3];



				      if (Tabuleiro[1][g][h][4] < 1)
					{

					  Tabuleiro[1][g][h][1] = 0;

					  Tabuleiro[1][g][h][2] = 0;

					  Tabuleiro[1][g][h][3] = 0;

					  Tabuleiro[1][g][h][4] = 0;

					  Tabuleiro[1][g][h][5] = 0;

					  Tabuleiro[1][g][h][6] = g;

					  Tabuleiro[1][g][h][7] = h;

					  Tabuleiro[1][g][h][8] = 4;

					 
					  




					}
				      else
					PossoAndar = PossoAndar + 1;

				    }

				}

				 //Eu sou Rei e posso causar dano 

			      if ((Tabuleiro[2][14 - j][16 - k][3] == 5)
				  && ((Tabuleiro[1][g][h][8] == 1)||(Tabuleiro[1][g][h][8] == 2)||(Tabuleiro[1][g][h][8] == 3)))
				{

				  if ((Tabuleiro[1][g][h][3] == 10)||(Tabuleiro[1][g][h][3] == 8)||(Tabuleiro[1][g][h][3] == 6)||(Tabuleiro[1][g][h][3] == 2)||(Tabuleiro[1][g][h][3] == 4)||(Tabuleiro[1][g][h][3] == 12))
				    {

				      // Torre ataca tropa e construcoes - 




				    Tabuleiro[1][g][h][4] =
					Tabuleiro[1][g][h][4] -
					Tabuleiro[2][14 - j][16 - k][3];



				      if (Tabuleiro[1][g][h][4] < 1)
					{

					  Tabuleiro[1][g][h][1] = 0;

					  Tabuleiro[1][g][h][2] = 0;

					  Tabuleiro[1][g][h][3] = 0;

					  Tabuleiro[1][g][h][4] = 0;

					  Tabuleiro[1][g][h][5] = 0;

					  Tabuleiro[1][g][h][6] = g;

					  Tabuleiro[1][g][h][7] = h;

					  Tabuleiro[1][g][h][8] = 4;

					 
					  




					}
				      else
					PossoAndar = PossoAndar + 1;



				    }

				}

			    } else {


	                for (int i1 = 1; i1 < 3; i1++)
            
                {
            
                  for (int j1 = 1; j1 < 14; j1++)
            
            	{
            
            	  for (int k1 = 1; k1 < 16; k1++)
            
            	    {
            	      for (int l1 = 1; l1 < 9; l1++)
            
            		    {
            	        
                	        Tabuleiro[i1][j1][k1][l1]=TabuleiroAcerto[i1][j1][k1][l1];
            		    }
            	 
            	 
            	    }
            	  
            	  
            	}
                }

			    }

			}	//Fim do for h


		    }		//Fim do for g









		  /*Sou o Computador, aqui finalizo a descoberta de quem eh o inimigo, no caso o Jogador, verifiquei o alcance, fiz uma varredura de acordo com esse alcance,

		     causando dano nestes inimigos, cartas do jogador */




		  // Aqui a carta do Computador se movimenta



		  int j1 = 14 - j;

		  int k1 = 16 - k;

		  int jTemp = j1;

		  int kTemp = k1;
		  int ob1;
		  int ob2;
		  int ob3;
		  int ob4;
		  int ob5;
		  int ob6;
		  int ob7;
		  int ob8;
			int teste1;
			int teste2;
int MeuAlvoFixo;
                    int yAlea;
                    int zAlea;
                if (k<9){   
                MeuAlvoFixo=random_number (1, 3);
                }
                if(MeuAlvoFixo==1){ // Meu alvo fixo é a Torre com Rei
                    yAlea=7;
                    zAlea=15;
                    
                }
                
                if(MeuAlvoFixo==2){ // Meu alvo fixo é a Torre 1
                    yAlea=4;
                    zAlea=14;
                    
                }
                
                if(MeuAlvoFixo==3){ // Meu alvo fixo é a Torre 2
                    yAlea=4;
                    zAlea=10;
                    
                }


		  if (PossoAndar == 1)
		    {

		      if (Tabuleiro[2][j1][k1][2] != 2)
			{

			  if (Tabuleiro[2][j][k1][1] != 2)
			    {

        
			      if (j1 - yAlea < 1)
				{

				  if (j1 - yAlea == 0)
				    {

				      jTemp = j1;

				    }
				  else
				    jTemp = j1 + 1;

				}
			      else
				jTemp = j1 - 1;



			      if (k1 - zAlea < 1)
				{

				  if (k1 - zAlea == 0)
				    {

				      kTemp = k1;

				    }
				  else
				    kTemp = k1 - 1;

				}
			      else
				kTemp = k1 - 1;



			    }

		      if  ((Tabuleiro[1][jTemp][kTemp][8] != 4)||(Tabuleiro[2][jTemp][kTemp][8] != 4)){
		          if ((jTemp==j1)&&(Tabuleiro[1][j1-1][kTemp][8] != 4)&& (Tabuleiro[2][j1-1][kTemp][8] != 4)){
		              jTemp=j1-1;
		          } else if((jTemp<j1)&&(Tabuleiro[1][j1+1][kTemp][8] != 4)&& (Tabuleiro[2][j1+1][kTemp][8] != 4)){
		              jTemp=j1+1;
		          } else if((jTemp>j)&&(Tabuleiro[1][j1][kTemp][8] != 4)&& (Tabuleiro[2][j1][kTemp][8] != 4)){
		              jTemp=j1;
		          }
		      }

		      if ((Tabuleiro[1][jTemp][kTemp][8] == 4)
			  && (Tabuleiro[2][jTemp][kTemp][8] == 4))
			{
			  ob1 = Tabuleiro[2][j1][k1][1];

			  ob2 = Tabuleiro[2][j1][k1][2];

			  ob3 = Tabuleiro[2][j1][k1][3];

			  ob4 = Tabuleiro[2][j1][k1][4];

			  ob5 = Tabuleiro[2][j1][k1][5];

			  ob6 = jTemp;

			  ob7 = kTemp;

			  ob8 = Tabuleiro[2][j1][k1][8];


			  Tabuleiro[2][jTemp][kTemp][1] = ob1;

			  Tabuleiro[2][jTemp][kTemp][2] = ob2;

			  Tabuleiro[2][jTemp][kTemp][3] = ob3;

			  Tabuleiro[2][jTemp][kTemp][4] = ob4;

			  Tabuleiro[2][jTemp][kTemp][5] = ob5;

			  Tabuleiro[2][jTemp][kTemp][6] = ob6;

			  Tabuleiro[2][jTemp][kTemp][7] = ob7;

			  Tabuleiro[2][jTemp][kTemp][8] = ob8;


			  Tabuleiro[2][j1][k1][1] = 0;

			  Tabuleiro[2][j1][k1][2] = 0;

			  Tabuleiro[2][j1][k1][3] = 0;

			  Tabuleiro[2][j1][k1][4] = 0;

			  Tabuleiro[2][j1][k1][5] = 0;

			  Tabuleiro[2][j1][k1][6] = j1;

			  Tabuleiro[2][j1][k1][7] = k1;

			  Tabuleiro[2][j1][k1][8] = 4;



			}
			}
			

			






		    }






		}
	      // Aqui a carta do Computador se movimentou uma casa ou ficou parado, pois ainda hC! inimigo, ou esta C) sua caracterC-stica



























	    }
              system("tput reset");
              for (int i1 = 1; i1 < 3; i1++)
            
                {
            
                  for (int j1 = 1; j1 < 14; j1++)
            
            	{
            
            	  for (int k1 = 1; k1 < 16; k1++)
            
            	    {
            	      for (int l1 = 1; l1 < 9; l1++)
            
            		    {
            	        
                	        TabuleiroAcerto[i1][j1][k1][l1]=Tabuleiro[i1][j1][k1][l1];
            		    }
            	 
            	 
            	    }
            	  
            	  
            	}
                }
    printf ("\n");    
    printf ("\n");
    printf ("%*s%90s%20s%30s%30s\n", -MAXLETRASLET, "","O Jogador Elixir(es): ","E de Coroa(s): ", "O Computador Elixir(es): ","E de Coroa(s): ");

    Player[l][1].Elixir=contElixirJogador;
    Player[l][2].Elixir=contElixirComputador;
    Player[l][1].Pontuacao=contPontuacaoJogador;
    Player[l][2].Pontuacao=contPontuacaoComputador;
    printf ("%105.d", contElixirJogador);

    printf ("%27.d", contPontuacaoJogador);

    printf ("%23.d", contElixirComputador);

    printf ("%35.d", contPontuacaoComputador);


	  DesenharTabuleiro (Tabuleiro);

	                for (int i1 = 1; i1 < 3; i1++)
            
                {
            
                  for (int j1 = 1; j1 < 14; j1++)
            
            	{
            
            	  for (int k1 = 1; k1 < 16; k1++)
            
            	    {
            	      for (int l1 = 1; l1 < 9; l1++)
            
            		    {
            	        
                	        Tabuleiro[i1][j1][k1][l1]=TabuleiroAcerto[i1][j1][k1][l1];
            		    }
            	 
            	 
            	    }
            	  
            	  
            	}
                }
	  Sleep(2000);
	  // Teste para saber se o tabuleiro foi corrompido
	  //****************************
	  //************************************************************
//*****************debug**************************************
//************************************************************

/*	  printf ("\n\n Tabuleiro do Jogador \n\n");

	  for (int k = 1; k < 8; k++)

	    {

	      for (int j = 1; j < 14; j++)

		{



		  if ((Tabuleiro[1][j][k][8] == 4))

		    {

		      printf ("%*s", -3, "j");

		    }

		  printf ("%10.d", Tabuleiro[1][j][k][1]);
		  printf ("%10.d", Tabuleiro[1][j][k][2]);
		  printf ("%10.d", Tabuleiro[1][j][k][3]);
		  printf ("%10.d", Tabuleiro[1][j][k][4]);
		  printf ("%10.d", Tabuleiro[1][j][k][5]);
		  printf ("%10.d", Tabuleiro[1][j][k][6]);
		  printf ("%10.d", Tabuleiro[1][j][k][7]);
		  printf ("%10.d", Tabuleiro[1][j][k][8]);
		  printf ("\n");


		}

	      printf ("\n");



	    }



	  //Inicia o lado do Comutador

	  for (int k = 8; k < 16; k++)

	    {

	      for (int j = 1; j < 14; j++)

		{



		  if ((Tabuleiro[2][j][k][8] == 4) && (k != 8))

		    {

		      printf ("%*s", -3, "c");

		    }

		  if (k == 8)

		    {

		      printf ("%*s", -3, "---");

		    }
		  printf ("%10.d", Tabuleiro[2][j][k][1]);
		  printf ("%10.d", Tabuleiro[2][j][k][2]);
		  printf ("%10.d", Tabuleiro[2][j][k][3]);
		  printf ("%10.d", Tabuleiro[2][j][k][4]);
		  printf ("%10.d", Tabuleiro[2][j][k][5]);
		  printf ("%10.d", Tabuleiro[2][j][k][6]);
		  printf ("%10.d", Tabuleiro[2][j][k][7]);
		  printf ("%10.d", Tabuleiro[2][j][k][8]);
		  printf ("\n");
		}

	      printf ("\n");

	    }



	  printf ("\n\n Tabuleiro do Computador \n\n");*/
//************************************************************
//*****************debug**************************************
//************************************************************




	}




    
      
      l=l+1;
    }

  //**************************










}






int random_number (int min_num, int max_num)
{

  int result = 0, low_num = 0, hi_num = 0;



  if (min_num < max_num)

    {

      low_num = min_num;

      hi_num = max_num + 1;	// include max_num in output

    }

  else

    {

      low_num = max_num + 1;	// include max_num in output

      hi_num = min_num;

    }



  //srand(time(NULL));

  result = (rand () % (hi_num - low_num)) + low_num;

  return result;

}


#include <stdio.h>

//Trabalho Final de Programacao - Clash Royale em Linguagem C | Programming final project - Clash Royale in C

int numero;
int opcao;

int main()
{
	    printf("\nBem vindo(a) ao CLASH ROYALE em Linguagem C!\n\n");
        printf("MENU:\n\n");
        printf("1- Iniciar!\n");
        printf("2- Informacoes\n");
        printf("3- Sair\n\n");
        printf("Escolha a opcao desejada: ");
        scanf("%d", &numero);
        system("cls");

        if ( (numero>=1) && (numero<=4) ){
				
		switch(numero)
        {
            default:
            printf("MENU:\n\n");
        	printf("1- Iniciar!\n");
        	printf("2- Informacoes\n");
        	printf("3- Placar\n");
        	printf("4- Sair\n\n");
        	printf("Escolha a opcao desejada: ");
        	scanf("%d", &numero);
        	system("cls");	
            			
			case 1:
                system("cls");
                return jogo();
				
            case 2:
                system("cls");
                printf("\nInstrucoes do jogo:\n\n");
                printf("- Ao iniciar o jogo, o jogador tera certo numero de elixir\n e 4 opcoes de cartas aleatorias dentre as 8 descritas para jogar.\n\n");
                printf("- Com a carta adquirida, o jogador devera entao selecionar a posicao no\n tabuleiro que deseja coloca-la. A area vermelha e destinada para as\n posicoes das cartas do computador e a area verde as cartas do jogador.");
                printf("");
                printf("\n\n");
                printf("Desenvolvedores:\n\n");
                printf("- Heloisa Belchior\n");
                printf("- Raphael Motta\n");                
                printf("- Marcos Santos\n");
                printf("- Anne Coutinho\n");
                printf("- Felipe Villas\n");                
                printf("\n\nDigite 0 para voltar ao menu principal! ");
				scanf("%d", &opcao);
				
					if (opcao == 0){
                	system("cls");
                	return main();
				}
				
				do{
					printf("\n\nOpcao Invalida. Digite 0 para voltar ao menu principal! ");
                	scanf("%d", &opcao);}
                
				while (opcao != 0);
								               

				
            case 3:
                system("cls");
                printf("\n\nVoce saira do jogo\n");
                return 0;

            } // Chaves do Switch
    		} // Chaves do If (numero>=1 ou <=4)
    		
    		else {
    			printf("\nEsta opcao e INVALIDA!\n");
    			return main();
			}
            
}
