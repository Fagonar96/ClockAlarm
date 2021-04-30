
module system (
	clk_clk,
	hour_1_export,
	hour_2_export,
	inc_hour_button_export,
	inc_min_button_export,
	confirm_button_export,
	leds_export,
	min_1_export,
	min_2_export,
	reset_reset_n,
	sec_1_export,
	sec_2_export,
	set_mode_button_export);	

	input		clk_clk;
	output	[6:0]	hour_1_export;
	output	[6:0]	hour_2_export;
	input		inc_hour_button_export;
	input		inc_min_button_export;
	input		confirm_button_export;
	output	[9:0]	leds_export;
	output	[6:0]	min_1_export;
	output	[6:0]	min_2_export;
	input		reset_reset_n;
	output	[6:0]	sec_1_export;
	output	[6:0]	sec_2_export;
	input		set_mode_button_export;
endmodule
