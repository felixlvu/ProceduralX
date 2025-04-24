# 🌍 ProceduralX - Génération de Monde Procédural

Bienvenue sur **ProceduralX**, un projet expérimental de génération procédurale de monde en C++ avec SDL2.

## 🧭 Présentation

Ce projet génère automatiquement des mondes en 2D composés de plusieurs biomes :
- 🌾 **Plaine** avec arbres et pierres
- 🏖️ **Plage** et 🌊 **océan**
- 🌳 **Forêt**
- 💧 **Lacs** générés dans les zones de plaines ou forêts

Les biomes sont générés grâce à du bruit de Perlin et Voronoï pour créer une diversité naturelle et cohérente.

## ✨ Fonctionnalités

- 🗺️ Génération de carte avec différents biomes
- 🌱 Placement procédural d'éléments naturels (arbres, rochers, trous de sable, etc.)
- 🎨 Textures distinctes pour chaque biome et chaque élément
- 💡 Gestion des lacs dans les zones adaptées
- 🧬 Système de `seed` pour obtenir des cartes reproductibles

## 🖼️ Captures d'écran

1. 🌾 **Plaine** avec pierres et arbres
   <img width="1204" alt="Screenshot 2025-04-24 at 15 21 34" src="https://github.com/user-attachments/assets/06f7896b-5834-4425-9984-feaa454072a4" />

3. 🌊 **Plaine**, **plage** et **océan**
    <img width="1204" alt="Screenshot 2025-04-24 at 15 21 41" src="https://github.com/user-attachments/assets/62d8442a-14cd-4ca0-93f3-e28e0479810b" />

5. 💧 **Plaine** avec un **lac** et transition vers la 🌳 **forêt**
  <img width="1204" alt="Screenshot 2025-04-24 at 15 21 57" src="https://github.com/user-attachments/assets/dab7ce5c-372e-436e-a6e0-f375dbf4de63" />

  
## 🛠️ Technologies

- ⚙️ C++17  
- 🧱 SDL2  
- 🌐 LibNoise (bruit Perlin & Voronoï)

## 🚀 Lancer le projet

> Assurez-vous d’avoir SDL2 et libnoise installés sur votre système.

```bash
make
./ProceduralX
