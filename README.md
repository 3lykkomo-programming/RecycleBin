# Δίκτυο έξυπνων κάδων ανακύκλωσης
**3ο Γενικό Λύκειο Κομοτηνής**

*Ομάδα Ρομποτικής και προγραμματισμού* 

Σχολικό Έτος: **2019-2020**

![Cat](https://github.com/3lykkomo-programming/RecycleBin/blob/master/docs/images/wallpaper.png)

# Εισαγωγή
Στο συγκεκριμένο αποθετήριο μπορείτε να βρείτε την πρόταση συμμετοχής μας στον 2ο Πανελλήνιο Διαγωνισμό Ρομποτικής Ανοιχτών Τεχνολογιών, με την οποία επιθυμούμε να δημιουργήσουμε έργα με χρήση ανοιχτών τεχνολογιών, ώστε να εκσυγχρονίσουμε τόσο κάποιες λειτουργίες που γίνονται καθημερινά σε επίπεδο Σχολικής Μονάδας, όσο και να εκμεταλλευτούμε τις δυνατότητες ρομποτικών κατασκευών και να κάνουμε το Σχολείο μας περισσότερο Ψηφιακό.

## Πρόταση υλοποίησης
Έξυπνος Κάδος Ανακύκλωσης με Διαλογή στην Πηγη (4 διαφορετικές υποδοχές για χαρτί, πλαστικό, μέταλλο, γυαλί).

### Μέρος Α' (με χρήση keycard)
Ο **Χρήστης** με τον έξυπνο κάδο ανακύκλωσης μπορεί:
1. Να ανοίξει τον κάδο με την προσωποποιημένη keycard για συγκεκριμένο χρονικό διάστημα για να πετάξει το κατάλληλο ανακυκλωσιμο υλικό (χαρτί, πλαστικό, μέταλλο, γυαλί).

Ο **Υπεύθυνος καθαρισμού** με τον έξυπνο κάδο ανακύκλωσης μπορεί:
1. Να ανοίξει τον κάδο με την υπηρεσιακή προσωποποιημένη keycard από συγκεκριμένο σημείο και για περισσότερο χρονικό διάστημα ώστε να αφαιρέσει τα απορρίμματα του.

### Μέρος Β' (με χρήση εφαρμογής android)
Με χρήση της εφαρμογής android **E-RecycleBin** που δημιουργήθηκε στο AppInventor ο πιστοποιημένος χρήστης μπορεί:

1. Να ανοίξει τον κάδο από αποστάση (χρήση Bluetooth) για να πετάξει το κατάλληλο ανακυκλώσιμο υλικό (χαρτί, πλαστικό, μέταλλο, γυαλί).
2. Να δει το ποσοστό που είναι γεμάτος ο κάδος (ανάβει κόκκινο ή πράσινο led).
3. Να δει πόσους πόντους έχει κερδίσει από την ανακύκλωση του συγκεκριμένου υλικού (ενδεικτικά: χαρτί: 5 πόντους, πλαστικό: 10 πόντους, μέταλλο: 15 πόντους, γυαλί: 5 πόντους).
4. Να δει την θερμοκρασία και την υγρασία που έχει ο κάδος ανακύκλωσης.
5. Αναφορά προβλημάτων κάδου / εφαρμογής android / μέσω email.

### Μέρος Γ' 
Ο Κάδος ως αυτόνομο Arduino και με την χρήση Wifi & Bluetooth:

1. Ενημερώνει την εφαρμογή android του κάδου για την κατάσταση του (γεμάτος, άδειος) καθώς και το ποσοστό πληρότητας του.
2. Εμφανίζει στην οθόνη LCD  την κατάσταση του (γεμάτος, άδειος) καθώς και το ποσοστό πληρότητας του 
3. Καταμετρεί τα μεταλλικά αντικείμενα που ο χρήστης ανακύκλωσε.
4. Παραγεται ήχος (buzzer) σε περίπτωση που αντιληφθεί ο αισθητηρας καπνό / φωτιά.
5. Ενημερώνει το ποσοστό υγρασίας του καθώς και την θερμοκρασία του στην εφαρμογή android του κάδου.
6. Στέλνει e-mail στον χρήστη / πολίτη με τους πόντους που έλαβε τη συγκεκριμένη ημερομηνία.
7. Στέλνει e-mail στην διαχειριστική ομάδα και τον υπεύθυνο καθαρισμού όταν γεμίσει.
8. Στέλνει e-mail στις αρμόδιες υπηρεσίες σε περίπτωση ανίχνευσης καπνού / φωτιάς.
