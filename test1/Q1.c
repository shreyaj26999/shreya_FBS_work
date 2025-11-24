//Convert time entered in hours,min and sec into total sec.

void main()
{
	int hours = 2, min = 30, sec = 5;
	int total_secs;
	
	total_secs = hours * 60 * 60 + 30 * 60 + sec; // 1 hr = 60 min and 1 min = 60 sec
	printf("The total seconds in 2hrs 30 min and 5 seconds are %d",total_secs);
}