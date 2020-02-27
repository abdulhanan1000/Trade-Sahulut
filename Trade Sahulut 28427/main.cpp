#include"admin.h"
#include"ads.h"
#include"buyer.h"
#include"person.h"
#include"product.h"
#include"ratings.h"
#include"seller.h"
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main() {

	admin a("Hanan", "3333-3333333-3", "house 55, street 55, rawalpindi",22);

	//preset buyer and initialization of count of buyers for later use
	buyer b[20]{ {"ali", "2143-3434534-3", "house 4, street 7, bahria", 30},{"sami", "2234523452345", "gali 4", 18},{"jack", "343463456", "house 6", 42} };
	
	b[0].incrementnoofbuyers();
	b[0].incrementnoofbuyers();
	b[0].incrementnoofbuyers();
	
	
	//preset seller and initialization of count of seller for later use
	seller s[20]{ {"saad", "222325-234234234-1", "house 2, street 3, islamabad", 27} ,{"sara", "345634565347", "street65", 55} ,{"mohsin", "2134567568", "house 4, street 100, gulrez", 60} };
	
	s[0].incrementnoofsellers();
	s[0].incrementnoofsellers();
	s[0].incrementnoofsellers();
	


	//ad object 
	ads ad[100];

	ad[0].incrementnoofads();
	ad[0].decrementnoofads();
	
	

	//product object and three preset products.. the count noted for later use:
	//product pr[100]{ {1, "Head & Shoulders", "large bottle",300},{2, "RIO Biscuits", "large pack", 20},
	//{3, "RICE", "1kg Pack", 500} };
	


	//product ratings and feedback and 3 preset ratings and feedback. The ratings count noted for later use: 
	rating rt[100]{ {3,"the product is good"},{4,"the product is totally worth it"},{5, "the product is exceptionally good and perfect"} };

	rt[0].incrementnoofratings();
	rt[0].incrementnoofratings();
	rt[0].incrementnoofratings();
	
	int choice=0;


	mainmenu:
	cout << "**********WELCOME TO TRADE SAHULAT MAIN MENU************\n\n";
	cout << "**********HARDCODED USERNAME/PASSES ARE admin/admin,buyer/buyer,seller/seller************\n\n";
	cout << "Please select from following options: (DIGIT)\n\n";


	cout << "1. admin login\n 2. buyer login \n 3.seller login \n4. The setter menu(to add new buyers/sellers)\n\n";

	cout << "choice:";
	cin >> choice;




	switch (choice) {

	case 1:

		cin.ignore();
		a.setadminusername();
		a.setadminpassword();

		if (a.adminlogin() == 1) {
			int choice1;
			cout << "\nLOGIN SUCCESSFUL\n\nWELCOME ADMIN\nENTER YOUR INFORMATION\n";
			

			cout << "PRESS:\n -1 for blockseller\n -2 for blockbuyer \n-3 for edit an ad\n -4 to delete rating";
			cin >> choice1;
			if (choice1 == 1) {
				system("cls");
				cout << "current list of sellers: \n";
				
				for (int i = 0; i < s[0].getnoofsellers(); i++) {
					cout << "SELLER INDEX: " << i << endl;   
					s[i].displaysellerinfo();

				}
				
				a.blockseller(s);
				s[0].decrementnoofsellers();
				system("cls");
				cout << "new list of sellers: \n";
				
				for (int i = 0; i < s[0].getnoofsellers(); i++) {
					cout << "SELLER INDEX: " << i << endl;
							s[i].displaysellerinfo();

				}
						
				

				cout << "\n\n****Press any key to return to main menu****";
				system("pause");
				system("cls");
				goto mainmenu;
			}
			 if (choice1 == 2) {
				 system("cls");
				cout << "current list of buyers: \n";
				
				for (int i = 0; i < b[0].getnoofbuyers(); i++) {
					cout << "BUYER INDEX: " << i << endl;
					b[i].displaybuyerinfo();

				}
				



				a.blockbuyer(b);
					b[0].decrementnoofbuyers();
				

					system("cls");
				cout << "new list of buyers: \n";
				
				for (int i = 0; i < b[0].getnoofbuyers(); i++) {
					cout << "BUYER INDEX: " << i << endl;
					b[i].displaybuyerinfo();

				}

				cout << "\n\n****Press any key to return to main menu****";
				system("pause");
				system("cls");
				goto mainmenu;
			}
			 if (choice1 == 3) {
				 for (int i = 0; i < ad[0].getnoofads(); i++) {

					 cout << "**AD OF INDEX: " << i <<endl ;
					 
					 ad[i].viewad(); //keep in mind that without product the ad will not exist so if a product is deleted, the ad automatically gets deleted.
					           

				 }
				 
				 ad[0].editads(ad);
			
				system("cls");

				cout << "\nUpdated ads:";

				for (int i = 0; i < ad[0].getnoofads(); i++) {

					cout << "\n\n**AD OF INDEX: " << i << endl;

					ad[i].viewad(); //keep in mind that without product the ad will not exist so if a product is deleted, the ad automatically gets deleted.
					         

				}
				 

				system("pause");
				goto mainmenu;
			}

			 if (choice1 == 4) {
				 cout << "current list of RATINGS AND FEEDBACK: \n";
				 system("cls");
				 for (int i = 0; i < rt[0].getnoofratings(); i++) {
					 cout << "RATING OF PRODUCT INDEX: " << i << endl;
					 rt[i].viewrating();

				 }
				 
				 a.deleterating(rt);
				 rt[0].decrementnoofratings();


				 cout << "new list of ratings: \n";
				 system("cls");
				 for (int i = 0; i < rt[0].getnoofratings(); i++) {
					 cout << "RATING OF PRODUCT INDEX: " << i << endl;
					 rt[i].viewrating();

				 }

				 cout << "\n\n****Press any key to return to main menu****";
				 system("pause");
				 system("cls");
				 goto mainmenu;




			}
			else {
				 cout << "\ninvalid input\n";
				 system("cls");
				 goto mainmenu;
			}

		}
		else {
			cout << "\ninvalid input\n";
			system("cls");
			goto mainmenu;
		}
		goto mainmenu;
		break;


	case 2:


		cin.ignore();
		b[0].setbuyerusername();
		b[0].setbuyerpassword();
		

		int choice2;
		if (b[0].buyerlogin() == 1) {
			cout << "\nLOGIN SUCCESSFUL\n\nWELCOME BUYER\n";
			

			cout << "PRESS:\n -1 for giverating\n -2 for viewads \n-3 for putorder\n ";
			cin >> choice2;


			if (choice2 == 1) {

				b[0].giverating(rt);
				
				system("pause");
				goto mainmenu;
			}


			 if (choice2 == 2) {
				 
				 for (int i = 0; i < ad[0].getnoofads(); i++) {

					 cout << "**AD OF INDEX: " << i << endl;

					 ad[i].viewad();
			  
				 }

				system("pause");
				
				goto mainmenu;

			}


			 if (choice2 == 3) {

				
				 for (int i = 0; i < ad[0].getnoofads(); i++) {

					 cout << "**AD OF INDEX: " << i << endl;

					 ad[i].viewad();
					

				 }


				 b[0].putorder(ad);

		
				 cout << "ORDER PLACED";
				
				system("pause");
				
				goto mainmenu;
			}
			
			else {
				 cout << "\ninvalid input\n";
				 system("cls");
				 goto mainmenu;
			}



		}
		else {
			cout << "\ninvalid input\n";
			system("cls");
			goto mainmenu;
		}
		break;
	case 3:
		cin.ignore();
		s[0].setsellerusername();
		s[0].setsellerpassword();
	

		int choice3;
		if (s[0].sellerlogin() == 1) {
			cout << "\nLOGIN SUCCESSFUL\n\nWELCOME SELLER\nn";
			


			cout << "PRESS:\n -1 for postad\n  \n-2 for search buyer\n -3 to edit ad ";
			cin >> choice3;
			if (choice3 == 1) {
				
				system("cls");
				
				ad[ad[0].getnoofads()].setnewad(ad);

				system("pause");
				goto mainmenu;
			}


		     if (choice3 == 2) {
				 
				 
				 s[0].searchbuyer(b);
				
				system("pause");
				goto mainmenu;
			}


			 if (choice3 == 3) {

				 for (int i = 0; i < ad[0].getnoofads(); i++) {

					 cout << "**AD OF INDEX: " << i << endl;

					 ad[i].viewad(); 


				 }

				 ad[0].editads(ad);

				 system("cls");

				 cout << "\nUpdated ads:";

				 for (int i = 0; i < ad[0].getnoofads(); i++) {

					 cout << "\n\n**AD OF INDEX: " << i << endl;

					 ad[i].viewad(); 


				 }

				system("pause");
				goto mainmenu;
			}



			else {
				 cout << "\ninvalid input\n";
				 system("cls");
				 goto mainmenu;
			}


		}
		else {
			cout << "\ninvalid input\n";
			system("cls");
			goto mainmenu;
		}

		break;


	case 4:
		system("cls");
		cout << "****WELCOME TO THE SETTER MENU TO ADD A NEW BUYER/SELLER*******\n";
		cout << "NOTE: All usernames and passwords remain admin/admin so not set.\n";
		cout << "1 for new buyer\n 2 for new seller\n\n Selection: \n";
		int choice4;
		cin >> choice4;
		if (choice4 == 1) {
			cout << "adding new buyer\n";

			    cin.ignore();

				b[b[0].getnoofbuyers()].setname();
				
				b[b[0].getnoofbuyers()].setage();

				cin.ignore();

				b[b[0].getnoofbuyers()].setcnic();

				b[b[0].getnoofbuyers()].setaddress();

				b[0].incrementnoofbuyers();

				goto mainmenu;
		}
		if (choice4 == 2) {
			cout << "adding new seller\n";

			cin.ignore();

			s[s[0].getnoofsellers() ].setname();
			
			s[s[0].getnoofsellers()].setage();

			cin.ignore();

			s[s[0].getnoofsellers()].setcnic();

			s[s[0].getnoofsellers()].setaddress();

			s[0].incrementnoofsellers();

			goto mainmenu;
		}
		else {
			cout << "\ninvalid input\n";
			system("cls");
			goto mainmenu;
		}

		break;
	default:
		cout<<"\n\ninvalid input\n";
		goto mainmenu;


	}



	system("cls");
	


	return 0;
	system("pause");
}