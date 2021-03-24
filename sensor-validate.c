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
	
	if(!isSanityCheckOk(values , numOfValues))//check the null pointer case
	{
		return 0;
	}
	else
	{
		return evaluate_Readings(values ,numOfValues , sensor_type);
	}
	
}/*end of validate_SensorParameterReadings*/


int isSanityCheckOk(double* values,  int numOfValues)
{
	if((values == 0 ) && (numOfValues < 2))
	{
		return 0;
	}
	return 1;
}/*end of isSanityCheckOk*/

int evaluate_Readings(double* readings,  int numOfReadings , sensor_type_en sensor_type)
{
	int i ;
	const sensor_eval_parameter_st sensor_eval_parameter[Max_count_sensor]={{0.05},{0.1}};	
	int lastButOneIndex = numOfReadings - 1;
	for(i = 0; i < lastButOneIndex; i++) 
	{
		if(!isVariationInRange(readings[i], readings[i + 1], sensor_eval_parameter[sensor_type].max_allowed_delta)) 
		{
			return 0;
		}
	}
	
	return 1;
}/*end of evaluate_Readings*/
