// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Vit Prechtl
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
	
	//Vit
	
	if (letter == 'p' || letter == 'P') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Panama, Paraguay, Peru" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "Poland, Portugal " << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ps in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Pakistan, Palestinian territories, Philippines" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Palau, Papua New Guinea, Pitcairn Island, Puerto Rico" << std::endl;
		}
	}
	if (letter == 'q' || letter == 'Q') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Qs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Qs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Qs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Qs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Qatar" << std::endl;
		}
	}
	if (letter == 'r' || letter == 'R') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Rs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "Romania" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Reunion Island, Rwanda" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Russian Federation" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Rs in rest of the world" << std::endl;
		}
	}
	if (letter == 's' || letter == 'S') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Suriname" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "San Marino, Serbia, Slovakia, Slovenia, Spain, Sweden, Switzerland" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Sao Tome and Principe, Senegal, Seychelles, Sierra Leone, Somalia, South Africa, South Sudan, Sudan, Swaziland (Eswatini)" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Singapore, Sri Lanka, Syria" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Saint Kitts and Nevis, Saint Lucia, Saint Vincent and the Grenadines, Samoa, Saudi Arabia, Solomon Islands" << std::endl;
		}
	}
	if (letter == 't' || letter == 'T') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Trinidad and Tobago" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "Turkey" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Tanzania, Togo, Tunisia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Taiwan (Republic of China), Tajikistan, Thailand, Tibet, Timor-Leste (East Timor), Turkmenistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Tokelau, Tonga, Turks and Caicos Islands, Tuvalu" << std::endl;
		}
	}
	if (letter == 'u' || letter == 'U') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "United States, Uruguay" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "Ukraine, United Kingdom" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Uganda" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Uzbekistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "United Arab Emirates Arab Peninsula" << std::endl;
		}
	}
	if (letter == 'v' || letter == 'V') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Venezuela" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "Vatican City State (Holy See)" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu, Virgin Islands (British), Virgin Islands (U.S.)" << std::endl;
		}
	}
	if (letter == 'w' || letter == 'W') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands" << std::endl;
		}
	}
	if (letter == 'y' || letter == 'Y') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ys in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Yemen Arabian Peninsula" << std::endl;
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
			std::cout << "There are no Zs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	
	return 1;
}