#ifndef CALLCENTER_H
#define CALLCENTER_H
#include"arztpraxis.h"

class callcenter
{
public:
    callcenter();
    void dialog();
    arztpraxis getarztpraxis()const ;
    void terminübersicht()const;
        int indexfind(const std::string& name);
private :
    arztpraxis arzt;
    std::vector<arztpraxis>arztpraxen;
};

#endif // CALLCENTER_H
