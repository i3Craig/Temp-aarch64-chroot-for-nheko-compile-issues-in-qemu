��    e      D  �   l      �     �  
   �     �     �     �     �  6   	     J	     f	     �	  -   �	  :   �	  &   
     -
  .   D
  :   s
  7   �
  #   �
     
  9   '     a  '   �     �  5   �     �       !   +     M      f     �     �     �  ,   �     �        4   ,  6   a  *   �     �     �     �       "        7     I  "   X     {  !   �     �  /   �  
          	   )     3     L  &   b     �     �     �     �  .   �  #   �  "   !  2   D  %   w  �   �  D   %  $   j  %   �  /   �     �  G   �     ?     X  6   q  \   �  .        4  2   Q  N   �  H   �          8     G     g     z     �     �     �  "   �  #     -   %  C   S     �     �     �     �     �     �       �       �     �     �  -     #   5  '   Y  G   �  #   �     �        /      <   P  3   �     �  7   �  ]     Q   s  7   �     �  B     '   `  ,   �  &   �  A   �          6  $   N  !   s  '   �     �     �     �  8     #   =  2   a  7   �  @   �  *     "   8     [     q     �  '   �     �     �  &   �       "   (  %   K  .   q  
   �     �     �  "   �     �  #         1      P      Y      m   4      +   �   $   �   >   !  (   D!  �   m!  L   "  0   R"  '   �"  7   �"     �"  G   �"     B#     Y#  :   t#  U   �#  *   $     0$  (   M$  P   v$  E   �$     %     ,%  $   ;%     `%  )   u%     �%  &   �%     �%  "   �%  "   &  *   6&  8   a&     �&     �&  $   �&     �&     '     	'     &'             Y       [                        X       ;   d   ,   5      \   K   S   (   W      I   G   +       ^   3   a   _       .   <   V          !   H   E               6              C       #   *   Q                     =      '   4   U   8                   9   Z       ]          `   0       R   O          	   T   /      b   -   B         N       :                 7             c   A   L      D   2   ?              )            @   J   $   1          e   P   >   "   
      %       &   M         F             %a %b %e %H:%M:%S %Z %Y  from %.*s  on %.*s %s failed: caught signal %d%s %s failed: exit code %d %s failed: unknown status 0x%x (%d minute left to unlock) (%d minutes left to unlock) (%d minutes left to unlock) ...Sorry, your time is up!
 ...Time is running out...
 A valid context for %s could not be obtained. Access has been granted (last access was %ld seconds ago). Application needs to call libpam again Authentication failure Authentication information cannot be recovered Authentication service cannot retrieve authentication info Authentication service cannot retrieve user credentials Authentication token aging disabled Authentication token expired Authentication token is no longer valid; new one required Authentication token lock busy Authentication token manipulation error Bad item passed to pam_*_item() Cannot make/remove an entry for the specified session Changing password for %s. Conversation error Conversation is waiting for event Creating directory '%s'. Critical error - immediate abort Current %s password:  Current password:  Error in service module Failed preliminary check by password service Failed to load module Failure setting user credentials Have exhausted maximum number of retries for service Insufficient credentials to access authentication data Key creation context %s has been assigned. Last failed login:%s%s%s Last login:%s%s%s Memory buffer error Module is unknown NIS password could not be changed. New %s password:  New password:  No module specific data is present No password has been supplied. Password change has been aborted. Password has been already used. Password has been already used. Choose another. Password:  Permission denied Retype %s Retype new %s password:  Retype new password:  Security context %s has been assigned. Sorry, passwords do not match. Success Symbol not found System error The account is locked due to %u failed logins. The default security context is %s. The password has not been changed. The return value should be ignored by PAM dispatch There is no default type for role %s. There was %d failed login attempt since the last successful login. There were %d failed login attempts since the last successful login. There were %d failed login attempts since the last successful login. There were too many logins for '%s'. This is not a valid security context. Unable to create and initialize directory '%s'. Unknown PAM error Usage: %s [--dir /path/to/tally-directory] [--user username] [--reset]
 User account has expired User credentials expired User not known to the underlying authentication module Warning: your password will expire in %d day. Warning: your password will expire in %d days. Warning: your password will expire in %d days. Welcome to your new account! Would you like to enter a different role or level? You are required to change your password immediately (administrator enforced). You are required to change your password immediately (password expired). You have mail in folder %s. You have mail. You have new mail in folder %s. You have new mail. You have no mail in folder %s. You have no mail. You have old mail in folder %s. You have old mail. You must choose a longer password. You must choose a shorter password. You must wait longer to change your password. Your account has expired; please contact your system administrator. erroneous conversation (%d)
 failed to initialize PAM
 failed to pam_set_item()
 level: login: login: failure forking: %m role: Project-Id-Version: Linux-PAM
Report-Msgid-Bugs-To: https://github.com/linux-pam/linux-pam/issues
PO-Revision-Date: 2021-07-22 00:54+0000
Last-Translator: Dmitry V. Levin <ldv@altlinux.org>
Language-Team: Italian <https://translate.fedoraproject.org/projects/linux-pam/master/it/>
Language: it
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=n != 1;
X-Generator: Weblate 4.7.2
  %a %e %b %Y %H:%M:%S %Z  da %.*s  su %.*s %s non riuscita: intercettato il segnale %d%s %s non riuscita: codice d'uscita %d %s non riuscita: stato sconosciuto 0x%x (%d minuto rimanenti per sbloccare) (%d minuti rimanenti per sbloccare) (%d minuti rimanenti per sbloccare) ...Tempo scaduto!
 ...Il tempo sta per scadere...
 Impossibile ottenere un contesto valido per %s. Accesso permesso (l'ultimo accesso risale a %ld secondi fa). L'applicazione richiede una nuova chiamata a libpam Autenticazione non riuscita Impossibile ripristinare informazioni di autenticazione Il servizio di autenticazione non è in grado di recuperare le informazioni di autenticazione Il servizio di autenticazione non è in grado di recuperare le credenziali utente Invecchiamento del token di autenticazione disabilitato Token di autenticazione scaduto Token di autenticazione non più valido; ne è richiesto uno nuovo Blocco token di autenticazione occupato Errore manipolazione token di autenticazione Elemento errato passato a pam_*_item() Impossibile creare/rimuovere una voce per la sessione specificata Cambio password per %s. Errore di conversazione Conversazione in attesa di un evento Creazione della directory «%s». Errore critico - interruzione immediata Password attuale %s:  Password attuale:  Errore nel modulo di servizio Controllo preliminare del servizio password non riuscito Caricamento del modulo non riuscito Impostazione delle credenziali utente non riuscita Superato il numero massimo di tentativi per il servizio Credenziali insufficienti per accedere ai dati di autenticazione Contesto di creazione chiave %s assegnato. Ultimo accesso non riuscito:%s%s%s Ultimo accesso:%s%s%s Errore buffer memoria Modulo sconosciuto Impossibile modificare la password NIS. Nuova password %s:  Nuova password:  Dati specifici del modulo non presenti Nessuna password fornita. Modifica della password terminata. La password è stata già utilizzata. Password già utilizzata, sceglierne un'altra. Password:  Permesso negato Reimmettere %s Reimmettere la nuova password %s:  Reimmettere la nuova password:  Contesto di sicurezza %s assegnato. Le password non corrispondono. Successo Simbolo non trovato Errore di sistema Account bloccato a causa di %u accessi non riusciti. Il contesto di sicurezza predefinito è %s. La password non è stata modificata. Il valore restituito dovrebbe essere ignorato dal dispatch PAM Nessun tipo predefinito per il ruolo %s. Dall'ultimo accesso si è verificato %d tentativo non riuscito di accesso. Dall'ultimo accesso si sono verificati %d tentativi non riusciti di accesso. Dall'ultimo accesso si sono verificati %d tentativi non riusciti di accesso. Sono stati effettuati troppi accessi per «%s». Non è un contesto di sicurezza valido. Impossibile creare e inizializzare la directory «%s». Errore PAM sconosciuto Uso: %s [--dir /path/to/tally-directory] [--user nomeutente] [--reset]
 Account utente scaduto Credenziali utente scadute Utente sconosciuto al modulo di autenticazione sottostante Avviso: la password scadrà tra %d giorno. Avviso: la password scadrà tra %d giorni. Avviso: la password scadrà tra %d giorni. Benvenuti nel nuovo account! Immettere un ruolo o livello differente? È richiesta la modifica immediata della password (imposto dall'amministratore). È richiesta la modifica immediata della password (password scaduta). La cartella %s contiene email. Ci sono email. La cartella %s contiene nuove email. Ci sono nuove email. La cartella %s non contiene alcuna email. Non ci sono email. La cartella %s contiene vecchie email. Ci sono email vecchie. Scegliere una password più lunga. Scegliere una password più corta. Attendere ancora per cambiare la password. Account scaduto; contattare l'amministratore di sistema. conversazione errata (%d)
 impossibile inizializzare PAM
 Impossibile eseguire pam_set_item()
 livello: login: login: fork non riuscita: %m ruolo: 