# Random Triggers
by Benjie Jiao

At the core of this module is an Arduino-based sample and hold program that takes in white noise and uses it to produce random signals. This runs on +9V.

<img src="./Images/RandomTriggers.jpg">

### Some demos on youtube

https://youtu.be/2PxfztWCuQI

https://youtu.be/cSdqK8XMtZY


### Inputs

*Clock* - a constant clock pulse to move to the next set of random values.

*White Noise* - A white noise source. 

### Output

*CV Out* - A random CV level

<img src="./Images/Random CV Output.png">

*Gate Out* - Has a random chance to produce a gate signal at each clock pulse. Sparisity is controlled by the threshold knobs.

*Trigger Out* -  Has a random chance to produce a trigger signal at each clock pulse. Sparsity is also controlled by the threshold knobs.

<img src="./Images/Random Trigger Output.png">

### Controls

*Threshold* - Potentiometers control the sparsity of each random trigger channel.

*Gate/Trigger* - Toggle between random trigger or random gate outputs. Also available for each channel. 

## Version History

**Version 1.0**
The initial version.
<img src="./RandomTriggers 1.0.svg">
