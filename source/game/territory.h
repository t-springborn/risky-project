#ifndef TERRITORY_H
#define TERRITORY_H
class Territory;

typedef enum {
    NORMAL
} BorderType;

typedef struct Border {
    Territory * fromTerritory;
    Territory * toTerritory;
    BorderType type;
} Border;


#endif
