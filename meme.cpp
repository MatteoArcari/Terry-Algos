#include <bits/stdc++.h>
/*

Se ni' mondo esistesse un po' di bene
e ognun si considerasse suo fratello,
ci sarebbe meno pensieri e meno pene
e il mondo ne sarebbe assai più bello

*/

using namespace std;

conditional_t<true, multimap<multiset<bool>, int64_t>, tuple<shared_ptr<int32_t>, string, int, mt19937_64>> flag[10];

/*

⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣶⣿⣿⣷⣶⣄⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣾⣿⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⡟⠁⣰⣿⣿⣿⡿⠿⠻⠿⣿⣿⣿⣿⣧⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⠏⠀⣴⣿⣿⣿⠉⠀⠀⠀⠀⠀⠈⢻⣿⣿⣇⠀⠀⠀
⠀⠀⠀⠀⢀⣠⣼⣿⣿⡏⠀⢠⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⡀⠀⠀
⠀⠀⠀⣰⣿⣿⣿⣿⣿⡇⠀⢸⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡇⠀⠀
⠀⠀⢰⣿⣿⡿⣿⣿⣿⡇⠀⠘⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⢀⣸⣿⣿⣿⠁⠀⠀
⠀⠀⣿⣿⣿⠁⣿⣿⣿⡇⠀⠀⠻⣿⣿⣿⣷⣶⣶⣶⣶⣶⣿⣿⣿⣿⠃⠀⠀⠀
⠀⢰⣿⣿⡇⠀⣿⣿⣿⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀
⠀⢸⣿⣿⡇⠀⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠉⠛⠛⠛⠉⢉⣿⣿⠀⠀⠀⠀⠀⠀
⠀⢸⣿⣿⣇⠀⣿⣿⣿⠀⠀⠀⠀⠀⢀⣤⣤⣤⡀⠀⠀⢸⣿⣿⣿⣷⣦⠀⠀⠀
⠀⠀⢻⣿⣿⣶⣿⣿⣿⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⣦⡀⠀⠉⠉⠻⣿⣿⡇⠀⠀
⠀⠀⠀⠛⠿⣿⣿⣿⣿⣷⣤⡀⠀⠀⠀⠀⠈⠹⣿⣿⣇⣀⠀⣠⣾⣿⣿⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣦⣤⣤⣤⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⢿⣿⣿⣿⣿⣿⣿⠿⠋⠉⠛⠋⠉⠉⠁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠁

come cambia il mondo come cambian le persone
ogni 3 minuti dobbiam far salva con nome
anno dopo anno mi son visto trasformare
ora basta il giorno ci dobbiamo formattare

dobbiamo fare tutti una bella partizione
distinguere le macchine dalle persone
tra l'uomo e la natura si è creato un grande abisso
dobbiam disinstallarci, cambiare il disco fisso

sono l'uomo tecnologico tecnologico
sono l'uomo tecnologico tecnologico

abbiamo preso un virus che via via si sta aggravando
il tempo passa in fretta e lui ci sta mangiando
ci ingoia come un floppy nel masterizzatore
ci infila un grande software togliendo il nostro cuore

sono l'uomo tecnologico tecnologico

pian piano poi ci imbroglia, ci sta conducendo
dove vuole lui e poi ci stiamo allontanando
dal nostro mondo umano dove sempre siam vissuti
quel mondo così bello dove il tempo ci ha cresciuti
dobbiam cambiare subito sistema operativo
oppure finiremo in un mondo più illusivo

hardware, ram, chiavetta usb,
driver, wireless e http
modem, web, lettore dvd
sostituiranno gli uomini,
mi spiace ma è così

sono l'uomo tecnologico tecnologico
sono l'uomo tecnologico tecnologico

non ci sarà corrente sarà tutto senza fili
non ci sarà la dieta non avremo neanche i chili
avremo solo kilobyte
memorie esagerate
non avremo inverno, primavera, autunno e estate
il nostro unico cibo saranno i dischi e i floppy
niente più punture, farmaci o sciroppi
per andare in bagno ci basterà il cestino
se superi i tre giga, ti servirà un catino

sono l'uomo tecnologico tecnologico
sono l'uomo tecnologico tecnologico

non avremo più la notte e il giorno
niente mezzanotte, niente mezzogiorno
le macchine il motore di ricerca avranno
non ci spegneremo mai, accesi tutto l'anno

digitando uomo sul web noi troveremo
uomo non trovato, termine blasfemo
cercavi forse macchina, l'uomo è ormai lontano
asciugandoci una lacrima la mano sventoliamo

sono l'uomo tecnologico tecnologico

e allora penseremo "ah che belli i tempi andati"
ora siamo soli, tristi nudi e abbandonati
ricorderemo spesso la voce della mamma
diremo "ah che stupidi siam stati"... ad installar questo programma

sono l'uomo tecnologico tecnologico
sono l'uomo tecnologico tecnologico
sono l'uomo tecnologico tecnologicoooooooo
sono l'uomo tecnologico tecnologico
*/





