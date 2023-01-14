#ifndef SOURCE_H_INCLUDED
#define SOURCE_H_INCLUDED

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<limits>
using namespace std;
class master
{
public:
	void final_output_ui();
	void output_ui();
	void call(char** argv);
	void func(char** argv);
	void encapsulated_create(char** argv);
	void create(int i, char** argv);
	void check_add(char** argv);
	void common_display();
	void display(char** argv);
	void modify(char** argv);
	void del(char** argv);
};
class library
{
public:
	char ref_id[10];
	char book_name[25];
};
class article :public library
{
private:
	char author_name[25];
	char date[20];
public:
	void article_add(char** argv);
	void article_add1(char** argv, int i);
	void get1();
	void output();
	void art_display(char** argv, int i);
	void art_modify(char** argv, int i);
	void art_del(char** argv,int i);
};
class reference1 :public library
{
private:
	char author_name[25];
	char date[20];
public:
	void reference_add(char** argv);
	void sub_reference_add();
	void reference_add1(char** argv, int i);
	void reference_type_display();
	void get();
	void reference_display(char** argv);
	void reference_display1(char** argv, int i);
	void output1();
	void reference_modify(char** argv);
	void reference_modify1(char** argv, int i);
	void reference_del(char** argv);
	void reference_del1(char** argv, int i);

};
class Reports :public library
{
private:
	char date[20];
	char abt_what[25];
	char author_name[25];
public:
	void Reports_add(char** argv);
	void sub_Reports_add();
	void Reports_add1(char** argv, int i);
	void Reports_type_display();
	void Reports_display(char** argv);
	void Reports_display1(char** argv, int i);
	void output3();
	void get2();
	void Reports_modify(char** argv);
	void Reports_modify1(char** argv, int i);
	void Reports_del(char** argv);
	void Reports_del1(char** argv, int i);
};
class fantasy :public library
{
private:
	int pages;
	char theme[25];
	char author_name[25];
public:
	void fantasy_add(char** argv);
	void sub_fantasy_add();
	void fantasy_add1(char** argv, int i);
	void fantasy_type_display();
	void get3();
	void fantasy_display(char** argv);
	void fantasy_display1(char** argv, int i);
	void output4();
	void fantasy_modify(char** argv);
	void fantasy_modify1(char** argv, int i);
	void fantasy_del(char** argv);
	void fantasy_del1(char** argv, int i);
};
class encyclopedia :public library
{
private:
	char encyclopedia_on_what[25];
	char author_name[25];
	int edition;
public:
	void encyclopedia_add(char** argv);
	void sub_encyclopedia_add();
	void encyclopedia_add1(char** argv, int i);
	void encyclopedia_type_display();
	void encyclopedia_display(char** argv);
	void encyclopedia_display1(char** argv, int i);
	void output5();
	void get4();
	void encyclopedia_modify(char** argv);
	void encyclopedia_modify1(char** argv, int i);
    void encyclopedia_del(char** argv);
	void encyclopedia_del1(char** argv, int i);
};
class journals :public library
{
private:
	char language[25];
	char date[20];
	int edition;
public:
	void journals_add(char** argv);
	void sub_journals_add();
	void journals_add1(char** argv, int i);
	void journals_type_display();
	void journals_display(char** argv);
	void journals_display1(char** argv, int i);
	void output6();
	void get5();
	void journals_modify(char** argv);
	void jounals_modify1(char** argv, int i);
	void journals_del(char** argv);
	void jounals_del1(char** argv, int i);
};


void reference1::reference_type_display()
{
	cout << "There are four types of reference " << endl;
	cout << "Press 1-Language and Dictionary" << endl;
	cout << "Press 2-Biograpghical Source" << endl;
	cout << "Press 3-Chronologies" << endl;
	cout << "Press 4-Directories" << endl;
	cout << "Press 5 - Back" << endl;
}
void Reports::Reports_type_display()
{
	cout << "There are four types of Documents and Reports " << endl;
	cout << "Press 1-Internal Sites" << endl;
	cout << "Press 2-Thesis Report" << endl;
	cout << "Press 3-Patents" << endl;
	cout << "Press 4-Standard" << endl;
	cout << "Press 5 - Back" << endl;
}
void fantasy::fantasy_type_display()
{
	cout << "There are four types of Fantasy " << endl;
	cout << "Press 1-Mystries" << endl;
	cout << "Press 2-Thrillers" << endl;
	cout << "Press 3-Romance" << endl;
	cout << "Press 4-Science fiction" << endl;
	cout << "Press 5 - Back" << endl;
}
void encyclopedia::encyclopedia_type_display()
{
	cout << "There are four types of Encyclopedia " << endl;
	cout << "Press 1-Citizendum" << endl;
	cout << "Press 2-Encyclopedia Britanica" << endl;
	cout << "Press 3-Encyclopedia Herbraica" << endl;
	cout << "Press 4-Everipedia" << endl;
	cout << "Press 5 - Back" << endl;
}
void journals::journals_type_display()
{
	cout << "There are four types of Journals " << endl;
	cout << "Press 1-News paper" << endl;
	cout << "Press 2-Journals" << endl;
	cout << "Press 3-Magazine" << endl;
	cout << "Press 4-Weekly Journals" << endl;
	cout << "Press 5 - Back" << endl;
}

void master::check_add(char** argv)
{
	master m;
	article a;
	reference1 b;
	Reports r;
	fantasy f;
	encyclopedia e;
	journals j;
	int choice;
	cout << "Add the details" << endl << endl;
	while (true)
	{
		m.common_display();
		cout << "Enter your choice :" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			a.article_add(argv);
			break;
		case 2:
			b.reference_add(argv);
			break;
		case 3:
			r.Reports_add(argv);
			break;
		case 4:
			f.fantasy_add(argv);
			break;
		case 5:
			e.encyclopedia_add(argv);
			break;
		case 6:
			j.journals_add(argv);
			break;
		case 7:
			m.call(argv);
			break;
		}
	}
}

void article::get1()
{
	fflush(stdin);
	cout << "Enter the reference id:" << endl;
	cin.getline(ref_id, 10);
	fflush(stdin);
	cout << "Enter the Article name:" << endl;
	cin.getline(book_name, 25);
	fflush(stdin);
	cout << "Enter the author name: " << endl;
	cin.getline(author_name, 25);
	fflush(stdin);
	cout << "Enter the year of published in date/month/year" << endl;
	cin.getline(date, 20);
	fflush(stdin);
}

void article::article_add(char** argv)
{
	cout << "Enter the details of article: " << endl << endl;
	article_add1(argv, 1);

}
void article::article_add1(char** argv, int i)
{
	ofstream myfile;
	myfile.open(argv[i], ios::app | ios::binary);
	if (myfile)
	{
		int choice1 = 0;
		cout << "The file exist" << endl;
		article a;
		do
		{
			a.get1();
			myfile.write((char*)&a, sizeof(a));
			cout << "Press 1 to continue getting of value" << endl;
			fflush(stdin);
			cin >> choice1;
			//system("cls");
			system("pause");
		} while (choice1 == 1);
	}
	else
	{
		cout << "The file doesn't exist" << endl;
		return;
	}
	myfile.close();
	return;
}


void reference1::get()
{
	fflush(stdin);
	cout << "Enter the reference id:" << endl;
	cin.getline(ref_id, 10);
	fflush(stdin);
	cout << "Enter the book name:" << endl;
	cin.getline(book_name, 25);
	fflush(stdin);
	cout << "Enter the author name: " << endl;
	cin.getline(author_name, 25);
	fflush(stdin);
	cout << "Enter the year of published in date/month/year" << endl;
	cin.getline(date, 20);
	fflush(stdin);
}



void reference1::reference_add(char** argv)
{
	master m;
	reference1 b;
	int choice, opt;
	cout << "Enter the details of Reference: " << endl << endl;
	do
	{
		reference_type_display();
		cout << "Enter your choice:" << endl;
	label:
		cin >> choice;
		switch (choice)
		{
		case 1:
			b.reference_add1(argv, 2);
			break;
		case 2:
			b.reference_add1(argv, 3);
			break;
		case 3:
			b.reference_add1(argv, 4);
			break;
		case 4:
			b.reference_add1(argv, 5);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To Add Reference Books " << endl;
		cin >> opt;
	} while (opt == 1);
}

void reference1::reference_add1(char** argv, int i)
{
	ofstream myfile;
	myfile.open(argv[i], ios::app | ios::binary);
	if (myfile)
	{
		int choice1 = 0;
		cout << "The file exist" << endl;
		reference1 b;
		do
		{
			b.get();
			myfile.write((char*)&b, sizeof(b));
			cout << "Press 1 to continue getting of value" << endl;
			fflush(stdin);
			cin >> choice1;
			//system("cls");
			system("pause");
		} while (choice1 == 1);
	}
	else
	{
		cout << "The file doesn't exist" << endl;
		return;
	}
	myfile.close();
	return;
}


void Reports::get2()
{
	fflush(stdin);
	cout << "Enter the reference id:" << endl;
	cin.getline(ref_id, 10);
	fflush(stdin);
	cout << "Enter the Report name:" << endl;
	cin.getline(abt_what, 25);
	fflush(stdin);
	cout << "Enter the Reporter's name: " << endl;
	cin.getline(author_name, 25);
	fflush(stdin);
	cout << "Enter the year of published in date/month/year" << endl;
	cin.getline(date, 20);
	fflush(stdin);
}

void Reports::Reports_add(char** argv)
{
	master m;
	Reports r;
	int choice, opt;
	cout << "Enter the details of Documents And Reports: " << endl << endl;
	do
	{
		Reports_type_display();
		cout << "Enter your choice:" << endl;
	label1:
		cin >> choice;
		switch (choice)
		{
		case 1:
			r.Reports_add1(argv, 6);
			break;
		case 2:
			r.Reports_add1(argv, 7);
			break;
		case 3:
			r.Reports_add1(argv, 8);
			break;
		case 4:
			r.Reports_add1(argv, 9);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label1;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To Add Documents And Reports " << endl;
		cin >> opt;
	} while (opt == 1);
}

void Reports::Reports_add1(char** argv, int i)
{
	ofstream myfile;
	myfile.open(argv[i], ios::app | ios::binary);
	if (myfile)
	{
		int choice1 = 0;
		cout << "The file exist" << endl;
		Reports r;
		do
		{
			r.get2();
			myfile.write((char*)&r, sizeof(r));
			cout << "Press 1 to continue getting of value" << endl;
			fflush(stdin);
			cin >> choice1;
			//system("cls");
			system("pause");
		} while (choice1 == 1);
	}
	else
	{
		cout << "The file doesn't exist" << endl;
		return;
	}
	myfile.close();
	return;
}

void fantasy::get3()
{
	fflush(stdin);
	cout << "Enter the reference id:" << endl;
	cin.getline(ref_id, 10);
	fflush(stdin);
	cout << "Enter the Author name:" << endl;
	cin.getline(author_name, 25);
	fflush(stdin);
	cout << "Enter the Theme name: " << endl;
	cin.getline(theme, 25);
	fflush(stdin);
	cout << "Enter the Pages:" << endl;
	cin >> pages;
	fflush(stdin);
}

void fantasy::fantasy_add(char** argv)
{
	master m;
	fantasy f;
	int choice, opt;
	cout << "Enter the details of Fantasy: " << endl << endl;
	do
	{
		fantasy_type_display();
		cout << "Enter your choice:" << endl;
	label2:
		cin >> choice;
		switch (choice)
		{
		case 1:
			f.fantasy_add1(argv, 10);
			break;
		case 2:
			f.fantasy_add1(argv, 11);
			break;
		case 3:
			f.fantasy_add1(argv, 12);
			break;
		case 4:
			f.fantasy_add1(argv, 13);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label2;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To Add Fantasy" << endl;
		cin >> opt;
	} while (opt == 1);
}

void fantasy::fantasy_add1(char** argv, int i)
{
	ofstream myfile;
	myfile.open(argv[i], ios::app | ios::binary);
	if (myfile)
	{
		int choice1 = 0;
		cout << "The file exist" << endl;
		fantasy f;
		do
		{
			f.get3();
			myfile.write((char*)&f, sizeof(f));
			cout << "Press 1 to continue getting of value" << endl;
			fflush(stdin);
			cin >> choice1;
			//system("cls");
			system("pause");
		} while (choice1 == 1);
	}
	else
	{
		cout << "The file doesn't exist" << endl;
		return;
	}
	myfile.close();
	return;
}

void encyclopedia::get4()
{
	fflush(stdin);
	cout << "Enter the reference id:" << endl;
	cin.getline(ref_id, 10);
	fflush(stdin);
	cout << "Enter the Author name:" << endl;
	cin.getline(author_name, 25);
	fflush(stdin);
	cout << "Enter the Encyclopedia: " << endl;
	cin.getline(encyclopedia_on_what, 25);
	fflush(stdin);
	cout << "Enter the Edition:" << endl;
	cin >> edition;
	fflush(stdin);
}

void encyclopedia::encyclopedia_add(char** argv)
{
	master m;
	encyclopedia e;
	int choice, opt;
	cout << "Enter the details of Encyclopeida: " << endl << endl;
	do
	{
		encyclopedia_type_display();
		cout << "Enter your choice:" << endl;
	label3:
		cin >> choice;
		switch (choice)
		{
		case 1:
			e.encyclopedia_add1(argv, 14);
			break;
		case 2:
			e.encyclopedia_add1(argv, 15);
			break;
		case 3:
			e.encyclopedia_add1(argv, 16);
			break;
		case 4:
			e.encyclopedia_add1(argv, 17);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label3;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To Add Encyclopedia " << endl;
		cin >> opt;
	} while (opt == 1);
}

void encyclopedia::encyclopedia_add1(char** argv, int i)
{
	ofstream myfile;
	myfile.open(argv[i], ios::app | ios::binary);
	if (myfile)
	{
		int choice1 = 0;
		cout << "The file exist" << endl;
		encyclopedia e;
		do
		{
			e.get4();
			myfile.write((char*)&e, sizeof(e));
			cout << "Press 1 to continue getting of value" << endl;
			fflush(stdin);
			cin >> choice1;
			//system("cls");
			system("pause");
		} while (choice1 == 1);
	}
	else
	{
		cout << "The file doesn't exist" << endl;
		return;
	}
	myfile.close();
	return;
}

void journals::get5()
{
	fflush(stdin);
	cout << "Enter the reference id:" << endl;
	cin.getline(ref_id, 10);
	fflush(stdin);
	cout << "Enter the Journal name:" << endl;
	cin.getline(book_name, 25);
	fflush(stdin);
	cout << "Enter the Language: " << endl;
	cin.getline(language, 25);
	fflush(stdin);
	cout << "Enter the Edition:" << endl;
	cin >> edition;
	fflush(stdin);
	cout << "Enter the year of published in date/month/year" << endl;
	cin.getline(date, 20);
	fflush(stdin);
}

void journals::journals_add(char** argv)
{
	master m;
	journals j;
	int choice, opt;
	cout << "Enter the details of Documents And Reports: " << endl << endl;
	do
	{
		journals_type_display();
		cout << "Enter your choice:" << endl;
	label4:
		cin >> choice;
		switch (choice)
		{
		case 1:
			j.journals_add1(argv, 18);
			break;
		case 2:
			j.journals_add1(argv, 19);
			break;
		case 3:
			j.journals_add1(argv, 20);
			break;
		case 4:
			j.journals_add1(argv, 21);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label4;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To Add Journals " << endl;
		cin >> opt;
	} while (opt == 1);
}

void journals::journals_add1(char** argv, int i)
{
	ofstream myfile;
	myfile.open(argv[i], ios::app | ios::binary);
	if (myfile)
	{
		int choice1 = 0;
		cout << "The file exist" << endl;
		journals j;
		do
		{
			j.get5();
			myfile.write((char*)&j, sizeof(j));
			cout << "Press 1 to continue getting of value" << endl;
			fflush(stdin);
			cin >> choice1;
			//system("cls");
			system("pause");
		} while (choice1 == 1);
	}
	else
	{
		cout << "The file doesn't exist" << endl;
		return;
	}
	myfile.close();
	return;
}

void master::display(char** argv)
{
	master m;
	article a;
	reference1 b;
	Reports r;
	fantasy f;
	encyclopedia e;
	journals j;
	int choice;
	cout << "Add the details" << endl << endl;
	while (true)
	{
		m.common_display();
		cout << "Enter your choice :" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			a.art_display(argv, 1);
			break;
		case 2:
			b.reference_display(argv);
			break;
		case 3:
			r.Reports_display(argv);
			break;
		case 4:
			f.fantasy_display(argv);
			break;

		case 5:
			e.encyclopedia_display(argv);
			break;

		case 6:
			j.journals_display(argv);
			break;
		case 7:
			m.call(argv);
			break;
		}
	}
}

void article::output()
{
	cout << "\n";
	cout << "ARTICLE DETAILS";
	cout << "\nBook ID     :" << ref_id;
	cout << "\nBook Name   :" << book_name;
	cout << "\nAuthor Name :" << author_name;
	cout << "\nYear        :" << date;
	cout << "\n";
	cout << "\n";
}

void article::art_display(char** argv, int i)
{
	article a;
	ifstream d;
	d.open(argv[i], ios::in | ios::binary);
	d.read((char*)&a, sizeof(a));
	d.seekg(0);
	cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n\n";

	if (!d)
	{
		cout << "File cannot be opened";

	}
	else
	{
		while (1)
		{
			d.read((char*)&a, sizeof(a));
			if (d.eof())
			{
				break;
			}
			a.output();
		}
	}
}

void reference1::output1()
{
	cout << "REFERENCE DETAILS";
	cout << "\n";
	cout << "\nReference ID     :" << ref_id;
	cout << "\nBook Name        :" << book_name;
	cout << "\nAuthor Name      :" << author_name;
	cout << "\nYear             :" << date;
	cout << "\n";
	cout << "\n";
}

void reference1::reference_display(char** argv)
{
	master m;
	reference1 b;
	int choice, opt;
	do
	{
		reference_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			b.reference_display1(argv, 2);
			break;
		case 2:
			b.reference_display1(argv, 3);
			break;
		case 3:
			b.reference_display1(argv, 4);
			break;
		case 4:
			b.reference_display1(argv, 5);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option,Press 1 to visit again" << endl;
		cin >> opt;
	} while (opt == 1);
}

void reference1::reference_display1(char** argv, int i)
{
	reference1 b;
	ifstream d;
	d.open(argv[i], ios::in | ios::binary);
	d.read((char*)&b, sizeof(b));
	d.seekg(0);
	if (!d)
	{
		cout << "File cannot be opened";

	}
	else
	{
		while (1)
		{
			d.read((char*)&b, sizeof(b));
			if (d.eof())
			{
				break;
			}
			b.output1();
		}
	}
}

void Reports::output3()
{
	cout << "REPORTS DETAILS";
	cout << "\n";
	cout << "\nReport ID        :" << ref_id;
	cout << "\nReport Name      :" << abt_what;
	cout << "\nReporter Name    :" << author_name;
	cout << "\nYear             :" << date;
	cout << "\n";
	cout << "\n";
}

void Reports::Reports_display(char** argv)
{
	master m;
	Reports r;
	int choice, opt;
	do
	{
		Reports_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			r.Reports_display1(argv, 6);
			break;
		case 2:
			r.Reports_display1(argv, 7);
			break;
		case 3:
			r.Reports_display1(argv, 8);
			break;
		case 4:
			r.Reports_display1(argv, 9);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To Add Documents and Reports Books " << endl;
		cin >> opt;
	} while (opt == 1);
}

void Reports::Reports_display1(char** argv, int i)
{
	Reports r;
	ifstream d;
	d.open(argv[i], ios::in | ios::binary);
	d.read((char*)&r, sizeof(r));
	d.seekg(0);
	if (!d)
	{
		cout << "File cannot be opened";

	}
	else
	{
		while (1)
		{
			d.read((char*)&r, sizeof(r));
			if (d.eof())
			{
				break;
			}
			r.output3();
		}
	}
}

void fantasy::output4()
{
	cout << "FANTASY DETAILS";
	cout << "\n";
	cout << "\nFantasy ID        :" << ref_id;
	cout << "\nAuthor Name       :" << author_name;
	cout << "\nTheme             :" << theme;
	cout << "\nPages             :" << pages;
	cout << "\n";
	cout << "\n";
}

void fantasy::fantasy_display(char** argv)
{
	master m;
	fantasy f;
	int choice, opt;
	do
	{
		fantasy_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			f.fantasy_display1(argv, 10);
			break;
		case 2:
			f.fantasy_display1(argv, 11);
			break;
		case 3:
			f.fantasy_display1(argv, 12);
			break;
		case 4:
			f.fantasy_display1(argv, 13);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To Add Fantasy books " << endl;
		cin >> opt;
	} while (opt == 1);
}

void fantasy::fantasy_display1(char** argv, int i)
{
	fantasy f;
	ifstream d;
	d.open(argv[i], ios::in | ios::binary);
	d.read((char*)&f, sizeof(f));
	d.seekg(0);
	if (!d)
	{
		cout << "File cannot be opened";

	}
	else
	{
		while (1)
		{
			d.read((char*)&f, sizeof(f));
			if (d.eof())
			{
				break;
			}
			f.output4();
		}
	}
}

void encyclopedia::output5()
{
	cout << "ENCYCLOPEDIA DETAILS";
	cout << "\n";
	cout << "\nEncyclopedia ID             :" << ref_id;
	cout << "\nAuthor Name                 :" << author_name;
	cout << "\nAbout Encyclopedia          :" << encyclopedia_on_what;
	cout << "\nEdition                     :" << edition;
	cout << "\n";
	cout << "\n";
}

void encyclopedia::encyclopedia_display(char** argv)
{
	master m;
	encyclopedia e;
	int choice, opt;
	do
	{
		encyclopedia_type_display();
		cout << "Enter your choice:" << endl;
	label:
		cin >> choice;
		switch (choice)
		{
		case 1:
			e.encyclopedia_display1(argv, 14);
			break;
		case 2:
			e.encyclopedia_display1(argv, 15);
			break;
		case 3:
			e.encyclopedia_display1(argv, 16);
			break;
		case 4:
			e.encyclopedia_display1(argv, 17);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To Add Encyclopedia " << endl;
		cin >> opt;
	} while (opt == 1);
}


void encyclopedia::encyclopedia_display1(char** argv, int i)
{
	encyclopedia e;
	ifstream d;
	d.open(argv[i], ios::in | ios::binary);
	d.read((char*)&e, sizeof(e));
	d.seekg(0);
	if (!d)
	{
		cout << "File cannot be opened";

	}
	else
	{
		while (1)
		{
			d.read((char*)&e, sizeof(e));
			if (d.eof())
			{
				break;
			}
			e.output5();
		}
	}
}

void journals::output6()
{
	cout << "JOURNALS DETAILS";
	cout << "\n";
	cout << "\nJournal ID              :" << ref_id;
	cout << "\nJournal Name            :" << book_name;
	cout << "\nLanguage                :" << language;
	cout << "\nYear                    :" << date;
	cout << "\nEdition                 :" << edition;
	cout << "\n";
	cout << "\n";
}

void journals::journals_display(char** argv)
{
	master m;
	journals j;
	int choice, opt;
	do
	{
		journals_type_display();
		cout << "Enter your choice:" << endl;
	label2:
		cin >> choice;
		switch (choice)
		{
		case 1:
			j.journals_display1(argv, 18);
			break;
		case 2:
			j.journals_display1(argv, 19);
			break;
		case 3:
			j.journals_display1(argv, 20);
			break;
		case 4:
			j.journals_display1(argv, 21);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label2;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To Add Encyclopedia " << endl;
		cin >> opt;
	} while (opt == 1);
}

void journals::journals_display1(char** argv, int i)
{
	journals j;
	ifstream d;
	d.open(argv[i], ios::in | ios::binary);
	d.read((char*)&j, sizeof(j));
	d.seekg(0);
	if (!d)
	{
		cout << "File cannot be opened";

	}
	else
	{
		while (1)
		{
			d.read((char*)&j, sizeof(j));
			if (d.eof())
			{
				break;
			}
			j.output6();
		}
	}
}

void master::modify(char** argv)
{
	master m;
	article a;
	reference1 b;
	Reports r;
	fantasy f;
	encyclopedia e;
	journals j;
	int choice;
	cout << "Modify the details" << endl << endl;
	while (true)
	{
		m.common_display();
		cout << "Enter your choice :" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			a.art_modify(argv, 1);
			break;
		case 2:
			b.reference_modify(argv);
			break;

		case 3:
			r.Reports_modify(argv);
			break;

		case 4:
			f.fantasy_modify(argv);
			break;

		case 5:
			e.encyclopedia_modify(argv);
			break;

		case 6:
			j.journals_modify(argv);
			break;
		case 7:
			m.call(argv);
			break;
		}
	}
}

void article::art_modify(char** argv, int i)
{
	int pos;
	char id[10];
	cout << "\nENTER THE ID NUMBER TO BE MODIFIED:";
	fflush(stdin);
	cin.getline(id, 10);
	fstream mdat;
	article a;
	mdat.open(argv[i], ios::in | ios::out | ios::binary);
	while (!mdat.eof())
	{
		pos = mdat.tellg();
		mdat.read((char*)&a, sizeof(a));
		if (mdat)
		{
			cout << "The file exist\n";
			if (strcmp(id, a.ref_id) == 0)
			{
				a.get1();
				mdat.seekg(pos);
				mdat.write((char*)&a, sizeof(a));
				a.output();
				break;
			}
		}
		else
		{
			cout << "\nThe file cannot be opened";
		}
	}
	mdat.close();
}

void reference1::reference_modify(char** argv)
{
	master m;
	reference1 b;
	int choice, opt;
	do
	{
		reference_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			b.reference_modify1(argv, 2);
			break;
		case 2:
			b.reference_modify1(argv, 3);
			break;
		case 3:
			b.reference_modify1(argv, 4);
			break;
		case 4:
			b.reference_modify1(argv, 5);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To Add Documents and Reports Books " << endl;
		cin >> opt;
	} while (opt == 1);
}

void reference1::reference_modify1(char** argv, int i)
{
	int pos;
	char id[10];
	cout << "\nENTER THE ID NUMBER TO BE MODIFIED:";
	fflush(stdin);
	cin.getline(id, 10);
	fstream mdat;
	reference1 b;
	mdat.open(argv[i], ios::in | ios::out | ios::binary);
	while (!mdat.eof())
	{
		pos = mdat.tellg();
		mdat.read((char*)&b, sizeof(b));
		if (mdat)
		{
			cout << "\nThe file exist";
			if (strcmp(id, b.ref_id) == 0)
			{
				b.get();
				mdat.seekg(pos);
				mdat.write((char*)&b, sizeof(b));
				b.output1();
				break;
			}
		}
		else
		{
			cout << "\nThe file cannot be opened";
		}
	}
	mdat.close();
}

void Reports::Reports_modify(char** argv)
{
	master m;
	Reports r;
	int choice, opt;
	do
	{
		Reports_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			r.Reports_modify1(argv, 6);
			break;
		case 2:
			r.Reports_modify1(argv, 7);
			break;
		case 3:
			r.Reports_modify1(argv, 8);
			break;
		case 4:
			r.Reports_modify1(argv, 9);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "\nPress 1 to give new value" << endl;
		cout << "\nEnter your option , Press 1 To Add Documents and Reports Books " << endl;
		cin >> opt;
	} while (opt == 1);
}

void Reports::Reports_modify1(char** argv, int i)
{
	int pos;
	char id[10];
	cout << "\nENTER THE ID NUMBER TO BE MODIFIED:";
	fflush(stdin);
	cin.getline(id, 10);
	fstream mdat;
	Reports r;
	mdat.open(argv[i], ios::in | ios::out | ios::binary);
	while (!mdat.eof())
	{
		pos = mdat.tellg();
		mdat.read((char*)&r, sizeof(r));
		if (mdat)
		{
			cout << "\nThe file exist";
			if (strcmp(id, r.ref_id) == 0)
			{
				r.get2();
				mdat.seekg(pos);
				mdat.write((char*)&r, sizeof(r));
				r.output3();
				break;
			}
		}
		else
		{
			cout << "\nThe file cannot be opened";
			return;
		}
	}
	mdat.close();
}

void fantasy::fantasy_modify(char** argv)
{
	master m;
	fantasy f;
	int choice, opt;
	do
	{
		fantasy_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			f.fantasy_modify1(argv, 10);
			break;
		case 2:
			f.fantasy_modify1(argv, 11);
			break;
		case 3:
			f.fantasy_modify1(argv, 12);
			break;
		case 4:
			f.fantasy_modify1(argv, 13);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "\nPress 1 to give new value" << endl;
		cout << "\nEnter your option , Press 1 To Add Documents and Reports Books " << endl;
		cin >> opt;
	} while (opt == 1);
}

void fantasy::fantasy_modify1(char** argv, int i)
{
	int pos;
	char id[10];
	cout << "\nENTER THE ID NUMBER TO BE MODIFIED:";
	fflush(stdin);
	cin.getline(id, 10);
	fstream mdat;
	fantasy f;
	mdat.open(argv[i], ios::in | ios::out | ios::binary);
	while (!mdat.eof())
	{
		pos = mdat.tellg();
		mdat.read((char*)&f, sizeof(f));
		if (mdat)
		{
			cout << "\nThe file exist";
			if (strcmp(id, f.ref_id) == 0)
			{
				f.get3();
				mdat.seekg(pos);
				mdat.write((char*)&f, sizeof(f));
				f.output4();
				break;
			}
		}
		else
		{
			cout << "\nThe file cannot be opened";
			return;
		}
	}
	mdat.close();
}

void encyclopedia::encyclopedia_modify(char** argv)
{
	master m;
	encyclopedia e;
	int choice, opt;
	do
	{
		encyclopedia_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			e.encyclopedia_modify1(argv, 14);
			break;
		case 2:
			e.encyclopedia_modify1(argv, 15);
			break;
		case 3:
			e.encyclopedia_modify1(argv, 16);
			break;
		case 4:
			e.encyclopedia_modify1(argv, 17);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "\nPress 1 to give new value" << endl;
		cout << "\nEnter your option , Press 1 To Add Documents and Reports Books " << endl;
		cin >> opt;
	} while (opt == 1);
}

void encyclopedia::encyclopedia_modify1(char** argv, int i)
{
	int pos;
	char id[10];
	cout << "\nENTER THE ID NUMBER TO BE MODIFIED:";
	fflush(stdin);
	cin.getline(id, 10);
	fstream mdat;
	encyclopedia e;
	mdat.open(argv[i], ios::in | ios::out | ios::binary);
	while (!mdat.eof())
	{
		pos = mdat.tellg();
		mdat.read((char*)&e, sizeof(e));
		if (mdat)
		{
			cout << "\nThe file exist";
			if (strcmp(id, e.ref_id) == 0)
			{
				e.get4();
				mdat.seekg(pos);
				mdat.write((char*)&e, sizeof(e));
				e.output5();
				break;
			}
		}
		else
		{
			cout << "\nThe file cannot be opened";
			return;
		}
	}
	mdat.close();
}

void journals::journals_modify(char** argv)
{
	master m;
	journals j;
	int choice, opt;
	do
	{
		journals_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			j.jounals_modify1(argv, 18);
			break;
		case 2:
			j.jounals_modify1(argv, 19);
			break;
		case 3:
			j.jounals_modify1(argv, 20);
			break;
		case 4:
			j.jounals_modify1(argv, 21);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "\nPress 1 to give new value" << endl;
		cout << "\nEnter your option , Press 1 To Add Documents and Reports Books " << endl;
		cin >> opt;
	} while (opt == 1);
}


void journals::jounals_modify1(char** argv, int i)
{
	int pos;
	char id[10];
	cout << "\nENTER THE ID NUMBER TO BE MODIFIED:";
	fflush(stdin);
	cin.getline(id, 10);
	fstream mdat;
	journals j;
	mdat.open(argv[i], ios::in | ios::out | ios::binary);
	while (!mdat.eof())
	{
		pos = mdat.tellg();
		mdat.read((char*)&j, sizeof(j));
		if (mdat)
		{
			cout << "\nThe file exist";
			if (strcmp(id, j.ref_id) == 0)
			{
				j.get5();
				mdat.seekg(pos);
				mdat.write((char*)&j, sizeof(j));
				j.output6();
				break;
			}
		}
		else
		{
			cout << "\nThe file cannot be opened";
			return;
		}
	}
	mdat.close();
}

void master::del(char** argv)
{
	master m;
	article a;
	reference1 b;
	Reports r;
	fantasy f;
	encyclopedia e;
	journals j;
	int choice;
	cout << "Modify the details" << endl << endl;
	while (true)
	{
		m.common_display();
		cout << "Enter your choice :" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			a.art_del(argv, 1);
			break;

		case 2:
			b.reference_del(argv);
			break;

		case 3:
			r.Reports_del(argv);
			break;

		case 4:
			f.fantasy_del(argv);
			break;

		case 5:
			e.encyclopedia_del(argv);
			break;

		case 6:
			j.journals_del(argv);
			break;

		case 7:
			m.call(argv);
			break;
		}
	}
}

void article::art_del(char **argv,int i)
{
    int count = 0;
    char n[100];
    fflush(stdin);
	cout<<"Enter the reference number to be deleted:";
	cin.getline(n,100);
	article a;
	ifstream ddat;
	ddat.open("1.dat",ios::in|ios::binary);
	ofstream ddat1;
	ddat1.open("temp.dat",ios::out|ios::binary);
	while(!ddat.eof())
	{
		ddat.read((char *)&a,sizeof(a));
		if(ddat)
		{
			if(strcmp(n,a.ref_id)==0)
			{
				count = 1;
				cout<<"THE DELETED INFORMATION IS"<<endl;
				a.output();
			}
			else
			{
				ddat1.write((char *)&a,sizeof(a));
			}
		}
	}
	ddat.close();
	ddat1.close();
	remove("1.dat");
	rename("temp.dat","1.dat");
	if(count == 1)
	{
		 cout<<"The record is successfully deleted "<<endl;
	}
	else
	{
		cout<<"The record is not found"<<endl;
	}
}

void reference1::reference_del(char** argv)
{
	master m;
	reference1 b;
	int choice, opt;
	do
	{
		reference_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			b.reference_del1(argv, 2);
			break;
		case 2:
			b.reference_del1(argv, 3);
			break;
		case 3:
			b.reference_del1(argv, 4);
			break;
		case 4:
			b.reference_del1(argv, 5);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "Press 1 to give new value" << endl;
		cout << "Enter your option , Press 1 To delete files " << endl;
		cin >> opt;
	} while (opt == 1);
}

void reference1::reference_del1(char **argv,int i)
{
	int count = 0;
    char n[100];
    fflush(stdin);
	cout<<"Enter the reference number to be deleted:";
	cin.getline(n,100);
	reference1 b;
	ifstream ddat;
	ddat.open(argv[i],ios::in|ios::binary);
	ofstream ddat1;
	ddat1.open("temp.dat",ios::out|ios::binary);
	while(!ddat.eof())
	{
		ddat.read((char *)&b,sizeof(b));
		if(ddat)
		{
			if(strcmp(n,b.ref_id)==0)
			{
				count = 1;
				cout<<"THE DELETED INFORMATION IS"<<endl;
				b.output1();
			}
			else
			{
				ddat1.write((char *)&b,sizeof(b));
			}
		}
	}
	ddat.close();
	ddat1.close();
	remove(argv[i]);
	rename("temp.dat",argv[i]);
	if(count == 1)
	{
		 cout<<"The record is successfully deleted "<<endl;
	}
	else
	{
		cout<<"The record is not found"<<endl;
	}
}

void Reports::Reports_del(char **argv)
{
	master m;
	Reports r;
	int choice, opt;
	do
	{
		Reports_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			r.Reports_del1(argv, 6);
			break;
		case 2:
			r.Reports_del1(argv, 7);
			break;
		case 3:
			r.Reports_del1(argv, 8);
			break;
		case 4:
			r.Reports_del1(argv, 9);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "\nPress 1 to give new value" << endl;
		cout << "\nEnter your option , Press 1 To delete files " << endl;
		cin >> opt;
	} while (opt == 1);
}

void Reports::Reports_del1(char **argv,int i)
{
	int count = 0;
    char n[100];
    fflush(stdin);
	cout<<"Enter the reference number to be deleted:";
	cin.getline(n,100);
	Reports r;
	ifstream ddat;
	ddat.open(argv[i],ios::in|ios::binary);
	ofstream ddat1;
	ddat1.open("temp.dat",ios::out|ios::binary);
	while(!ddat.eof())
	{
		ddat.read((char *)&r,sizeof(r));
		if(ddat)
		{
			if(strcmp(n,r.ref_id)==0)
			{
				count = 1;
				cout<<"THE DELETED INFORMATION IS"<<endl;
				r.output3();
			}
			else
			{
				ddat1.write((char *)&r,sizeof(r));
			}
		}
	}
	ddat.close();
	ddat1.close();
	remove(argv[i]);
	rename("temp.dat",argv[i]);
	if(count == 1)
	{
		 cout<<"The record is successfully deleted "<<endl;
	}
	else
	{
		cout<<"The record is not found"<<endl;
	}
}

void fantasy::fantasy_del(char **argv)
{
	master m;
	fantasy f;
	int choice, opt;
	do
	{
		fantasy_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			f.fantasy_del1(argv, 10);
			break;
		case 2:
			f.fantasy_del1(argv, 11);
			break;
		case 3:
			f.fantasy_del1(argv, 12);
			break;
		case 4:
			f.fantasy_del1(argv, 13);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "\nPress 1 to give new value" << endl;
		cout << "\nEnter your option , Press 1 To delete files " << endl;
		cin >> opt;
	} while (opt == 1);
}

void fantasy::fantasy_del1(char **argv,int i)
{
	int count = 0;
    char n[100];
    fflush(stdin);
	cout<<"Enter the reference number to be deleted:";
	cin.getline(n,100);
	fantasy f;
	ifstream ddat;
	ddat.open(argv[i],ios::in|ios::binary);
	ofstream ddat1;
	ddat1.open("temp.dat",ios::out|ios::binary);
	while(!ddat.eof())
	{
		ddat.read((char *)&f,sizeof(f));
		if(ddat)
		{
			if(strcmp(n,f.ref_id)==0)
			{
				count = 1;
				cout<<"THE DELETED INFORMATION IS"<<endl;
				f.output4();
			}
			else
			{
				ddat1.write((char *)&f,sizeof(f));
			}
		}
	}
	ddat.close();
	ddat1.close();
	remove(argv[i]);
	rename("temp.dat",argv[i]);
	if(count == 1)
	{
		 cout<<"The record is successfully deleted "<<endl;
	}
	else
	{
		cout<<"The record is not found"<<endl;
	}
}

void encyclopedia::encyclopedia_del(char **argv)
{
	master m;
	encyclopedia e;
	int choice, opt;
	do
	{
		encyclopedia_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			e.encyclopedia_del1(argv, 14);
			break;
		case 2:
			e.encyclopedia_del1(argv, 15);
			break;
		case 3:
			e.encyclopedia_del1(argv, 16);
			break;
		case 4:
			e.encyclopedia_del1(argv, 17);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "\nPress 1 to give new value" << endl;
		cout << "\nEnter your option , Press 1 To delete files" << endl;
		cin >> opt;
	} while (opt == 1);
}

void encyclopedia::encyclopedia_del1(char **argv,int i)
{
	int count = 0;
    char n[100];
    fflush(stdin);
	cout<<"Enter the reference number to be deleted:";
	cin.getline(n,100);
	encyclopedia e;
	ifstream ddat;
	ddat.open(argv[i],ios::in|ios::binary);
	ofstream ddat1;
	ddat1.open("temp.dat",ios::out|ios::binary);
	while(!ddat.eof())
	{
		ddat.read((char *)&e,sizeof(e));
		if(ddat)
		{
			if(strcmp(n,e.ref_id)==0)
			{
				count = 1;
				cout<<"THE DELETED INFORMATION IS"<<endl;
				e.output5();
			}
			else
			{
				ddat1.write((char *)&e,sizeof(e));
			}
		}
	}
	ddat.close();
	ddat1.close();
	remove(argv[i]);
	rename("temp.dat",argv[i]);
	if(count == 1)
	{
		 cout<<"The record is successfully deleted "<<endl;
	}
	else
	{
		cout<<"The record is not found"<<endl;
	}
}

void journals::journals_del(char **argv)
{
	master m;
	journals j;
	int choice, opt;
	do
	{
		journals_type_display();
		cout << "Enter your choice:" << endl;
	label7:
		cin >> choice;
		switch (choice)
		{
		case 1:
			j.jounals_del1(argv, 18);
			break;
		case 2:
			j.jounals_del1(argv, 19);
			break;
		case 3:
			j.jounals_del1(argv, 20);
			break;
		case 4:
			j.jounals_del1(argv, 21);
			break;
		case 5:
			m.check_add(argv);
			break;
		default:
			cout << "Invalid choice" << endl;
			cout << "Please enter your value again" << endl;
			goto label7;
		}
		cout << "\nPress 1 to give new value" << endl;
		cout << "\nEnter your option , Press 1 To delete files " << endl;
		cin >> opt;
	} while (opt == 1);
}

void journals::jounals_del1(char** argv,int i)
{
	int count = 0;
    char n[100];
    fflush(stdin);
	cout<<"Enter the reference number to be deleted:";
	cin.getline(n,100);
    journals j;
	ifstream ddat;
	ddat.open(argv[i],ios::in|ios::binary);
	ofstream ddat1;
	ddat1.open("temp.dat",ios::out|ios::binary);
	while(!ddat.eof())
	{
		ddat.read((char *)&j,sizeof(j));
		if(ddat)
		{
			if(strcmp(n,j.ref_id)==0)
			{
				count = 1;
				cout<<"THE DELETED INFORMATION IS"<<endl;
				j.output6();
			}
			else
			{
				ddat1.write((char *)&j,sizeof(j));
			}
		}
	}
	ddat.close();
	ddat1.close();
	remove(argv[i]);
	rename("temp.dat",argv[i]);
	if(count == 1)
	{
		 cout<<"The record is successfully deleted "<<endl;
	}
	else
	{
		cout<<"The record is not found"<<endl;
	}
}

void master::encapsulated_create(char** argv)
{
	while (true)
	{
		output_ui();
		func(argv);
	}
}
void master::func(char** argv)
{
	master m;
	int choice;
	cout << "Enter your choice " << endl;
label:
	cin >> choice;
	switch (choice)
	{
	case 1:
		m.create(1, argv);
		break;
	case 2:
		m.create(2, argv);
		break;
	case 3:
		m.create(3, argv);
		break;
	case 4:
		m.create(4, argv);
		break;
	case 5:
		m.create(5, argv);
		break;
	case 6:
		m.create(6, argv);
		break;
	case 7:
		m.create(7, argv);
		break;
	case 8:
		m.create(8, argv);
		break;
	case 9:
		m.create(9, argv);
		break;
	case 10:
		m.create(10, argv);
		break;
	case 11:
		m.create(11, argv);
		break;
	case 12:
		m.create(12, argv);
		break;
	case 13:
		m.create(13, argv);
		break;
	case 14:
		m.create(14, argv);
		break;
	case 15:
		m.create(15, argv);
		break;
	case 16:
		m.create(16, argv);
		break;
	case 17:
		m.create(17, argv);
		break;
	case 18:
		m.create(18, argv);
		break;
	case 19:
		m.create(19, argv);
		break;
	case 20:
		m.create(20, argv);
		break;
	case 21:
		m.create(21, argv);
		break;
	case 22:
		m.call(argv);
		break;
	default:
		cout << "Invalid choice";
		cout << "Please enter value between between 1-22" << endl;
		cout << "Please enter your choice again" << endl;
		goto label;
	}
}
void master::output_ui()
{
	system("cls");
    cout << "PRESS 1 FOR CREATING FILE FOR ARTICLE" << endl<< endl;
	cout << "(There are nearly four types of references)" << endl<< endl;
	cout << "PRESS 2 - LANGUAGE DICTIONARY" << endl<< endl;
	cout << "PRESS 3 - BIOGRAPHYCAL SOURCE" << endl<< endl;
	cout << "PRESS 4 - CHRONOLOGIES" << endl<< endl;
	cout << "PRESS 5 - DIRECTIRIES" << endl<< endl;
	cout << "There are nearly four types of Documents and Reports" << endl<< endl;
	cout << "PRESS 6 - INTERNET SITES" << endl<< endl;
	cout << "PRESS 7 - THESIS REPORT" << endl<< endl;
	cout << "PRESS 8 - PATENTS" << endl<< endl;
	cout << "PRESS 9 - STANDARDS" << endl<< endl;
	cout << "There are nearly four types of fantasy" << endl<< endl;
	cout << "PRESS 10 - MYSTERIES" << endl<< endl;
	cout << "PRESS 11 - THRILLERS" << endl<< endl;
	cout << "PRESS 12 - ROMANCE" << endl<< endl;
	cout << "PRESS 13 - SCIENCE FICTION" << endl<< endl;
	cout << "There are nearly four types of encyclopedias" << endl<< endl;
	cout << "PRESS 14 - CITIZENDUM" << endl<< endl;
	cout << "PRESS 15 - ENCYCLOPEDIA BRITANICA" << endl<< endl;
	cout << "PRESS 16 - ENCYCLOPEDIA HEBRAICA" << endl<< endl;
	cout << "PRESS 17 - EVERIPEDIA" << endl<< endl;
	cout << "There are nearly four journals" << endl<< endl;
	cout << "PRESS 18 - NEWSPAPER" << endl<< endl;
	cout << "PRESS 19 - MAGAZINE" << endl<< endl;
	cout << "PRESS 20 - DAILY JOURNALS" << endl<< endl;
	cout << "PRESS 21 - WEEKLY JOURNALS" << endl<< endl;
	cout << "PRESS 22 - TO RETURN" << endl<< endl;
	cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n";

}
void master::create(int i, char** argv)
{
	ofstream myfile;
	myfile.open(argv[i], ios::binary | ios::out);
	if (!myfile)
		cout << "The file does not exist";
	myfile.close();
	getchar();
}
void master::common_display()
{
	cout << "Choose your interested part of the library " << endl;
	cout << "Press 1-ARTICLE" << endl;
	cout << "Press 2-REFERENCES" << endl;
	cout << "Press 3-DOCUMENTS AND REPORTS" << endl;
	cout << "Press 4-FANTASY" << endl;
	cout << "Press 5-ENCYCLOPEDIAS" << endl;
	cout << "Press 6-JOURNAL" << endl;
	cout << "Press 7-BACK" << endl;
}
#endif

