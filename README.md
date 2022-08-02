# Cub3D

### Fonctions autorisees
```open```, ```close```, ```read```, ```write```,  
```printf```, ```malloc```, ```free```,  
```perror```, ```strerror```, ```exit```  

### Librairies autorisees
* lib `math` (-lm man man 3 math)  
* MinilibX  
    📸 [INSTALLATION MINILIBX](https://github.com/codam-coding-college/MLX42)     
* Libft  

### Regles 
* La gestion des fenêtres doit être parfaite : gestion de la minimalisation, du passage
d’une autre fenetre, etc
* Textures différentes (vous avez le choix) selon si les murs sont face nord, sud, est, ouest.
* Avoir des couleurs différentes pour le sol et le plafond
* Les touches⬆️ ⬇️ ➡️ ⬅️⇒ une rotation de la caméra (regarder a gauche et a droite)
* Les touches `W`, `A`, `S` et `D` ⇒ déplacer la caméra (déplacement du personnage)
* la touche `ESC` ou ❌⇒ fermer la fenêtre et quitter le programme proprement
* L’utilisation d’images de la minilibX est fortement recommandée.  

La map doit être composée d’uniquement ces 6 caractères : 0 pour les espaces vides, 1 pour les murs, et N,S,E ou W qui représentent la position de départ du joueur et son orientation.  
```tsx
NO ./path_to_the_north_texture
SO ./path_to_the_south_texture
WE ./path_to_the_west_texture
EA ./path_to_the_east_texture

F 220,100,0   ==> code RGB
C 225,30,0    ==> code RGB

1111111111111111111111111
1000000000110000000000001
1011000001110000000000001
1001000000000000000000001
111111111011000001110000000000001
100000000011000001110111111111111
11110111111111011100000010001
11110111111111011101010010001
11000000110101011100000010001
10000000000000001100000010001
10000000000000001101010010001
11000001110101011111011110N0111
11110111 1110101 101111010001
11111111 1111111 111111111111
```  

## Tests effectues
🏆 [TESTS CUB3D](https://elated-porpoise-8e6.notion.site/TESTS-CUB3D-50f2e16eb4144426a2ceb6b73c00dd7c)   

🧠 [NOTION DU PROJET](https://elated-porpoise-8e6.notion.site/CUBE-3D-7348e7621e3e443bb8d7924b7a7d716e)

