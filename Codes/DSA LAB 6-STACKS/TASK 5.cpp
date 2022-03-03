//#include<iostream>
//using namespace std;
//int Ali[20] = { 2,1,8,9,10,11,15,13,18,7,6,5,20,19,14,12,3,4,16,17 };
//int Saad[20] = { 17,16,14,19,5,6,7,8,9,1,11,15,20,13,4,3,2,10,12,18 };
//int topAli = 19, topSaad = 19;
//void popAli()
//{
//	if (topAli <= 0)
//		cout << "Stack Underflow \n";
//	else
//	{
//		//cout << "\nThe Popped Element of Ali is " << Ali[topAli] << endl;
//		topAli--;
//	}
//}
//void popSaad()
//{
//	if (topSaad <= 0)
//		cout << "Stack Underflow \n";
//	else
//	{
//		//cout << "\nThe Popped Element of Saad is " << Saad[topSaad] << endl;
//		topSaad--;
//	}
//}
//int main() {
//	cout << "\n-----------------Number Game----------------\n";
//	int scoreAli = 0, scoreSaad = 0;
//	cout << "\n-----------------Ali's Turn----------------\n";
//		for (int i = 0; i < 10; i++)
//		{   
//			int guess;
//			cout << "\nGuess Saad's List : ";
//			cin >> guess;
//			if (guess == Saad[topSaad])
//			{
//				//cout << "\nAli  [" << guess << "] == Saad[" << Saad[topSaad] <<"]" ;
//				scoreAli++;
//				cout << "\nAli's Score : " << scoreAli;
//			    popSaad();
//			}
//			else {
//				//cout << "\nAli  [" << guess << "] != Saad[" << Saad[topSaad] << "]";
//				cout << "\nAli's Score : " << scoreAli;
//			}
//		}
//		cout << "\n-----------------Saad's Turn----------------\n";
//		for (int i = 0; i < 10; i++)
//		{
//
//			int guess;
//			cout << "\nGuess Ali's List : ";
//			cin >> guess;
//			
//			if (Ali[topAli] == guess)
//			{
//				//cout << "\nSaad [" << guess << "] == Ali[" << Ali[topAli] << "]";
//				scoreSaad++;
//				cout << "\nSaad's Score :" << scoreSaad;
//				popAli();
//			}
//			else {
//				//cout << "\nSaad [" << guess << "] != Ali[" << Ali[topAli] << "]";
//				cout << "\nSaad's Score :" << scoreSaad;
//			}
//		}
//		cout << "\n*----Winner-----*";
//		if (scoreAli > scoreSaad)
//		{
//			cout << "\nAli is Winner with " << scoreAli << " score\n";
//		}
//		if (scoreAli < scoreSaad)
//		{
//			cout << "\nSaad is Winner with " << scoreSaad << " score\n";
//		}
//	}
//	
