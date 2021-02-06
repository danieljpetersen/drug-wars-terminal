#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string> 
using namespace std;

int CocaineRandomNumberGenerator()
{
	const int Low = 20000, High = 29000;
	int Price = rand() % (High - Low + 1) + Low;
	return Price;
}

int EcstasyRandomNumberGenerator()
{
	const int Low = 19, High = 63;
	int Price = rand() % (High - Low + 1) + Low;
	return Price;
}

int AcidRandomNumberGenerator()
{
	const int Low = 1542, High = 3122;
	int Price = rand() % (High - Low + 1) + Low;
	return Price;
}

int AngelDustRandomNumberGenerator()
{
	const int Low = 600, High = 1500;
	int Price = rand() % (High - Low + 1) + Low;
	return Price;
}

int WeedRandomNumberGenerator()
{
	const int Low = 90, High = 220;
	int Price = rand() % (High - Low + 1) + Low;
	return Price;
}


int main()
{
	time_t seconds;					// For Random Number Generation
	time(&seconds);					// For Random Number Generation
	srand((unsigned int) seconds);	// For Random Number Generation
	bool GoToSleep = true;
	unsigned int Day = 0, Choice, Amount = 0;
	unsigned long Cash = 2000, CocaineInventory = 0, EcstasyInventory = 0, AcidInventory = 0, AngelDustInventory = 0, WeedInventory = 0;
	unsigned int EcstasyPrice, CocainePrice, AcidPrice, AngelDustPrice, WeedPrice;
	enum Drugs						// For Case Choices
	{
		Cocaine = 1,
		Ecstasy,
		Acid,
		AngelDust,
		Weed,
		SellDrugs,
		Sleep
	};	

	/*Begin of program*/

	cout << "Welcome to Dan's clone of the game Drug Wars!" << endl;
	cout << "The goal of the game is to make 1 million dollars before the end of day 30." << endl;
	cout << "Good luck!" << endl;
	cout << "-----------------------------------" << endl << endl;
	
	while (Day <= 29)
	{
		if (GoToSleep) // Resets the price at the start of a new day.  Also advances the day if the player chooses choice 7
		{
			EcstasyPrice = EcstasyRandomNumberGenerator();
			CocainePrice = CocaineRandomNumberGenerator();
			AcidPrice = AcidRandomNumberGenerator();
			AngelDustPrice = AngelDustRandomNumberGenerator();
			WeedPrice = WeedRandomNumberGenerator();	
			Day ++;
		}	
		cout << "Today is day " << Day << ".  You have " << Cash << " dollars today." << endl << endl;
		cout << "1) Buy Cocaine for " << CocainePrice << " dollars." << endl;
		cout << "2) Buy Ecstasy for "  << EcstasyPrice << " dollars." << endl;
		cout << "3) Buy Acid for " << AcidPrice << " dollars." << endl;
		cout << "4) Buy AngelDust for " << AngelDustPrice << " dollars." << endl;
		cout << "5) Buy Weed for " << WeedPrice << " dollars." << endl;
		cout << "6) Go to the Sell Drugs Menu." << endl;
		cout << "7) Go to sleep. (Advances Day)" << endl << endl;	
		cout << "What would you like to do: " ;

		string WrongChoice;  
		//if
		//{
		//	cin >> WrongChoice;
		//	cout << "Invalid choice!"
		//}
		//else
		cin >> Choice;

		switch (Choice)
		{
		case Cocaine:
		{
			GoToSleep = false; 
		
			if (Cash < CocainePrice)
			{
				cout << endl << "-----------------------------------" << endl << endl;			
				cout << "You can't afford that!" << endl << endl;
			}

			else 
			{
				cout << "You can buy up to " ;
				cout << Cash / CocainePrice;
				cout << " Cocaine with " << Cash << " dollars." << endl;
				cout << "How many would you like to buy: ";
				cin >> Amount;
		
				if (Cash < Amount * CocainePrice)
				{
					cout << endl << "-----------------------------------" << endl << endl;				
					cout << "You can't afford that!" << endl << endl;
				}
			
				else 
				{
					cout << endl << "-----------------------------------" << endl << endl;	
					Cash = Cash - Amount * CocainePrice;
					CocaineInventory = CocaineInventory + Amount;
					cout << "You buy " << Amount << " Cocaine for " << CocainePrice * Amount << " dollars." << endl << endl;
				}
			}
	
		break;
		}
/*============================Break=========================================*/
		case Ecstasy:
		{
			GoToSleep = false; 
			if (Cash < EcstasyPrice)
			{
				cout << endl << "-----------------------------------" << endl << endl;			
				cout << "You can't afford that!" << endl << endl;
			}
			else 
			{
				cout << "You can buy up to " ;
				cout << Cash / EcstasyPrice;
				cout << " Ecstasy with " << Cash << " dollars." << endl;
				cout << "How many would you like to buy: ";
				cin >> Amount;
				if (Cash < Amount * EcstasyPrice)
				{
					cout << endl << "-----------------------------------" << endl << endl;				
					cout << "You can't afford that!" << endl << endl;
				}
				else 
				{
					cout << endl << "-----------------------------------" << endl << endl;	
					Cash = Cash - Amount * EcstasyPrice;
					EcstasyInventory = EcstasyInventory + Amount;
					cout << "You buy " << Amount << " Ecstasy for " << EcstasyPrice * Amount << " dollars." << endl << endl;
				}
			}
		break;
		}
/*============================Break=========================================*/
		case Acid:
		{
			GoToSleep = false; 
			if (Cash < AcidPrice)
			{
				cout << endl << "-----------------------------------" << endl << endl;			
				cout << "You can't afford that!" << endl << endl;
			}
			else 
			{
				cout << "You can buy up to " ;
				cout << Cash / AcidPrice;
				cout << " Acid with " << Cash << " dollars." << endl;
				cout << "How many would you like to buy: ";
				cin >> Amount;
				if (Cash < Amount * AcidPrice)
				{
					cout << endl << "-----------------------------------" << endl << endl;				
					cout << "You can't afford that!" << endl << endl;
				}
				else 
				{
					cout << endl << "-----------------------------------" << endl << endl;	
					Cash = Cash - Amount * AcidPrice;
					AcidInventory = AcidInventory + Amount;
					cout << "You buy " << Amount << " Acid for " << AcidPrice * Amount << " dollars." << endl << endl;
				}
			}
		break;
		}
/*============================Break=========================================*/
		case AngelDust:
		{
			GoToSleep = false; 
			if (Cash < AngelDustPrice)
			{
				cout << endl << "-----------------------------------" << endl << endl;			
				cout << "You can't afford that!" << endl << endl;
			}
			else 
			{
				cout << "You can buy up to " ;
				cout << Cash / AngelDustPrice;
				cout << " AngelDust with " << Cash << " dollars." << endl;
				cout << "How many would you like to buy: ";
				cin >> Amount;
				if (Cash < Amount * AngelDustPrice)
				{
					cout << endl << "-----------------------------------" << endl << endl;				
					cout << "You can't afford that!" << endl << endl;
				}
				else 
				{
					cout << endl << "-----------------------------------" << endl << endl;	
					Cash = Cash - Amount * AngelDustPrice;
					AngelDustInventory = AngelDustInventory + Amount;
					cout << "You buy " << Amount << " AngelDust for " << AngelDustPrice * Amount << " dollars." << endl << endl;
				}
			}
		break;
		}
/*============================Break=========================================*/
		case Weed:
		{
			GoToSleep = false; 
			if (Cash < WeedPrice)
			{
				cout << endl << "-----------------------------------" << endl << endl;			
				cout << "You can't afford that!" << endl << endl;
			}
			else 
			{
				cout << "You can buy up to " ;
				cout << Cash / WeedPrice;
				cout << " Weed with " << Cash << " dollars." << endl;
				cout << "How many would you like to buy: ";
				cin >> Amount;
				if (Cash < Amount * WeedPrice)
				{
					cout << endl << "-----------------------------------" << endl << endl;				
					cout << "You can't afford that!" << endl << endl;
				}
				else 
				{
					cout << endl << "-----------------------------------" << endl << endl;	
					Cash = Cash - Amount * WeedPrice;
					WeedInventory = WeedInventory + Amount;
					cout << "You buy " << Amount << " Weed for " << WeedPrice * Amount << " dollars." << endl << endl;
				}
			}
		break;
		}
/*============================Break=========================================*/
		case SellDrugs:
		{
			GoToSleep = false; 
			cout << endl << "-----------------------------------" << endl << endl;	
			cout << "You have " << CocaineInventory << " Cocaine." << endl;
			cout << "You have " << EcstasyInventory << " Ecstasy." << endl;
			cout << "You have " << AcidInventory << " Acid." << endl;
			cout << "You have " << AngelDustInventory << " AngelDust." << endl;
			cout << "You have " << WeedInventory << " Weed." << endl;
			cout << "1) Sell Cocaine for " << CocainePrice << " dollars." << endl;
			cout << "2) Sell Ecstasy for " << EcstasyPrice << " dollars." << endl;
			cout << "3) Sell Acid for " << AcidPrice << " dollars." << endl;
			cout << "4) Sell AngelDust for " << AngelDustPrice << " dollars." << endl;
			cout << "5) Sell Weed for " << WeedPrice << " dollars." << endl;
			cout << "6) Go to the Buy Drugs Menu." << endl << endl;
			cout << "Please enter a choice: " ;
			cin >> Choice;
		
			if (Choice == 1)
			{
				cout << endl << "How much Cocaine do you want to sell: ";
				cin >> Amount;
					if (Amount > CocaineInventory)
					{
						cout << endl << "-----------------------------------" << endl << endl;	
						cout << "You don't have that much Cocaine!" << endl << endl;
					}
					else 
					{
						cout << endl << "-----------------------------------" << endl << endl;	
						Cash = Cash + CocainePrice * Amount;
						CocaineInventory = CocaineInventory - Amount;
					}
			}
			/*============================Break=========================================*/
			if (Choice == 2)
			{
				cout << endl << "How much Ecstasy do you want to sell: ";
				cin >> Amount;
					if (Amount > EcstasyInventory)
					{
						cout << endl << "-----------------------------------" << endl << endl;	
						cout << "You don't have that much Ecstasy!" << endl << endl;
					}
					else 
					{
						cout << endl << "-----------------------------------" << endl << endl;	
						Cash = Cash + EcstasyPrice * Amount;
						EcstasyInventory = EcstasyInventory - Amount;
					}
			}
			/*============================Break=========================================*/
			if (Choice == 3)
			{
				cout << endl << "How much Acid do you want to sell: ";
				cin >> Amount;
					if (Amount > AcidInventory)
					{
						cout << endl << "-----------------------------------" << endl << endl;	
						cout << "You don't have that much Acid!" << endl << endl;
					}
					else 
					{
						cout << endl << "-----------------------------------" << endl << endl;	
						Cash = Cash + AcidPrice * Amount;
						AcidInventory = AcidInventory - Amount;
					}
			}
			/*============================Break=========================================*/
			if (Choice == 4)
			{
				cout << endl << "How much AngelDust do you want to sell: ";
				cin >> Amount;
					if (Amount > AngelDustInventory)
					{
						cout << endl << "-----------------------------------" << endl << endl;	
						cout << "You don't have that much AngelDust!" << endl << endl;
					}
					else 
					{
						cout << endl << "-----------------------------------" << endl << endl;	
						Cash = Cash + AngelDustPrice * Amount;
						AngelDustInventory = AngelDustInventory - Amount;
					}
			}
			/*============================Break=========================================*/
			if (Choice == 5)
			{
				cout << endl << "How much Weed do you want to sell: ";
				cin >> Amount;
					if (Amount > WeedInventory)
					{
						cout << endl << "-----------------------------------" << endl << endl;	
						cout << "You don't have that much Weed!" << endl << endl;
					}
					else 
					{
						cout << endl << "-----------------------------------" << endl << endl;	
						Cash = Cash + WeedPrice * Amount;
						WeedInventory = WeedInventory - Amount;
					}
			}
			/*============================Break=========================================*/
			if (Choice == 6)
				{
					cout << endl << "-----------------------------------" << endl << endl;	
				}
			break;
			}
/*============================Break=========================================*/
		case Sleep:
			{
				GoToSleep = true; 
				cout << endl << "-----------------------------------" << endl << endl;	
				cout << "You go to sleep." << endl << endl;
					if (Day > 29)
					{
						Cash = Cash + (CocainePrice * CocaineInventory) + (EcstasyPrice * EcstasyInventory) + 
							(AcidPrice * AcidInventory) + (AngelDustPrice + AngelDustInventory) + (WeedPrice * WeedInventory);							
						if (Cash > 1000000)
						{
						cout << "Congratulations, you've won the game!";
						}
					else
					{
						cout << "You end the game with " << Cash << " dollars.  You failed to reach 1 million dollars =(" << endl;
						cout << "Better luck next time!" << endl;
					}
					}
				break;
			}
		}// End the Case Statements
	} // While Statement Bracket
	char response;
	cin >> response;
	return 0;
}