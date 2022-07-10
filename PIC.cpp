#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <cstdlib>
#include <locale.h>
#include <math.h>


#define PI 3.14159265
#define LIMPAMENS " "
#define ACIMA 72
#define ABAIXO 80
#define ENTER 13
#define ESC 27

FILE *fp;

long chave;
//---------------------------------------------------------------------------------------------------------------------------------
void MENU_PRINCIPAL();
void modo_abrir();
void gotoxy();
void cads();
void excl();
void cad1();
void cad2();
void cad3();
void cad4();
//---------------------------------------------------------------------------------------------------------------------------------

struct registro
{
	float hip, catop, catad, ang;
	long idE;
	char exc;
}reg;

//---------------------------------------------------------------------------------------------------------------------------------
void tela_dados()
{
	gotoxy(30,9);printf("Código:");
	gotoxy(30,10);printf("Cateto adjacente:");
	gotoxy(30,11);printf("Cateto oposto:");
	gotoxy(30,12);printf("Hipotenusa:");
	gotoxy(30,13);printf("Ângulo:");
}

//---------------------------------------------------------------------------------------------------------------------------------

void mostra_dados()
{
	gotoxy(37,9);printf("%d",reg.idE);
	gotoxy(48,10);printf("%.2f",reg.catad);
	gotoxy(45,11);printf("%.2f",reg.catop);
	gotoxy(42,12);printf("%.2f",reg.hip);
	gotoxy(38,13);printf("%.2f graus",reg.ang);
}

//---------------------------------------------------------------------------------------------------------------------------------

void bv()
{
	gotoxy(10,4);printf("Boas vindas ao Sistema de resolução do Trigonomentron!");
	gotoxy(50,15);printf("Aguarde");
	int x=0;;
// 50,16
// 47,17
// 45,18
// 44,19
// 45,20
// 47,21
// 50,22
// 53,21
// 55,20
// 56,19
// 55,18
// 53,17
// 50,16
//da 27 até a 50 o triângulo
	gotoxy(10,30);printf("|`                             ");
	gotoxy(10,31);printf("| `                            ");
	gotoxy(10,32);printf("|  `                           ");
	gotoxy(10,33);printf("|   `                          ");
	gotoxy(10,34);printf("|    `                         ");
	gotoxy(10,35);printf("|     `                        ");
	gotoxy(10,36);printf("|      `                       ");
	gotoxy(10,37);printf("|       `                      ");
	gotoxy(10,38);printf("|        `                     ");
	gotoxy(10,39);printf("|         `                    ");
	gotoxy(10,40);printf("|          `                   ");
	gotoxy(10,41);printf("|           `                  ");
	gotoxy(10,42);printf("|            `                 ");
	gotoxy(10,43);printf("|             `                ");
	gotoxy(10,44);printf("|              `               ");
	gotoxy(10,45);printf("|               `              ");
	gotoxy(10,46);printf("|                `             ");
	gotoxy(10,47);printf("|_____            `            ");
	gotoxy(10,48);printf("|     |            `           ");
	gotoxy(10,49);printf("|  @  |             `          ");
	gotoxy(10,50);printf("|_____|_______________         ");
	
	for(int i=0;i<4;i++)
	{
		gotoxy(50,16);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(50,16);printf(" ");
		gotoxy(53,17);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(53,17);printf(" ");
		gotoxy(55,18);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(55,18);printf(" ");
		gotoxy(56,19);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(56,19);printf(" ");
		gotoxy(55,20);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(55,20);printf(" ");
		gotoxy(53,21);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(53,21);printf(" ");
		gotoxy(50,22);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(50,22);printf(" ");
		gotoxy(47,21);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(47,21);printf(" ");
		gotoxy(45,20);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(45,20);printf(" ");
		gotoxy(44,19);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(44,19);printf(" ");
		gotoxy(45,18);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(45,18);printf(" ");
		gotoxy(47,17);printf("*");
		x+=2;
		gotoxy(44,24); printf("(%d porcento completo)",x);
		Sleep(100);
		gotoxy(47,17);printf(" ");
	}
	x+=2;
	gotoxy(44,24); printf("(%d porcento completo)",x);
	Sleep(500);
	gotoxy(45,25); printf("Error 404: Fatal Error");
	Sleep(1000);
	gotoxy(45,26); printf("É mentira kkk");
	Sleep(2000);
	gotoxy(45,25); printf("                      ");
	gotoxy(45,26); printf("                                        ");
	x+=2;
	gotoxy(44,24); printf("(%d porcento completo)",x);
	Sleep(500);
	gotoxy(58,15);
	printf(". ");
	Sleep(1000);
	printf(". ");
	Sleep(1000);
	printf(". ");
	Sleep(1000);
	gotoxy(50,15);printf("             ");
	gotoxy(44,24); printf("                       ",x);
	gotoxy(10,6);printf("Pressione uma tecla para continuar   ");
	getch();
}
//---------------------------------------------------------------------------------------------------------------------------------

void modo_abrir(const char modo[])
{
	if((fp = fopen("reg.bin",modo)) == NULL)
	{
		system("cls");
		gotoxy(18,11);printf("Erro na abertura do arquivo");
		 exit(1);
	}
}

//---------------------------------------------------------------------------------------------------------------------------------

void gotoxy( int x, int y )
{
	COORD coord;
	coord.X = (short)x;
	coord.Y = (short)y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//---------------------------------------------------------------------------------------------------------------------------------

void tabela_dados()  //Imprime tabela de consulta 
{
	gotoxy(2,2); printf("________________________________________________________________________________________________________");
	gotoxy(2,3); printf("| Código |   Hipotenusa    | Cateto oposto |   Cateto adjacente   | Ângulo formado (entre hipotenusa e |");
	gotoxy(2,4); printf("|        |                 |               |                      |            cateto adjacente)       |");
	gotoxy(2,5); printf("|--------|-----------------|---------------|----------------------|------------------------------------|");
	gotoxy(2,6); printf("|        |                 |               |                      |                                    |");
	gotoxy(2,7); printf("|        |                 |               |                      |                                    |");
	gotoxy(2,8); printf("|        |                 |               |                      |                                    |");
	gotoxy(2,9); printf("|        |                 |               |                      |                                    |");
	gotoxy(2,10);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,11);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,12);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,13);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,14);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,15);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,16);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,17);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,18);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,19);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,20);printf("|        |                 |               |                      |                                    |");
	gotoxy(2,21);printf("|________|_________________|_______________|______________________|____________________________________|");
}

//---------------------------------------------------------------------------------------------------------------------------------

void bt()
{
	modo_abrir("rb");
	int x=0;
	int lin=6;
	char R;
	rewind(fp);
	system("cls");
	tabela_dados();
	while( !feof(fp) )
	{
		if(fread(&reg, sizeof(reg), 1, fp) == 1 && reg.exc == 'n') 
		{
			if(lin>19)
			{
				//Qualquer tecla p/ cpntinuar;"ESC" SAIR
				R=getche();
				if(R==27)
					break;
				lin=6;
				system("cls");
				tabela_dados();
				//monta tela de novo
			}
			gotoxy(4,lin);printf("%d",reg.idE);
			gotoxy(13,lin);printf("%.2f",reg.hip);
			gotoxy(31,lin);printf("%.2f",reg.catop);
			gotoxy(46,lin);printf("%.2f",reg.catad);
			gotoxy(69,lin);printf("%.2f graus",reg.ang);
			lin++;
		}
			gotoxy(1,30);printf("Pressione uma tecla para continuar.");
	}
	
	fclose(fp);
	getch();
}

//---------------------------------------------------------------------------------------------------------------------------------

void sob()
{
	int tecla;
	system("cls");
	gotoxy(24,5);printf("__________________SOBRE__________________");
	gotoxy(24,6);printf("| Trabalho feito por:                    |");
	gotoxy(24,7);printf("| Cesar Sampaio Gomes                    |");
	gotoxy(24,8);printf("|  --Programa para o PIC (2019/2020)--   |");
	gotoxy(24,9);printf("| Turma: 71C (informática noturno)->2019 |");
	gotoxy(24,10);printf("|             CTI 2019/2020              |");
	gotoxy(24,11);printf("| Voltar ao menu principal (ESC ou ENTER)|");
	for(int i=24;i<66;i++)
	{
		gotoxy(i,12);printf("-");
	}
	tecla=getch();
	if(tecla!=ESC && tecla!=ENTER)
	{
		sob();
	}
	else MENU_PRINCIPAL();
	
}

//---------------------------------------------------------------------------------------------------------------------------------

float calc_hip()
{
	float aux_catop, aux_catad;
	float aux_hip;
	float S;
	float S2;
	aux_catop=reg.catop;
	aux_catad=reg.catad;
	S=(pow(aux_catop,2))+(pow(aux_catad,2));
	S2=sqrt(S);
	aux_hip=S2;
	return aux_hip;
}

//---------------------------------------------------------------------------------------------------------------------------------

float calc_catop()
{
	float aux_catop, aux_catad;
	float aux_hip;
	float S;
	float S2;
	float S3;
	aux_hip=reg.hip;
	aux_catad=reg.catad;
	
	S=pow(aux_hip,2);
	S2=pow(aux_catad,2);
	S3=S-S2;	
	aux_catop=sqrt(S3);
	return aux_catop;
}

//---------------------------------------------------------------------------------------------------------------------------------

float calc_catad()
{
	float aux_catop, aux_catad;
	float aux_hip;
	float S;
	float S2;
	float S3;
	aux_hip=reg.hip;
	aux_catop=reg.catop;
	
	S=pow(aux_hip,2);
	S2=pow(aux_catop,2);
	S3=S-S2;
	aux_catad=sqrt(S3);
	
	return aux_catad;
}

//---------------------------------------------------------------------------------------------------------------------------------

float calc_catop1()
{
	float aux_ang, aux_catad;
	aux_ang=reg.ang;
	aux_catad=reg.catad;
	float S;
	float S2;
	S=tan(aux_ang*PI/180);
	S2=S*aux_catad;
	return S2;
}

//---------------------------------------------------------------------------------------------------------------------------------

float calc_hip1()
{
	
	float aux_ang, aux_catad;
	aux_ang=reg.ang;
	aux_catad=reg.catad;
	float S;
	float S2;
	
	S=cos(aux_ang*PI/180);
	S2=aux_catad/S;
	
	return S2;
	
}

//---------------------------------------------------------------------------------------------------------------------------------

float comparasin()
{
	float S;
	S=reg.catop/reg.hip;
	if(S>= 0 && S<0.017)
	{
		reg.ang=0;
	}
	else if(S>=0.017 && S<0.035)
	{
		reg.ang=1;
	}
	else if(S>=0.035 && S<0.052)
	{
		reg.ang=2;
	}
	else if(S>=0.052 && S<0.07)
	{
		reg.ang=3;
	}
	else if(S>=0.07 && S<0.087)
	{
		reg.ang=4;
	}
	else if(S>=0.087 && S<0.105)
	{
		reg.ang=5;
	}
	else if(S>=0.105 && S<0.122)
	{
		reg.ang=6;
	}
	else if(S>=0.122 && S<0.139)
	{
		reg.ang=7;
	}
	else if(S>=0.139 && S<0.156)
	{
		reg.ang=8;
	}
	else if(S>=0.156 && S<0.174)
	{
		reg.ang=9;
	}
	else if(S>=0.174 && S<0.191)
	{
		reg.ang=10;
	}
	else if(S>=0.191 && S<0.208)
	{
		reg.ang=11;
	}
	else if(S>=0.208 && S<0.225)
	{
		reg.ang=12;
	}
	else if(S>=0.225 && S<0.249)
	{
		reg.ang=13;
	}
	else if(S>=0.249 && S<0.259)
	{
		reg.ang=14;
	}
	else if(S>=0.259 && S<0.276)
	{
		reg.ang=15;
	}
	else if(S>=0.276 && S<0.292)
	{
		reg.ang=16;
	}
	else if(S>=0.292 && S<0.309)
	{
		reg.ang=17;
	}
	else if(S>=0.309 && S<0.326)
	{
		reg.ang=18;
	}
	else if(S>=0.326 && S<0.342)
	{
		reg.ang=19;
	}
	else if(S>=0.342 && S<0.358)
	{
		reg.ang=20;
	}
	else if(S>=0.358 && S<0.375)
	{
		reg.ang=21;
	}
	else if(S>=0.375 && S<0.391)
	{
		reg.ang=22;
	}
	else if(S>=0.391 && S<0.407)
	{
		reg.ang=23;
	}
	else if(S>=0.407 && S<0.423)
	{
		reg.ang=24;
	}
	else if(S>=0.423 && S<0.438)
	{
		reg.ang=25;
	}
	else if(S>=0.438 && S<0.454)
	{
		reg.ang=26;
	}
	else if(S>=0.454 && S<0.469)
	{
		reg.ang=27;
	}
	else if(S>=0.469 && S<0.485)
	{
		reg.ang=28;
	}
	else if(S>=0.485 && S<0.5)
	{
		reg.ang=29;
	}
	else if(S>=0.5 && S<0.515)
	{
		reg.ang=30;
	}
	else if(S>=0.515 && S<0.53)
	{
		reg.ang=31;
	}
	else if(S>=0.53 && S<0.545)
	{
		reg.ang=32;
	}
	else if(S>=0.545 && S<0.559)
	{
		reg.ang=33;
	}
	else if(S>=0.559 && S<0.574)
	{
		reg.ang=34;
	}
	else if(S>=0.574 && S<0.588)
	{
		reg.ang=35;
	}
	else if(S>=0.588 && S<0.602)
	{
		reg.ang=36;
	}
	else if(S>=0.602 && S<0.616)
	{
		reg.ang=37;
	}
	else if(S>=0.616 && S<0.629)
	{
		reg.ang=38;
	}
	else if(S>=0.629 && S<0.643)
	{
		reg.ang=39;
	}
	else if(S>=0.643 && S<0.656)
	{
		reg.ang=40;
	}
	else if(S>=0.656 && S<0.669)
	{
		reg.ang=41;
	}
	else if(S>=0.669 && S<0.682)
	{
		reg.ang=42;
	}
	else if(S>=0.682 && S<0.695)
	{
		reg.ang=43;
	}
	else if(S>=0.695 && S<0.707)
	{
		reg.ang=44;
	}
	else if(S>=0.707 && S<0.719)
	{
		reg.ang=45;
	}
	else if(S>=0.719 && S<0.731)
	{
		reg.ang=46;
	}
	else if(S>=0.731 && S<0.734)
	{
		reg.ang=47;
	}
	else if(S>=0.734 && S<0.755)
	{
		reg.ang=48;
	}
	else if(S>=0.755 && S<0.766)
	{
		reg.ang=49;
	}
	else if(S>=0.766 && S<0.777)
	{
		reg.ang=50;
	}
	else if(S>=0.777 && S<0.788)
	{
		reg.ang=51;
	}
	else if(S>=0.788 && S<0.799)
	{
		reg.ang=52;
	}
	else if(S>=0.799 && S<0.809)
	{
		reg.ang=53;
	}
	else if(S>=0.809 && S<0.819)
	{
		reg.ang=54;
	}
	else if(S>=0.819 && S<0.829)
	{
		reg.ang=55;
	}
	else if(S>=0.829 && S<0.839)
	{
		reg.ang=56;
	}
	else if(S>=0.839 && S<0.848)
	{
		reg.ang=57;
	}
	else if(S>=0.848 && S<0.857)
	{
		reg.ang=58;
	}
	else if(S>=0.857 && S<0.866)
	{
		reg.ang=59;
	}
	else if(S>=0.866 && S<0.875)
	{
		reg.ang=60;
	}
	else if(S>=0.875 && S<0.883)
	{
		reg.ang=61;
	}
	else if(S>=0.883 && S<0.891)
	{
		reg.ang=62;
	}
	else if(S>=0.891 && S<0.899)
	{
		reg.ang=63;
	}
	else if(S>=0.899 && S<0.906)
	{
		reg.ang=64;
	}
	else if(S>=0.906 && S<0.914)
	{
		reg.ang=65;
	}
	else if(S>=0.914 && S<0.921)
	{
		reg.ang=66;
	}
	else if(S>=0.921 && S<0.927)
	{
		reg.ang=67;
	}
	else if(S>=0.927 && S<0.934)
	{
		reg.ang=68;
	}
	else if(S>=0.934 && S<0.94)
	{
		reg.ang=69;
	}
	else if(S>=0.94 && S<0.946)
	{
		reg.ang=70;
	}
	else if(S>=0.946 && S<0.951)
	{
		reg.ang=71;
	}
	else if(S>=0.951 && S<0.956)
	{
		reg.ang=72;
	}
	else if(S>=0.956 && S<0.961)
	{
		reg.ang=73;
	}
	else if(S>=0.961 && S<0.966)
	{
		reg.ang=74;
	}
	else if(S>=0.966 && S<0.97)
	{
		reg.ang=75;
	}
	else if(S>=0.97 && S<0.974)
	{
		reg.ang=76;
	}
	else if(S>=0.974 && S<0.978)
	{
		reg.ang=77;
	}
	else if(S>=0.978 && S<0.982)
	{
		reg.ang=78;
	}
	else if(S>=0.982 && S<0.985)
	{
		reg.ang=79;
	}
	else if(S>=0.985 && S<0.988)
	{
		reg.ang=80;
	}
	else if(S>=0.988 && S<0.99)
	{
		reg.ang=81;
	}
	else if(S>=0.99 && S<0.993)
	{
		reg.ang=82;
	}
	else if(S>=0.993 && S<0.995)
	{
		reg.ang=83;
	}
	else if(S>=0.995 && S<0.996)
	{
		reg.ang=84;
	}
	else if(S>=0.996 && S<0.998)
	{
		reg.ang=85;
	}
	else if(S>=0.998 && S<0.999)
	{
		reg.ang=86;
	}
	else if(S>=0.999)
	{
		reg.ang=88;
	}
}

//---------------------------------------------------------------------------------------------------------------------------------

void  gerar_cod()
{
	chave=0;
	rewind(fp);
	if(feof(fp))
	{
		chave=1;//global
	}
	else
	{
		while(fread(&reg,sizeof(reg),1,fp)==1);
		chave=reg.idE+1;
	}
}

//---------------------------------------------------------------------------------------------------------------------------------

void salvar_dados()
{
	char conf;
	gotoxy(15,15);printf("Confirmar os dados para gravação ? (S/N): ");
	do
	 {
		 gotoxy(61,22); conf = getche();
	 }while( conf != 's' && conf != 'S' && conf != 'n' && conf != 'N' );
	if(conf == 's' || conf == 'S')
	{
		if(fwrite(&reg, sizeof(registro), 1, fp) != 1) /* Escreve a estrutura no arquivo */
		{
			 gotoxy(18,16);printf("Erro na escrita do arquivo");
		}
		else
		{
			 fflush( fp );//descarrega o buffer no disco
			gotoxy(18,16);printf("Dados salvos com sucesso!");
			chave++;
		}
		getch();
	}
	
}
//---------------------------------------------------------------------------------------------------------------------------------
void cad()
{
	system("cls");
	int aux;
	int posicao = 6;
	int tecla;
	do{
		do{
			system("cls");
			gotoxy(24,5);printf(" __________Com quais medidas?__________ ");
			gotoxy(24,6);printf("|Cateto adjacente e cateto oposto      |");
			gotoxy(24,7);printf("|Cateto adjacente e hipotenusa         |");
			gotoxy(24,8);printf("|Hipotenusa e cateto oposto            |");
			gotoxy(24,9);printf("|Ângulo do adjacente e cateto adjacente|");
			
			for(int i=24;i<64;i++)
			{
				gotoxy(i,10);printf("-");
			}
			gotoxy(24,12);printf("| Voltar ao menu principal: ESC|");
			gotoxy(18,posicao);printf("->->");gotoxy(66,posicao);printf("<-<-");
			tecla=getch();
			if(tecla == ABAIXO)
			{
				posicao+=1;
				if(posicao==10)
				{
					posicao=6;
				}
			}
			if(tecla==ESC)
			{
				return;
			}
			if (tecla == ACIMA)
			{
				posicao=posicao-1;
				if(posicao==5)
				{
					posicao=9;
				}
			}
		}while(tecla!=ENTER);
		
		if (tecla == ENTER)
		{
			if (posicao==6)
			{
				modo_abrir("ab+");
				gerar_cod();
				system("cls");
				cad1();
			}
			else if(posicao==7)
			{
				modo_abrir("ab+");
				gerar_cod();
				system("cls");
				cad2();
			}

			else if(posicao==8)
			{
				modo_abrir("ab+");
				gerar_cod();
				system("cls");
				cad3();
			}
			else if(posicao==9)
			{
				modo_abrir("ab+");
				gerar_cod();
				system("cls");
				cad4();
			}
		}
	}while(true);
}
//---------------------------------------------------------------------------------------------------------------------------------

void cad1()
{
	system("cls");
	reg.idE=chave;
	int tecla=0;
	tela_dados();
	gotoxy(30,9);printf("        ");
	gotoxy(30,3);printf("MEDIDA DOS LADOS");
	gotoxy(10,4);printf("Código: %d",reg.idE);
	gotoxy(26,6);printf("Digite 0 para sair (durante a escolha do cateto adjacente)");

	do
	{
		
		gotoxy(47,10);scanf("%f",&reg.catad);
		if(reg.catad==0.0)
		{	
			return;
		}
	}while(reg.catad==0.0);
	do
	{
		gotoxy(45,11);scanf("%f",&reg.catop);
		if(reg.catop==0.0)
		{
			gotoxy(10,8);printf("Medida inválida");
			gotoxy(26,7);	printf("                                                    ");
		}
	}while(reg.catop==0.0);
	
/*	do
	{
		gotoxy(42,12);scanf("%f",&reg.hip);
		if(reg.hip==0.0)
		{
			printf("Medida inválida");
			gotoxy(20,9);printf("                                                    ");
		}
	}while(reg.hip==0.0);	*/
	
	reg.hip=calc_hip();
	comparasin();
	gotoxy(38,13);printf("%.2f",reg.ang);
	gotoxy(42,12);printf("%.2f",reg.hip);
	reg.exc='n';
	salvar_dados();
	fflush(stdin);
}

//---------------------------------------------------------------------------------------------------------------------------------

void cad2()
{
	system("cls");
	reg.idE=chave;
	int tecla=0;
	tela_dados();
	gotoxy(30,9);printf("        ");
	gotoxy(30,3);printf("MEDIDA DOS LADOS");
	gotoxy(10,4);printf("Código: %d",reg.idE);
	gotoxy(26,6);printf("Digite 0 para sair (durante a escolha do cateto adjacente)");

	do
	{
		
		gotoxy(47,10);scanf("%f",&reg.catad);
		if(reg.catad==0.0)
		{	
			return;
		}
	}while(reg.catad==0.0);
/*	do
	{
		gotoxy(45,11);scanf("%f",&reg.catop);
		if(reg.catop==0.0)
		{
			gotoxy(10,8);printf("Medida inválida");
			gotoxy(26,7);	printf("                                                    ");
		}
	}while(reg.catop==0.0); */
	
	do
	{
		gotoxy(42,12);scanf("%f",&reg.hip);
		if(reg.hip==0.0)
		{
			printf("Medida inválida");
			gotoxy(20,9);printf("                                                    ");
		}
	}while(reg.hip==0.0);
	
	reg.catop=calc_catop();
	comparasin();
	gotoxy(38,13);printf("%.2f",reg.ang);
	gotoxy(45,11);printf("%.2f",reg.catop);
	reg.exc='n';
	salvar_dados();
	fflush(stdin);
}

//---------------------------------------------------------------------------------------------------------------------------------

void cad3()
{
	system("cls");
	reg.idE=chave;
	int tecla=0;
	tela_dados();
	gotoxy(30,9);printf("        ");
	gotoxy(30,3);printf("MEDIDA DOS LADOS");
	gotoxy(10,4);printf("Código: %d",reg.idE);
	gotoxy(26,6);printf("Digite 0 para sair (durante a escolha do cateto oposto)");

/*	do
	{
		gotoxy(47,10);scanf("%f",&reg.catad);
		if(reg.catad==0.0)
		{	
			return;
		}
	}while(reg.catad==0.0); */
	do
	{
		gotoxy(45,11);scanf("%f",&reg.catop);
		if(reg.catop==0.0)
		{
			return;
		}
	}while(reg.catop==0.0);
	
	do
	{
		gotoxy(42,12);scanf("%f",&reg.hip);
		if(reg.hip==0.0)
		{
			printf("Medida inválida");
			gotoxy(20,9);printf("                                                    ");
		}
	}while(reg.hip==0.0);
	
	reg.catad=calc_catad();
	comparasin();
	gotoxy(38,13);printf("%.2f",reg.ang);
	gotoxy(47,10);printf("%.2f",reg.catad);
	reg.exc='n';
	salvar_dados();
	fflush(stdin);
}

//---------------------------------------------------------------------------------------------------------------------------------

void cad4()
{
	system("cls");
	reg.idE=chave;
	int tecla=0;
	tela_dados();
	gotoxy(30,9);printf("        ");
	gotoxy(30,3);printf("MEDIDA DOS LADOS");
	gotoxy(10,4);printf("Código: %d",reg.idE);
	gotoxy(26,6);printf("Digite 0 para sair (durante a escolha do cateto adjacente)");

	do
	{
		
		gotoxy(47,10);scanf("%f",&reg.catad);
		if(reg.catad==0.0)
		{	
			return;
		}
	}while(reg.catad==0.0);
	
	do
	{
		gotoxy(38,13);scanf("%f",&reg.ang);
		if(reg.hip==0.0)
		{
			printf("Medida inválida");
			gotoxy(20,9);printf("                                                    ");
		}
	}while(reg.hip==0.0);
	
	reg.catop=calc_catop1();
	reg.hip=calc_hip1();
	gotoxy(45,11);printf("%.2f",reg.catop);
	gotoxy(42,12);printf("%.2f",reg.hip);
	reg.exc='n';
	salvar_dados();
	fflush(stdin);
}

//---------------------------------------------------------------------------------------------------------------------------------

void excl()
{
	int aux_codigo,F;
	long fposicao;
	char conf;
	gotoxy(15,3);printf("EXCLUSÃO DE UM TRIÂNGULO");
    gotoxy(20,6); printf("Digite o código a ser excluído(digite 0 para sair): ");
    scanf("%d", &aux_codigo );
    if(aux_codigo == 0)
	{
		system("cls");
		gotoxy(20,28);printf("Obrigado por utilizar nosso sistema!! ");
		getch();
		return;
	}
    F = 0;
    do
    {
		fread(&reg,sizeof(reg),1,fp);
		if ( reg.idE == aux_codigo && reg.exc=='n')//SOMENTE SE NÃO FOI EXCLUIDO	
		{
	   		F = 1;
	   		fposicao = ftell(fp); //guarda a posição do registro atual do arquivo
	   		mostra_dados();
	   		tela_dados();
	   		 gotoxy(25,25); printf("Deseja mesmo excluir estes dados? (S/N): ");
	   		 do
		   	{
				gotoxy(65,25); conf = getche();
		   	
		    }while( conf != 's' && conf != 'S' && conf != 'n' && conf != 'N' );
			if( conf == 'n' || conf =='N')
			{
				system("cls");
				return;
			}

		   	if( conf == 's' || conf == 'S' )
		   	{
		   		//posiciona o ponteiro do arquivo no registro alterado
		   		fseek (fp,fposicao-(sizeof(reg)),SEEK_SET);
				reg.exc='s';//em stdio.h
				fwrite (&reg,sizeof(reg),1,fp);
					// fposicao-(sizeof(agenda) significa:
					//   >> fposicao: contem a posição onde começa o próximo registro.
					//   >> sizeof(agenda): contem o tamanho total em bytes do registro.
					//   >> A subtração (-) entre eles significa reposicionar o ponteiro no 
					//      início do registro anterior que é onde se deseja alterar.
					//SEEK_SET indica o início do arquivo			
				fflush (fp);
		   	}
		}
	} while ((!F) && (!feof(fp))); //enquanto F for diferente de 1 e não for o fim do arquivo
	if (F==0)
	{
		gotoxy(18,15);printf("_______Código não encontrado_______");
		getch();
	} 	
}

//---------------------------------------------------------------------------------------------------------------------------------
void cads()
{
	system("cls");
	int aux;
	int posicao = 6;
	int tecla;
	do{
		do{
			system("cls");
			gotoxy(24,5);printf(" _________Você deseja:_________ ");
			gotoxy(24,6);printf("|Fazer um novo triângulo       |");
			gotoxy(24,7);printf("|Excluir registro              |");
			for(int i=24;i<56;i++)
			{
				gotoxy(i,8);printf("-");
			}
			gotoxy(24,10);printf("| Voltar ao menu principal: ESC|");
			gotoxy(18,posicao);printf("->->");gotoxy(57,posicao);printf("<-<-");
			tecla=getch();
			if(tecla == ABAIXO)
			{
				posicao+=1;
				if(posicao==8)
				{
					posicao=6;
				}
			}
			if(tecla==ESC)
			{
				return;
			}
			if (tecla == ACIMA)
			{
				posicao=posicao-1;
				if(posicao==5)
				{
					posicao=7;
				}
			}
		}while(tecla!=ENTER);
		
		if (tecla == ENTER)
		{
			if (posicao==6)
			{
				cad();
			}
			else if(posicao==7)
			{
				modo_abrir("rb+");
				system("cls");
				excl();
			}
		}
	}while(true);
}
//---------------------------------------------------------------------------------------------------------------------------------

void MENU_PRINCIPAL()
{
	int aux;
	int posicao = 6, tecla;
	do{ 
		do{
			system("cls");
			gotoxy(24,5);printf("____________MENU____________");
			gotoxy(24,6);printf("| Pesquisar triângulos feitos  |");
			gotoxy(24,7);printf("| Cadastrar/Excluir registros  |");
			gotoxy(24,8);printf("| Informações do sistema       |");
			gotoxy(24,9);printf("| Fechar Programa              |");
			for(int i=24;i<52;i++)
			{
				gotoxy(i,10);printf("-");
			}
			gotoxy(20,posicao);printf("->->");gotoxy(56,posicao);printf("<-<-");
			tecla=getch();
			if(tecla == ABAIXO)
			{
				posicao=posicao+1;
			if(posicao==10)
			{
				posicao=6;
			}
		
			}
			if (tecla == ACIMA)
			{
				posicao=posicao-1;
				if(posicao==5)
				{
					posicao=9;
				}
		
			}
		
		}while(tecla!= ENTER);
		
		if(posicao==9)
		{
			exit(0);
		}
		else if(posicao==6)
		{
			bt();
		}
		
		else if(posicao==7)
		{
			cads();
		}
		
		else if(posicao==8)
		{
			sob();
		}
	}while(true);
	
}

//---------------------------------------------------------------------------------------------------------------------------------

main()
{
	system("mode con:cols=110 lines=55");
	setlocale(LC_ALL,"");
	system("color 87");
//	bv();
	system("color 4F");
	MENU_PRINCIPAL();
}
