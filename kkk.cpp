#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<ctime>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
void greet()
{
	cout<<setw(97)<<""<<"LOVELY PROFFESIONAL UNIVERSITY"<<endl;
    cout<<setw(91)<<""<<"SCHOOL OF COMPUTER SCIENCE AND ENGINEERING"<<endl;
    cout<<setw(99)<<""<<"TOLL PLAZA SYSTEM"<<endl;
    cout<<setw(90)<<""<<"PROJECT SUBMITED BY:-"<<setw(2)<<""<<"VIKASH KUMAR"<<endl;
    cout<<setw(90)<<""<<"REGISTERATION NUMBER:-"<<setw(2)<<""<<"11715644"<<endl;
    cout<<setw(90)<<""<<"PRESS ANY KEY TO ENTER MAIN PROGRAM"<<endl;
    getch();
    system("cls");
}
class Toll_Plaza
{
public:
    int count=1;
    int type_of_vehicle()
{
    char choice[4];
    cout<<"Enter the type of vehicle"<<endl;
    cout<<"1. Bike / Scooter / Scooty"<<endl;
    cout<<"2. Hatchback / SUV"<<endl;
    cout<<"3. Jeep / Bus"<<endl;
    cout<<"4. Passenger Vehicle"<<endl;
    cout<<"5. Truck 6-8 tyres"<<endl;
    cout<<"6. Heavy vehicle"<<endl;
    cin>>choice;
    strlwr(choice);
    if(choice[0]=='1'||choice[0]=='b'&&choice[1]=='i'||choice[0]=='s'&&choice[1]=='c')
    {
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<count++;
        time_t now = time(0);
    char* dt = ctime(&now);
        fill<<dt;
        fill<<"Bike / Scooter / Scooty"<<endl;
        fill.close();
        return 20;
    }
    if(choice[0]=='2'||choice[0]=='h'&&choice[1]=='a'||choice[0]=='s'&&choice[1]=='u'||choice[0]=='c')
        {
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<count++;
        time_t now = time(0);
    char* dt = ctime(&now);
        fill<<dt;
        fill<<" Hatchback / SUV"<<endl;
        fill.close();
        return 50;
    }
    if(choice[0]=='3'||choice[0]=='j'||choice[0]=='b'&&choice[1]=='u')
        {
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<count++;
        time_t now = time(0);
    char* dt = ctime(&now);
        fill<<dt;
        fill<<" Jeep / Bus"<<endl;
        fill.close();
        return 70;
    }
    if(choice[0]=='4'||choice[0]=='p')
        {
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<count++;
        time_t now = time(0);
    char* dt = ctime(&now);
        fill<<dt;
        fill<<" Passenger Vehicle"<<endl;
        fill.close();
        return 100;
    }
    if(choice[0]=='5'||choice[0]=='t')
        {
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<count++;
        time_t now = time(0);
    char* dt = ctime(&now);
        fill<<dt;
        fill<<" Truck"<<endl;
        fill.close();
        return 120;
    }
    if(choice[0]=='6'||choice[0]=='h'&&choice[1]=='e')
        {
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<count++;
        time_t now = time(0);
    char* dt = ctime(&now);
        fill<<dt;
        fill<<" Heavy Vehicle"<<endl;
        fill.close();
        return 150;
    }
    else
    {
        cout<<"wrong choice, press enter"<<endl;
        getch();
        system("cls");
        type_of_vehicle();
    }
}
char number[13];
int call()
{
	//cout<<choice;
	cout<<"enter the figure on name plate of the vehicle"<<endl;
	for(int i=0;i<13;i++)
    {
        if(i!=2&&i!=5&&i!=8)
        {
            number[i]=getch();
        }
        else
        {
            number[i]='-';
        }
        cout<<number[i];
        if(number[i]==8)
        {
            system("cls");
            cout<<"ERROR OCCURED... BACK SPACE NOT ALLOUD "<<endl;
            i=0;
            call();
        }
    }
	cout<<endl<<"entered number is "<<number<<endl;
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Vehicle number is    "<<number<<endl;
        fill.close();
}
};

int retveh()
{
	char vehret;
    cout<<"WILL THE VEHICLE RETURN WITHIN 24 hrs ?"<<endl;
    cout<<"1. YES"<<endl;
    cout<<"2. NO"<<endl;
    cin>>vehret;
    if(vehret=='Y'||vehret=='1'||vehret=='y')
        {
            ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Vehicle will return within 24 hrs   "<<endl;
        fill.close();
        return 1;
        }
    else if(vehret=='N'||vehret=='2'||vehret=='n')
        {
            ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Vehicle wont return in 24 hrs.    "<<endl;
        fill.close();
        return 2;
        }
    else
    {
        cout<<"Enter your choice again1";
        retveh();
    }
    system("cls");
}

class PaymentAndBill:public Toll_Plaza
{
public:
    int paymet()
{
    char payment[2];
    cout<<"1. Credit Card"<<endl;
    cout<<"2. Debit Card"<<endl;
    cout<<"3. Cash"<<endl;
    cout<<"4. PayTM"<<endl;
    cout<<"5. Coupon"<<endl;
    cin>>payment;
    if(payment[0]=='1'||((payment[0]=='C'||payment[0]=='c')&&(payment[1]=='r'||payment[1]=='R')))
        {
            ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Payment method    CREDIT CARD"<<endl;
        fill.close();
        return 1;
        }
    if(payment[0]=='2'||((payment[0]=='D'||payment[0]=='d')&&(payment[1]=='E'||payment[1]=='e')))
        {
            ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Payment method    DEBIT CARD"<<endl;
        fill.close();
        return 2;
        }
    if(payment[0]=='3'||((payment[0]=='C'||payment[0]=='c')&&(payment[1]=='A'||payment[1]=='a')))
        {
            ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Payment method    CASH"<<endl;
        fill.close();
        return 3;
        }
    if(payment[0]=='4'||((payment[0]=='P'||payment[0]=='p')&&(payment[1]=='A'||payment[1]=='a')))
        {
            ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Payment method    PayTM"<<endl;
        fill.close();
        return 4;
        }
    if(payment[0]=='5'||((payment[0]=='C'||payment[0]=='c')&&(payment[1]=='O'||payment[1]=='o')))
        {
            ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Payment method    COUPON"<<endl;
        fill.close();
        return 5;
        }
    else
    {
        system("cls");
        cout<<"TRY AGAIN";
        paymet();
    }
}
    public:
    int billing(int b,int c)
{
    A:
//    payment();
    system("cls");
    cout<<"PAYMENT GATEWAY: Powered By PayTM"<<endl;
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "TIME: " << dt << endl;
    if(b==1)
    {
        char crcanu[16],exdat[7],carown[50];
        cout<<"Credit Card No:   ";
        for(int i=0;i<19;i++)
        {
            if(i!=4&&i!=9&&i!=14)
            {
                crcanu[i]=getch();
            }
            else
            {
                crcanu[i]='-';
            }
            cout<<crcanu[i];
            if((crcanu[i]>47&&crcanu[i]<59)||(crcanu[i]>64&&crcanu[i]<91)||(crcanu[i]>96&&crcanu[i]<123)||crcanu[i]==45);
            else
            {
                system("cls");
                cout<<"ERROR OCCURED... BACK SPACE NOT ALLOUD "<<endl;
                cout<<"PAYMENT FAILED"<<endl;
                cout<<"Retry Again... Press any key"<<endl;
                getch();
                i=0;
                goto A;
            }
        }
        cout<<endl<<"Enter the date of expiry";
        for(int i=0;i<7;i++)
        {
            if(i!=2)
            {
                exdat[i]=getch();
            }
            else
            {
                exdat[i]='-';
            }
            cout<<exdat[i];
            if((exdat[i]>47&&exdat[i]<59)||(exdat[i]>64&&exdat[i]<91)||(exdat[i]>96&&exdat[i]<123)||exdat[i]==45);
            else
            {
                system("cls");
                cout<<"ERROR OCCURED... BACK SPACE NOT ALLOUD "<<endl;
                cout<<"PAYMENT FAILED"<<endl;
                cout<<"Retry Again... Press any key"<<endl;
                getch();
                i=0;
                goto A;
            }
        }
        cout<<endl<<"Enter your Name"<<endl;
        cin>>carown;
        int CVV[3];
        cout<<"Enter CVV   ";
        for(int i=0;i<3;i++)
        {
            CVV[i]=getch();
            cout<<"X";
        }
        cout<<endl<<"press enter to pay Rs. "<<c;
        getch();
        cout<<endl<<"Payment done"<<endl;
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"CARD NUMBER    "<<crcanu<<endl;
        fill<<"EXPIRY DATE    "<<exdat<<endl;
        fill<<"NAME ON CARD    "<<carown<<endl;
        fill<<"CVV    "<<CVV<<endl;
        fill<<"Paid :"<<c<<endl;
        fill.close();

        count++;
    }

    if(b==2)
    {
     char crcanu[16],exdat[7],carown[50];
        cout<<"Debit Card No:   ";
        for(int i=0;i<19;i++)
        {
            if(i!=4&&i!=9&&i!=14)
            {
                crcanu[i]=getch();
            }
            else
            {
                crcanu[i]='-';
            }
            cout<<crcanu[i];
            if((crcanu[i]>47&&crcanu[i]<59)||(crcanu[i]>64&&crcanu[i]<91)||(crcanu[i]>96&&crcanu[i]<123)||crcanu[i]==45);
            else
            {
                system("cls");
                cout<<"ERROR OCCURED... BACK SPACE NOT ALLOUD "<<endl;
                cout<<"PAYMENT FAILED"<<endl;
                cout<<"Retry Again... Press any key"<<endl;
                getch();
                i=0;
                goto A;
            }
        }
        cout<<endl<<"Enter the date of expiry";
        for(int i=0;i<7;i++)
        {
            if(i!=2)
            {
                exdat[i]=getch();
            }
            else
            {
                exdat[i]='-';
            }
            cout<<exdat[i];
            if((exdat[i]>47&&exdat[i]<59)||(exdat[i]>64&&exdat[i]<91)||(exdat[i]>96&&exdat[i]<123)||exdat[i]==45);
            else
            {
                system("cls");
                cout<<"ERROR OCCURED... BACK SPACE NOT ALLOUD "<<endl;
                cout<<"PAYMENT FAILED"<<endl;
                cout<<"Retry Again... Press any key"<<endl;
                getch();
                i=0;
                goto A;
            }
        }cout<<endl<<"Enter your Name"<<endl;
        cin>>carown;
        int CVV[3];
        cout<<"Enter CVV   ";
        for(int i=0;i<3;i++)
        {
            CVV[i]=getch();
            cout<<"X";
        }
        cout<<"press enter to pay Rs. "<<c;
        getch();
        cout<<endl<<"Payment done"<<endl;
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"CARD NUMBER    "<<crcanu<<endl;
        fill<<"EXPIRY DATE    "<<exdat<<endl;
        fill<<"NAME ON CARD    "<<carown<<endl;
        fill<<"CVV    "<<CVV<<endl;
        fill<<"Paid :"<<c<<endl;
        fill.close();
        count++;
    }
    if(b==3)
    {
        int csh,chq;
        cout<<csh<<endl;
        cout<<"ENTER CAPTCHA"<<endl;
        cin>>chq;
        if(chq==csh)
        {
            cout<<"MATCHED"<<endl;
            cout<<"press enter to pay Rs. "<<c<<endl;
            getch();
            cout<<"PAYMENT DONE";
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Paid :"<<c<<endl;
        fill.close();
            count++;
        }
        else
        {
            cout<<"FALSE";
        }
    }
    if(b==4)
    {
        char mobnum[10];
        int pcsh,pchq;
        cout<<"Enter your mobile number"<<endl;
        cin>>mobnum;
        cout<<"CAPTCHA:"<<endl;
        cout<<pcsh<<endl;
        cout<<"ENTER CAPTCHA"<<endl;
        cin>>pchq;
        if(pchq==pcsh)
        {
            cout<<"MATCHED"<<endl;
            cout<<"press enter to pay Rs. "<<c<<endl;
            getch();
            cout<<"PAYMENT DONE";
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Paid :"<<c<<endl;
        fill.close();
            count++;
        }
        else
        {
            cout<<"FALSE";
        }
    }
    if(b==5)
    {
        int coupon[5];
        cout<<"ENTER YOUR COUPON CODE   ";
        for(int i=0;i<5;i++)
        {
            coupon[i]=getch();
            cout<<"*";
        }
        if(coupon[0]=='0'&&coupon[1]=='0'&&coupon[2]=='0'&&coupon[3]=='0'&&coupon[4]=='0')
        {
            cout<<"PAYMENT DONE"<<endl;
        ofstream fill("FILE OF MP.txt",ios::app);
        fill<<"Paid :"<<c<<endl;
        fill.close();
            count++;
        }

        else
        {
            cout<<"PAYMENT UNSUCCESSFUL" <<endl;
            getch();
            goto A;
        }
    }
}

};

int main()
{
    int choice,choice2;
    char veh_nam[20];
    system("color 0B");
    greet();
    Toll_Plaza obj;
    B:
    system("color 0A");
    choice=obj.type_of_vehicle();
    obj.call();
    choice2=retveh();
    if(choice2==1)
        choice=choice*1.5;
    PaymentAndBill tkk1;
    int paycho=tkk1.paymet();
    system("color 0C");
    A:
    tkk1.billing(paycho,choice);
    cout<<"For New Vehicle, press any key"<<endl;
    getch();
    system("cls");
    goto B;
return 0;
}
