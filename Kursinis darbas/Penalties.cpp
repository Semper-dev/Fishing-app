#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>
#include "Penalties.h"

Penalties::Penalties() {}

void Penalties::show() {
	std::cout << " Padarytos zalos zuvu istekliams apskaiciavimo baziniai ikainiai:\n" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Zuvu rusys                   | | Eur/vnt                          | | Kg/vnt                             |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Slakys,lasisa                | | 970                              | | -                                  |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Ersketas,samas,ungurys       | | 480                              | | -                                  |" << std::endl;
	std::cout << "|Sturys,skersnukis,jurne nege | |                                  | |                                    |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Kirslys,margasis upetakis    | | 240                              | | -                                  |" << std::endl;
	std::cout << "|Salatis,sykas,sterkas,usorius| |                                  | |                                    |" << std::endl;
	std::cout << "|Vegele,vijunas,ezerine raine | |                                  | |                                    |" << std::endl;
	std::cout << "|Auksaspalvis kirtiklis,lydeka| |                                  | |                                    |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Baltasis amuras,karpis,karsis| | 100                              | | -                                  |" << std::endl;
	std::cout << "|Lynas,mekne,ozka,perpele     | |                                  | |                                    |" << std::endl;
	std::cout << "|Placiakaktis,sapalas,ziobris | |                                  | |                                    |" << std::endl;
	std::cout << "|Auksaspalvis kirtiklis,lydeka| |                                  | |                                    |" << std::endl;
	std::cout << "|vaivorykstinis upetakis,otas | |                                  | |                                    |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Mazoji nege,upine nege       | | 15                               | | -                                  |" << std::endl;
	std::cout << "|Negiu vingiliai,veziai       | |                                  | |                                    |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Builis,ciegorius,eserys      | | -                                | | 15                                 |" << std::endl;
	std::cout << "|Karosas,kuoja,plakis         | |                                  | |                                    |" << std::endl;
	std::cout << "|Strepetys,seliava,raude      | |                                  | |                                    |" << std::endl;
    std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Auksle,gruzlys,kartuole      | | 2,5                              | | -                                  |" << std::endl;
	std::cout << "|Kirtiklis,kujagalvis         | |                                  | |                                    |" << std::endl;
	std::cout << "|Saulazuve,slyzys,tobis       | |                                  | |                                    |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Lasisiniu zuvu ikrai         | | -                                | | 480                                |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Zuvys, kurioms padaryta zala | | -                                | | 100                                |" << std::endl;
	std::cout << "|skaiciuojama pagal vidutini  | |                                  | |                                    |" << std::endl;
	std::cout << "|zuvu produktyvuma.           | |                                  | |                                    |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Menke,stinta                 | | -                                | | 23                                 |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Pleksne                      | | -                                | | 10                                 |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Strimele,sprotas             | | -                                | | 5                                  |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------" << std::endl;
	std::cout << "|Dygle,pugzlys ir kitos zuvys,| | -                                | | 0,5                                |" << std::endl;
	std::cout << "|kurioms nenustatytas ikainis | |                                  | |                                    |" << std::endl;
	std::cout << "|uz vieneta                   | |                                  | |                                    |" << std::endl;
	std::cout << "------------------------------   ----------------------------------   ------------------------------------\n\n" << std::endl;

	std::cout << " Kiti nusizengimai baudziami tokiomis baudomis :\n" << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "|Uz zvejyba draudziamu budu              | |120-300 euru bauda ir naudotos irangos konfiskavimas          |" << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "|Zvejojant be megeju zvejybos leidimo    | |Ispejimas arba bauda nuo 10 iki 60 euru                       |" << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "|Naudojant elektros ar                   | |Bauda,laisves apribojimas,arestas,                            |" << std::endl;
	std::cout << "|ultragarso prietaisus                   | |arba laisves atemimas iki dveju metu                          |" << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "|Draudziamu metu gaundant zuvi           | |120-300 euru bauda su zvejyboje naudotos irangos konfiskavimu |" << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "|Naudojant draudziamus zvejybos irankius | |Bauda iki 300 euru su zvejyboje naudotos irangos konfiskavimu |" << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "|Pazeidziant limituotos lasisu ir slakiu | |Bauda iki 550 euru su zvejyboje naudotos irangos konfiskavimu |" << std::endl;
	std::cout << "|zvejybos priemones ir salygas           | |                                                              |" << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "|Padarytos zalos gamtiniu rezervatu ar ichtiologiniu draustiniu vandens telkiniuose atlyginimo dydis      |" << std::endl;
	std::cout << "|skaiciuojamas taikant triguba padarytos zalos zuvims apskaiciavimo bazini ikaini!                        |" << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------\n" << std::endl;
}