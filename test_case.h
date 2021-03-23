/*********************************
	TEST SET FOR POSITIVE TEST
**********************************/
/******SOC Sensor*******/
double value_set1[4] = {0.0,0.04,0.05,0.08};
double value_set2[5] = {0.10,0.14,0.18,0.22,0.24};
double value_set3[3] = {0.23,0.24,0.26};
double value_set4[7] = {0.78,0.79,0.82,0.83,0.86,0.89,0.90};
double value_set5[2] = {0.03,0.04};
/*****Current sensor*****/
double value_set6[4] = {0.0,0.1,0.2,0.3};
double value_set7[5] = {1.1,1.12,1.18,1.25,1.32};
double value_set8[3] = {0.10,0.17,0.18};
double value_set9[7] = {2.0,2.05,2.14,2.18,2.19,2.20,2.27};
double value_set10[2] = {0.0,0.8};
/*************************/
#define MAX_POSITIVE_SET 10

/*********************************/

/*********************************
	TEST SET FOR NEGETIVE TEST
**********************************/

/******SOC Sensor*******/
double value_set11[4] = {0.0,0.54,0.55,0.58};
double value_set12[5] = {0.10,0.14,0.18,0.22,0.30};
double value_set13[3] = {0.23,0.29,0.38};
double value_set14[7] = {0.78,0.79,0.85,0.87,0.88,0.89,0.90};
double value_set15[2] = {0.0,0.1};
/*****Current sensor*****/
double value_set16[4] = {0.0,1.1,2.2,3.3};
double value_set17[5] = {0.0,1.1,2.2,3.3,4.4};
double value_set18[3] = {0.0,1.1,2.2};
double value_set19[7] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6};
double value_set20[2] = {0.0,1.1};
/*************************/
#define MAX_NEGETIVE_SET 10

/*********************************/


typedef struct
{
	double *value_arr;
	int arr_length;
	sensor_type_en sn_type;
}test_set_st;

#define Test(a,b,c)  validate_SensorParameterReadings(a,b,c)


void start_positiveTestCases(void);
void start_negetiveTestCases(void);