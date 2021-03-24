#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "sensor-validate.h"
#include "test_case.h"

TEST_CASE("reports error when soc/current jumps abruptly") 
{

	int idx;
	double value_set11[4] = {0.0,0.54,0.55,0.58};
	double value_set12[5] = {0.10,0.14,0.18,0.22,0.30};
	double value_set13[3] = {0.23,0.29,0.38};
	double value_set14[7] = {0.78,0.79,0.85,0.87,0.88,0.89,0.90};
	double value_set15[2] = {0.0,0.1};
	double value_set16[4] = {0.0,1.1,2.2,3.3};
	double value_set17[5] = {0.0,1.1,2.2,3.3,4.4};
	double value_set18[3] = {0.0,1.1,2.2};
	double value_set19[7] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6};
	double value_set20[2] = {0.0,1.1};
	const test_set_st SOC_test_set[10] = 
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
			},
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
	  for(idx =0; idx < 10 ; idx++)
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




