//
//  database.h
//  cowo
//
//  Created by Aiko Lebida on 10.12.21.
//

#ifndef database_h
#define database_h

#include <stdio.h>

typedef enum : uint8_t {
    notAvalible,
    Active,
    Enrolled,
    Dead,
    Cute,
}EntryStatus;

struct entryscheme {
    int64_t UID;
    
    char FirstName[64];
    char MiddleName[64];
    char LastName[64];
    
    uint8_t Age;
    char PrimLang[2];

    EntryStatus Status;
    
};


#endif /* database_h */
