# First play with raylib:

working build command is:

```bash
clang -I lib -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL ./lib/libraylib.a ./src/main.cpp -o CLICKTHISDUMMY
```

goals for this project:

# turn based tank game

## general stuff

- [ ] main menu
- [ ] settings
- [ ] music slider
- [ ] sfx slider
- [ ] pause menu (early quit option)

## character stuff

- [ ] 2 players, 4 mini characters (turn based)
- [ ] health + shield (health cannot be recovered)
- [ ] random spawns
- [ ] turn timer
- [ ] basic movement
- [ ] jump with 8 direction
- [ ] animations
- [ ] aiming based on mouse

## world stuff

- [ ] random generation ground
- [ ] wind
- [ ] random spawning shields (ceramic plates basically)
- [ ] weather effects (maybe effects on game)
- [ ] random backgrounds (to make levels feel unique)

## weapon stuff

- [ ] bazooka (aoe) gun  
       : dmg: 2/4 knockback: 2/4
- [ ] melee  
       : dmg: 1/4 knockback: 4/4
- [ ] sniper  
       : dmg: 4/4 knockback: 1/4
- [ ] grenade
      : dmg: 3/4 knockback: 3/4

### stretch goals (no promises)

- [ ] online play
- [ ] ai (for single player play)
- [ ] classes for each character
      : private (no modifier)
      : glass canon (2x dmg, but 0.5x health)
      : tank (1.5x health, but 0.75x movement)
      : scout (0.8 health, 2x movement, 2x jump)
