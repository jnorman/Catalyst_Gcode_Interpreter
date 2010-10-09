#ifndef THERMISTORTABLE_H_
#define THERMISTORTABLE_H_

// Uncomment the next line if you are using a thermistor; leave it if you have a thermocouple
#define USE_THERMISTOR

// How many temperature samples to take.  each sample takes about 100 usecs.
#define TEMPERATURE_SAMPLES 3

// How accurately do we maintain the temperature?
#define HALF_DEAD_ZONE 5


#ifdef USE_THERMISTOR
// Thermistor lookup table for RepRap Temperature Sensor Boards (http://make.rrrf.org/ts)
// Made with createTemperatureLookup.py (http://svn.reprap.org/trunk/reprap/firmware/Arduino/utilities/createTemperatureLookup.py)
// ./createTemperatureLookup.py --r0=10000 --t0=25 --r1=680 --r2=1600 --beta=4036 --max-adc=305
// r0: 10000
// t0: 25
// r1: 680
// r2: 1600
// beta: 4036
// max adc: 305
#define NUMTEMPS 19
short temptable[NUMTEMPS][2] = {
   {1, 571},
   {17, 253},
   {33, 208},
   {49, 183},
   {65, 166},
   {81, 152},
   {97, 141},
   {113, 131},
   {129, 123},
   {145, 115},
   {161, 107},
   {177, 100},
   {193, 92},
   {209, 85},
   {225, 77},
   {241, 68},
   {257, 58},
   {273, 46},
   {289, 28}
};

#endif

#ifdef BED_TEMPERATURE_PIN
//same table as above -adjust later
// Thermistor lookup table for RepRap Temperature Sensor Boards (http://make.rrrf.org/ts)
// Made with createTemperatureLookup.py (http://svn.reprap.org/trunk/reprap/firmware/Arduino/utilities/createTemperatureLookup.py)
// ./createTemperatureLookup.py --r0=10000 --t0=25 --r1=680 --r2=1600 --beta=4036 --max-adc=305
// r0: 10000
// t0: 25
// r1: 680
// r2: 1600
// beta: 4036
// max adc: 305
#define NUMTEMPS 19
short bedtemptable[NUMTEMPS][2] = {
   {1, 571},
   {17, 253},
   {33, 208},
   {49, 183},
   {65, 166},
   {81, 152},
   {97, 141},
   {113, 131},
   {129, 123},
   {145, 115},
   {161, 107},
   {177, 100},
   {193, 92},
   {209, 85},
   {225, 77},
   {241, 68},
   {257, 58},
   {273, 46},
   {289, 28}
};
#endif
#endif
