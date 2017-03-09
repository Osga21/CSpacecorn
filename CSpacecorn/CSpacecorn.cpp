// CSpacecorn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include <string.h>
#include <windows.h>

void level1start();	//beg in original
void housentrance();	//enter in original
void househall();
void househallright();		//househallr in original
void wallclose();	//wallclose1 
void upyourass();
void pokeball();
void dungeon();	//dungeon1
void sit();	//housesit1
void tv();	//tv1
void porn();	//porno1
void stairs(); //housestair1
void office();//office1
void level2start(); //lvl2
void mineshaft(); //mine
void mineshaftleft(); //mineleft
void youshallnotpass();
void mineshaftright();//mineright
void cell1();
void cell2();
void cell3();
void cell4();
void cell5();
void lever();//lever1
void fight();//fight1
void rest();
void restrictrun();//run1
void sewers(); //sewers1
void sewersend();//sewers2
void keepgoing(); //keepgoing1
void magicpowers();
void level3start();//level3
void villagefind(); //vswc
void villageenter(); //vswc2
void villagefight(); //vswcfight
void tree(); //vswctree
void zombievillage();//vzdwbr
void zvillageenter();//vzdwbr2
void zvillagetalk(); //vzdwbrtalk
void plans(); //evilplans
void promptrocket();//bfrocket
void rocket();
void level4start();//lvl4
void planet();
void fap();
void marrada(); //marradanoscornos
void fin(); //end
void death1();
void death2();
void death3();
void death4();
void credits();
void quit();
void quitnag();
int stringcompare(char a[], char b[]);
void asciiprint(FILE *fptr);
void SetColor(int ForgC);
void save(int level);


void main()
{
	system("mode con:cols=80 lines=38"); //sets window size
	char *filename = "art.fab";
	FILE *fptr = NULL;

	if ((fptr = fopen(filename, "r")) == NULL)
	{
		perror("Error");
	}
	asciiprint(fptr);

	fclose(fptr);
	printf("\t|-------------------------Main Menu---------------------------|\n");
	printf("\t|                                                             |\n");
	printf("\t|                           1) Play                           |\n");
	printf("\t|                            2) Password                      |\n");
	printf("\t|                             3) Credits                      |\n");
	printf("\t|                              4) Options                     | \n");
	printf("\t|                               5) Load                       |        \n");
	printf("\t|                                6) Quit                      |        \n");
	printf("\t|                                                             |\n");
	printf("\t|-------------------------------------------------------------|\n");
	char escolha[100];
	gets_s(escolha);
	if (strcmp(escolha, "play") == 0|| strcmp(escolha, "1")==0)
	{
		level1start();
	}
	if (strcmp(escolha, "password") == 0 || strcmp(escolha, "2") == 0)
	{
		char password[100];
		gets_s(password);
		if (strcmp(password, "ilrdj87imwa") == 0)
		{
			level2start();
		}
		if (strcmp(password, "valveisevil") == 0)
		{
			level3start();
		}
		if (strcmp(password, "originsucksmajorballs") == 0)
		{
			level4start();
		}
		else
		{
			system("cls");
			printf("\n \"%s\" isn't a valid password.\n\n", escolha);
			system("pause");
			main();
		}
	}
	if (strcmp(escolha, "credits") == 0 || strcmp(escolha, "3") == 0)
	{
		credits();
	}
	if (strcmp(escolha, "options") == 0 || strcmp(escolha, "4") == 0)
	{
		char *filename = "textcolor.fab";
		FILE *fptr = NULL;
		if ((fptr = fopen(filename, "r")) == NULL)
		{
			perror("Error");
		}

		system("cls");
		printf("Pick a color, any color!\n\n");
		asciiprint(fptr);

		int cor = 0;
		scanf("%d",&cor);
		SetColor(cor);

	}
	if (strcmp(escolha, "quit") == 0 || strcmp(escolha, "6") == 0)
	{
		quit();
	}
	if (strcmp(escolha, "load") == 0 || strcmp(escolha, "5") == 0)
	{
		FILE *savefile;
		savefile = fopen("sav.fab", "r");
		int setlevel=0;
		if (savefile == NULL)
		{
			perror("Failed: ");
		}
		else
		{
			printf("%d", setlevel);

			fscanf(savefile, "%d", setlevel);

			fclose(savefile);

		}
		switch (setlevel) 
			{
				case 2: {level2start(); break; }
				case 3:{level3start(); break; }
				case 4:{level4start(); break; }
			}
	}

	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		main();
	}

	}


void level1start()
	{
		system("cls");
		printf(" You wake up in strange planet, your journey was a success.\n");
		printf(" Your horn is damaged, you encounter yourself surrounded by\n");
		printf(" barbed wire, guarding a house.\n");
		printf(" What will you do? (enter/suicide) " );
		char escolha[100];
		gets_s(escolha);

		if (strcmp(escolha,"enter")==0)
			{
			housentrance();
			}
		if (strcmp(escolha, "suicide") == 0)
			{
			death1();
		}
		else
			{
				system("cls");
				printf("\n \"%s\" isn't a valid option.\n\n", escolha);
				system("pause");
				level1start();
			}

	}
void housentrance()
{
	system("cls");
	printf(" You have entered the house and feel like eating a\n");
	printf(" space apple.\n");
	printf(" Naaa, I better start exploring the house.\n");
	printf(" Where should I go?(climb stairs/left hall/right hall/sit) ");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "climb stairs") == 0)
	{
		stairs();
	}
	if (strcmp(escolha, "left hall") == 0)
	{
		househall();
	}
	if (strcmp(escolha, "right hall") == 0)
	{
		househallright();
	}
	if (strcmp(escolha, "sit") == 0)
	{
		sit();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		housentrance();
	}
}
void househall()
	{
	system("cls");
		printf("A naked red head is guarding a locked door...\n");
		printf("Hmmm, it seems as the carpet does match the drapes,\n");
		printf("you think\n");
		printf("You can hear weird moans through the door.\n");
		printf("You return to the hall.\n");
		system("pause");
		housentrance();
}
void househallright() { 
	system("cls");
	printf("As you walk, you see something written on the wall,\n");
	printf("What do you do?(go back/get closer)\n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "go back") == 0)
	{
		housentrance();
	}

	if (strcmp(escolha, "get closer") == 0)
	{
		wallclose();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		househallright();
	}
}	 
void wallclose() {
	system("cls");
	printf("As you approach the wall, you read \"I want to play a game...I like gaems1!1\"\n");
	printf("A key drops for no reason, what to do, what to do?(put it up your ass/ignore)\n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "put it up your ass") == 0)
	{
		upyourass();
	}

	if (strcmp(escolha, "ignore") == 0)
	{
		househallright();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		wallclose();
	}
}	//wallclose1 
void upyourass() {
	system("cls");
	printf("You look at that key like you used to look at Unicorn Downey, the sexiest unicorn in your home planet, \n");
	printf("you've been alone for too long, so you put the key up \n");
	printf("your ass and a doorway seems to open, strange huh? \n");
	printf("What will you do? (go inside/go back/use pokeball)\n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "go inside") == 0)
	{
		dungeon();
	}

	if (strcmp(escolha, "go back") == 0)
	{
		wallclose();
	}

	if (strcmp(escolha, "use pokeball") == 0)
	{
		pokeball();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		upyourass();
	}
}
void pokeball() {
	system("cls");
	printf("This ain't no pokaymon game muthafucka whatchu' think\n");
	printf("you doin'?\n");
	system("pause");
	upyourass();
}

void dungeon() {
	system("cls");
	printf("The doorway leads to a cave filled with gold and other ores.\n");
	printf("Congratulations! You finished the level!\n");
	printf("It's dangerous to go alone, take this!\n");
	printf("Password: ilrdj87imwa\n");	//I love robert downey jr ??????
	system("pause");
	level2start();

}	//dungeon1

void sit() {
	system("cls");
	printf("You sit down, what do you want to do? (watch tv/get up) \n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "watch tv") == 0)
	{
		tv();
	}

	if (strcmp(escolha, "get up") == 0)
	{
		housentrance();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		sit();
	}
	;}//housesit1

void tv() {
	system("cls");
	printf("OOOhoohoUUhu! A porn flick is on. \n");
	printf("What will you do?(get your penis out/get up) \n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "get your penis out") == 0)
	{
		porn();
	}

	if (strcmp(escolha, "get up") == 0)
	{
		housentrance();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		tv();
	}
	
}//tv1

void porn() {
	system("cls");
	printf("EEEEeeewwwww! That was tranny porn, fucking gross man!\n");
	printf("You throw up so hard your stomach comes out through your mouth. \n");
	printf("Lesson: Dont watch pornos on tv \n");
	system("pause");
	death2();
	}	//porno1
void stairs() {
	system("cls");
	printf("You climb the stairs and find an office\n");
	printf("What will you do?(enter/go back)\n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "enter") == 0)
	{
		office();
	}

	if (strcmp(escolha, "go back") == 0)
	{
		housentrance();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		stairs();
	}
} //housestair1
void office() {
	system("cls");
	printf("What a weird office.There are 2 pink dildos on a desk\n");
	printf("Theres is a laptop on the floor, you turn it on \n");
	printf("The screen is somewhat blurry, it reads something craft\n");
	printf("Meh, the game probably sucks, shitty graphics\n");
	printf("You go back...\n");

	system("pause");
	stairs();
}//office1
void level2start(){
	system("cls");
	printf("The house is through!\n");
	printf("continue/quit \n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "continue") == 0)
	{
		save(2);
		mineshaft();
	}

	if (strcmp(escolha, "quit") == 0)
	{
		quit();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		level2start();
	}


} //lvl2
void mineshaft() {
	system("cls");
	printf("--------------------LEVEL 2--------------------------\n");
	printf("You enter what appears to be an abandoned mineshaft, \n");
	printf("only two possible ways.  Which way will you go?(left/right)\n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "left") == 0)
	{
		mineshaftleft();
	}

	if (strcmp(escolha, "right") == 0)
	{
		mineshaftright();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		mineshaft();
	}
}//mine
void mineshaftleft() {
	system("cls");
	printf("You decide to go left. You've reached the end of the path and\n");
	printf("you see a door (observe door/go back) \n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "observe door") == 0)
	{
		youshallnotpass();
	}

	if (strcmp(escolha, "go back") == 0)
	{
		mineshaft();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		mineshaftleft();
	}
}//mineleft
void youshallnotpass() {
	system("cls");
	printf("The door reads \"YOU SHALL NOT PASS\". It seems to be locked...\n");
	printf("(go back) \n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "go back") == 0)
	{
		mineshaft();
	}

	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		youshallnotpass();
	}
}
void mineshaftright(){
	system("cls");
	printf("At the end of the path you see what appears to be catacombs\n");
	printf("A shiver goes down your hoofs as you gaze upon the dead bodies hanging.\n");
	printf("You see five cells. (cell 1/cell 2/cell 3/cell 4/cell 5) \n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "cell 1") == 0)
	{
		cell1();
	}
	if (strcmp(escolha, "cell 2") == 0)
	{
		cell2();
	}
	if (strcmp(escolha, "cell 3") == 0)
	{
		cell3();
	}
	if (strcmp(escolha, "cell 4") == 0)
	{
		cell4();
	}
	if (strcmp(escolha, "cell 5") == 0)
	{
		cell5();
	}

	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		mineshaftright();
	}
}//mineright
void cell1() {
	system("cls");
	printf("A skeleton with a pointy hat and a big grey beard lays on the ground.\n");
	printf("Nothing to see here(go back) \n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "go back") == 0)
	{
		mineshaftright();
	}

	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		cell1();
	}

};
void cell2() {
	system("cls");
	printf("On the floor you see a decomposing unicorn, oh the horror!\n");
	printf("Nothing to see here(go back) \n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "go back") == 0)
	{
		mineshaftright();
	}

	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		cell2();
	}
}
void cell3() {
	system("cls");
	printf("An empty cell, only a bed, a toilet and a poster for some band called \n");
	printf("\"Steel ladies\" fills it. \n (go back)");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "go back") == 0)
	{
		mineshaftright();
	}

	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		cell3();
	}

}
void cell4() {
	system("cls");
	printf("Hmmm? there appears to be a lever on the wall... \n");
	printf("Wonder what does it do...(pull/do nothing)\n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "pull") == 0)
	{
		lever();
	}
	if (strcmp(escolha, "do nothing") == 0)
	{
		mineshaftright();
	}

	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		cell4();
	}
}
void cell5() {
	system("cls");
	printf("As you get closer, you hear moans, it appears to be some troll with three penises having gay butt sex with a doctor, his name plate reads \"Doctor Zero\" \n");
	printf("(go back) \n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "go back") == 0)
	{
		mineshaftright();
	}

	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		cell5();
	}

}
void lever() {
	system("cls");
	printf("You hear a sound and a door opens!\n");
	printf("You enter the secret entrance and find \n");
	printf("a horde of blood thirsty goblins. What will you do?...(fight/run) \n");
	
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "fight") == 0)
	{
		fight();
	}

	if (strcmp(escolha, "run") == 0)
	{
		restrictrun();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		lever();
	}
}//lever1
void fight() {
	system("cls");
	printf("You fight with all your strenghts and\n");
	printf("you win but your hoofs are too worn out to \n");
	printf("keep going. One of the goblins drops a gem \n");
	printf("which opens a door. \n");
	printf("What do you want to do?(keep going/rest) \n");


	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "keep going") == 0)
	{
		keepgoing();
	}

	if (strcmp(escolha, "rest") == 0)
	{
		rest();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		fight();
	}//fight1
}
void rest() {
	system("cls");
	printf("You fall asleep\n");
	system("pause");
	fight();

}
void restrictrun() {
	system("cls");
	printf("You run away, good choice, unicorns\n");
	printf("who choose to fight will die but not \n");
	printf("you, your cowardness saved your life \n");
	printf("you find a sewer entrance. What do you want to do?(go in/go back)\n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "go in") == 0)
	{
		sewers();
	}

	if (strcmp(escolha, "go back") == 0)
	{
		death4();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		restrictrun();
	}//run1
}
void sewers() {
	system("cls");
	printf("You find a nasty and filthy place\n");
	printf("................................. \n");
	printf("................................. \n");
	printf("omfg is that a skelleton having\n");
	printf("sex with a friggin' mammoth?\n");
	printf("you are so disgusted you\n");
	printf("go to sleep. Weird hmm?\n");
	printf(" ZZZZzZZZzzzzZZZzzzZZZZzzzz\n");
	printf(" ZZZZzZZZzzzzZZZzzzZZZZzzzz\n");
	printf(" ZZZZzZZZzzzzZZZzzzZZZZzzzz\n");
	printf(" ZZZZzZZZzzzzZZZzzzZZZZzzzz\n");
	printf(" you are blocked by a wall. What do you want to do? (use only one verb)\n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "kick") == 0)
	{
		sewersend();
	}
	if (strcmp(escolha, "fuck") == 0)
	{
		sewersend();
	}
	if (strcmp(escolha, "penetrate") == 0)
	{
		sewersend();
	}
	if (strcmp(escolha, "drill") == 0)
	{
		sewersend();
	}
	if (strcmp(escolha, "falcon hoof") == 0)
	{
		sewersend();
	}
	if (strcmp(escolha, "fart") == 0)
	{
		sewersend();
	}
	if (strcmp(escolha, "nothing") == 0)
	{
		sewersend();
	}
	if (strcmp(escolha, "sex") == 0)
	{
		sewersend();
	}
	if (strcmp(escolha, "penis") == 0)
	{
		sewersend();
	}
	if (strcmp(escolha, "vagina") == 0)
	{
		sewersend();
	}
	
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		sewers();
	}
}//sewers1
void sewersend(){
	system("cls");
	printf("The wall breaks. It reads\n");
	printf("Do not leak: valveisevil \n");
	printf("What could that mean? \n");
	printf("Do not leak: valveisevil \n");
	printf("*Because our game is now on steam this is no longer \n");
	printf("our thoughts on this company. Yay for being corporate shills!* \n");
	printf("Anyway there seems to be an exit, so what should you do now? (Continue/Quit)\n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "continue") == 0)
	{
		level3start();
	}

	if (strcmp(escolha, "quit") == 0)
	{
		quit();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		sewersend();
	}
}//sewers2
void keepgoing() {
	system("cls");
	printf("You keep going but your hoofs really\n");
	printf("hurt............ \n");
	printf("You break your leg. \n");
	printf("What do you want to do?(use magic powers/keep going) \n");


	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "use magic powers") == 0)
	{
		magicpowers();
	}

	if (strcmp(escolha, "keep going") == 0)
	{
		death3();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		keepgoing();
	}//keepgoing1
}
void magicpowers() {
	system("cls");
	printf("You use your unicorn powers they heal\n");
	printf("your leg but you are exausted \n");
	printf("You break your leg. \n");
	printf("Somehow you gather strenghts and find an exit (continue/quit) \n");


	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "continue") == 0)
	{
		save(3);
		level3start();
	}

	if (strcmp(escolha, "quit") == 0)
	{
		quit();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		magicpowers();
	}
}
void level3start(){
	system("cls");
	printf("You find yourself in a forest,\n");
	printf("you hear noises, what do you do? (follow the sound/go the opposite way) \n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "follow the sound") == 0)
	{
		villagefind();	//original function name is vswc. What the hell was I thinking?
	}

	if (strcmp(escolha, "go the opposite way") == 0)
	{
		zombievillage();	//vzwbr was I  high when I named these things?
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		level3start();
	}
}//level3
void villagefind() {
	system("cls");
	printf("You're getting closer to the sound,\n");
	printf("at the end of the path, you see what appears to be a vilage, \n");
	printf("it appears to be populated by seals with chainsaws... \n");
	printf("what do you do? (explore the village/go back) \n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "explore the village") == 0)
	{
		villageenter();
	}

	if (strcmp(escolha, "go back") == 0)
	{
		level3start();	
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		villagefind();
	}
}//vswc
void villageenter() {
	system("cls");
	printf("As you enter, everyone seems to stop and stare at you,\n");
	printf("as they get closer, you realize you are \n");
	printf("in some deep shit my friend! (fight/climb a tree)\n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "fight") == 0)
	{
		villagefight();
	}

	if (strcmp(escolha, "climb a tree") == 0)
	{
		tree();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		villageenter();
	}
} //vswc2 electric boogaloo, the names just kept getting worse...
void villagefight() {
	system("cls");
	printf("You charge your horn towards the enemies\n");
	printf("but you slip and fall to the ground, \n");
	printf("they cut you in half and BAM! DEAD!\n");
	printf("Do you want to continue?(yes/no)\n"); //Every other death has its own function, but this one
																							 //is different for some reason. 
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "yes") == 0)
	{
		level3start();
	}

	if (strcmp(escolha, "no") == 0)
	{
		quit();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		villagefight();
	}
}//vswcfight
void tree() {
	system("cls");
	printf("You run towards the tree and jump to one of the branches\n");
	printf("as you feel your hoof against the branch, you see it's fragile \n");
	printf("and you fall, breaking your neck and dying.\n");
	printf("Do you want to continue?(yes/no)\n"); 
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "yes") == 0)
	{
		level3start();
	}

	if (strcmp(escolha, "no") == 0)
	{
		quit();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		villagefight();
	}
}//vswctree
void zombievillage() {	
	system("cls");
	printf("As the path ends, you see a village\n");
	printf("it appears to be populated by zombie dinossaurs with buttler robots... \n");//I'm sorry, what?
	printf("what do you do? (explore the village/go back).\n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "explore the village") == 0)
	{
		zvillageenter();
	}

	if (strcmp(escolha, "go back") == 0)
	{
		level3start();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		zombievillage();
	}
}//vzdwbr
void zvillageenter() {
	system("cls");
	printf("As you enter, everyone seems to stop and stare at you,\n");
	printf("they smile, everyone seems like such gentlemen! \n");//I'm sorry, what?
	printf("what do you do? (talk to a buttler/go back)\n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "talk to a buttler") == 0)
	{
		zvillagetalk();
	}

	if (strcmp(escolha, "go back") == 0)
	{
		zombievillage();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		zvillageenter();
	}
}//vzdwbr2
void zvillagetalk() {
	system("cls");
	printf("Buttler:\"Hello outsider, what are you doing in our small village?\" \n");
	printf("(ask about this planet/go back) \n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "ask about this planet") == 0)
	{
		plans();
	}

	if (strcmp(escolha, "go back") == 0)
	{
		villageenter();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		zvillagetalk();
	}
	} //vzdwbrtalk
void plans() {
	system("cls");
	printf("Oh so you want to learn more about your planet...let me tell you a thing \n");
	printf("you'll need to know. \n");
	printf("This planet is rulled by the SUPER HYPER MEGA EVIL TROLL WITH THREE PENISES!. \n");
	printf("Or as his friends call him, Alfred bigballs, he plans to rule the galaxy! \n");
	printf("He is always seen with a bag, probably filled with evil plans and evil things...\n");
	printf("The only thing we know is that he is no longer in this shithole we call planet! \n");
	printf("Did I enlighten your mind? (yes/no) \n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "yes") == 0)
	{
		promptrocket();
	}

	if (strcmp(escolha, "no") == 0)
	{
		plans();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		plans();
	}
}//evilplans
void promptrocket(){
	system("cls");
	printf("\"You look like the kind of unicorn who could stop him...\" \n");
	printf("Are you willing to take the risk?(yes/no) \n");
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "yes") == 0)
	{
		rocket();
	}

	if (strcmp(escolha, "no") == 0)
	{
		system("cls");
		printf("No is not an option in dire times such as these\n");
		printf("You will go and that's the end of it, I shall have no more of your insolence!\n");
		system("pause");
		rocket();
			}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		promptrocket();
	}
}//bfrocket
void rocket() {
	system("cls");
	printf("\"Yes\" said the brave unicorn as he thought \n");
	printf("to himself, \"I need to stop him or else Unicornland will be destroyed!\" \n");
	printf("\"Here, take the code to enter the ship\" - says the buttler \n");
	printf("Code: originsucksmajorballs \n");
	printf("(continue/quit)\n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "continue") == 0)
	{
		save(4);
		level4start();
	}

	if (strcmp(escolha, "quit") == 0)
	{
		quit();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		rocket();
	}
}
void level4start() {
	system("cls");
	printf("--------------------LEVEL 4-------------------------- \n");
	printf("As you land on the planet MOA-2007-BLG-400Lb \n");
	printf("you (get out of the rocket/fap/commit suicide)\n");


	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "get out of the rocket") == 0)
	{
		planet();
	}

	if (strcmp(escolha, "fap") == 0)
	{
		fap();
	}
	if (strcmp(escolha, "commit suicide") == 0)
	{
		death1();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		level4start();
	}
}//lvl4
void planet() {
	system("cls");
	printf("As you get out, you fill your unicorn lungs\n");
	printf("with the air of this planet, everything seems sinister and dark \n");
	printf("(north/east/west/south/go back)\n");


	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "north") == 0)
	{
		marrada();	//this is where we got really lazy
	}

	if (strcmp(escolha, "south") == 0)
	{
		marrada();
	}
	if (strcmp(escolha, "east") == 0)
	{
		marrada();
	}
	if (strcmp(escolha, "west") == 0)
	{
		marrada();
	}
	if (strcmp(escolha, "go back") == 0)
	{
		level4start();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		planet();
	}
}
void fap(){
	system("cls");
	printf("OHHH SWEET IMAGINARY ENTITY THAT WAS A NICE FAP \n"); //Masturbation and neckbeardery in one sentence? Classy...
	printf("Better go explore the planet or should I fap again? (Explore planet/fap again)");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "Explore planet") == 0)
	{
		planet();
	}

	if (strcmp(escolha, "fap again") == 0)
	{
		fap();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		fap();
	}
}
void marrada(){
	system("cls");
	printf("Oh no! Alfred's goonies came (guiguitty) to get you!"); 
	printf("They dick slap you in the head with giant dildos!");
	printf("It's supper effective!");
	printf("Alfred's goonies win 50 xp!");
	printf("oh yeah, and you faint too, but does that even matter?"); //Who even wrote this?(me, probably)

	system("pause");
	fin(); //end is a terrible name for a function


}//marradanoscornos
void fin() { 
	system("cls");
	printf("                                     Spacecorn\n");
	printf("                               Chapter 1 - Lost!\n");
	printf("          ------------------------------------------------------------\n");
	printf("        |                     Congratulations,                       |\n");
	printf("        |   You finished  the first chapter of this adventure!       |\n");
	printf("        | You can now brag about this achievement to all your friends|\n");
	printf("        |                                                            |       \n");
	printf("          ----------------------------------------------------------\n");
	system("pause");
	credits();
}//end
void death1(){
	system("cls");
	printf("You chose the easy way, your fellow unicorns are ashamed, \n"); 
	printf("and so is your family. Try again?(yes/no)");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "yes") == 0)
	{
		level1start();
	}

	if (strcmp(escolha, "no") == 0)
	{
		quit();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		death1();
	}
}
void death2() {
	system("cls");
	printf("GG n00b! \n");
	printf("back to the start\n");
	system("pause");
	level1start();

}
void death3() {
	system("cls");
	printf("Your leg falls and rottens, \n");
	printf("you cant keep going. Idiot! Try again?");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "yes") == 0)
	{
		level2start();
	}

	if (strcmp(escolha, "no") == 0)
	{
		quit();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		death3();
	}
}
void death4() {
	system("cls");
	printf("You little wuss! You went back and \n");
	printf("the goblins ate your brains.\n");
	printf("sure feel stupid now, huh?\n Try again? (yes/no)\n"); //Original sentence is"yeah, have with THAT!", but that's not even a sentence
	
	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "yes") == 0)
	{
		level2start();
	}

	if (strcmp(escolha, "no") == 0)
	{
		quit();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		death4();
	}
}
void credits(){
	system("cls");
printf("Artwork, characters, story, code and everything related to \"SpaceCorn\"\n");
printf("is made by Henrique Pegacha, Nuno Guerreiro and Rafael Lima\n");
printf("C port by Henrique Pegacha\n");
printf("Gentlemen In Tuxedos 2012-2017©\n");
system("pause");
main();
}
void quit() {
	system("cls");
	printf("Do you really wanna quit? (yes/no) \n");

	char escolha[100];
	gets_s(escolha);

	if (strcmp(escolha, "yes") == 0)
	{
		exit(0);
	}

	if (strcmp(escolha, "no") == 0)
	{
		main();
	}
	else
	{
		system("cls");
		printf("\n \"%s\" isn't a valid option.\n\n", escolha);
		system("pause");
		quit();
	}
}
void asciiprint(FILE *fptr)				//thanks for the idea cboard!
{
	char read_string[128];

	while (fgets(read_string, sizeof(read_string), fptr) != NULL){
		printf("%s", read_string);
	}
	printf("\n");

}
void SetColor(int ForgC) //thank you Ashish Ahuja from SO
{
	WORD wColor;

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	//We use csbi for the wAttributes word.
	if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
	{
		//Mask out all but the background attribute, and add in the forgournd color
		wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
		SetConsoleTextAttribute(hStdOut, wColor);
	}
	return;
}
void save(int level)
	{
		FILE *savefile;
		savefile = fopen("sav.fab","w+");
		if (savefile==NULL)
			{
			perror("Error");
			}
		else
			{
			fprintf(savefile,"%d",level);
			fclose(savefile);
			}
	}

