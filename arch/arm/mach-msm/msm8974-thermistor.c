/*
 * msm8974-thermistor.c - thermistor of H-F Project
 *
 * Copyright (C) 2011 Samsung Electrnoics
 * SangYoung Son <hello.son@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <mach/msm8974-thermistor.h>
#include <mach/sec_thermistor.h>


#ifdef CONFIG_SEC_THERMISTOR
/*Below adc table is same as batt_temp_adc table*/
/* mismatch 8974 */
#if defined(CONFIG_MACH_KS01SKT) || defined(CONFIG_MACH_KS01KTT) || defined(CONFIG_MACH_KS01LGT) || defined(CONFIG_MACH_JACTIVESKT)
static struct sec_therm_adc_table temper_table_ap[] = {
	{25794,		900},
	{25864,		890},
	{26000,		880},
	{26155,		870},
	{26203,		860},
	{26237,		850},
	{26288,		840},
	{26354,		830},
	{26393,		820},
	{26472,		810},
	{26494,		800},
	{26578,		790},
	{26636,		780},
	{26695,		770},
	{26779,		760},
	{26817,		750},
	{26870,		740},
	{27000,		730},
	{27031,		720},
	{27107,		710},
	{27229,		700},
	{27271,		690},
	{27309,		680},
	{27435,		670},
	{27534,		660},
	{27620,		650},
	{27761,		640},
	{27834,		630},
	{27886,		620},
	{27970,		610},
	{28106,		600},
	{28200,		590},
	{28252,		580},
	{28339,		570},
	{28534,		560},
	{28640,		550},
	{28794,		540},
	{28884,		530},
	{28926,		520},
	{29091,		510},
	{29269,		500},
	{29445,		490},
	{29620,		480},
	{29615,		470},
	{29805,		460},
	{30015,		450},
	{30227,		440},
	{30392,		430},
	{30567,		420},
	{30731,		410},
	{30825,		400},
	{31060,		390},
	{31224,		380},
	{31406,		370},
	{31595,		360},
	{31764,		350},
	{31990,		340},
	{32111,		330},
	{32342,		320},
	{32562,		310},
	{32705,		300},
	{33697,		250},
	{34696,		200},
	{35682,		150},
	{36634,		100},
	{37721,		50},
	{38541,		  0},
	{39415,		-50},
	{40155,		-100},
	{40730,		-150},
	{41455,		-200},
	{41772,		-250},
	{42149,		-300},
};
#elif defined(CONFIG_MACH_HLTESKT) || defined(CONFIG_MACH_HLTEKTT) || \
	defined(CONFIG_MACH_HLTELGT) || defined(CONFIG_MACH_HLTEDCM) || defined(CONFIG_MACH_HLTEKDI)
static struct sec_therm_adc_table temper_table_ap[] = {
	{26729,	730},
	{26784,	720},
	{26836,	710},
	{26910,	700},
	{26976,	690},
	{27048,	680},
	{27124,	670},
	{27227,	660},
	{27332,	650},
	{27413,	640},
	{27522,	630},
	{27588,	620},
	{27670,	610},
	{27835,	600},
	{27934,	590},
	{28036,	580},
	{28125,	570},
	{28231,	560},
	{28348,	550},
	{28463,	540},
	{28589,	530},
	{28703,	520},
	{28830,	510},
	{28958,	500},
	{29089,	490},
	{29212,	480},
	{29354,	470},
	{29499,	460},
	{29648,	450},
	{29805,	440},
	{29950,	430},
	{30109,	420},
	{30259,	410},
	{30441,	400},
	{30600,	390},
	{30757,	380},
	{30926,	370},
	{31077,	360},
	{31289,	350},
	{31457,	340},
	{31663,	330},
	{31872,	320},
	{32056,	310},
	{32292,	300},
	{32472,	290},
	{32701,	280},
	{32915,	270},
	{33061,	260},
	{33285,	250},
	{33468,	240},
	{33675,	230},
	{33882,	220},
	{34092,	210},
	{34291,	200},
	{34536,	190},
	{34725,	180},
	{34953,	170},
	{35165,	160},
	{35348,	150},
	{35567,	140},
	{35744,	130},
	{35997,	120},
	{36202,	110},
	{36431,	100},
	{36649,	90},
	{36818,	80},
	{37066,	70},
	{37222,	60},
	{37459,	50},
	{37608,	40},
	{37841,	30},
	{37987,	20},
	{38205,	10},
	{38416,	0},
	{38604,	-10},
	{38788,	-20},
	{38959,	-30},
	{39121,	-40},
	{39280,	-50},
	{39431,	-60},
	{39591,	-70},
	{39748,	-80},
	{39895,	-90},
	{40043,	-100},
	{40172,	-110},
	{40307,	-120},
	{40449,	-130},
	{40565,	-140},
	{40712,	-150},
	{40788,	-160},
	{40932,	-170},
	{41010,	-180},
	{41135,	-190},
	{41225,	-200},
};
#elif defined(CONFIG_MACH_FRESCOLTESKT) || defined(CONFIG_MACH_FRESCOLTEKTT) || \
	defined(CONFIG_MACH_FRESCOLTELGT)
static struct sec_therm_adc_table temper_table_ap[] = {
	{26699,	730},
	{26751,	720},
	{26805,	710},
	{26880,	700},
	{26935,	690},
	{27010,	680},
	{27101,	670},
	{27200,	660},
	{27302,	650},
	{27383,	640},
	{27502,	630},
	{27558,	620},
	{27630,	610},
	{27801,	600},
	{27885,	590},
	{27988,	580},
	{28078,	570},
	{28190,	560},
	{28314,	550},
	{28426,	540},
	{28539,	530},
	{28666,	520},
	{28791,	510},
	{28901,	500},
	{29049,	490},
	{29194,	480},
	{29324,	470},
	{29475,	460},
	{29624,	450},
	{29772,	440},
	{29930,	430},
	{30073,	420},
	{30233,	410},
	{30400,	400},
	{30554,	390},
	{30761,	380},
	{30930,	370},
	{31104,	360},
	{31287,	350},
	{31473,	340},
	{31633,	330},
	{31806,	320},
	{31984,	310},
	{32178,	300},
	{32369,	290},
	{32569,	280},
	{32776,	270},
	{32979,	260},
	{33191,	250},
	{33401,	240},
	{33606,	230},
	{33819,	220},
	{34046,	210},
	{34270,	200},
	{34480,	190},
	{34722,	180},
	{34936,	170},
	{35144,	160},
	{35378,	150},
	{35594,	140},
	{35800,	130},
	{36033,	120},
	{36242,  110},
	{36448,	100},
	{36670,	90},
	{36882,	80},
	{37082,	70},
	{37292,	60},
	{37490,	50},
	{37678,	40},
	{37874,	30},
	{38068,	20},
	{38238,	10},
	{38430,	0},
	{38512,	-10},
	{38639,	-20},
	{38832,	-30},
	{38995,	-40},
	{39177,	-50},
	{39345,	-60},
	{39502,	-70},
	{39650,	-80},
	{39802,	-90},
	{39948,	-100},
	{40091,	-110},
	{40211,	-120},
	{40356,	-130},
	{40483,	-140},
	{40645,	-150},
	{40751,	-160},
	{40902,	-170},
	{40990,	-180},
	{41105,	-190},
	{41195,	-200},
};
#elif defined(CONFIG_SEC_F_PROJECT)
static struct sec_therm_adc_table temper_table_ap[] = {
	{25749,	900},
	{25773,	890},
	{25819,	880},
	{25873,	870},
	{25910,	860},
	{25957,	850},
	{25993,	840},
	{26045,	830},
	{26102,	820},
	{26157,	810},
	{26169,	800},
	{26224,	790},
	{26297,	780},
	{26341,	770},
	{26409,	760},
	{26464,	750},
	{26532,	740},
	{26599,	730},
	{26658,	720},
	{26712,	710},
	{26809,	700},
	{26862,	690},
	{26943,	680},
	{27026,	670},
	{27094,	660},
	{27211,	650},
	{27294,	640},
	{27405,	630},
	{27487,	620},
	{27581,	610},
	{27672,	600},
	{27769,	590},
	{27881,	580},
	{28004,	570},
	{28109,	560},
	{28214,	550},
	{28327,	540},
	{28448,	530},
	{28585,	520},
	{28692,	510},
	{28815,	500},
	{28955,	490},
	{29093,	480},
	{29250,	470},
	{29381,	460},
	{29533,	450},
	{29670,	440},
	{29830,	430},
	{29981,	420},
	{30182,	410},
	{30322,	400},
	{30464,	390},
	{30632,	380},
	{30870,	370},
	{31001,	360},
	{31210,	350},
	{31366,	340},
	{31624,	330},
	{31748,	320},
	{31958,	310},
	{32167,	300},
	{32374,	290},
	{32547,	280},
	{32754,	270},
	{32958,	260},
	{33131,	250},
	{33395,	240},
	{33600,	230},
	{33798,	220},
	{34007,	210},
	{34230,	200},
	{34480,	190},
	{34730,	180},
	{34839,	170},
	{35122,	160},
	{35324,	150},
	{35509,	140},
	{35769,	130},
	{35925,	120},
	{36148,	110},
	{36424,	100},
	{36561,	90},
	{36850,	80},
	{37021,	70},
	{37180,	60},
	{37397,	50},
	{37598,	40},
	{37787,	30},
	{37961,	20},
	{38167,	10},
	{38349,	0},
	{38381,	-10},
	{38466,	-20},
	{38604,	-30},
	{38805,	-40},
	{38949,	-50},
	{39161,	-60},
	{39302,	-70},
	{39490,	-80},
	{39615,	-90},
	{39811,	-100},
	{39918,	-110},
	{40072,	-120},
	{40211,	-130},
	{40322,	-140},
	{40453,	-150},
	{40577,	-160},
	{40696,	-170},
	{40801,	-180},
	{40934,	-190},
	{41024,	-200},
};
#elif defined(CONFIG_SEC_K_PROJECT) || \
	defined(CONFIG_SEC_KACTIVE_PROJECT) || defined(CONFIG_SEC_KSPORTS_PROJECT) || \
	defined(CONFIG_SEC_S_PROJECT)
static struct sec_therm_adc_table temper_table_ap[] = {
	{25954,	900},
	{26005,	890},
	{26052,	880},
	{26105,	870},
	{26151,	860},
	{26207,	850},
	{26253,	840},
	{26302,	830},
	{26354,	820},
	{26405,	810},
	{26454,	800},
	{26503,	790},
	{26554,	780},
	{26602,	770},
	{26657,	760},
	{26691,	750},
	{26757,	740},
	{26823,	730},
	{26889,	720},
	{26955,	710},
	{27020,	700},
	{27081,	690},
	{27142,	680},
	{27203,	670},
	{27264,	660},
	{27327,	650},
	{27442,	640},
	{27557,	630},
	{27672,	620},
	{27787,	610},
	{27902,	600},
	{28004,	590},
	{28106,	580},
	{28208,	570},
	{28310,	560},
	{28415,	550},
	{28608,	540},
	{28801,	530},
	{28995,	520},
	{28944,	510},
	{28893,	500},
	{29148,	490},
	{29347,	480},
	{29546,	470},
	{29746,	460},
	{29911,	450},
	{30076,	440},
	{30242,	430},
	{30490,	420},
	{30738,	410},
	{30986,	400},
	{31101,	390},
	{31216,	380},
	{31331,	370},
	{31446,	360},
	{31561,	350},
	{31768,	340},
	{31975,	330},
	{32182,	320},
	{32389,	310},
	{32596,	300},
	{32962,	290},
	{32974,	280},
	{32986,	270},
	{33744,	260},
	{33971,	250},
	{34187,	240},
	{34403,	230},
	{34620,	220},
	{34836,	210},
	{35052,	200},
	{35261,	190},
	{35470,	180},
	{35679,	170},
	{35888,	160},
	{36098,	150},
	{36317,	140},
	{36537,	130},
	{36756,	120},
	{36976,	110},
	{37195,	100},
	{37413,	90},
	{37630,	80},
	{37848,	70},
	{38065,	60},
	{38282,	50},
	{38458,	40},
	{38635,	30},
	{38811,	20},
	{38987,	10},
	{39163,	0},
	{39317,	-10},
	{39470,	-20},
	{39624,	-30},
	{39777,	-40},
	{39931,	-50},
	{40065,	-60},
	{40199,	-70},
	{40333,	-80},
	{40467,	-90},
	{40601,	-100},
	{40728,	-110},
	{40856,	-120},
	{40983,	-130},
	{41110,	-140},
	{41237,	-150},
	{41307,	-160},
	{41378,	-170},
	{41448,	-180},
	{41518,	-190},
	{41588,	-200},
};
#elif defined(CONFIG_SEC_PATEK_PROJECT)
static struct sec_therm_adc_table temper_table_ap[] = {
	{25943, 900},
	{26002, 890},
	{26061, 880},
	{26121, 870},
	{26181, 860},
	{26242, 850},
	{26277, 840},
	{26313, 830},
	{26348, 820},
	{26384, 810},
	{26420, 800},
	{26467, 790},
	{26514, 780},
	{26562, 770},
	{26609, 760},
	{26657, 750},
	{26728, 740},
	{26800, 730},
	{26872, 720},
	{26944, 710},
	{27016, 700},
	{27092, 690},
	{27168, 680},
	{27244, 670},
	{27320, 660},
	{27396, 650},
	{27499, 640},
	{27602, 630},
	{27705, 620},
	{27808, 610},
	{27911, 600},
	{28058, 590},
	{28205, 580},
	{28352, 570},
	{28499, 560},
	{28647, 550},
	{28826, 540},
	{29005, 530},
	{29185, 520},
	{29364, 510},
	{29544, 500},
	{29631, 490},
	{29718, 480},
	{29805, 470},
	{29892, 460},
	{29979, 450},
	{30179, 440},
	{30381, 430},
	{30583, 420},
	{30785, 410},
	{30989, 400},
	{31112, 390},
	{31236, 380},
	{31359, 370},
	{31483, 360},
	{31607, 350},
	{31804, 340},
	{32002, 330},
	{32199, 320},
	{32397, 310},
	{32595, 300},
	{32783, 290},
	{32971, 280},
	{33159, 270},
	{33347, 260},
	{33536, 250},
	{33747, 240},
	{33958, 230},
	{34170, 220},
	{34381, 210},
	{34593, 200},
	{34803, 190},
	{35014, 180},
	{35224, 170},
	{35435, 160},
	{35646, 150},
	{35859, 140},
	{36072, 130},
	{36285, 120},
	{36498, 110},
	{36712, 100},
	{36906, 90},
	{37101, 80},
	{37296, 70},
	{37491, 60},
	{37686, 50},
	{37815, 40},
	{37945, 30},
	{38074, 20},
	{38204, 10},
	{38334, 0},
	{38506, -10},
	{38678, -20},
	{28850, -30},
	{39022, -40},
	{39194, -50},
	{39342, -60},
	{39490, -70},
	{39638, -80},
	{39786, -90},
	{39935, -100},
	{40072, -110},
	{40209, -120},
	{40347, -130},
	{40484, -140},
	{40622, -150},
	{40730, -160},
	{40838, -170},
	{40946, -180},
	{41054, -190},
	{41163, -200},
};
#elif defined(CONFIG_MACH_CHAGALL_LTE) || defined(CONFIG_MACH_KLIMT_LTE)
static struct sec_therm_adc_table temper_table_ap[] = {
	{25765,  900},
	{25836,  890},
	{25907,  880},
	{25978,  870},
	{26049,  860},
	{26120,  850},
	{26191,  840},
	{26262,  830},
	{26333,  820},
	{26404,  810},
	{26475,  800},
	{26549,  790},
	{26620,  780},
	{26691,  770},
	{26762,  760},
	{26833,  750},
	{26904,  740},
	{26975,  730},
	{27046,  720},
	{27117,  710},
	{27188,	 700},
	{27271,	 690},
	{27355,	 680},
	{27438,	 670},
	{27522,	 660},
	{27605,	 650},
	{27721,	 640},
	{27836,	 630},
	{27952,	 620},
	{28067,	 610},
	{28182,	 600},
	{28296,	 590},
	{28409,	 580},
	{28522,	 570},
	{28635,	 560},
	{28748,	 550},
	{28852,	 540},
	{28955,	 530},
	{29058,	 520},
	{29161,	 510},
	{29290,	 500},
	{29410,	 490},
	{29555,	 480},
	{29700,	 470},
	{29845,	 460},
	{29990,	 450},
	{30188,	 440},
	{30386,	 430},
	{30584,	 420},
	{30782,	 410},
	{30981,	 400},
	{31164,	 390},
	{31347,	 380},
	{31530,	 370},
	{31713,	 360},
	{31896,	 350},
	{32081,	 340},
	{32266,	 330},
	{32450,	 320},
	{32635,	 310},
	{32820,	 300},
	{33047,	 290},
	{33274,	 280},
	{33502,	 270},
	{33729,	 260},
	{33956,	 250},
	{34172,	 240},
	{34388,	 230},
	{34605,	 220},
	{34821,	 210},
	{35037,	 200},
	{35246,	 190},
	{35455,	 180},
	{35664,	 170},
	{35873,	 160},
	{36083,	 150},
	{36302,	 140},
	{36522,	 130},
	{36741,	 120},
	{36961,	 110},
	{37180,	 100},
	{37398,	  90},
	{37615,	  80},
	{37833,	  70},
	{38050,	  60},
	{38267,	  50},
	{38443,	  40},
	{38620,	  30},
	{38796,	  20},
	{38972,	  10},
	{39148,	   0},
	{39302,	 -10},
	{39455,	 -20},
	{39609,	 -30},
	{39762,	 -40},
	{39916,	 -50},
	{40050,  -60},
	{40184,	 -70},
	{40318,	 -80},
	{40452,	 -90},
	{40586,	 -100},
	{40713,	 -110},
	{40841,	 -120},
	{40968,	 -130},
	{41095,	 -140},
	{41222,	 -150},
	{41292,	 -160},
	{41363,	 -170},
	{41433,	 -180},
	{41503,	 -190},
	{41573,	 -200},
};
#else
static struct sec_therm_adc_table temper_table_ap[] = {
	{27188,	 700},
	{27271,	 690},
	{27355,	 680},
	{27438,	 670},
	{27522,	 660},
	{27605,	 650},
	{27721,	 640},
	{27836,	 630},
	{27952,	 620},
	{28067,	 610},
	{28182,	 600},
	{28296,	 590},
	{28409,	 580},
	{28522,	 570},
	{28635,	 560},
	{28748,	 550},
	{28852,	 540},
	{28955,	 530},
	{29058,	 520},
	{29161,	 510},
	{29290,	 500},
	{29410,	 490},
	{29555,	 480},
	{29700,	 470},
	{29845,	 460},
	{29990,	 450},
	{30188,	 440},
	{30386,	 430},
	{30584,	 420},
	{30782,	 410},
	{30981,	 400},
	{31164,	 390},
	{31347,	 380},
	{31530,	 370},
	{31713,	 360},
	{31896,	 350},
	{32081,	 340},
	{32266,	 330},
	{32450,	 320},
	{32635,	 310},
	{32820,	 300},
	{33047,	 290},
	{33274,	 280},
	{33502,	 270},
	{33729,	 260},
	{33956,	 250},
	{34172,	 240},
	{34388,	 230},
	{34605,	 220},
	{34821,	 210},
	{35037,	 200},
	{35246,	 190},
	{35455,	 180},
	{35664,	 170},
	{35873,	 160},
	{36083,	 150},
	{36302,	 140},
	{36522,	 130},
	{36741,	 120},
	{36961,	 110},
	{37180,	 100},
	{37398,	  90},
	{37615,	  80},
	{37833,	  70},
	{38050,	  60},
	{38267,	  50},
	{38443,	  40},
	{38620,	  30},
	{38796,	  20},
	{38972,	  10},
	{39148,	   0},
	{39302,	 -10},
	{39455,	 -20},
	{39609,	 -30},
	{39762,	 -40},
	{39916,	 -50},
	{40050,  -60},
	{40184,	 -70},
	{40318,	 -80},
	{40452,	 -90},
	{40586,	 -100},
	{40713,	 -110},
	{40841,	 -120},
	{40968,	 -130},
	{41095,	 -140},
	{41222,	 -150},
	{41292,	 -160},
	{41363,	 -170},
	{41433,	 -180},
	{41503,	 -190},
	{41573,	 -200},
};
#endif

#if defined(CONFIG_MACH_HLTEDCM) || defined(CONFIG_MACH_HLTEKDI)
static struct sec_therm_adc_table temper_table_flash[] = {
	{26135,  850},
        {26159,  840},
        {26199,  830},
        {26241,  820},
        {26293,  810},
        {26351,  800},
        {26391,  790},
        {26439,  780},
        {26483,  770},
        {26536,  760},
        {26599,  750},
        {26639,  740},
        {26729,  730},
        {26786,  720},
        {26846,  710},
        {26915,  700},
        {26978,  690},
        {27048,  680},
        {27134,  670},
        {27225,  660},
        {27301,  650},
        {27412,  640},
        {27467,  630},
        {27591,  620},
        {27679,  610},
        {27779,  600},
        {27879,  590},
        {27982,  580},
        {28087,  570},
        {28209,  560},
        {28345,  550},
        {28461,  540},
        {28574,  530},
        {28702,  520},
        {28830,  510},
        {28951,  500},
        {29098,  490},
        {29243,  480},
        {29384,  470},
        {29542,  460},
        {29680,  450},
        {29832,  440},
        {29996,  430},
        {30153,  420},
        {30312,  410},
        {30477,  400},
        {30630,  390},
        {30799,  380},
        {30961,  370},
        {31104,  360},
        {31273,  350},
        {31455,  340},
        {31643,  330},
        {31828,  320},
        {32024,  310},
        {32230,  300},
        {32425,  290},
        {32638,  280},
        {32836,  270},
        {33088,  260},
        {33302,  250},
        {33523,  240},
        {33732,  230},
        {33947,  220},
        {34178,  210},
        {34397,  200},
        {34627,  190},
        {34855,  180},
        {35087,  170},
        {35282,  160},
        {35500,  150},
        {35715,  140},
        {35924,  130},
        {36129,  120},
        {36351,  110},
        {36553,  100},
        {36750,  90},
        {36954,  80},
        {37121,  70},
        {37304,  60},
        {37501,  50},
        {37703,  40},
        {37895,  30},
        {38090,  20},
        {38228,  10},
        {38326,  0},
        {38411,  -10},
        {38508,  -20},
        {38683,  -30},
        {38894,  -40},
        {39082,  -50},
        {39242,  -60},
        {39393,  -70},
        {39540,  -80},
        {39706,  -90},
        {39868,  -100},
        {40012,  -110},
        {40167,  -120},
        {40311,  -130},
        {40437,  -140},
        {40565,  -150},
        {40693,  -160},
        {40821,  -170},
        {40941,  -180},
        {41052,  -190},
        {41154,  -200},
};
#endif

static int get_msm8974_siop_level(int temp)
{
	static int prev_temp = 400;
	static int prev_level;
	int level = -1;


#if defined(CONFIG_MACH_HLTEDCM) || defined(CONFIG_MACH_HLTEKDI) || defined(CONFIG_MACH_JS01LTEDCM)
	 /* This is only for JPN JF-DCM model, currently the SIOP is not using this function.
		 However, the JPN vendor(DoCoMo) wants to implement the Camera APP shutdown
		 functionality to avoid over-heat damage. For this, only JPN model gives thermistor value
		 from the driver layer to platform layer. In this routine, the "notify_change_of_temperature()"
		 function gives thermistor value and also SIOP value together. This SIOP value is invalid information
		 and could give an effect to SIOP APP. That is why this enforcing return code is added.
	 */
	 return -1;
#endif

	if (temp > prev_temp) {
		if (temp >= 540)
			level = 4;
		else if (temp >= 530)
			level = 3;
		else if (temp >= 480)
			level = 2;
		else if (temp >= 440)
			level = 1;
		else
			level = 0;
	} else {
		if (temp < 410)
			level = 0;
		else if (temp < 440)
			level = 1;
		else if (temp < 480)
			level = 2;
		else if (temp < 530)
			level = 3;
		else
			level = 4;

		if (level > prev_level)
			level = prev_level;
	}

	prev_temp = temp;

	prev_level = level;

	return level;
}


static struct sec_therm_platform_data sec_therm_pdata = {
	.adc_arr_size	= ARRAY_SIZE(temper_table_ap),
	.adc_table	= temper_table_ap,
	.polling_interval = 30 * 1000, /* msecs */
	.get_siop_level = get_msm8974_siop_level,
#if defined(CONFIG_MACH_HLTEDCM) || defined(CONFIG_MACH_HLTEKDI) || \
	defined(CONFIG_MACH_JS01LTEDCM) || defined(CONFIG_MACH_KLTE_JPN) || \
	defined(CONFIG_MACH_KACTIVELTE_DCM) || defined(CONFIG_MACH_KLIMT_LTE_DCM)
	#if defined(CONFIG_MACH_HLTEDCM) || defined(CONFIG_MACH_HLTEKDI)
	.adc_flash_arr_size = ARRAY_SIZE(temper_table_flash),
	.adc_table_flash = temper_table_flash,
	#endif
	.no_polling	= 0,
#else
	.no_polling	= 1,
#endif
};


struct platform_device sec_device_thermistor = {
	.name = "sec-thermistor",
	.id = -1,
	.dev.platform_data = &sec_therm_pdata,
};

#endif
