
module system (
	clk_clk,
	leds_export,
	reset_reset_n,
	set_mode_button_export,
	inc_hour_button_export,
	inc_min_button_export,
	inc_sec_button_export,
	hour_1_export,
	hour_2_export,
	min_1_export,
	min_2_export,
	sec_1_export,
	sec_2_export);	

	input		clk_clk;
	output	[7:0]	leds_export;
	input		reset_reset_n;
	input	[7:0]	set_mode_button_export;
	input	[7:0]	inc_hour_button_export;
	input	[7:0]	inc_min_button_export;
	input	[7:0]	inc_sec_button_export;
	output	[7:0]	hour_1_export;
	output	[7:0]	hour_2_export;
	output	[7:0]	min_1_export;
	output	[7:0]	min_2_export;
	output	[7:0]	sec_1_export;
	output	[7:0]	sec_2_export;
endmodule
