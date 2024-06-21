#include <iostream>
#include <string>

int main()
{
	//general
    float pi = 3.14159;
	std::string calculType;
	std::string remakeCalcul;
	//aire
		//general
	    std::string shapeType;
	    float finalAnswer;
	    //carre
	    float squareSide;
	    //rectangle
	    float rectangleBase;
	    float rectangleHeight;
	    //triangle
	    float triangleBase;
	    float triangleHeight;
	    //parallelogramme
	    float parallelogramBase;
	    float parallelogramHeight;
	    //lozange
	    float lozengeBase;
	    float lozengeHeight;
		//trapeze
		float trapezeFirstBase;
		float trapezeSecondBase;
		float trapezeHeight;
	    //cercle
		std::string circleInfoType;
		float circleDiameter;
		float circleRadius;
		//polygone regulier
		int nReg;
		int cReg;
		int aReg;
	//volume
		//...

	std::cout << "------------------------------------------------------------------------------------------------------------\n";
	std::cout << "Veuillez d'abord indiquer le type de calcul que vous souhaitez effectuer >>\n";
	std::cout << "('a' -> aire) ('v' -> volume)\n";
	std::cin >> calculType;
	//aire
	if (calculType == "a") {
		std::cout << "Veuillez indiquer le type de forme/solide que vous souhaitez utiliser >>\n";
		std::cout << "('squ' -> carre) ('rec' -> rectangle) ('tri' -> triangle) ('par' -> parallelogramme)\n";
		std::cout << "('loz' -> lozange) ('tra' -> trapeze) ('cir' -> cercle) ('reg' -> polygone regulier [5+])\n";
		std::cin >> shapeType;
		//conditions
		if (shapeType == "squ")
		{
			std::cout << "Veuillez indiquer la mesure d'un des cote >>\n";
			std::cin >> squareSide;
			finalAnswer = squareSide * squareSide;
			std::cout << "L'aire du carre est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeType == "rec")
		{
			std::cout << "Veuillez indiquer la mesure de la base >>\n";
			std::cin >> rectangleBase;
			std::cout << "Veuillez indiquer la mesure de la hauteur >>\n";
			std::cin >> rectangleHeight;
			finalAnswer = rectangleBase * rectangleHeight;
			std::cout << "L'aire du rectangle est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeType == "tri")
		{
			std::cout << "Veuillez indiquer la mesure de la base >>\n";
			std::cin >> triangleBase;
			std::cout << "Veuillez indiquer la mesure de la hauteur >>\n";
			std::cin >> triangleHeight;
			finalAnswer = (triangleBase * triangleHeight)/2;
			std::cout << "L'aire du triangle est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeType == "par")
		{
			std::cout << "Veuillez indiquer la mesure de la base >>\n";
			std::cin >> parallelogramBase;
			std::cout << "Veuillez indiquer la mesure de la hauteur >>\n";
			std::cin >> parallelogramHeight;
			finalAnswer = parallelogramBase * parallelogramHeight;
			std::cout << "L'aire du parallelogramme est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeType == "loz")
		{
			std::cout << "Veuillez indiquer la mesure de la base >>\n";
			std::cin >> lozengeBase;
			std::cout << "Veuillez indiquer la mesure de la hauteur >>\n";
			std::cin >> lozengeHeight;
			finalAnswer = (lozengeBase * lozengeHeight) / 2;
			std::cout << "L'aire du lozange est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeType == "tra")
		{
			std::cout << "Veuillez indiquer la mesure de la premiere base >>\n";
			std::cin >> trapezeFirstBase;
			std::cout << "Veuillez indiquer la mesure de la seconde base >>\n";
			std::cin >> trapezeSecondBase;
			std::cout << "Veuillez indiquer la hauteur >>\n";
			std::cin >> trapezeHeight;
			finalAnswer = ((trapezeFirstBase + trapezeSecondBase) * trapezeHeight)/2;
			std::cout << "L'aire du trapeze est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeType == "cir")
		{
			std::cout << "Veuillez indiquer le type d'information detenu >>\n";
			std::cout << "('d' -> diametre) ('r' -> rayon)\n";
			std::cin >> circleInfoType;
			if (circleInfoType == "d")
			{
				std::cout << "Veuillez indiquer le diametre du cercle >>\n";
				std::cin >> circleDiameter;
				finalAnswer = pi * circleDiameter;
				std::cout << "L'aire du cercle est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u2)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (circleInfoType == "r")
			{
				std::cout << "Veuillez indiquer le rayon du cercle >>\n";
				std::cin >> circleRadius;
				finalAnswer = (circleRadius * 2) * pi;
				std::cout << "L'aire du cercle est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u2)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeType == "reg")
		{
			std::cout << "Veuillez indiquer le nombre de cote de votre figure >>\n";
			std::cin >> nReg;
			if (nReg < 5)
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			} 
			else if (nReg >= 5)
			{
				std::cout << "Veuillez indiquer la mesure d'un des cote >>\n";
				std::cin >> cReg;
				std::cout << "Veuillez indiquer la mesure de l'apotheme >>\n";
				std::cin >> aReg;
				finalAnswer = (nReg * cReg * aReg) / 2;
				std::cout << "L'aire du polygone est de : ";
				std::cout << finalAnswer;
				std::cout << "(u2)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
		}
		else
		{
			std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
			std::cin.ignore();
			std::cin.ignore();
			main();
		}
	}
	//volume
	else if (calculType == "v") 
	{
		std::cout << "Bientot disponible";
		std::cout << "Veuillez appuyer sur 'Entrer' pour recommencer... \n";
		std::cin.ignore();
		std::cin.ignore();
		main();

	}
	//erreur
	else 
	{
		std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
		std::cin.ignore();
		std::cin.ignore();
		main();
	}

	//Made by Shaydon Gervais
}
