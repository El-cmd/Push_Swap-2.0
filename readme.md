# Push_Swap

Ce projet consiste à trier des données sur une pile, avec un set d'instructions limité, en utilisant le moins de coups possibles.

## 📝 Description

Push_swap est un projet de tri algorithmique qui nécessite de manipuler différents algorithmes de tri et de choisir la solution la plus appropriée pour un tri optimisé des données.

### Les règles

Vous avez à votre disposition 2 piles nommées a et b :
- Au départ, la pile a contient une liste d'entiers (positifs ou négatifs, sans doublons)
- La pile b est vide
- Le but est de trier la pile a en ordre croissant avec un nombre limité d'opérations

### Les opérations autorisées

- `sa` : swap a - échange les 2 premiers éléments de la pile a
- `sb` : swap b - échange les 2 premiers éléments de la pile b
- `ss` : sa et sb en même temps
- `pa` : push a - prend le premier élément de b et le met sur a
- `pb` : push b - prend le premier élément de a et le met sur b
- `ra` : rotate a - décale d'une position vers le haut tous les éléments de la pile a
- `rb` : rotate b - décale d'une position vers le haut tous les éléments de la pile b
- `rr` : ra et rb en même temps
- `rra` : reverse rotate a - décale d'une position vers le bas tous les éléments de la pile a
- `rrb` : reverse rotate b - décale d'une position vers le bas tous les éléments de la pile b
- `rrr` : rra et rrb en même temps

## 🚀 Installation

```bash
git clone <votre-repo>
cd Push_Swap-2.0
make
```

## 💻 Utilisation

```bash
./push_swap 2 1 3 6 5 8
```

Pour vérifier si le tri est correct, vous pouvez utiliser le checker :

```bash
./push_swap 2 1 3 6 5 8 | ./checker_linux 2 1 3 6 5 8
```

## 🛠️ Structure du Projet

```
.
├── LIBFT/          # Bibliothèque personnelle de fonctions
├── includes/       # Fichiers headers
├── srcs/          # Code source
│   ├── algo/      # Algorithmes de tri
│   └── operations/# Opérations de pile
├── Makefile       # Compilation du projet
└── checker_linux  # Programme de vérification
```

## ⚙️ Fonctionnalités

- Gestion des erreurs (doublons, non-entiers, overflow)
- Différents algorithmes de tri selon la taille de la pile
- Optimisation du nombre d'opérations
- Support de nombres négatifs et positifs

## 📈 Complexité

Le programme utilise différents algorithmes selon la taille de l'entrée :
- Pour 3 nombres : Algorithme spécifique
- Pour 5 nombres : Algorithme optimisé pour petites listes
- Pour plus : Algorithme optimisé avec calcul de coût