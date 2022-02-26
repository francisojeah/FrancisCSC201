#include <iostream>
using namespace std;
int main() {
	const char* questions[10] = {"Which of the following is the correct identifier?",
	                             "Which of the following is the address operator?",
	                             "Which of the following features must be supported by any programming language to become a pure object-oriented programming language?",
	                             "Which of the following refers to characteristics of an array?",
	                             "If we stored five elements or data items in an array, what will be the index address or the index number of the array's last data item?",
	                             "Which of the following is the correct syntax for declaring the array?",
	                             "Which of the following is the correct syntax for accessing the first element?",
	                             "Which of the following gives the 4th element of the array?",
	                             "Which type of memory is used by an Array in C++ programming language?",
	                             "Which one of the following is the correct definition of the \"is_array();\" function in C++?"
	                            };
	const char* quest_opt[10][4] = {{"$var_name", "VAR_123", "varname@", "None of the above"},
		{"@", "#","&", "%"},
		{"Encapsulation", "Inheritance", "Polymorphism", "All of the above"},
		{"An array is a set of similar data items", "An array is a set of distinct data items","An array can hold different types of data types","None of the above"},
		{"2", "3", "4", "5"},
		{"int array{};", "int array[5];", "Array[5];", "None of the above"},
		{"array[2];", "array[0]", "Array[5];", "array[1]"},
		{"array[2];", "array[3]", "Array[5];", "array[1]"},
		{"Contiguous", "Nonecontiguous", "Both A and B", "Not mentioned"},
		{
			"It checks that the specified variable is of the array or not",
			"It checks that the specified array of single dimension or not",
			"It checks that the array specified of multidimension or not",
			"Both B and C"
		}
	};

	const char answers[10] = {'b','c','d','a','c','b','b','b','a','a'};
	char user_ans[11] = {};
	char user__ans[11] = {};
	int score = 0;
	char a;
	char b = 251;
	cout<<"\t\t-------------------------------"<<"\n";
	cout<<"\a\t\t  Welcome to a C++ quiz game"<<"\n";
	cout<<"\t\t-------------------------------"<<"\n";
	bool x = true;
	while(x) {
		cout<<"Press 1 to Start\nPress 2 to Exit"<<endl;
		char begin;
		cin>>begin;
		switch(begin) {
			case '1':
				cout<<"\t\t----------------------"<<"\n";
				cout<<"\a\t\t  Rules of the game"<<endl;
				cout<<"\t\t----------------------"<<"\n";
				cout<<"You are expected to answer 10 questions"<<"\n";
				cout<<"You can skip a question and return to it later"<<"\n";
				cout<<"To answer a question enter the right option on the keyboard and Press Enter"<<"\n";
				cout<<"To skip a question Press N"<<"\n";
				cout<<"To go back to previous questions Press P"<<"\n";
				cout<<"To submit Press F"<<"\n\n";
				for (int i =0; i<11; ++i) {
					if (i<10) {
						for (int j=0; j<10; ++j)
							cout<<"----";
						cout<<"\n";
						for (int j=0; j<10; ++j)
							cout<<" "<<j+1<<" |";
						cout<<"\n";
						for (int j=0; j<10; ++j)
							cout<<"----";
						cout<<"\n";
						for (int j=0; j<10; ++j)
							cout<<" "<<user_ans[j]<<" |";
						cout<<"\n";
						for (int j=0; j<10; ++j)
							cout<<"----";
						cout<<"\n";

						if(i<0) {
							cout<<"You are already the first question\n";
							i=0;
						}
messi:
						cout<<i+1<<". "<<questions[i]<<endl;
						cout<<"\nA. "<<quest_opt[i][0]<<"\nB. "<<quest_opt[i][1]<<"\nC. "<<quest_opt[i][2]<<"\nD. "<<quest_opt[i][3]<<endl;
						cout<<"\nInput option: ";
						cin>> user_ans[i];
						if (user_ans[i]>64&&user_ans[i]<91) {
							user_ans[i]= int(user_ans[i])+32;
						}
						if ((user_ans[i]=='a')||(user_ans[i]=='b')||(user_ans[i]=='c')||(user_ans[i]=='d')||(user_ans[i]=='p')||(user_ans[i]=='n')||(user_ans[i]=='f')) {
							cout<<".";
						} else {
							goto messi;
						}
						 		 	   																																	
						if (user_ans[i] == 'p') {
							user_ans[i] = user__ans[i];
							i -= 2;
						} else if (user_ans[i] == 'n') {
							user_ans[i] = ' ';
							continue;
						} else if(user_ans[i]== 'f') {
							cout<<"Are you sure you want to submit?(y/n): ";
							char sure;
							cin>>sure;
							if (sure == 'y') {
								cout<<"\nCoallating Results...\n\n";
								a = user_ans[i];
								break;
							} else {
								user_ans[i] = ' ';
								i -=1;
								continue;
							}
						}

						user__ans[i]=user_ans[i];
					} else {
						for (int j=0; j<10; ++j)
							cout<<"----";
						cout<<"\n";
						for (int j=0; j<10; ++j)
							cout<<" "<<j+1<<" |";
						cout<<"\n";
						for (int j=0; j<10; ++j)
							cout<<"----";
						cout<<"\n";
						for (int j=0; j<10; ++j)
							cout<<" "<<user_ans[j]<<" |";
						cout<<"\n";
						for (int j=0; j<10; ++j)
							cout<<"----";
						cout<<"\n";

						cout<<"You have reached the last question"<<endl;
						cout<<"Press F to Submit"<<endl;
						cout<<"Press P to go back to Previous Question"<<endl;
						cout<<"Input Option: ";
						cin>> user_ans[i];
						if (user_ans[i]>64&&user_ans[i]<91) {
							user_ans[i]= int(user_ans[i])+32;
						}
						if (user_ans[i]== 'f') {
							cout<<"\nCoallating Results...\n\n";
							a = user_ans[i];
							break;
						} else if (user_ans[i]== 'p') {
							i -= 2;
						}

					}
				}
				for (int j =0; j<10; ++j) {
					if (user_ans[j]==answers[j]) {
						++score;
					}
				}
				if (a == 'f') {
					cout<<"Score = "<<score<<"/10"<<endl;
					cout<<"Press V to view Script  ";
					char view;
					cin>>view;
					if (view>64&&view<91) {
						view= int(view)+32;
					}
					if (view == 'v') {
						cout<<"       |  Your Answer   | Correct Answer |\t"<<endl;
						cout<<"-------------------------------------------------------"<<endl;
						for(int f =0; f<10; f++) {
							cout<<"   "<<f+1<<"   |      "<<user_ans[f]<<"          |        "<<answers[f]<<"       |        ";
							if (user_ans[f]==answers[f]) {
								cout<<b<<"   |"<<endl;
							} else {
								cout<<"X   |"<<endl;
							}
						}
						cout<<"\n\nView script with Questions?(y/n) ";
						char script_quest;
						cin>> script_quest;
						if (script_quest>64&&script_quest<91) {
							script_quest= int(script_quest)+32;
						}
						if (script_quest == 'y') {
							for(int i = 0; i<10; i++) {
								cout<<"\n"<<i+1<<". "<<questions[i]<<endl;
								cout<<"\nA. "<<quest_opt[i][0]<<"\nB. "<<quest_opt[i][1]<<"\nC. "<<quest_opt[i][2]<<"\nD. "<<quest_opt[i][3]<<endl;
								cout<<"Correct Option: "<<answers[i]<<"\tYour Choice: "<<user_ans[i]<<"\t";
								if (user_ans[i]==answers[i]) {
									cout<<"Correct "<< b<<endl;
								} else {
									cout<<"Wrong X";
								}

							}
						} else {
							cout<<"Thank You for playing!! :)";
						}
					} else {
						cout<<"Thank You for playing!! :)";
					}
				}
				x=false;
				break;

			case '2':
				cout<<"Game Exited!"<<endl;
				x=false;
				break;
			default:
				cout<<"Invalid Input:( Try again."<<"\n\n";
				x=true;
		}
	}
	return 0;
}
