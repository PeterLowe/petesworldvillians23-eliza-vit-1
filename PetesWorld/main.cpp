// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// add your name here
// Name:Eliza Zimmermann
//  or here
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to A or Z to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}	

	//Eli's code
	if (letter == 'b' || letter == 'B')
	{
		if (region == 1)
		{
			std::cout << "Bolivia, Bermuda, Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belgium, Bosnia and Herzegovina, Belarus, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Belize, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bhutan, Bangladesh, Brunei Darussalam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Bahamas, BahrainArabian Peninsula, Barbados" << std::endl;;
		}
	}
	if (letter == 'c' || letter == 'C')
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile,Colombia, Costa Rica" << std::endl;
		}
		if (region == 2)
		{
			std::cout << " Croatia Balkan Panisula,Czech Republic " << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Comoros, Cape Verde, Cameroon,Central African Republic, Chad, Comoros, Democratic Republic of the Congo (Kinshasa), Congo, Republic of (Brazzaville), Côte D'ivoire (Ivory Coast)" << std::endl;
		}
		if (region == 4)
		{
			std::cout<<"Cambodia,China, Cyprus Mediterranean, Christmas Island, Cocos (Keeling) Islands" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cayman Islands, Cook Islands, Cuba" << std::endl;
		}
	}
	if (letter == 'd' || letter == 'D')
	{
		if (region == 1)
		{
			std::cout << "None" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Denmark " << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Djibouti " << std::endl;
		}
		if (region == 4)
		{
			std::cout << "None" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Dominica, Dominican Republic" << std::endl;
		}

	}

	if (letter == 'e' || letter == 'E')
	{
		if (region == 1)
		{
			std::cout << "Ecuador,El Salvador " << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Estonia" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Egypt, Equatorial Guinea, Eritrea, Ethiopia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "East Timor (Timor-Leste)," << std::endl;
		}
		if (region == 5)
		{
			std::cout << "None" << std::endl;
		}

	}



	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	
	return 1;
}