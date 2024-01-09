## This project is made during the POO option in ECM

# Initialiser le projet sur sa machine
git init

git config --global user.name 'Prenom'

git config --global user.email 'tonadresse@gmail.com'

git remote add origin https://github.com/TheoDidon/bibliotheque.git

# Créer une branche de developpement et push du code

git checkout -b nomdetabranche

git add .

git commit -m "nom du commit"

git push

Normalement le git push ne fonctionne pas la première fois et propose une commande à copier-coller avec un truc du style --set-upstream, il faut juste la copier coller et ça fonctionne
