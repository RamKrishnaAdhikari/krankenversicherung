#include "termin.h"

termin::termin() {}
bool termin:: getgelöscht()const{
    return gelöscht;
}
std::string termin:: getdatumuhrzeit()const{
    return datumuhrzeit;
}
termin::termin(const std::string& patient , const std::string& datumuhrzeit,impfstoff v):
    patient(patient),datumuhrzeit(datumuhrzeit),vaccine(v){}
std::string termin::getpatient()const {
    return patient;
}
void termin::setgelöscht(){
    gelöscht= true;

}
impfstoff termin::getvaccine()const{
    return vaccine;
}
std::string  termin::vaccineTostring(impfstoff v) {
    switch (v) {
    case Biontech:
        return "Biontech";
    case moderna:
        return "Moderna";
    case astrazeneca:
        return "AstraZeneca";
    case johnsonjohnson:
        return "Johnson & Johnson";
    default:
        return "Unknown";
    }
}
