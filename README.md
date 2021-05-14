# Random Triggers
by Benjie Jiao

At the core of this module is an Arduino-based sample and hold program that takes in white noise and uses it to produce random signals. This runs on +9V.

### Inputs

*Clock* - a constant clock pulse to move to the next set of random values.

### Output

*CV Out* - A random CV level

*Gate Out* - Has a random chance to produce a gate signal at each clock pulse. Sparisity is controlled by the threshold knobs.

*Trigger Out* -  Has a random chance to produce a trigger signal at each clock pulse. Sparsity is also controlled by the threshold knobs.


## Version History

**Version 1.0**
The initial version.
<img src="./RandomTriggers 1.0.svg">
