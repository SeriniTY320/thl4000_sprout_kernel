#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R		   27000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R		  100000	
#endif
#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0   , 4334},         
	{2   , 4312},         
	{4   , 4290},         
	{6   , 4270},         
	{7   , 4247},         
	{9   , 4218},         
	{11  , 4185},         
	{13  , 4156},         
	{15  , 4129},         
	{17  , 4103},         
	{19  , 4083},         
	{21  , 4065},         
	{22  , 4040},         
	{24  , 4014},         
	{26  , 3992},         
	{28  , 3975},         
	{30  , 3960},         
	{32  , 3946},         
	{34  , 3933},         
	{36  , 3916},         
	{37  , 3902},         
	{39  , 3889},         
	{41  , 3875},         
	{43  , 3864},         
	{45  , 3854},         
	{47  , 3845},         
	{49  , 3836},         
	{50  , 3829},         
	{52  , 3822},         
	{54  , 3816},         
	{56  , 3810},         
	{58  , 3804},         
	{60  , 3799},         
	{62  , 3793},         
	{64 , 3789},
	{65  , 3784},         
	{67  , 3780},         
	{69  , 3777},         
	{71  , 3773},         
	{73  , 3767},         
	{75  , 3762},         
	{77  , 3755},         
	{79  , 3747},         
	{80  , 3736},         
	{82  , 3727},         
	{84  , 3718},         
	{86  , 3712},         
	{88  , 3707},         
	{90  , 3703},         
	{92  , 3695},         
	{93  , 3680},         
	{95  , 3640},         
	{97  , 3565},         
	{98  , 3498},         
	{99  , 3475},         
	{99  , 3462},         
	{99  , 3455},         
	{99  , 3449},         
	{99  , 3446},         
	{99  , 3443},         
	{100 , 3441},          
	{100 , 3440},
	{100 , 3439},
	{100 , 3436},
	{100 , 3434},
	{100 , 3432},
	{100 , 3427},
	{100 , 3400}	      

};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0   , 4323},         
	{2   , 4289},         
	{4   , 4264},         
	{5   , 4243},         
	{7   , 4223},         
	{9   , 4203},         
	{11  , 4184},         
	{12  , 4166},         
	{14  , 4147},         
	{16  , 4129},         
	{18  , 4111},         
	{19  , 4094},         
	{21  , 4079},         
	{23  , 4065},         
	{25  , 4044},         
	{26  , 4022},         
	{28  , 4003},         
	{30  , 3986},         
	{32  , 3972},         
	{33  , 3959},         
	{35  , 3942},         
	{37  , 3927},         
	{39  , 3912},         
	{41  , 3897},         
	{42  , 3883},         
	{44  , 3871},         
	{46  , 3860},         
	{48  , 3850},         
	{49  , 3842},         
	{51  , 3834},         
	{53  , 3827},         
	{55  , 3820},         
	{56  , 3814},         
	{58  , 3809},         
	{60  , 3804},         
	{62  , 3799},         
	{63  , 3794},         
	{65  , 3790},         
	{67  , 3786},         
	{69  , 3782},         
	{70  , 3779},         
	{72  , 3776},         
	{74  , 3773},         
	{76  , 3769},         
	{77  , 3763},         
	{79  , 3756},         
	{81  , 3746},         
	{83  , 3735},         
	{85  , 3722},         
	{86  , 3708},         
	{88 , 3703},
	{90  , 3699},         
	{92  , 3697},         
	{93  , 3694},         
	{95  , 3687},         
	{97  , 3638},         
	{99  , 3539},         
	{100 , 3366},         
	{100 , 3343},
	{100 , 3335},         
	{100 , 3331},          
	{100 , 3328},
	{100 , 3327},
	{100 , 3325},
	{100 , 3324},
	{100 , 3324},
	{100 , 3324},
	{100 , 3322},
	{100 , 3321}      
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0   , 4344},         
	{2   , 4322},         
	{3   , 4301},         
	{5   , 4280},         
	{7   , 4261},         
	{8   , 4241},         
	{10  , 4223},         
	{12  , 4203},         
	{13  , 4185},         
	{15  , 4167},         
	{17  , 4148},         
	{18  , 4130},         
	{20  , 4113},         
	{22  , 4096},         
	{23 , 4078},
	{25  , 4063},         
	{27  , 4047},         
	{28  , 4030},         
	{30  , 4015},         
	{32  , 4001},         
	{33  , 3987},         
	{35  , 3975},         
	{37  , 3962},         
	{38  , 3948},         
	{40  , 3934},         
	{42  , 3919},         
	{43  , 3901},         
	{45  , 3884},         
	{47  , 3870},         
	{49  , 3858},         
	{50  , 3847},         
	{52  , 3838},         
	{54  , 3830},         
	{55  , 3823},         
	{57  , 3816},         
	{59  , 3810},         
	{60  , 3805},         
	{62  , 3800},         
	{64  , 3794},         
	{65  , 3790},         
	{67  , 3785},         
	{69  , 3782},         
	{70  , 3778},         
	{72  , 3775},         
	{74  , 3771},         
	{75  , 3768},         
	{77  , 3763},         
	{79  , 3755},         
	{80  , 3747},         
	{82  , 3740},         
	{84  , 3728},         
	{85  , 3716},         
	{87  , 3701},         
	{89  , 3692},         
	{90  , 3689},         
	{92  , 3688},         
	{94  , 3685},         
	{95  , 3679},         
	{97  , 3632},         
	{99  , 3536},         
	{100 , 3366},          
	{100 , 3292},
	{100 , 3274},
	{100 , 3265},
	{100 , 3262},
	{100 , 3260},
	{100 , 3258},
	{100 , 3258},
	{100 , 3258}       
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0   , 4343},         
	{2   , 4322},         
	{3   , 4302},         
	{5   , 4282},         
	{7   , 4262},         
	{8   , 4243},         
	{10  , 4224},         
	{12  , 4205},         
	{13  , 4186},         
	{15  , 4168},         
	{17  , 4150},         
	{18  , 4132},         
	{20  , 4114},         
	{22  , 4097},         
	{23  , 4080},         
	{25  , 4064},         
	{27  , 4048},         
	{28  , 4032},         
	{30  , 4017},         
	{32  , 4002},         
	{33  , 3988},         
	{35  , 3975},         
	{37  , 3962},         
	{38  , 3949},         
	{40  , 3936},         
	{42  , 3923},         
	{43  , 3905},         
	{45  , 3887},         
	{47  , 3872},         
	{48  , 3858},         
	{50  , 3848},         
	{52  , 3840},         
	{53  , 3831},         
	{55  , 3823},         
	{57  , 3816},         
	{58  , 3810},         
	{60  , 3804},         
	{62  , 3797},         
	{63  , 3792},         
	{65  , 3788},         
	{67  , 3784},         
	{68  , 3779},         
	{70  , 3774},         
	{72  , 3767},         
	{73  , 3757},         
	{75  , 3751},         
	{77  , 3745},         
	{78 , 3739},
	{80 , 3731},
	{81  , 3725},         
	{83  , 3716},         
	{85 , 3703},
	{86  , 3691},         
	{88  , 3675},         
	{90  , 3674},         
	{91  , 3673},         
	{93  , 3670},         
	{95  , 3665},         
	{96  , 3634},         
	{98  , 3556},         
	{100 , 3425},          
	{100 , 3303},
  {100 , 3289},
	{100 , 3280},
	{100 , 3276},
	{100 , 3273},
	{100 , 3270},
	{100 , 3267},
	{100 , 3270} 	       
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{260 , 4334},         
	{260 , 4312},         
	{263 , 4290},         
	{270 , 4270},         
	{270 , 4247},         
	{280 , 4218},         
	{323 , 4185},         
	{365 , 4156},         
	{410 , 4129},         
	{448 , 4103},         
	{483 , 4083},         
	{508 , 4065},         
	{520 , 4040},         
	{530 , 4014},         
	{535 , 3992},         
	{540 , 3975},         
	{538 , 3960},         
	{538 , 3946},         
	{538 , 3933},         
	{530 , 3916},         
	{530 , 3902},         
	{528 , 3889},         
	{528 , 3875},         
	{525 , 3864},         
	{525 , 3854},         
	{523 , 3845},         
	{525 , 3836},         
	{530 , 3829},         
	{530 , 3822},         
	{538 , 3816},         
	{538 , 3810},         
	{538 , 3804},         
	{540 , 3799},         
	{540 , 3793},         
	{543 , 3789},         
	{545 , 3784},         
	{545 , 3780},         
	{550 , 3777},         
	{550 , 3773},         
	{548 , 3767},         
	{548 , 3762},         
	{550 , 3755},         
	{550 , 3747},         
	{545 , 3736},         
	{550 , 3727},         
	{553 , 3718},         
	{565 , 3712},         
	{580 , 3707},         
	{600 , 3703},         
	{628 , 3695},         
	{663 , 3680},         
	{690 , 3640},         
	{730 , 3565},         
	{745 , 3498},         
	{688 , 3475},         
	{658 , 3462},         
	{638 , 3455},         
	{625 , 3449},         
	{620 , 3446},         
	{610 , 3443},         
	{608 , 3441},          
	{603 , 3440},
	{598 , 3439},
	{593 , 3436},
	{588 , 3434},
	{583 , 3432},
	{583 , 3431},
	{570 , 3427},
	{503 , 3400}       
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{278 , 4323},         
	{278 , 4289},         
	{290 , 4264},         
	{303 , 4243},         
	{308 , 4223},         
	{313 , 4203},         
	{315 , 4184},         
	{323 , 4166},         
	{328 , 4147},         
	{330 , 4129},         
	{333 , 4111},         
	{338 , 4094},         
	{343 , 4079},         
	{345 , 4065},         
	{345 , 4044},         
	{348 , 4022},         
	{353 , 4003},         
	{350 , 3986},         
	{348 , 3972},         
	{348 , 3959},         
	{335 , 3942},         
	{330 , 3927},         
	{325 , 3912},         
	{320 , 3897},         
	{318 , 3883},         
	{315 , 3871},         
	{313 , 3860},         
	{313 , 3850},         
	{313 , 3842},         
	{313 , 3834},         
	{313 , 3827},         
	{313 , 3820},         
	{313 , 3814},         
	{313 , 3809},         
	{315 , 3804},         
	{315 , 3799},         
	{315 , 3794},         
	{315 , 3790},         
	{315 , 3786},         
	{313 , 3782},         
	{313 , 3779},         
	{313 , 3776},         
	{313 , 3773},         
	{310 , 3769},         
	{305 , 3763},         
	{305 , 3756},         
	{300 , 3746},         
	{298 , 3735},         
	{295 , 3722},         
	{290 , 3708},         
	{290 , 3703},         
	{290 , 3699},         
	{298 , 3697},         
	{315 , 3694},         
	{345 , 3687},         
	{335 , 3638},         
	{345 , 3539},         
	{418 , 3366},         
	{360 , 3343},         
	{340 , 3335},         
	{328 , 3331},          
	{325 , 3328},
	{318 , 3327},
	{315 , 3325},
	{315 , 3324},
	{313 , 3324},
	{313 , 3324},
	{310 , 3322},
	{305 , 3321}       
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{158 , 4344},         
	{158 , 4322},         
	{158 , 4301},         
	{158 , 4280},         
	{160 , 4261},         
	{160 , 4241},         
	{165 , 4223},         
	{163 , 4203},         
	{168 , 4185},         
	{170 , 4167},         
	{168 , 4148},         
	{170 , 4130},         
	{175 , 4113},         
	{175 , 4096},         
	{173 , 4078},         
	{178 , 4063},         
	{180 , 4047},         
	{180 , 4030},         
	{185 , 4015},         
	{193 , 4001},         
	{193 , 3987},         
	{200 , 3975},         
	{200 , 3962},         
	{203 , 3948},         
	{203 , 3934},         
	{198 , 3919},         
	{185 , 3901},         
	{173 , 3884},         
	{170 , 3870},         
	{165 , 3858},         
	{163 , 3847},         
	{163 , 3838},         
	{163 , 3830},         
	{165 , 3823},         
	{163 , 3816},         
	{168 , 3810},         
	{170 , 3805},         
	{170 , 3800},         
	{170 , 3794},         
	{173 , 3790},         
	{173 , 3785},         
	{173 , 3782},         
	{175 , 3778},         
	{175 , 3775},         
	{175 , 3771},         
	{173 , 3768},         
	{173 , 3763},         
	{165 , 3755},         
	{163 , 3747},         
	{165 , 3740},         
	{163 , 3728},         
	{165 , 3716},         
	{165 , 3701},         
	{163 , 3692},         
	{163 , 3689},         
	{170 , 3688},         
	{178 , 3685},         
	{188 , 3679},         
	{175 , 3632},         
	{193 , 3536},         
	{235 , 3366},          
	{233 , 3292},
	{190 , 3274},
	{165 , 3265},
	{158 , 3262},
	{153 , 3260},
	{150 , 3258},
	{150 , 3258},
	{153 , 3258}       
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{183 , 4343},         
	{183 , 4322},         
	{183 , 4302},         
	{183 , 4282},         
	{180 , 4262},         
	{185 , 4243},         
	{185 , 4224},         
	{185 , 4205},         
	{185 , 4186},         
	{188 , 4168},         
	{190 , 4150},         
	{188 , 4132},         
	{188 , 4114},         
	{188 , 4097},         
	{190 , 4080},         
	{193 , 4064},         
	{195 , 4048},         
	{198 , 4032},         
	{195 , 4017},         
	{198 , 4002},         
	{200 , 3988},         
	{203 , 3975},         
	{208 , 3962},         
	{210 , 3949},         
	{218 , 3936},         
	{220 , 3923},         
	{208 , 3905},         
	{198 , 3887},         
	{193 , 3872},         
	{183 , 3858},         
	{183 , 3848},         
	{188 , 3840},         
	{188 , 3831},         
	{185 , 3823},         
	{188 , 3816},         
	{190 , 3810},         
	{193 , 3804},         
	{190 , 3797},         
	{190 , 3792},         
	{198 , 3788},         
	{203 , 3784},         
	{198 , 3779},         
	{198 , 3774},         
	{198 , 3767},         
	{190 , 3757},         
	{190 , 3751},         
	{188 , 3745},         
	{190 , 3739},         
	{185 , 3731},         
	{190 , 3725},         
	{193 , 3716},         
	{185 , 3703},         
	{190 , 3691},         
	{183 , 3675},         
	{183 , 3674},         
	{195 , 3673},         
	{198 , 3670},         
	{200 , 3665},         
	{200 , 3634},         
	{205 , 3556},         
	{230 , 3425},          
	{263 , 3303},
	{225 , 3289},
	{205 , 3280},
	{190 , 3276},
  {183  , 3273},
	{175 , 3270},
	{173 , 3267},
	{183 , 3270}       
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H
