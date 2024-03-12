#ifndef ARZTPRAXIS_H
#define ARZTPRAXIS_H
#include"termin.h"
#include<vector>

class arztpraxis
{
public:
    arztpraxis();
    arztpraxis(const std::string& name);
    void terminanlegen(const std::string& patient , const std::string& datumuhrzeit ,impfstoff v);
    bool terminlöschen(const std::string& patient);
    std::vector<termin>getterminliste()const ;
    void addtoterminliste(const termin& t);
    bool terminnichtgefunden(const std::string datumuhrzeit);
    std::string getname()const ;



private:
    std::string name;
    std::vector<termin>terminliste;
};

#endif // ARZTPRAXIS_H
