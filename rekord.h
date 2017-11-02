typedef struct datum {
    int ev;
    int honap;
    int nap;
}datum;

typedef struct idopont {
    int ora;
    int perc;
}idopont;

typedef struct bejegyzes {
    char megnevzes[30+1];
    char hely[30+1];
    datum datum;
    idopont idopont;
    char megjegyzes[200+1];
}bejegyzes;

void rekord_print(bejegyzes b);

