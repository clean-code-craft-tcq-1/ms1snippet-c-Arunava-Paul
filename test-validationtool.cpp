#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "sensor-validate.h"
#include "test_case.h"

/********Negetive case*************/
TEST_CASE("reports error when soc jumps abruptly") 
{

	int idx;
	double value_set11[4] = {0.0,0.54,0.55,0.58};
	double value_set12[5] = {0.10,0.14,0.18,0.22,0.30};
	double value_set13[3] = {0.23,0.29,0.38};
	double value_set14[7] = {0.78,0.79,0.85,0.87,0.88,0.89,0.90};
	double value_set15[2] = {0.0,0.1};
	const test_set_st SOC_test_set[5] = 
	{
		   {
	/*double *value_arr;		*/			value_set11,
	/*int arr_length;			*/			(sizeof(value_set11)/sizeof(value_set11[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set12,
	/*int arr_length;			*/			(sizeof(value_set12)/sizeof(value_set12[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set13,
	/*int arr_length;			*/			(sizeof(value_set13)/sizeof(value_set13[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set14,
	/*int arr_length;			*/			(sizeof(value_set14)/sizeof(value_set14[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set15,
	/*int arr_length;			*/			(sizeof(value_set15)/sizeof(value_set15[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			}
	};
	  for(idx =0; idx < 5 ; idx++)
	  {
		  REQUIRE(Test(	SOC_test_set[idx].value_arr ,	\
						SOC_test_set[idx].arr_length,	\
						SOC_test_set[idx].sn_type		\
					  ) == 0);
	  }
}

TEST_CASE("reports error when current jumps abruptly") {
  

	int idx;
	double value_set16[4] = {0.0,1.1,2.2,3.3};
	double value_set17[5] = {0.0,1.1,2.2,3.3,4.4};
	double value_set18[3] = {0.0,1.1,2.2};
	double value_set19[7] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6};
	double value_set20[2] = {0.0,1.1};
	const test_set_st SOC_test_set[5] = 
	{
		   {
	/*double *value_arr;		*/			value_set16,
	/*int arr_length;			*/			(sizeof(value_set16)/sizeof(value_set16[0])),
	/*sensor_type_en sn_type;	*/			Current_sensor
			},
			{
	/*double *value_arr;		*/			value_set17,
	/*int arr_length;			*/			(sizeof(value_set17)/sizeof(value_set17[0])),
	/*sensor_type_en sn_type;	*/			Current_sensor
			},
			{
	/*double *value_arr;		*/			value_set18,
	/*int arr_length;			*/			(sizeof(value_set18)/sizeof(value_set18[0])),
	/*sensor_type_en sn_type;	*/			Current_sensor
			},
			{
	/*double *value_arr;		*/			value_set19,
	/*int arr_length;			*/			(sizeof(value_set19)/sizeof(value_set19[0])),
	/*sensor_type_en sn_type;	*/			Current_sensor
			},
			{
	/*double *value_arr;		*/			value_set20,
	/*int arr_length;			*/			(sizeof(value_set20)/sizeof(value_set20[0])),
	/*sensor_type_en sn_type;	*/			Current_sensor
			}
	};
	  for(idx =0; idx < 5 ; idx++)
	  {
		  REQUIRE(Test(	SOC_test_set[idx].value_arr ,	\
						SOC_test_set[idx].arr_length,	\
						SOC_test_set[idx].sn_type		\
					  ) == 0);
	  }
}

TEST_CASE("reports error when passed Null pointer buffer") 
{
	REQUIRE(Test(0 , 0 , SOC_sensor) == 0);
	REQUIRE(Test(0 , 0 , Current_sensor) == 0);
}


/**********************/

/*****Positive cases**********/
TEST_CASE("reports ok when soc jumps within limit") {

	int idx;
	double value_set1[4] = {0.0,0.04,0.05,0.08};
	double value_set2[5] = {0.10,0.14,0.18,0.22,0.24};
	double value_set3[3] = {0.23,0.24,0.26};
	double value_set4[7] = {0.78,0.79,0.82,0.83,0.86,0.89,0.90};
	double value_set5[2] = {0.03,0.04};
	const test_set_st SOC_test_set[5] = 
	{
		   {
	/*double *value_arr;		*/			value_set1,
	/*int arr_length;			*/			(sizeof(value_set1)/sizeof(value_set1[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set2,
	/*int arr_length;			*/			(sizeof(value_set2)/sizeof(value_set2[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set3,
	/*int arr_length;			*/			(sizeof(value_set3)/sizeof(value_set3[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set4,
	/*int arr_length;			*/			(sizeof(value_set4)/sizeof(value_set4[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set5,
	/*int arr_length;			*/			(sizeof(value_set5)/sizeof(value_set5[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			}
	};
	  for(idx =0; idx < 5 ; idx++)
	  {
		  REQUIRE(Test(	SOC_test_set[idx].value_arr ,	\
						SOC_test_set[idx].arr_length,	\
						SOC_test_set[idx].sn_type		\
					  ) == 1);
	  }	
}

TEST_CASE("reports ok when current jumps whitin limit") {
	int idx;
	double value_set6[4] = {0.0,0.1,0.2,0.3};
	double value_set7[5] = {1.1,1.12,1.18,1.25,1.32};
	double value_set8[3] = {0.10,0.17,0.18};
	double value_set9[7] = {2.0,2.05,2.14,2.18,2.19,2.20,2.27};
	double value_set10[2] = {0.0,0.8};
	const test_set_st SOC_test_set[5] = 
	{
		   {
	/*double *value_arr;		*/			value_set6,
	/*int arr_length;			*/			(sizeof(value_set6)/sizeof(value_set6[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set7,
	/*int arr_length;			*/			(sizeof(value_set7)/sizeof(value_set7[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set8,
	/*int arr_length;			*/			(sizeof(value_set8)/sizeof(value_set8[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set9,
	/*int arr_length;			*/			(sizeof(value_set9)/sizeof(value_set9[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			},
			{
	/*double *value_arr;		*/			value_set10,
	/*int arr_length;			*/			(sizeof(value_set10)/sizeof(value_set10[0])),
	/*sensor_type_en sn_type;	*/			SOC_sensor
			}
	};
	  for(idx =0; idx < 5 ; idx++)
	  {
		  REQUIRE(Test(	SOC_test_set[idx].value_arr ,	\
						SOC_test_set[idx].arr_length,	\
						SOC_test_set[idx].sn_type		\
					  ) == 1);
	  }
}




/******************************/

