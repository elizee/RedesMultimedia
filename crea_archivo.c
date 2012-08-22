//http://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C/Manejo_de_archivos

#include <stdio.h>
 
int main(int argc, char** argv)
{
        FILE *fp;
        fp = fopen ( "fichero.txt", "w+" );
        
         char cadena[] = "Mostrando el uso de fputs en un fichero.\n";
        char buffer[100];
         fputs( cadena, fp );
        
 
  fp = fopen ( "fichero.txt", "r+" );
  fscanf(fp, "%s" ,buffer);
        printf("%s",buffer);
        
        fclose ( fp );
        return 0;
}
