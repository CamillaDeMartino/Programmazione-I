
#define HEADER_H_INCLUDED

typedef enum {picche, fiori, quadri, cuori}Semi_Fr;

struct carta{
    int valore;
    Semi_Fr seme;

};

typedef struct carta Carta;


struct studente {
        char *Cognome;
        char *Nome;

        int eta;
        int libretto [18];

    };

typedef struct studente Studente;

Studente aggiorna_carriera(Studente , int , int );



