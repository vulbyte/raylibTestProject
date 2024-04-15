# First play with raylib:

working build command is:

```bash
clang -I lib -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL ./lib/libraylib.a ./src/main.cpp -o CLICKTHISDUMMY
```

goals for this project:

# turn based tank game

## URGENT TO-DO's

- [ ] controller layout

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
- [ ] death pit
- [ ] terrain deformation

## weapon stuff

- [ ] bazooka (0.5x dmg for self)
      : dmg: 3/5 knockback: 4/5 land-deformation: 4/5
- [ ] melee  
       : dmg: 1/5 knockback: 5/5 land-deformation: 1/5
- [ ] sniper  
       : dmg: 4/5 knockback: 2/5 land-deformation: 2/5
- [ ] grenade
      : dmg: 4/5 knockback: 3/5 land-deformation: 3/5
- [ ] drill arms
      : dmg: 2/5 knockback: 1/5 land-deformation: 5/5

### stretch goals (no promises)

- [ ] online play
- [ ] ai (for single player play)
- [ ] classes for each character
      : private (no modifier)
      : glass canon (2x dmg, but 0.5x health)
      : tank (1.5x health, but 0.75x movement)
      : scout (0.8 health, 2x movement, 2x jump)
- [ ] levelution
      : grassland (no effect)
      : desert (high winds, low visibility)
      : volcano (random meteor showers)
      : candyland (2x the drops)
      : rain-forest (water level slowly raises)
      : earth-quake (randomizes terrain)

---

## controls

### general

- pause
  : `esc`, or `tab`

- toggle movement/attack mode
  : `t`, `right-click`

- jump
  : `spacebar`

- cursor aim
  : `cursor of mouse`

- attack
  : `left click`, `enter`

### movement mode (default)

- movement
  : <`w`, `a`, `s`, `d`>, <`i`, `j`, `k`, `l`>, or <`⬆️`, `⬅️`, `⬇️`, `➡️`>

### attack mode

- rotate aim clock-wise(CW)
  : <`d`,>, <`l`>, or <`➡️`>

- rotate counter-clock-wise(CCW)
  : <`a`>, <`k`>, or <`⬅️`>

- increase power
  : <`w`, <`i`>, or <`⬆️`>

- decrease power
  : <`s`, <`k`>, or <`⬇️`>
