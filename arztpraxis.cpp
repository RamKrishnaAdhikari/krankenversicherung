#include "arztpraxis.h"
#include<iostream>
int count =0;
arztpraxis::arztpraxis() {}
std::string arztpraxis:: getname()const{
    return name;
}
arztpraxis::arztpraxis(const std::string& name):name(name){}
std::vector<termin> arztpraxis::getterminliste()const {
    return terminliste;
}
void arztpraxis :: addtoterminliste(const termin& t){
    terminliste.push_back(t);
}
void  arztpraxis::terminanlegen(const std::string& patient,const std::string& datumuhrzeit,impfstoff v){
    if(terminnichtgefunden(datumuhrzeit)){
        terminliste.push_back(termin(patient , datumuhrzeit,v));
        std:: cout<<"Termin ist eingetragen"<<std::endl;
        count++;
    }
    else{
        std::cout<<"Termin?"<<std::endl;
        std::string neuedatumuhrzeit;
        std:: cin>>neuedatumuhrzeit;
        terminanlegen(patient,neuedatumuhrzeit,v);
    }
    if((v==Biontech)||(v==moderna)||(v==astrazeneca))
    { if(count<2)
        {
        std::cout<<"Termin?"<<std::endl;
        std::string  datumuhrzeit2;
        std::cin>>datumuhrzeit2;
        terminanlegen(patient,datumuhrzeit2,v);
    }

}
}

bool arztpraxis::terminlöschen(const std::string& patient){
    bool found = false;
    for( auto& t : terminliste){
        if(t.getpatient()==patient){
            t.setgelöscht();
                std:: cout<<"Termin wurde gelöscht"<<std::endl;
                found=true;

        }

    }
    return found;

}

bool arztpraxis:: terminnichtgefunden(const std::string datumuhrzeit){
    for(const auto& t: terminliste){
        if(t.getdatumuhrzeit()==datumuhrzeit){
            return false;
        }
    }
    return true;
}
