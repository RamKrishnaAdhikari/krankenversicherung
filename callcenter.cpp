#include "callcenter.h"
#include<iostream>
using namespace std;

callcenter::callcenter() {}
arztpraxis callcenter::getarztpraxis()const {
    return arzt;
}
void callcenter::terminübersicht()const {
    for( auto& a : arztpraxen){
        cout<<"Arztpraxis : "<<a.getname()<<endl;
        for( auto& t: a.getterminliste()){
            if(t.getgelöscht()==false){
                cout<<t.getpatient()<< "    "<<t.getdatumuhrzeit()<<"      "<<t.vaccineTostring(t.getvaccine())<<endl;

        }

        }
    }

}

int callcenter::indexfind(const std::string& name){
    for(int i=0;i<arztpraxen.size();i++){
        if(arztpraxen.at(i).getname()==name){
            return i;
        }
    }

    return -1;

}
void callcenter::dialog(){
    cout<<"1.Termin anlegen "<<endl;
    cout<<"2.Termin löschen"<<endl;
    cout<<"0. Programm beenden"<<endl;
    cout<<"3.arztpraxis anlegen"<<endl;
    cout<<"4.Termin Übersicht"<<endl;

    int choice ;
do{
        cout<<"Geben Sie die choice ein "<<endl;
        cin>>choice;
        switch(choice){
        case 1 : {
            cout<<"Name?"<<endl;
            std::string patient;
             cin>>patient;
            cout<<"Arztpraxis?"<<endl;
            std::string name;
            cin.ignore();
            std::getline(std::cin,name);
            int i = indexfind(name);
            if(i==-1){
                cout<<"Keine solche arzt gefunden"<<endl;
            }
            else{
           cout<<"Impfstoff(1.Biontech,2.moderna,3,astrazeneca,4.johnsonjohnson"<<endl;
            impfstoff vaccine;
            int n;
            cin>>n;
            vaccine = static_cast<impfstoff>(n-1);
            cout<<"Termin?"<<endl;
            std::string datumuhrzeit;
            cin>>datumuhrzeit;



            arztpraxen.at(i).terminanlegen(patient, datumuhrzeit,vaccine);
            }
            break;
        }
        case 2 : {

            cout<<"Name?"<<std::endl;
            std::string patient;
            cin>>patient;
            if(arzt.terminlöschen(patient)==false){
            cout<<"Keine solche termin gefunden"<<endl;

                 }


                break ;
        }

        case 0 :
            cout<<"Programm ist beendet"<<endl;
            break;
        case 3 :{
            cout<<"Name?"<<endl;
            std::string name;
            cin.ignore();
            std::getline(std::cin, name);
            arztpraxen.push_back(arztpraxis(name));
            cout<<"Arztpraxis"<<name<<"wurde angelegt"<<endl;
            break;
        }
        case 4 :
            terminübersicht();
                break;
        default : cout<<"Ungültige eingabe"<<endl;


        }
}while(choice!=0);
    }
