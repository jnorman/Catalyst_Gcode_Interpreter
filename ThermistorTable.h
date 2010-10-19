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
#define NUMTEMPS 20
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
   {289, 28},
   {350, 3}
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
short bedtemptable[NUMTEMPS][2] = {
   {1, 752},
   {54, 242},
   {107, 199},
   {160, 176},
   {213, 160},
   {266, 147},
   {319, 137},
   {372, 128},
   {425, 119},
   {478, 112},
   {531, 105},
   {584, 98},
   {637, 91},
   {690, 84},
   {743, 76},
   {796, 68},
   {849, 59},
   {902, 49},
   {955, 34},
   {1008, 3} 
};
#endif
#endif
