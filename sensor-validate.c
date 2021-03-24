#include "sensor-validate.h"
#include "stdio.h"
int isVariationInRange(double value, double nextValue, double maxDelta) {
  if(nextValue - value > maxDelta) {
    return 0;
  }
  return 1;
}/*end of isVariationInRange*/


int validate_SensorParameterReadings(double* values,  int numOfValues , sensor_type_en sensor_type)
{
	int i,retVal = 1; /*Set to not ok*/
	const sensor_eval_parameter_st sensor_eval_parameter[Max_count_sensor]={{0.05},{0.1}};	
	if((values != 0 ) && (numOfValues > 1))//check the null pointer case
	{
		int lastButOneIndex = numOfValues - 1;
		for(i = 0; i < lastButOneIndex; i++) 
		{
			if(isVariationInRange(values[i], values[i + 1], sensor_eval_parameter[sensor_type].max_allowed_delta)) 
			{
				retVal = 0;/*Set to ok*/
			}
		}
	}
	return retVal;
}/*end of validate_SensorParameterReadings*/
