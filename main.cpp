#include "source.h"
#include <iostream>
#include <fstream>
#include<conio.h>
#include<ctype.h>
char issue_no[25];
char name1[25];
char is_dob1[15];
char ret_dob1[15];
using namespace std;
void exit()
{
    exit(0);
}
class displays
{

    char   date[20];

public:
 char ref_id[10],book_name[25], author_name[25];
};
class book2
{
public:
    int art2()
    {
        int k1;
        cout << "1)DISPLAY ALL ARTICLES \n2)SEARCH BY ID NUMBER\n3)SEARCH BY BOOK NAME\n4)SEARCH BY AUTHOR NAME\n5)PREVIOUS STEP";
        cin >> k1;
        switch(k1)
        {
        case 1:
            {
            article c;
            c.art_display(_argv,1);
            break;
            }
        case 2:
            {
             int flag=0;
            char c1[20];
            ifstream art2;
            cout<<"Enter the id number of the book to be searched:";
            fflush(stdin);
            cin.getline(c1,20);
            displays d1;
            art2.open("1.dat",ios::binary|ios::in);
            if (!art2)
                cout << "The file doesn't exist" << endl;
            while (art2)
            {
                art2.read((char *)&d1, sizeof(d1));
                if (!art2)
                    break;
                if(strcmp(d1.ref_id,c1)==0)
                {
                    flag++;
                }
            }
            if(flag==0)
            cout<<"Record not found."<<endl;
            else
            cout<<"The records have been displayed";
            art2.close();
            break;
            }
        }

        return 0;
    }
    int lang_dict()
    {
        int k1;
        cout << "1)DISPLAY ALL ARTICLES \n2)SEARCH BY ID NUMBER\n3)SEARCH BY BOOK NAME\n4)SEARCH BY AUTHOR NAME\n5)PREVIOUS STEP";
        cin >> k1;
        switch(k1)
        {
        case 1:
            {
            reference1 c;
            c.reference_display(_argv);
            break;
            }
        case 2:
            {
             int flag=0;
            char c1[20];
            ifstream art2;
            cout<<"Enter the id number of the book to be searched:";
            fflush(stdin);
            cin.getline(c1,20);
            displays d1;
            art2.open("2.dat",ios::binary|ios::in);
            if (!art2)
                cout << "The file doesn't exist" << endl;
            while (art2)
            {
                art2.read((char *)&d1, sizeof(d1));
                if (!art2)
                    break;
                if(strcmp(d1.ref_id,c1)==0)
                {
                    flag++;
                }
            }
            if(flag==0)
            cout<<"Record not found."<<endl;
            else
            cout<<"The records have been displayed";
            art2.close();
            break;
            }
        }

        return 0;

    }
};

class books : public book2
{
public:
    int articles()
    {
            art2();
    }
    int references()
    {
        reference1 r;
            r.reference_display(_argv);
    }
    int documents()
    {
        Reports r;
        r.Reports_display(_argv);
    }
    int novels()
    {
        fantasy f;
        f.fantasy_display(_argv);
    }
    int encyclopedia1()
    {
        encyclopedia e;
        e.encyclopedia_display(_argv);
    }
    int journals1()
    {
        journals j;
        j.journals_display(_argv);
    }
};



class lib : public books
{
public:
    int book()
    {
        int n;
    start2:
        cout << "SELECT THE FIELD:\n\n\n";
        cout << "1).ATRICLES\n2).REFERENCE SOURCES\n3).DOCUMENTS AND REPORTS\n4).NOVELS AND POEMS\n5).ENCYCLOPEDIAS\n6)JOURNALS\n7)BACK";
        cin >> n;
        switch (n)
        {
        case 1:
            articles();
            break;
        case 2:
            references();
            break;
        case 3:
            documents();
            break;
        case 4:
            novels();
            break;
        case 5:
            encyclopedia1();
            break;
        case 6:
            journals1();
            break;
        }
        return 0;
    }
            void issue()
        {
            static int gokul=125;
            fflush(stdin);
            cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n\n";

            cout<<"Enter the Name of the student:"<<endl;
            cin.getline(name1,25);
            fflush(stdin);
            cout<<"Enter the Issue Date:"<<endl;
            cin.getline(is_dob1,15);
            fflush(stdin);
            cout<<"Enter the Return Date:"<<endl;
            cin.getline(ret_dob1,15);
            gokul++;
            cout<<"\n\nIt is your Issue Number :"<<gokul;
            fflush(stdin);
            cout<<"\nPlease reenter your issue number for verification :"<<endl;
            cin.getline(issue_no,25);
            fflush(stdin);
            fflush(stdin);
            cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n\n";

            cout<<"1-Article"<<endl;
            cout<<"2-Reference"<<endl;
            cout<<"3-Reports"<<endl;
            cout<<"4-Fantasy"<<endl;
            cout<<"5-Encyclopedia"<<endl;
            cout<<"6-Journals"<<endl<<endl;
            cout<<"Enter your choice"<<endl;
            int choice;
            fflush(stdin);
            cin>>choice;
            switch(choice)
            {
            case 1:
                {
                article c;
                c.art_display(_argv,1);
                cout<<endl<<endl;
                int count = 0;
    char n[100];
    fflush(stdin);
	cout<<"Enter the Article name  to be issued:";
	cin.getline(n,25);
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
			if(strcmp(n,a.book_name)==0)
			{
				count = 1;
				cout<<"THE ISSUED BOOK IS"<<endl;
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
		 cout<<"The article is issued successfully "<<endl;
         system("pause");
	}
	else
	{
		cout<<"The article is not found"<<endl;
	}
            break;
                }
            case 2:
                reference1 c;
                c.reference_display(_argv);
                break;
            case 3:
                Reports r;
                r.Reports_display(_argv);
                break;
            case 4:
                fantasy f;
                f.fantasy_display(_argv);
                break;
            case 5:
                encyclopedia e;
                e.encyclopedia_display(_argv);
                break;
            case 6:
                journals j;
                j.journals_display(_argv);
                break;
            }
        }
        void return_book()
        {
                char temp[25];
                char name[25];
                char is_dob[15];
                char ret_dob[15];
               cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n\n";
        cout<<"Enter your Issue number :"<<endl;
    fflush(stdin);
    cin.getline(temp,25);
    if(strcmp(temp,issue_no)==0)
    {
        cout<<"Issued is Found"<<endl;
            char book[25];
            fflush(stdin);
            label:
            cout<<"\nEnter the Name of the student who is going to return the book:"<<endl;
            cin.getline(name,25);
            if(strcmp(name,name1)!=0)
            {
                cout<<"Please enter the correct name again"<<endl;
                goto label;
            }
            fflush(stdin);
            label1:
            cout<<"Enter the Issue Date when the student got the book:"<<endl;
            cin.getline(is_dob,15);
            if(strcmp(is_dob,is_dob1)!=0)
            {
                cout<<"Please enter the correct Issue date again"<<endl;
                goto label1;
            }
            fflush(stdin);
            label2:
            cout<<"Enter the Return Date(present date):"<<endl;
            cin.getline(ret_dob,15);
            if(strcmp(ret_dob,ret_dob1)!=0)
            {
                cout<<"Please enter the correct Return date again"<<endl;
                goto label2;
            }
            fflush(stdin);
            fflush(stdin);
            cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n\n";
            cout<<"1-Article"<<endl;
            cout<<"2-Reference"<<endl;
            cout<<"3-Reports"<<endl;
            cout<<"4-Fantasy"<<endl;
            cout<<"5-Encyclopedia"<<endl;
            cout<<"6-Journals"<<endl<<endl;
            cout<<"Enter your choice"<<endl;
            int choice;
            cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n\n";

            fflush(stdin);
            cin>>choice;
            switch(choice)
            {
            case 1:
                {
                article c;
                c.article_add(_argv);
                }
            }
    }
    else
    {
        cout<<"You have not issued any book"<<endl;
    }
        }
};
void master::call(char **argv)
{
    master m;
    int choice,n;
    		char u_id[25],u_pass[10],u_id1[4],u_id2[4],u_pass1[4],u_pass2[25];
		char passwor[10],passwo[10];
		int ch1,lo_at=0;
		cout<<endl;
		rithik:
    system("cls");
    cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n\n";
    cout<<"Press 1-Student"<<endl;
    cout<<"Press 2-Staff"<<endl;
    cout<<"Press 3-exit"<<endl;
    home:
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n\n";
    system("cls");
    if(choice==1)
    {
        cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************";

        cout<<"Student"<<endl;
        raju:
      cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tUSERID   : ";
		cin>>u_id;
		cout<<"\n\t\t\t\t\t\t\tPASSWORD : ";
		for( int i=0 ; ; )
		{
			u_pass[i] = getch();
			if((u_pass[i]>='a'&&u_pass[i]<='z')||(u_pass[i]>='A'&&u_pass[i]<='Z')||(u_pass[i]>='!'&&u_pass[i]<='@'))
			{
				passwor[i] = u_pass[i];
				++i;
				u_pass[i]='*';
				cout<<u_pass[i];
		    }
		    if(u_pass[i] == '\b' && i>=1)
		    {
		    	cout<<"\b \b";
		    	--i;
			}
			if(u_pass[i] == '\r')
			{
				passwor[i] = '\0';
				break;
			}
		}
		if(strcmp(u_id,"stud123")== 0 && strcmp(passwor,"12345678")== 0)
		{
        while (true)
    {
        cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n\n";
        cout<<endl;
    int n;
    lib n1;
    cout<<"Press 1 - Issue"<<endl;
        cout<<"Press 2 - Return"<<endl;
        cout<<"Press 3 - back"<<endl;
        cout << "Enter your choice:" << endl;
    while (!(cin >> choice))
        {
            cout << "Please enter a integer value : " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch (choice)
        {
        case 1:
            n1.issue();
            system("cls");
            break;
        case 2:
            n1.return_book();
            system("cls");
            break;
        case 3:
            goto rithik;
            system("cls");
            break;
        }

    }
}
        else
        {
            cout<<"Invalid choice"<<endl;
            cout<<"Please enter your choice again"<<endl;
            goto raju;

        }
    }
    else if(choice==2)
    {
        cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************";

        cout<<"Staff:"<<endl;
              raju1:
      cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tUSERID   : ";
		cin>>u_id;
		cout<<"\n\t\t\t\t\t\t\tPASSWORD : ";
		for( int i=0 ; ; )
		{
			u_pass[i] = getch();
			if((u_pass[i]>='a'&&u_pass[i]<='z')||(u_pass[i]>='A'&&u_pass[i]<='Z')||(u_pass[i]>='!'&&u_pass[i]<='@'))
			{
				passwor[i] = u_pass[i];
				++i;
				u_pass[i]='*';
				cout<<u_pass[i];
		    }
		    if(u_pass[i] == '\b' && i>=1)
		    {
		    	cout<<"\b \b";
		    	--i;
			}
			if(u_pass[i] == '\r')
			{
				passwor[i] = '\0';
				break;
			}
		}
		cout<<endl;
		if(strcmp(u_id,"staff123")== 0 && strcmp(passwor,"12345678")== 0)
		{
        while (true)
                {
        cout<<endl;
        cout << "Press 1 - Create" << endl;
        cout << "Press 2 - Add" << endl;
        cout << "Press 3 - Display" << endl;
        cout << "Press 4 - Modify" << endl;
        cout << "Press 5 - Delete" << endl;
                cout << "Enter your choice:" << endl;
        while (!(cin >> choice))
        {
            cout << "Please enter a integer value : " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        system("cls");
        switch (choice)
        {
        case 1:
            m.encapsulated_create(argv);
            break;
        case 2:
            m.check_add(argv);
            break;
        case 3:
            m.display(argv);
            break;
        case 4:
            m.modify(argv);
            break;
        case 5:
            m.del(argv);
            break;
        }
        }
        		}
        else
        {
            cout<<"Invalid choice"<<endl;
            cout<<"Please enter your choice again"<<endl;
            goto raju1;

        }
    }
    else if (choice ==3)
    {
        exit();
    }
    else
    {
        cout<<"Invalid choice"<<endl;
        cout<<"Please enter your choice again"<<endl;
        goto home;
    }
    }

int main(int argc, char *argv[])
{
    thiya:
    int lo_at=0;
    while(lo_at<3)
	{
		char u_id[25],u_pass[10],u_id1[4],u_id2[4],u_pass1[4],u_pass2[25];
		char passwor[10],passwo[10];
		int ch1;
		system("cls");
		cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************";
		cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tBHARATHI LIBRARY\n";
		cout<<"\n\t\t\t\t\t\t\t\t\t    Library is the best place to study and win the world\n\n\n";
		cout<<"\n\n\n*******************************************************************************************************************************************************************************************************************";

		cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t USERID   : ";
		cin>>u_id;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t PASSWORD : ";
		for( int i=0 ; ; )
		{
			u_pass[i] = getch();

			if((u_pass[i]>='a'&&u_pass[i]<='z')||(u_pass[i]>='A'&&u_pass[i]<='Z')||(u_pass[i]>='!'&&u_pass[i]<='@'))
			{
				passwor[i] = u_pass[i];
				++i;
				u_pass[i]='*';
				cout<<u_pass[i];
		    }
		    if(u_pass[i] == '\b' && i>=1)
		    {
		    	cout<<"\b \b";
		    	--i;
			}
			if(u_pass[i] == '\r')
			{
				passwor[i] = '\0';
				break;
			}
		}

		cout<<"\n\n\n\n\n*******************************************************************************************************************************************************************************************************************\n\n\n\n";
		if(strcmp(u_id,"lib123")== 0 && strcmp(passwor,"12345678")== 0)
		{
			while(1)
			{
            master m;
            m.call(argv);

            }
		}
		else
        {
            cout<<endl;
            cout<<"Invalid password"<<endl;
            cout<<"Please enter all the details again"<<endl;
            system("pause");
            goto thiya;
        }
        lo_at++;
        	if(lo_at<3)
            {
                cout<<"Please enter correct details"<<endl;
            }
            else
            {
                cout<<"You have tried more than three times"<<endl;
                cout<<"Please try later"<<endl;
                system("pause");
            }
	}
}
