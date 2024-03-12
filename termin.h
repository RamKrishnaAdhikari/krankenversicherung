#ifndef TERMIN_H
#define TERMIN_H
#include<string>

enum impfstoff{Biontech,moderna,astrazeneca,johnsonjohnson};
class termin
{
public:
    termin();
    impfstoff getvaccine()const;
    std::string getdatumuhrzeit()const ;
    termin(const std::string& patient, const std::string& datumuhrzeit,impfstoff v);
    std::string getpatient()const;
    void setgelöscht();
        bool getgelöscht()const ;
        std::string vaccineTostring(impfstoff v);

        private:
    std::string datumuhrzeit;
            std::string patient;
    bool gelöscht = false;
    impfstoff vaccine;


};

#endif // TERMIN_H
