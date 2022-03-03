//#include<iostream>
//#include<math.h> 
//#include<chrono>
//using namespace std;
//void prime_number1(int n) //first algorithm function for calculating prime no
//{
//	clock_t c_start, c_end;
//	c_start = clock();
//	int b = 0;
//	int count = 0; //for iterations
//	for (int i = 2; i < n - 1; i++)// 1st algo condition
//	{
//		if (n % i == 0) //prime no condition
//		{
//			b = 1;
//			break;
//		}
//		count++; //increment in count
//	}
//	if (b == 1)
//	{
//		cout << "Not a prime no \n" << "Total Iterations=" << count << endl;
//	}
//	else
//	{
//		cout << "Prime no\n" << "Total iterations=" << count << endl;
//	}
//	c_end = clock();
//	double time;
//	time = double(c_end - c_start) / (double)CLOCKS_PER_SEC;
//	cout << "Time = " << time << " sec " << endl;
//}
//void prime_number2(int n) //Second algorithm function for calculating prime no
//{
//	clock_t c_start, c_end;
//	c_start = clock();
//	int b = 0;
//	int count = 0; //for iterations
//	for (int i = 2; i <= sqrt(n); i++)// second algo condition
//	{
//		if (n % i == 0)// prime no condition
//		{
//			b = 1;
//			break;
//		}
//		count++;
//	}
//	if (b == 1)
//	{
//		cout << "not a prime\n" << "Total iterations=" << count << endl;
//	}
//	else
//	{
//		cout << "prime\n" << "Total iterations = " << count << endl;
//
//	}
//	c_end = clock();
//	double time;
//	time = double(c_end - c_start) / (double)CLOCKS_PER_SEC;
//	cout << "Time = " << time << " sec " << endl;
//
//}
//int main()
//{
//	int n;
//	cout << "Enter your no\n" << endl;
//	cin >> n;
//	cout << "First Algorithm\n";
//	prime_number1(n);
//	cout << "\nSecond Algorithm\n";
//	prime_number2(n);
//	system("pause");
//	return 0;
//}
