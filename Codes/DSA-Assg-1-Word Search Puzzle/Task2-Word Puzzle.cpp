//#include<iostream>
//#include<string>
//using namespace std;
//bool word_search(char arr[10][10], string search) {
//	bool comp=false;
//	int flag = false;
//	int len = search.length();
//	string find = "";
//	char ch = search.at(0);
//	int row = 0,col = 0;
//	int row_s, col_s;
//	//Finding First Character's Position
//		for (int l = 0; l < 10; l++) {
//			for (int k = 0; k < 10; k++) {
//				if (ch == arr[l][k]) {
//					row = l;
//					col = k;
//					//Search Horizontally; Only change column;Row remains the same
//					if ((col + len) <= 10) {
//						find = "";
//						int row_h = row;
//						int col_h = col;
//						for (int i = 0; i < len; i++, col_h++) {
//							find = find + arr[row_h][col_h];
//						}
//						if (find == search)
//						{
//							flag = true;
//							comp = true;
//						}
//					}
//					//Search Vertically; Only change row ; Column remains the same
//					find = "";
//					if ((row + len) <= 10) {
//						if(flag)
//						{break; }
//						int row_v = row;
//						int col_v = col;
//						for (int i = 0; i < len; i++, row_v++) {
//							find = find + arr[row_v][col_v];
//						}
//						if (find == search)
//						{
//							comp = true;
//						}
//					}
//					
//					
//			  }
//			
//
//			}	
//		
//		}
//
//	return comp;
//}
//int main() {
//	char puzzle[10][10] = { 'B','S','A','D','W','A','T','E','R','L',
//							'B','L','A','C','K','B','E','R','R','Y',
//							'C','I','U','O','E','T','N','A','H','E',
//							'H','P','E','D','F','G','T','S','A','J',
//							'E','C','I','T','R','U','S','P','E','A',
//							'R','N','A','F','U','V','O','B','Y','L',
//							'R','R','L','V','I','O','E','E','C','E',
//							'Y','A','C','D','T','R','M','R','N','M',
//							'S','T','R','A','W','J','K','R','Y','O',
//							'L','I','M','E','H','N','O','Y','A','N' };
//	cout << "\nPUZZLE\n";
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			cout << puzzle[i][j] << " ";
//		}
//		cout << endl;
//	}
//	string searchWord;
//	int score = 0;
//    char ch= 'n';
//	
//	do {
//		cout << "\nEnter word you want to search(IN CAPITAL LETTERS) : ";
//		cin >> searchWord;
//		if (word_search(puzzle,searchWord)) {
//			score++;
//			cout << "\nCorrect Answer!";
//			cout << "\nScore : " << score;
//			cout << "\nDo you want to quit?";
//			cin >> ch;
//		}
//          else {
//             cout << "\nWrong guess";
//             cout << "\nScore : " << score;
//			 cout << "\nDo you want to quit?";
//			 cin >> ch;
//              } 
//		if (score == 9)
//		{
//			cout << "\nCongratulations ! You have finished puzzle successfully!";
//			cout << "\nDo you want to quit?";
//			cin >> ch;
//		}
//	
//	} while((ch != 'y')&&(ch!='Y'));
//	return 0;
//}