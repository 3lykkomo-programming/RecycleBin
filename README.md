# Δίκτυο έξυπνων κάδων ανακύκλωσης
**3ο Γενικό Λύκειο Κομοτηνής**

*Ομάδα Ρομποτικής και προγραμματισμού* 

Σχολικό Έτος: **2019-2020**

![Cat](https://github.com/3lykkomo-programming/RecycleBin/blob/master/docs/images/wallpaper.png)

# Εισαγωγή
Στο συγκεκριμένο αποθετήριο μπορείτε να βρείτε την πρόταση συμμετοχής μας στον 2ο Πανελλήνιο Διαγωνισμό Ρομποτικής Ανοιχτών Τεχνολογιών, με την οποία επιθυμούμε να δημιουργήσουμε έργα με χρήση ανοιχτών τεχνολογιών, ώστε να εκσυγχρονίσουμε τόσο κάποιες λειτουργίες που γίνονται καθημερινά σε επίπεδο Σχολικής Μονάδας, όσο και να εκμεταλλευτούμε τις δυνατότητες ρομποτικών κατασκευών και να κάνουμε το Σχολείο μας περισσότερο Ψηφιακό.

## Πρόταση υλοποίησης
### Μέρος Α'
Ο **Χρήστης** με τον έξυπνο κάδο ανακύκλωσης μπορεί:

1. Να ανοίξει τον κάδο με την προσωποποιημένη keycard για συγκεκριμένο χρονικό διάστημα (σε περίπτωση που επιθυμεί την καταμέτρηση πόντων ανακύκλωσης)
2. Να ενημερωθεί αν ο κάδος είναι γεμάτος από τις φωτεινές ενδείξεις που υπάρχουν σε αυτόν (Κόκκινο/Πράσινο LED)
3. Να προσθέσει πόντους ανακύκλωσης σκανάροντας την προσωποποιημένη keycard του για να προσθέσει πόντους ανακύκλωσης

Ο **Υπεύθυνος καθαρισμού** με τον έξυπνο κάδο ανακύκλωσης μπορεί:

1. Να ανοίξει τον κάδο για συγκεκριμένο χρονικό διάστημα με την υπηρεσιακή προσωποποιημένη keycard και να αφαιρέσει τα απορρίμματα του.

### Μέρος Β' (με χρήση εφαρμογής android)
Με χρήση της εφαρμογής **E-RecycleBin** που δημιουργήθηκε στο AppInventor ο πιστοποιημένος χρήστης μπορεί:

1. Να ανοίξει τον κάδο
2. Να δει το ποσοστό που είναι γεμάτος ο κάδος (ανάβει κόκκινο ή πράσινο led).
3. Να δει πόσους πόντους έχει κερδίσει από την ανακύκλωση υλικών (χαρτί, πλαστικό, μέταλλο).
4. Να χρησιμοποιήσει την προσωποποιημένη keycard για προσθήκη πόντων (σε περίπτωση που διαθέτει το κινητό του χρήστη NFC)
5. Να δει την θερμοκρασία και την υγρασία που έχει ο κάδος ανακύκλωσης.
6. Να ενημερώσει τα στοιχεία της προσωποποιημένης κάρτας του (τηλέφωνο επικοινωνίας, e-mail κτλ.)
7. Αναφορά προβλημάτων κάδου / εφαρμογής android / ιστοσελίδας στην διαχειριστική ομάδα

### Μέρος Γ'
Με την επίσκεψη στην ιστοσελίδα του δικτύου έξυπνων κάδων ανακύκλωσης, ο πολίτης μπορεί:

1. Να ενημερωθεί για τους πόντους που έχει μαζέψει από την ανακύκλωση υλικών
2. Να δει την θερμοκρασία και την υγρασία που έχει ο κάδος ανακύκλωσης
3. Να ενημερώσει τα στοιχεία της προσωποποιημένης κάρτας του (τηλέφωνο επικοινωνίας, e-mail κτλ.)
4. Αναφορά κλοπής / χαμένης κάρτας για μεταφορά των πόντων του στην καινούργια καθώς και απενεργοποίηση της παλιάς
5. Αναφορά προβλημμάτων κάδου / εφαρμογής android / ιστοσελίδας στην διαχειριστική ομάδα

### Μέρος Δ' 
Ο Κάδος ως αυτόνομο Arduino και με την χρήση Wifi:

1. Ενημερώνει την κατάσταση του (γεμάτος, άδειος) καθώς και το ποσοστό πληρότητας του στην ιστοσελίδα και την εφαρμογή android του κάδου.
2. Αναγνωρίζει με ειδικό αισθητήρα τα μέταλλα, τα πλαστικά και τα χαρτιά και προσθέτει ανάλογα τους πόντους στον χρήστη.
3. Καταμετρεί τα αντικείμενα που ο χρήστης ανακύκλωσε.
4. Ενημερώνει / Προσθέτει τους πόντους ανακύκλωσης των χρηστών στην ιστοσελίδα και την εφαρμογή android του κάδου.
5. Ενημερώνει το ποσοστό υγρασία του καθώς και την θερμοκρασία του στην ιστοσελίδα και την εφαρμογή android του κάδου.
6. Στέλνει e-mail στον χρήστη / πολίτη με τους πόντους που έλαβε καθώς και τους συνολικούς πόντους
7. Στέλνει e-mail στην διαχειριστική ομάδα και τον υπεύθυνο καθαρισμού όταν γεμίσει
8. Στέλνει e-mail στις αρμόδιες υπηρεσίες σε περίπτωση ανίχνευσης καπνού / φωτιάς.
