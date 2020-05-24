# Physics Chapter 1 to 9 Quick review

## Chapter 1

1. Scalars
    - Scalar has only a value.
    - Volume is the size something occupies in 3D space, generally you can't have negative volume, so it is also a scalar
    - Speed is the measurement of how fast something is moving but neglects which way that thing is moving so it is an scalar.
2. Vectors
    - Vectors has an value and a direction.
    - Velocity is similar to speed but it takes in account of the direction, hence a vector.
    - When calculating vectors, we take the x and y component of both vectors and calculate them separately. $\overrightarrow{A} + \overrightarrow{B} = \overrightarrow{A_x} + \overrightarrow{B_x} + \overrightarrow{A_y} + \overrightarrow{B_y}$
    - Unit vector refers to a vector of length of 1. $\frac{\overrightarrow{A}}{|\overrightarrow{A}|}$
    - The cross product of a vector gives a vector perpendicular to the two vector, where the length of the resulting vector is equal to the area of the parallelogram forms by the two vectors in magnitude. $\overrightarrow{A} \times \overrightarrow{B} = |\overrightarrow{A}| \times |\overrightarrow{B}| sin(\theta)$
    - The scalar product of a vector is $\overrightarrow{A} \cdot \overrightarrow{B} = |\overrightarrow{A}| \times |\overrightarrow{B}| cos(\theta) = A_1 B_1 + A_2 B_2 + ... A_n B_n$
3. Uncertainty
    - While dealing with measurements they often came with some degree of uncertainty. 
    - For example, a typical ruler is only able to measure to the nearest millimeter, for any distance that lies between the millimeter scales we would have to guess the actual distance within that range. 
    - The effectiveness of that uncertainty in the entire measurement is the percentage uncertainty. The percentage uncertainty of $A \pm B$ is $\frac{B}{A}$

## Chapter 2 & 3 Motions

1. Displacement
    - Displacement is an vector measured in $m$
    - The total displacement is the vector pointing from the starting position towards the final position.
    - Can be find by $\int{v(t)}dt$
2. Velocity
    - The rate of change of displacement measured in $m/s$
    - For a total time T and a displacement of S, the average velocity is calculated by $\frac{S}{T} m/s$
    - Velocity can be find by $\frac{d(s(t))}{dt}$ or $\int{a(t)}dt$
        - since $s = vt$, for varying velocity, we can take the sum of all the $vdt$
3. Acceleration
    - The rate of change of speed measured in $m/s^2$.
    - Can be find by $\frac{d(v(t))}{dt}$
        - since $v = at$, for varying acceleration, we can take the sum of all the$adt$
    - Displacement with constant aceleration
        - $x = x_0 + v_0t + \frac{1}{2}a_xt^2$
        - $x_0$ is the starting displacement
        - The rest of the equation is the distance travelled
        - $v_0t + \frac{1}{2}a_xt^2 = \frac{t(v_0 + (v_0 + at))}{2}$
        - Since area of $v(t)$ plot finds the displacement and the slope(acceleration) is constant, we can calculate the area with Trapezoid
4. Motion in 3D space
    - Can be done in a similar way by seperating the components into its basis.
5. Motion in a circle
    - If the object is moving in a circle, even if it has constant speed, since it is changing direction it has an acceleration pointing towards the axis of motion where $a = \frac{v^2}{r} = r\omega^2 = \alpha r$
        - For change in angle, $\Delta \theta$
        - The direction of the velocity also changed by $\Delta\theta$, When $\Delta\theta$ small, approximate to arc
        - all $\Delta v$ connects to a circle and $a = \frac{\Delta v}{t}$
        - hence $\frac{2\pi v^2}{(2\pi r)/v}$
        - $a = \frac{v^2}{r}$ 
    - Its period $T = \frac{2\pi}{\omega}$
## Chapter 4 & 5 Force
1. Newtons's Laws
    - First Law: Objects tends to remain in its previous motion states
    - Second Law: $F = ma$, $F = \frac{\Delta P}{\Delta t}$
    - Third Law: For ever action there's an equal and opposite reaction
2. Equilibrium
    - At equilibrium, net moment and net force are zero
3. Friction
    - $f = \mu R$ for limiting
4. Mass and Weight
    - Mass is the amount of substance in object
    - Weight is force excerted on the object by gravitational force between massed objects

## Chapter 6 & 7 Energy
1. Work 
    - Work done is the amount of energy needed to do something measured in $J$
    - $W = Fs$ where s is the distance traveled along the direction of force.
    - So work done by gravity when moving on horizontal ground is zero
    - If force varies as a function of distance x, $w = \int{F(x)}dx$
        - since $w = Fs$, by taking the force at each x timing the delta x we can get the delta w, workdone.
        - By summing all delta w we get $w = \int{F(x)}dx$
2. Power
    - Power is the rate of change of work over time $P = \frac{\Delta W}{\Delta t}$ measured in $W$
    - For object moving at constant speed, $P = FV$
3. Kinetic Energy
    - $v^2 = u^2 + 2as$, and $F = ma$ hence
    - $Fs = m\times\frac{v^2-u^2}{2s} \times s$
    - $K_E = \frac{1}{2}mv^2 - \frac{1}{2}mu^2$
4. Gravitational Potential Energy
    - $Fs = ma \times s$
    - $G_E = mgh$
5. Elastic Potential Energy
    - $F = kx$, $w = \int{F(x) \times dx}$
    - $K_{EP} = \int{kx} = \frac{1}{2}kx^2$

## Chapter 8 Momentum, Impulse and Collisions
1. Momentum
    - $p = mv$
    - Momentum before and after collision is conserved
2. Impulse
    - $J = Ft$
    - $J = \int^{t_2}_{t_1}{\sum \overrightarrow{F}dt}$
        - $J = Ft$, if F varies with time, for each delta time we get a delta J
        - By summing all delta J we get $J = \int^{t_2}_{t_1}{\sum \overrightarrow{F}dt}$
    - Change of Momentum
3. Collision
    - The relative speed of two colliding objective is conserved
    - If collision elastic the total kinetic energy is conserved
    - If not elastic, not conserved

## Chapter 9 Rotational Bodies
1. Angular Velocity and Acceleration
    - Displacement $s = r \theta$
    - Velocity $\omega = r v = \frac{\Delta \theta}{\Delta t}$
    - Acceleration $\alpha = ar = \frac{\Delta \omega}{\Delta t}$
    - Equations between these are similar to those in linear motions
2. Moment of Inertia
    - $I = ml^2$ for a point at distance l from axis
    - $I = \int^{M}_{0}{r^2}dm$
    - For rod mass M with axis perpendicular to longest side length L
        - through center $I=\frac{1}{12}ML^2$
        - through one end $I=\frac{1}{3}ML^2$
    - For rectangular plate axis $a$ long, $b$ wide
        - perpendicular and through center of largest side $I=\frac{1}{12}M(a^2+b^2)$
        - Along edge of longest side $I=\frac{1}{3}Ma^2$
    - For Cylinder R
        - Solid cylinder $I = \frac{1}{2}MR^2$
        - with cylinder radius $R_1$ shape cutout along midline $I=\frac{1}{2}M(R^2+R_1^2)$
        - same as last one but difference in $R$ neglectable $I = MR^2$
    - Sphere with $R$
        - solid $I = \frac{2}{5}MR^2$
        - hollow $I = \frac{2}{3}MR^2$
3. Changing Axis
    - Parallelly moved a distance of d
        - $I = I + Md^2$
    - Perpendicular
        - $I = \frac{1}{2} I$
4. Energy
    - Rotational $E_{rotational} = \frac{1}{2}I\omega^2$
