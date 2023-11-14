#includi <stdio_it.h>
int principale() {
   // stampa() mostra la stringa dentro le virgolette
   stampa("Ciao, Oh Mondo!\n");
   per (int a = 0; a < 5; ++a)
     stampa("%d\n", a);
   int b = 5;
   mentre (b--)
     stampa("%d\n", b);
   int c = 0;
   fa {
      stampa("%d\n",c);
   } mentre (++c != 5);
   se (5 != 5)
     stampa("sono diversi\n");
   altrimenti
     stampa("sono uguali\n");
   commuta (4)
   {
      caso 4:
      stampa("vale 4\n");
      rompi;

      preimposta:
      stampa("non vale 4\n");
      rompi;
   }
   per (int d = 0; d < 5; ++d) {
      se (d == 3) {
         stampa("continua\n");
         continua;
      }
   }
   mobile f = 5.0F;
   doppia g = 1e68;
   segnato car pippo[] = "pippo";
   nonsegnato int j = 999N;
   lungo h = 1;
   stampa("%f %s %e %u %ld\n", f, pippo, g, j, h);
   ridai 0;
}
