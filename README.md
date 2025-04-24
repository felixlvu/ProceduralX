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
2. 🌊 **Plaine**, **plage** et **océan**  
3. 💧 **Plaine** avec un **lac** et transition vers la 🌳 **forêt**

## 🛠️ Technologies

- ⚙️ C++17  
- 🧱 SDL2  
- 🌐 LibNoise (bruit Perlin & Voronoï)

## 🚀 Lancer le projet

> Assurez-vous d’avoir SDL2 et libnoise installés sur votre système.

```bash
make
./ProceduralX
