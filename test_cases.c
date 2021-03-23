#include "stdio.h"
#include "sensor-validate.h"
#include "test_case.h"
#include "assert.h"
int main()
{
	start_positiveTestCases();
	start_negetiveTestCases();
	return 0;
}

void start_positiveTestCases(void)
{
	const test_set_st positive_test_set[MAX_POSITIVE_SET] = \
	{
		{
/*double *value_arr;		*/			value_set1,
/*int arr_length;			*/			sizeof(value_set1),
/*sensor_type_en sn_type;	*/			SOC_sensor
		},
		{
/*double *value_arr;		*/			value_set2,
/*int arr_length;			*/			sizeof(value_set2),
/*sensor_type_en sn_type;	*/			SOC_sensor
		},
		{
/*double *value_arr;		*/			value_set3,
/*int arr_length;			*/			sizeof(value_set3),
/*sensor_type_en sn_type;	*/			SOC_sensor
		},
		{
/*double *value_arr;		*/			value_set4,
/*int arr_length;			*/			sizeof(value_set4),
/*sensor_type_en sn_type;	*/			SOC_sensor
		},
		{
/*double *value_arr;		*/			value_set5,
/*int arr_length;			*/			sizeof(value_set5),
/*sensor_type_en sn_type;	*/			SOC_sensor
		},
		{
/*double *value_arr;		*/			value_set6,
/*int arr_length;			*/			sizeof(value_set6),
/*sensor_type_en sn_type;	*/			Current_sensor
		},
		{
/*double *value_arr;		*/			value_set7,
/*int arr_length;			*/			sizeof(value_set7),
/*sensor_type_en sn_type;	*/			Current_sensor
		},
		{
/*double *value_arr;		*/			value_set8,
/*int arr_length;			*/			sizeof(value_set8),
/*sensor_type_en sn_type;	*/			Current_sensor
		},
		{
/*double *value_arr;		*/			value_set9,
/*int arr_length;			*/			sizeof(value_set9),
/*sensor_type_en sn_type;	*/			Current_sensor
		},
		{
/*double *value_arr;		*/			value_set10,
/*int arr_length;			*/			sizeof(value_set10),
/*sensor_type_en sn_type;	*/			Current_sensor
		}
	};
	for(int idx = 0 ; idx < MAX_POSITIVE_SET ; idx ++)
	{
		assert(	Test(	positive_test_set[idx].value_arr ,	\
						positive_test_set[idx].arr_length,	\
						positive_test_set[idx].sn_type		\
					)
			  );
	}	
}

void start_negetiveTestCases(void)
{
	const test_set_st negetive_test_set[MAX_NEGETIVE_SET] = \
	{
		{
/*double *value_arr;		*/			value_set11,
/*int arr_length;			*/			sizeof(value_set11),
/*sensor_type_en sn_type;	*/			SOC_sensor
		},
		{
/*double *value_arr;		*/			value_set12,
/*int arr_length;			*/			sizeof(value_set12),
/*sensor_type_en sn_type;	*/			SOC_sensor
		},
		{
/*double *value_arr;		*/			value_set13,
/*int arr_length;			*/			sizeof(value_set13),
/*sensor_type_en sn_type;	*/			SOC_sensor
		},
		{
/*double *value_arr;		*/			value_set14,
/*int arr_length;			*/			sizeof(value_set14),
/*sensor_type_en sn_type;	*/			SOC_sensor
		},
		{
/*double *value_arr;		*/			value_set15,
/*int arr_length;			*/			sizeof(value_set15),
/*sensor_type_en sn_type;	*/			SOC_sensor
		},
		{
/*double *value_arr;		*/			value_set16,
/*int arr_length;			*/			sizeof(value_set16),
/*sensor_type_en sn_type;	*/			Current_sensor
		},
		{
/*double *value_arr;		*/			value_set17,
/*int arr_length;			*/			sizeof(value_set17),
/*sensor_type_en sn_type;	*/			Current_sensor
		},
		{
/*double *value_arr;		*/			value_set18,
/*int arr_length;			*/			sizeof(value_set18),
/*sensor_type_en sn_type;	*/			Current_sensor
		},
		{
/*double *value_arr;		*/			value_set19,
/*int arr_length;			*/			sizeof(value_set19),
/*sensor_type_en sn_type;	*/			Current_sensor
		},
		{
/*double *value_arr;		*/			value_set20,
/*int arr_length;			*/			sizeof(value_set20),
/*sensor_type_en sn_type;	*/			Current_sensor
		}
	};
	for(int idx = 0 ; idx < MAX_NEGETIVE_SET ; idx ++)
	{
		assert(!Test(	negetive_test_set[idx].value_arr ,	\
						negetive_test_set[idx].arr_length,	\
						negetive_test_set[idx].sn_type		\
					)
			  );
	}

	/****Null test**/
	assert(!Test(	0 ,0 , Current_sensor) );
	assert(!Test(	0 ,0 , SOC_sensor) );
}